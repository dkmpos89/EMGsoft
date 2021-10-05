#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDirModel>
#include <QTreeView>
#include <QInputDialog>

#include "appsettings.h"
#include "winusers.h"
#include <iostream>
#include "codeeditor.h"
#include "cargadatos.h"
#include "analisismultiples.h"
#include "funcionesgraficas.h"

#include "cproject.h"
#include "cpaciente.h"

///////////
#include <algorithm>    // std::transform
#include <vector>       // std::vector


//globales utiles
int graff = MainWindow::none;
int analize = -1;
OctaveProcess::buttonPressed buttonPressed = OctaveProcess::Unknow;
CodeEditor *logg;
int currentChannel = -1;
int amin = -1;
int bmax = -1;

/********************************************************************************************************
 * @name: formatMessageOutput()
 * @brief: Su funcion es capturar los mensajes de salidas y los copiarlos a un archivo de log del sistema.
 * @return: void
 * *****************************************************************************************************/
void formatMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    (void)context;
    QString filename = "logFile_"+QDateTime::currentDateTime().date().toString().trimmed()+"_.txt";
    QFile logFile(filename);

    if (logFile.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream streamer(&logFile);

        switch (type)
        {
            case QtDebugMsg:
                streamer << QDateTime::currentDateTime().toString() <<"  Debug: " << msg <<  "\n";

                //qDebug(localMsg);
                break;
            case QtWarningMsg:
                streamer << QDateTime::currentDateTime().toString() <<"  Warning: " << msg <<  "\n";
                //qWarning(localMsg);
                break;
            case QtCriticalMsg:
                streamer << QDateTime::currentDateTime().toString() <<"  Critical: " << msg <<  "\n";
                //qCritical(localMsg);
                break;
            case QtFatalMsg:
                streamer << QDateTime::currentDateTime().toString() <<"  Fatal: " << msg <<  "\n";
                //qFatal(localMsg);
                break;
            case QtInfoMsg:
                streamer << QDateTime::currentDateTime().toString() <<"  Info: " << msg <<  "\n";
                //qInfo(localMsg);
                break;
        }
        logg->appendPlainText(QDateTime::currentDateTime().toString()+" :: "+msg);
        logFile.close();
    }
}

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), octaveP( OctaveProcess::getInstance() ){

    ui->setupUi(this);
    logg = ui->codeEditor_Log;

    configuracionesIniciales(); // Aqui van todas las configuraciones que cargan al inicio del software!       

    qInfo()<<endl<<" ========================= [ Inicio: "+QDateTime::currentDateTime().toString()+"] ========================= "<<endl;

    connect(ui->horizontalSlider, SIGNAL(lowerValueChanged(int)), this, SLOT(horzSliderChangedA(int)));
    connect(ui->horizontalSlider, SIGNAL(upperValueChanged(int)), this, SLOT(horzSliderChangedB(int)));
    connect(ui->actionAbout_Qt_creator, SIGNAL(triggered()), qApp, SLOT(aboutQt()));     

    connect( ui->btnSaveImageG1, SIGNAL( clicked() ), this, SLOT( guardarImagenes() ) );
    connect( ui->btnSaveImageG2, SIGNAL( clicked() ), this, SLOT( guardarImagenes() ) );
    connect( ui->btnSaveImageG3, SIGNAL( clicked() ), this, SLOT( guardarImagenes() ) );

    connect( ui->btnSaveDataG2, SIGNAL( clicked() ), this, SLOT( guardarDatosTxt() ) );
    connect( ui->btnSaveDataG3, SIGNAL( clicked() ), this, SLOT( guardarDatosTxt() ) );

    connect(ui->comboChannel,SIGNAL(currentIndexChanged(int)), this, SLOT(on_ButtonPlot_clicked()));

    connect(this, SIGNAL( recalcularGraficosN(QVector<QVector<double> >,int,int,int)), this, SLOT(calcularGraficosNormalizados(QVector<QVector<double> >,int,int,int)));

            //conect radio second graff
    connect( ui->radioRms, SIGNAL( clicked(bool) ), this, SLOT( graffNormalize(bool)) );
    connect( ui->radioEnergy, SIGNAL( clicked(bool) ), this, SLOT( graffNormalize(bool)) );
    connect( ui->radioNorm, SIGNAL( clicked(bool) ), this, SLOT( graffNormalize(bool)) );

    /* se desactiva la pestaña que no funciona --- Cesar deberia arreglar esto */
    //ui->tabTiempoFrec->setTabEnabled(1, false);

}

MainWindow::~MainWindow(){
    //db.close();
    //delete db;
    octaveP->close();
    octaveP->terminate();
    octaveP->kill();
    octaveP->waitForFinished();
    delete ui;
}

/********************************************************************************************************
 * @name: MainWindow::event
 * @brief: Captura dos eventos imprtantes en el sistema:
 *                  1: El resize para ajustar las ventas de los graficos 1,2 y 3.
 *                  2: El close para informar si se esta saliendo sin guardar los cambios actuales.
 * @return: bool
 * *****************************************************************************************************/
bool MainWindow::event(QEvent *event)
{
    if (event->type() == QEvent::WindowStateChange || event->type() == QEvent::Resize ) {
        if(!dock1->isFloating())
            updateDock(dock1, false, 1, ui->ContenedorGrafico1->geometry().width(), ui->ContenedorGrafico1->geometry().height());
        if(!dock2->isFloating())
            updateDock(dock2, false, 2, ui->ContenedorGrafico2->geometry().width(), ui->ContenedorGrafico2->geometry().height());
        if(!dock3->isFloating())
            updateDock(dock3, false, 3, ui->ContenedorGrafico3->geometry().width(), ui->ContenedorGrafico3->geometry().height());
       return true;
    }
    if(event->type() == QEvent::Close){
        if(Historial->size()>1)
        {
            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Cerrando programa...", tr("Existen %1 cambios que no han sido guardaos!\nDesea cerrar de todas formas?").arg(QString::number(Historial->size()-1)), QMessageBox::Yes|QMessageBox::No);
            if (reply == QMessageBox::Yes)
            {
                // restaurar original
                on_actionRedoOriginal_triggered();
                QApplication::quit();
            } else {
                event->ignore();
                return false;
            }
        }
    }
    return QWidget::event(event);
}

/********************************************************************************************************
 * @name: configuracionesIniciales()
 * @brief: 1: Crea los interfaces para los Filtros, ConfiguracionesGlobales, los dockWidget de los graficos.
 *         2: Crea la variable global para el Historial de cambios en la señal actual.
 *         3: Configura parametros iniciales de algunos elemtos de la UI
 * @return: void
 * *****************************************************************************************************/
void MainWindow::configuracionesIniciales(){

    // Se confura que las salidas del qdebug sean a la consola del programa
    qInstallMessageHandler(formatMessageOutput);

    ConfigFiltros = new filterSettings(this);
    Historial = new QList<QString>();
    ui->tabNYC->setEnabled(false);                      // Se desactiva la pestaña de comentarios al inicio del programa.
    ConfigGlobales = new appSettings(this);             // Se crea una variable donde se guardaran las configuaciones de todos los métodos.
    ConfigGlobales->setOctave(octaveP);
    ConfigGlobales->setVisible(false);                  // Se oculta el panel.

    createDockWindows();                                // Esta funcion crea los QdockWidgets de los 3 graficos principales.
    lineasGraficoPrincipal(50000, 1000);                // Aqui se agregan y guardan las lineas delimitadoras del rango en el grafico principal.
    SetRangoMaximo(0,50000/1000, ui->horizontalSlider, ui->spinBoxInicio, ui->spinBoxFin); //set rango del slider y los spinbox.¿¿¿¿__????

    ui->horizontalSlider->setUpperPosition(ui->horizontalSlider->maximum()); // Se setea en el maximo el slider para poder controlar el rango desde ambos lados.
    ui->horizontalSlider->setHandleMovementMode(QxtSpanSlider::NoOverlapping); // Con esto las lineas no se pueden superponer.

    //Creacion de los script de octave dentro de la carpeta del software
    crearScripts("menuOctave.m");
    crearScripts("OctaveFourier.m");
    crearScripts("OctaveFiltros.m");
    crearScripts("OctaveGabor.m");
    crearScripts("OctaveSpectrogram.m");
    //nuevo script para señales normalizadas
    crearScripts("normSignal.m");
    crearScripts("OctaveStatistics.m");

    //Ajustando el header de la tabla de datos
    QTableWidget* myTable = ui->tabla_deDatos;
    QHeaderView* header = myTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
}

/********************************************************************************************************
 * @name: createDockWindows()
 * @brief: 1: Crea los dockWidget de los graficos y setea sus caracteristicas principales.
              Ej: la posicion, tamaño, contenedor y los connect para su ajuste automatico.

 * @return: void
 * *****************************************************************************************************/
void MainWindow::createDockWindows()
{
    //Dock del Grafico principal
    QRect rect;
    QWidget *cont;

    //Dock del Grafico 1 - Principal
    rect = ui->grafico1->geometry();
    cont = ui->ContenedorGrafico1;
    dock1 = new QDockWidget("Señal Temporal", ui->ContenedorGrafico1);
    dock1->setGeometry(rect.x(),rect.y(), 780, 240);
    connect(dock1, &QDockWidget::topLevelChanged, [=](const bool Value ) { this->updateDock(dock1, Value, 1, cont->geometry().width(), cont->geometry().height());  } );
    dock1->setWidget(ui->grafico1);
    ui->menuVer->addAction(dock1->toggleViewAction());    

    //Dock del Grafico 2
    rect = ui->grafico2->geometry();
    cont = ui->ContenedorGrafico2;
    dock2 = new QDockWidget("Grafico 2", ui->ContenedorGrafico2);
    dock2->setGeometry(rect.x(),rect.y(), 400, 250);
    connect(dock2, &QDockWidget::topLevelChanged, [=](const bool Value ) { this->updateDock(dock2, Value, 2, cont->geometry().width(), cont->geometry().height());  } );
    dock2->setMaximumSize(QSize(16777215,16777215));
    dock2->setWidget(ui->grafico2);
    ui->menuVer->addAction(dock2->toggleViewAction());

    //Dock del Grafico 3
    rect = ui->grafico3->geometry();
    cont = ui->ContenedorGrafico3;
    dock3 = new QDockWidget("Grafico 3", ui->ContenedorGrafico3);
    dock3->setGeometry(rect.x(),rect.y(), 400, 250);
    connect(dock3, &QDockWidget::topLevelChanged, [=](const bool Value ) { this->updateDock(dock3, Value, 3, cont->geometry().width(), cont->geometry().height());  } );
    dock3->setMaximumSize(QSize(16777215,16777215));
    dock3->setWidget(ui->grafico3);
    ui->menuVer->addAction(dock3->toggleViewAction());

    //Dock del Panel de Estados.
    dockIndicadores *PanelIndicadores = new dockIndicadores(this);
    PanelIndicadores->setGeometry(this->geometry().width()/2 -100, 45, 210, 40);
    PanelIndicadores->setObjectName("Indicadores de Estado");
    PanelIndicadores->setFloating(true);
    PanelIndicadores->setOctave(octaveP); //Le pasamos el proceso de octave al panel de indicadores

    ui->menuVer->addAction(PanelIndicadores->toggleViewAction());
    //PanelIndicadores->hide();
    connect(PanelIndicadores, SIGNAL(clickConfiguracion()),this, SLOT(on_actionParametros_Generales_triggered()));

    // se agregan al menu "ver" las tablas y graficos creadas en dock widgets
    ui->menuVer->addAction(ui->dockTablaEstadisticas->toggleViewAction());
    ui->menuVer->addAction(ui->dockGraficosNorm->toggleViewAction());

}

/********************************************************************************************************
 * @name: calcularEnOctave()
 * @brief: Recibe una variable 'analisis' y un rango a-b para construir el comando correspondiente.
 *         Segun sea el caso debe discriminarse entre los multiples scripts de octave y crear la variable
 *         cmd = octave('','','').... para luego enviarla al proceso octave y esperar por los resultados.
 * @return: void
 * *****************************************************************************************************/
void MainWindow::calcularEnOctave(int analisis, int a, int b){

    octaveP = OctaveProcess::getInstance();
    connect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));

    QApplication::setOverrideCursor( Qt::WaitCursor ); // Cursor de carga y espera
    octaveP->setState(false);                       // Se pone el cerrojo al resource

    analize = analisis;                             // El analisis que viene desde el boton que se presiona.. Fourier, gabor, filtro, etc.
    amin=ui->horizontalSlider->lowerValue();         // Rango menor del slider
    bmax=ui->horizontalSlider->upperValue();         // Rango mayor del slider
    currentChannel = ui->comboChannel->currentIndex()+1;

    QStringList parametros;
    QString cmd;
    QString sep = signalPrincipal->getNumSeparador();
    QString path = signalPrincipal->getPath();
    QString lineaInicio = signalPrincipal->getLeerDesde();
    QString numCanales = signalPrincipal->getCanales();
    QString Fs = signalPrincipal->getFs();
    QString canalActual = ui->comboChannel->currentText();

    // En este bloque se crea la cadena cmd="" dependiendo del analisis q se quiera hacer y se obtienen los parametros desde la interfaz de Configuraciones.
    switch (analisis) {
        case 0:
            cmd = "OctaveFourier('"+path+"','"+sep+"','"+lineaInicio+"','"+numCanales+"','"+Fs+"','"+QString::number(a)+"','"+QString::number(b)+"','"+canalActual+"', '0');\n";
            break;
        case 1:
            cmd = "OctaveFourier('"+path+"','"+sep+"','"+lineaInicio+"','"+numCanales+"','"+Fs+"','"+QString::number(a)+"','"+QString::number(b)+"','"+canalActual+"', '1');\n";
            break;
        case 2:
            parametros = ConfigGlobales->getParametrosGabor();
            cmd = "OctaveGabor('"+path+"','"+sep+"','"+lineaInicio+"','"+numCanales+"','"+Fs+"','"+QString::number(a)+"','"+QString::number(b)+"','"+canalActual+"','"+parametros[0]+"','"+parametros[1]+"','"+parametros[2]+"','"+parametros[3]+"');\n";
            break;
        case 3:
            // Aun no está implementado //
            cmd = "OctaveWavelets('"+path+"');\n";
            break;
        case 4:
            parametros = ConfigGlobales->getParametrosSgram();
            cmd = "OctaveSpectrogram('"+path+"','"+sep+"','"+lineaInicio+"','"+numCanales+"','"+Fs+"','"+QString::number(a)+"','"+QString::number(b)+"','"+canalActual+"','"+parametros[0]+"','"+parametros[1]+"','"+parametros[2]+"');\n";
            break;
        case 5:
            cmd = "menuOctave('"+path+"','"+sep+"','"+lineaInicio+"','"+numCanales+"','"+Fs+"','"+QString::number(a)+"','"+QString::number(b)+"','"+canalActual+"','histf');\n";
            break;
        case 6:
            cmd = "menuOctave('"+path+"','"+sep+"','"+lineaInicio+"','"+numCanales+"','"+Fs+"','"+QString::number(a)+"','"+QString::number(b)+"','"+canalActual+"','histc');\n";
            break;
        case 7:
            parametros = ConfigGlobales->getParametrosMovingRMS();
            cmd = "menuOctave('"+path+"','"+sep+"','"+lineaInicio+"','"+numCanales+"','"+Fs+"','"+QString::number(a)+"','"+QString::number(b)+"','"+canalActual+"','movingrms','"+parametros[0]+"','"+parametros[1]+"');\n";
            break;
        case 8:
            //cmd = "normSignal('"+path+"','"+sep+"','"+lineaInicio+"','"+canalActual+"');\n";
            parametros = ConfigGlobales->getParametrosMeanFrequency();
            cmd = "menuOctave('"+path+"','"+sep+"','"+lineaInicio+"','"+numCanales+"','"+Fs+"','"+QString::number(a)+"','"+QString::number(b)+"','"+canalActual+"','meanfreq','"+parametros[0]+"','"+parametros[1]+"');\n";
            break;
        default:
            break;
    }

    qDebug()<<"[F: calcularEnOctave()] Comando enviado a Octave:"<<cmd<<endl;
    octaveP->writeCmd( cmd );

}

/********************************************************************************************************
 * @name: graficarSpectrogram()
 * @brief: Grafica los datos del espectrograma tomando en cuenta que los dos ultimos valores del vector de
 *         datos corresponden a las dimensiones de la matriz de salida de octave.
 * @return: bool
 * *****************************************************************************************************/
bool MainWindow::graficarSpectrogram(QVector<QVector<double>> s, QCustomPlot *grafico, int a, int b){

    restaurarGrafico(grafico);
    double fs = signalPrincipal->getFs().toDouble()*1000;
    double aa = a/fs;
    double bb = b/fs;

    QCPColorMap *QCCM;
    QCPColorScale *colorScale;
    QCPMarginGroup *marginGroup;
    grafico->addGraph();
    grafico->yAxis->setPadding(5);
    grafico->xAxis->setPadding(5);
    int tam=0,filas=0,col=0,z=0;

    tam = s.at(1).size();
    col = s.at(1).at(tam-2);
    filas = s.at(1).at(tam-1);


    qDebug()<<"[F: graficarSpectrogram()] Graficando ColorMap (Spectrogram) : columnas="<<col<<" ; filas="<<filas<<endl;

    grafico->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom);
    grafico->xAxis->setLabel("Time (s)");
    grafico->yAxis->setLabel("Frequency (Hz)");
    QCCM = new QCPColorMap(grafico->xAxis, grafico->yAxis);
    grafico->addPlottable(QCCM);

    //Values in the x and y direction
    QCCM->data()->setKeyRange(QCPRange(aa, bb));
    QCCM->data()->setValueRange(QCPRange(0, signalPrincipal->getFs().toDouble()*500));

    //there will be x elements in each direction.
    QCCM->data()->setKeySize(filas);
    QCCM->data()->setValueSize(col);
    QCCM->setInterpolate(true);

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < col; ++j) {
            QCCM->data()->setCell(i, j, s.at(1).at(z));
            z++;
        }
    }

    colorScale = new QCPColorScale(grafico);
    grafico->plotLayout()->addElement(0, 1, colorScale); // add it to the right of the main axis rect
    colorScale->setType(QCPAxis::atRight); // scale shall be vertical bar with tick/axis labels right (actually atRight is already the default)

    QCCM->setColorScale(colorScale); // associate the color map with the color scale
    QCCM->setGradient(QCPColorGradient::gpJet); // set the color gradient of the color map to one of the presets:
    QCCM->gradient().setColorInterpolation(QCPColorGradient::ciRGB);
    QCCM->rescaleDataRange(true);

    // make sure the axis rect and color scale synchronize their bottom and top margins (so they line up):
    marginGroup = new QCPMarginGroup(grafico);
    grafico->axisRect()->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);
    colorScale->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);

    qDebug()<<"tam: "<<tam;
    qDebug()<<"columnas: "<<col;
    qDebug()<<"filas: "<<filas;

    grafico->rescaleAxes();
    grafico->replot();

    return true;
}



/********************************************************************************************************
 * @name: graficarWavelet()
 * @brief: Grafica los datos del espectrograma tomando en cuenta que los dos ultimos valores del vector de
 *         datos corresponden a las dimensiones de la matriz de salida de octave.
 * @return: bool
 * *****************************************************************************************************/
bool MainWindow::graficarWavelet(QVector<QVector<double>> s, QCustomPlot *grafico, int a, int b){

    restaurarGrafico(grafico);
    double fs = signalPrincipal->getFs().toDouble()*1000;
    double aa = a/fs;
    double bb = b/fs;

    QCPColorMap *QCCM;
    QCPColorScale *colorScale;
    QCPMarginGroup *marginGroup;
    grafico->addGraph();
    grafico->yAxis->setPadding(5);
    grafico->xAxis->setPadding(5);
    int tam=0,filas=0,col=0,z=0;

    tam = s.at(1).size();
    col = s.at(1).at(tam-2);
    filas = s.at(1).at(tam-1);


    qDebug()<<"[F: graficarSpectrogram()] Graficando ColorMap (Spectrogram) : columnas="<<col<<" ; filas="<<filas<<endl;

    grafico->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom);
    grafico->xAxis->setLabel("Time (s)");
    grafico->yAxis->setLabel("Frequency (Hz)");
    QCCM = new QCPColorMap(grafico->xAxis, grafico->yAxis);
    grafico->addPlottable(QCCM);

    //Values in the x and y direction
    QCCM->data()->setKeyRange(QCPRange(aa, bb));
    QCCM->data()->setValueRange(QCPRange(0, signalPrincipal->getFs().toDouble()*500));

    //there will be x elements in each direction.
    QCCM->data()->setKeySize(filas);
    QCCM->data()->setValueSize(col);
    QCCM->setInterpolate(true);

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < col; ++j) {
            QCCM->data()->setCell(i, j, s.at(1).at(z));
            z++;
        }
    }

    colorScale = new QCPColorScale(grafico);
    grafico->plotLayout()->addElement(0, 1, colorScale); // add it to the right of the main axis rect
    colorScale->setType(QCPAxis::atRight); // scale shall be vertical bar with tick/axis labels right (actually atRight is already the default)

    QCCM->setColorScale(colorScale); // associate the color map with the color scale
    QCCM->setGradient(QCPColorGradient::gpJet); // set the color gradient of the color map to one of the presets:
    QCCM->gradient().setColorInterpolation(QCPColorGradient::ciRGB);
    QCCM->rescaleDataRange(true);

    // make sure the axis rect and color scale synchronize their bottom and top margins (so they line up):
    marginGroup = new QCPMarginGroup(grafico);
    grafico->axisRect()->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);
    colorScale->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);

    qDebug()<<"tam: "<<tam;
    qDebug()<<"columnas: "<<col;
    qDebug()<<"filas: "<<filas;

    grafico->rescaleAxes();
    grafico->replot();

    return true;
}

/********************************************************************************************************
 * @name: graficarGabor()
 * @brief: Grafica los datos de la transformada de gabor tomando en cuenta que los dos ultimos valores
 *         del vector de datos corresponden a las dimensiones de la matriz de salida de octave.
 * @return: bool
 * *****************************************************************************************************/
bool MainWindow::graficarGabor(QVector<QVector<double> > s, QCustomPlot *grafico, int a, int b)
{
    restaurarGrafico(grafico);
    double fs = signalPrincipal->getFs().toDouble()*1000;
    double aa = a/fs;
    double bb = b/fs;

    QCPColorMap *QCCM;
    QCPColorScale *colorScale;
    QCPMarginGroup *marginGroup;
    grafico->addGraph();
    grafico->yAxis->setPadding(5);
    grafico->xAxis->setPadding(5);
    int tam=0,filas=0,col=0,z=0;

    tam = s.at(1).size();
    col = s.at(1).at(tam-2);
    filas = s.at(1).at(tam-1);


    qDebug()<<"[F: graficarGabor()] Graficando Transformada de Gabor : columnas="<<col<<" ; filas="<<filas<<endl;

    grafico->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom);
    grafico->xAxis->setLabel("Time (s)");
    grafico->yAxis->setLabel("Frequency (Hz)");
    QCCM = new QCPColorMap(grafico->xAxis, grafico->yAxis);

    grafico->addPlottable(QCCM);

    //Values in the x and y direction
    QCCM->data()->setKeyRange(QCPRange(aa, bb));
    QCCM->data()->setValueRange(QCPRange(0, signalPrincipal->getFs().toDouble()*500));

    //there will be x elements in each direction.
    QCCM->data()->setKeySize(filas);
    QCCM->data()->setValueSize(col);
    QCCM->setInterpolate(true);

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < col; ++j) {
            QCCM->data()->setCell(i, j, s.at(1).at(z));
            z++;
        }
    }

    colorScale = new QCPColorScale(grafico);
    grafico->plotLayout()->addElement(0, 1, colorScale); // add it to the right of the main axis rect
    colorScale->setType(QCPAxis::atRight); // scale shall be vertical bar with tick/axis labels right (actually atRight is already the default)

    QCCM->setColorScale(colorScale); // associate the color map with the color scale
    QCCM->setGradient(QCPColorGradient::gpJet); // set the color gradient of the color map to one of the presets:
    QCCM->gradient().setColorInterpolation(QCPColorGradient::ciRGB);
    QCCM->rescaleDataRange(true);

    // make sure the axis rect and color scale synchronize their bottom and top margins (so they line up):
    marginGroup = new QCPMarginGroup(grafico);
    grafico->axisRect()->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);
    colorScale->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);

    qDebug()<<"tam: "<<tam;
    qDebug()<<"columnas: "<<col;
    qDebug()<<"filas: "<<filas;

    grafico->rescaleAxes();
    grafico->replot();

    return true;
}

/********************************************************************************************************
 * @name: graficarFourier()
 * @brief: Grafica los datos de la transformada de fourier y discrimina que tipo de grafico se debe mostrar.
 * @return: void
 * *****************************************************************************************************/
void MainWindow::graficarFourier(QVector<QVector<double>> s, QCustomPlot *grafico, int a, int b){
    (void) a;
    (void) b;
    qDebug()<<"[F: graficarFourier()] Graficando Transformada de Fourier."<<s.at(1).size()<<endl;

    QStringList parametros;
    restaurarGrafico(grafico);       

    grafico->addGraph();    
    grafico->yAxis->setPadding(10);
    grafico->xAxis->setPadding(10);
    grafico->xAxis->setLabel("Frequency (Hz)");
    grafico->yAxis->setLabel("Amplitude (V)");
    grafico->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

    parametros = ConfigGlobales->getParametrosFourier();
    if (parametros[0]=="fourier")
    {
        if(parametros[1]=="impulse"){
            grafico->graph(0)->setData(s.at(0), s.at(1));
            grafico->graph(0)->setPen(QPen(Qt::blue));
            //grafico->graph(0)->setLineStyle(QCPGraph::lsImpulse);
            //grafico->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle,Qt::blue,Qt::white,3));
        }
        else{
            dibujarCurvaFrecuenciasMedia(parametros, s, grafico);
        }
    }
    else if(parametros[0]=="histograma"){
        dibujarHistograma();
    }


    grafico->rescaleAxes();
    grafico->replot();

}

void MainWindow::graficarHistograma(QVector<QVector<double>> s, QCustomPlot *grafico){

    qDebug()<<"[F: graficarHistograma()] Graficando el Histograma de Frecuencias."<<endl;
    restaurarGrafico(grafico);
    int tam = s.at(1).size();
    double max = s.at(1).at(tam-1);
    double ancho = s.at(1).at(tam-3)/max;

    QCPBars *bars = new QCPBars(grafico->xAxis, grafico->yAxis);
    bars->setWidth(ancho);
    grafico->addPlottable(bars);

    // set names and colors:
    QPen pen;
    bars->setName("Frecuencia de aparición");
    pen.setColor(QColor(1, 92, 191));
    bars->setPen(pen);
    bars->setBrush(QColor(1, 92, 191, 50));

    // prepare y axis:
    grafico->yAxis->setPadding(10);
    grafico->xAxis->setPadding(10);
    grafico->yAxis->setLabel("Frequency");
    grafico->xAxis->setLabel("Amplitude");
    //grafico->yAxis->grid()->setSubGridVisible(true);

    // Add data:
    bars->setData(s.at(1).mid(max,tam-1), s.at(1).mid(0,max-1));

    // setup legend:
    grafico->legend->setVisible(true);
    grafico->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignRight);
    grafico->legend->setBrush(QColor(255, 255, 255, 200));

    grafico->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    grafico->rescaleAxes();
    grafico->replot();

}

void MainWindow::graficarPrincipal(QCustomPlot *grafico,QVector<QVector<double> > senal, int canal,int tipo, int a,int b){

    ui->grafico1->addGraph();

    switch (tipo){

        case plot:

                qDebug()<<"[F: graficarPrincipal()] Graficando serie Temporal (señal principal)."<<endl;
                grafico->graph(0)->setData(senal.at(0).mid(a,b),senal.at(canal).mid(a,b));
                grafico->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom|QCP::iSelectItems);

                //calcularGraficosNormalizados(senal,canal,a,b);
                break;

        default:
                qDebug()<<"[F: graficarPrincipal()] Error en el tipo de grafico."<<endl;

    }

    grafico->rescaleAxes();
    grafico->replot();

}

void MainWindow::graficarMovingRMS(QVector<double> s, QVector<double> t, QCustomPlot *grafico, int a, int b)
{
    qInfo()<<"[MovingRms] Graficando el RMS en el tiempo."<<endl;
    restaurarGrafico(grafico);
    grafico->addGraph();
    grafico->graph(0)->setData(t.mid(a,b),s.mid(a,b));
    grafico->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom);

    grafico->rescaleAxes();
    grafico->replot();
}

void MainWindow::graficarMeanFrequency(QVector<double> result, double fs, int a, int b, QString tipo, QCustomPlot *graffico)
{
    //QCustomPlot *graffico = new QCustomPlot();
    restaurarGrafico(graffico);

    graffico->xAxis->setLabel("Time (s)");
    graffico->yAxis->setLabel("Frequency (Hz)");
    if(tipo=="colormap")
    {
        QCPColorMap *QCCM = new QCPColorMap(graffico->xAxis, graffico->yAxis);
        graffico->addPlottable(QCCM);

        //Values in the x and y direction
        double aa = a/(fs*1000);
        double bb = b/(fs*1000);
        QCCM->data()->setKeyRange(QCPRange(aa, bb));
        QCCM->data()->setValueRange(QCPRange(0, fs*500));

        qInfo()<<"[MeanFrequency_AM()] Graficando el la frecuencia media en el tiempo."<<endl;
        QCPCurve *QCC = new QCPCurve(graffico->xAxis, graffico->yAxis);
        QCC->setData(result.mid(0,result.size()/2),result.mid(result.size()/2,-1));
        graffico->addPlottable(QCC);
    }else{
        graffico->addGraph();
        graffico->graph(0)->setData(result.mid(0,result.size()/2),result.mid(result.size()/2,-1));
        graffico->yAxis->setRange(0,fs*500);
        graffico->graph(0)->setPen(QPen(QColor(0, 102, 204)));
        graffico->graph(0)->setBrush(QBrush(QColor(204, 255, 255)));
        graffico->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 1));
        graffico->graph(0)->setLineStyle(QCPGraph::lsLine);
    }
    graffico->rescaleAxes();
    graffico->replot();

}
/********************************************************************************************************
 * @name: restaurarGrafico()
 * @brief: Recibe un grafico 'QCustomplot' y elimina todos los residuos de graficos anteriores.
 * @return: void
 * *****************************************************************************************************/
void MainWindow::restaurarGrafico(QCustomPlot *grafico){
    bool colColor = grafico->plotLayout()->hasElement(0,1);
    if(colColor) {
        grafico->plotLayout()->remove(grafico->plotLayout()->element(0,1));
        grafico->plotLayout()->simplify();
    }

    grafico->legend->clear();
    grafico->legend->setVisible(false);

    grafico->clearGraphs();
    grafico->clearPlottables();

    grafico->xAxis->setLabel("");
    grafico->yAxis->setLabel("");
    grafico->rescaleAxes();
    grafico->replot();

}

/********************************************************************************************************
 * @name: dibujarCurvaFrecuenciasMedia()
 * @brief: En el caso que se pida la transformada de fourier simulando una linea de frecuncias medias
 *         esta funcion puede ajustar las frecuencias calculando un promedio de un rango determinado
 *         en las configuraciones globales.
 * @return: void
 * *****************************************************************************************************/
void MainWindow::dibujarCurvaFrecuenciasMedia(QStringList parametros, QVector<QVector<double>> s, QCustomPlot *grafico){

    QString n = parametros[2];          // Tamaño del ancho de la ventana a considerar para el calculo de Fm.
    QVector<double> ejex;               // vector donde se guardara el eje de resultado.
    double suma=0, gan=0, val=0;
    int cont=0, num=n.toInt();          // n = ancho de la ventana, numero de puntos a sumar .

    if(num>s.at(1).size()) num=s.at(1).size();  // si el tamaño de la venta sobrepasa el maximo, éste se setea en el limite que es igual al size.
    ejex << 0;

    for (int var = 0; var < s.at(1).size(); ++var) {
        if(cont<num){
            suma=suma+s[1].at(var);
        }
        else{
            val = ejex.last();
            gan = ((suma/(double)num)-val)/num;

            for (int i = 0; i < num; ++i) {
                val+=gan;
                ejex << val;
            }
            ejex << (suma/num);
            suma=0;
            cont=0;
            val=0;
            gan=0;
        }
        cont++;
    }


    grafico->graph(0)->setPen(QPen(QColor(0, 102, 204)));
    grafico->graph(0)->setBrush(QBrush(QColor(204, 255, 255)));
    grafico->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 1));
    grafico->graph(0)->setName("Grafico de Fourier - Frecuencias Medias");
    grafico->graph(0)->setData(s.at(0),ejex);
    grafico->graph(0)->setLineStyle(QCPGraph::lsLine);        
}

void MainWindow::dibujarHistograma(){
    qDebug() << "\nAquí se grafica el histograma de frecuencias!"<<endl;
}

void MainWindow::habilitarCampos(bool b)
{

    ui->ButtonReplot->setEnabled(b);
    ui->comboChannel->setEnabled(b);
    ui->ButtonPlot->setEnabled(b);
    ui->horizontalSlider->setEnabled(b);
    ui->toolBoxGrafico2->setEnabled(b);
    ui->toolBoxGrafico3->setEnabled(b);
    ui->btnCloseG1->setEnabled(b);
    ui->btnSaveImageG1->setEnabled(b);
    ui->btnExportarG1->setEnabled(b);
    ui->horizontalSlider->setEnabled(b);
    ui->btnCalcularDatos->setEnabled(b);

    // Limpiar el Panel de normalizacion de la señal
    ui->radioRms->setChecked(false);
    ui->radioEnergy->setChecked(false);
    ui->radioNorm->setChecked(false);
}

/* Esta funcion se llama cada vez que se presiona el boton cerrar señal y el cerrar todo*/
void MainWindow::limpiarVariables()
{
    // Limpia todas las variables asignadas en los calculos hechos.
    free(signalPrincipal);
    free(signalGrafico2);
    free(signalGrafico3);

    signalPrincipal = nullptr;
    signalGrafico2 = nullptr;
    signalGrafico3 = nullptr;

    ui->graficoNorm->clearGraphs();
}

/********************************************************************************************************
 * @name: copiarDatosG2G3()
 * @brief: Copia todos los datos de la señal original 'signal' a otras dos variables que corresponden a los
 *         graficos 2 y 3 para asi poder manipular los datos de los resultados de las transformadas sin cambiar
 *         la variable original.
 * @return: void
 * *****************************************************************************************************/
void MainWindow::copiarDatosG2G3(){
    signalGrafico2 = new DelSignal();
    signalGrafico2->setNombre(signalPrincipal->getNombre());
    signalGrafico2->setCanales(signalPrincipal->getCanales());
    signalGrafico2->setFs(signalPrincipal->getFs());
    signalGrafico2->setLeerDesde(signalPrincipal->getLeerDesde());
    signalGrafico2->setPath(signalPrincipal->getPath());
    signalGrafico2->setSeparador(signalPrincipal->getSeparador());
    signalGrafico2->readSignal = signalPrincipal->readSignal;

    signalGrafico3 = new DelSignal();
    signalGrafico3->setNombre(signalPrincipal->getNombre());
    signalGrafico3->setCanales(signalPrincipal->getCanales());
    signalGrafico3->setFs(signalPrincipal->getFs());
    signalGrafico3->setLeerDesde(signalPrincipal->getLeerDesde());
    signalGrafico3->setPath(signalPrincipal->getPath());
    signalGrafico3->setSeparador(signalPrincipal->getSeparador());
    signalGrafico3->readSignal = signalPrincipal->readSignal;
}

bool MainWindow::levantarServicios(){

    if(upDataBase() && OctaveProcess::getInstance()->init() )
       // if (newSesion())
            return true;

    return false;
}

/********************************************************************************************************
 * @name: crearScripts()
 * @brief: Crea los script de octave adentro de la carpeta actual donde se esta ejecutando el software;
 *         debe recibir un QString con el nombre del archivo a crear para buscarlo en el resource 'scripts.qrc'
 * @return: bool
 * *****************************************************************************************************/
bool MainWindow::crearScripts(QString script)
{
    QString path = QDir::currentPath()+"/scripts";

    if(!QDir(path).exists())
        QDir().mkdir(QDir::currentPath()+"/scripts");

    QFile file(":/scripts/"+script);

    if (!file.open(QIODevice::ReadOnly))
        return false;
    else{
        QTextStream streamMO(&file);
        QFile scriptOctave(path+"/"+script);
        QTextStream in(&scriptOctave);

        if (scriptOctave.open(QIODevice::WriteOnly))
            in<<streamMO.readAll();
        else
            return false;

        scriptOctave.close();
    }
    return true;
}

/*******************************************************************************
 * @name: chargeData
 * @brief: Slot que carga los datos una vez que la señal "FinalReadyData" es
 *         emitida, o sea cuando se ha guardado toda la informacion proveniente
 *         de Octave en el buffer de la clase OctaveProcess
 * @return: void
 * *****************************************************************************/
void MainWindow::chargeData(){
    qDebug()<<"[S:chargeData()] Cargando los datos...";
    octaveP = OctaveProcess::getInstance();
    double i = 0;
    int size = octaveP->getBuffer().size();                     // Tamaño de los datos a analizar
    double Fs = signalPrincipal->getFs().toDouble()*500;        // Frecuencia de muestreo
    double tick = Fs/size;                                      // Variable necesaria para poder construir el eje_x en la transformada de fourier.

    // Estas varibles se usan en la conversion de los datos doubles.
    bool ok = false;
    double n = 0;

    // Variables de la tabla de datos estadisticos.
    int nrows;
    QVector<double> sign;
    /* fIN */

    DelSignal *sigActual = new DelSignal();         //variable de uso local para guardar la señal que se graficara.
    QCustomPlot *graffico = new QCustomPlot();      //variable de uso local para guardar el grafico donde se mostraran los datos.

    if(buttonPressed==OctaveProcess::ButtonLeft){
        sigActual = signalGrafico2;
        graffico = ui->grafico2;
    }
    else{
        if (buttonPressed==OctaveProcess::ButtonRight) {
            sigActual = signalGrafico3;
            graffico = ui->grafico3;
        }
        else{
            // En cualquier otro caso se usara la señal principal como contenedora de los resultados
            sigActual = signalPrincipal;                                //En estos casos se usara la señal "resultSignal" de la señal principal para almacenar el resultado desde octave.
            graffico = ui->grafico1;
        }
    }
    sigActual->resultSignal.clear();
    sigActual->resultSignal.resize(2);
    for ( QString s: octaveP->getBuffer() )
    {
        n = s.toDouble(&ok);
        if(ok){
            sigActual->resultSignal[0].append(i);
            sigActual->resultSignal[1].append(n);
            i=i+tick;
        }
    }

    qDebug()<<"[S:chargeData()] Tamaño de los datos recibidos:"<<size<<endl;



    // Se discrimina para saber que se hara con los datos recibidos y se llama a la funcion correspondiente.
    switch (analize) {
    case 0:
        graficarFourier(sigActual->resultSignal, graffico, 0, signalPrincipal->getFs().toDouble()*500);
        break;
    case 1:
        graficarFourier(sigActual->resultSignal, graffico, 0, signalPrincipal->getFs().toDouble()*500);
        break;
    case 2:
        graficarGabor(sigActual->resultSignal, graffico, amin, bmax);
        break;
    case 3:
        //graficarWavelets();
        break;
    case 4:
        graficarSpectrogram(sigActual->resultSignal, graffico, amin, bmax);
        break;
    case 5:
        graficarHistograma(sigActual->resultSignal, graffico); // Grafica el histograma de Fourier
        break;
    case 6:
        graficarHistograma(sigActual->resultSignal, graffico); // Grafica el histograma normal
        break;
    case 7:
        graficarMovingRMS(sigActual->resultSignal.at(1),sigActual->readSignal.at(0), graffico, amin, bmax);
        break;
    case 8:
        //graficar(sigActual->resultSignal.at(1),sigActual->readSignal.at(0), graffico, amin, bmax);
        //QString tipo = "colormap";
        graficarMeanFrequency(sigActual->resultSignal.at(1),signalPrincipal->getFs().toDouble(), amin, bmax, "line", graffico);
        break;
    case 10:        
        restaurarGrafico(graffico);        
        this->setDatos(signalPrincipal);             // Se recarga la misma señal pero ya filtrada
        break;
    case 11:
        ui->tabla_deDatos->setRowCount(ui->tabla_deDatos->rowCount()+1);
        nrows = ui->tabla_deDatos->rowCount()-1;
        sign = sigActual->resultSignal.at(1);

        ui->tabla_deDatos->setItem(nrows,0,new QTableWidgetItem(sigActual->getNombre()));
        ui->tabla_deDatos->setItem(nrows,1,new QTableWidgetItem(QString::number(amin)+" - "+QString::number(bmax)));

        for (int var = 0; var < sign.size(); ++var)
        {
           ui->tabla_deDatos->setItem(nrows,var+2,new QTableWidgetItem(QString::number(sign.at(var))));
        }
        sigActual->setStatistics(sign[0],sign[1],sign[2],sign[3],sign[4],1,1,sign[5],sign[6],sign[7]);
        emit recalcularGraficosN(sigActual->readSignal,currentChannel,amin,bmax);
        break;
    default:
        break;
    }

    amin = -1;
    bmax = -1;
    currentChannel = -1;

    octaveP->setState(true);        //se quita el cerrojo al resource

    habilitarCampos(true);          // Se habilitan todos los botones y campos para los analisis.
    QApplication::restoreOverrideCursor();
    analize = -1;
    disconnect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));
}






/*====================================================================================================//
//                                  FUNCIONES DE BASICAS DE CONTROL                                  /*/

void MainWindow::setDatos(DelSignal *s)
{
    signalPrincipal = new DelSignal();
    signalPrincipal->setNombre(s->getNombre());
    signalPrincipal->setPath(s->getPath());
    signalPrincipal->setCanales(s->getCanales());
    signalPrincipal->setFs(s->getFs());
    signalPrincipal->setLeerDesde(s->getLeerDesde());
    signalPrincipal->setSeparador(s->getSeparador());
    signalPrincipal->setNombre( s->getNombre() );
    qDebug()<<"[F: SetDatos()] Informacion de Señal: "<<signalPrincipal->toString()<<endl;

    cargaGrafica();
    copiarDatosG2G3();
}

void MainWindow::cargaGrafica(int canal){

    disconnect(ui->comboChannel,SIGNAL(currentIndexChanged(int)), this, SLOT(on_ButtonPlot_clicked()));
    if(analize == 10)//si es filtro
        canal = ui->comboChannel->currentIndex()+1;

    ui->comboChannel->clear();

    if( leer() ){
        qDebug()<<"[F: cargaGrafica()] Añadiendo datos de la serie Temporal (señal principal)."<<endl;
        graficarPrincipal(ui->grafico1,signalPrincipal->readSignal,canal,plot);
        SetRangoMaximo(0,signalPrincipal->getSizeIntervalo(), ui->horizontalSlider, ui->spinBoxInicio, ui->spinBoxFin);

        QString itm;
        for (int i = 1; i <= signalPrincipal->getCanales().toInt(); i++){
            itm.setNum(i);
            qDebug()<<"[F: cargaGrafica()] Habilitando y añadiendo a comboBox los canales: "<< itm<<endl;
            ui->comboChannel->addItem(itm);
        }
        //__________________________________________________________________________________________________________________________________________________> se presoina el boton de calcular los datos para la tabla.
        on_btnCalcularDatos_clicked();
        // Se calcula la tabla de datos estadisticos cada vez que se cargue una señal nueva.

    }else
        qDebug()<<"[F: cargaGrafica()] Error: No se logro la leer el archivo."<<endl;

    connect(ui->comboChannel,SIGNAL(currentIndexChanged(int)), this, SLOT(on_ButtonPlot_clicked()));
    ui->comboChannel->setCurrentIndex(canal-1);
}

bool MainWindow::leer(){

    QString archivo; // String que almacena los datos del archivo para guardarlos en la variable Historial cada vez que se lee una señal nueva.
    QFile fin(signalPrincipal->getPath());

    if (!fin.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"[F: leer()] Error al abrir el archivo en: "<<signalPrincipal->getPath()<<endl;
        return false;
    }
    QTextStream in(&fin);
    QString line;
    QStringList strList;
    int cont=0;
    //double Fs = 1000.0*(signalPrincipal->getFs().toDouble());
    int canales=signalPrincipal->getCanales().toInt()+1;


    for (int i = 0; i <= signalPrincipal->getLeerDesde().toInt(); i++){
        line=in.readLine();
        archivo.append(line);
        archivo.append("\n");
    }    
    strList = line.split(signalPrincipal->getSeparador());

    if(( strList.size() )!=canales){
        QMessageBox::critical(this, tr("Error de lectura:"), tr("El Numero de canales del archivo no coincide."));
        return false;
    }

    while (!line.isNull()) {
        signalPrincipal->readSignal.resize(canales);
        for (int i = 0; i < canales; i++){
            (signalPrincipal->readSignal)[i].append( QString(strList.at(i)).toDouble() );
        }
        cont++;
        line = in.readLine();
        archivo.append(line);
        archivo.append("\n");
        strList = line.split(signalPrincipal->getSeparador());
    }
    archivo = archivo.mid(0,archivo.length()-1);

    qInfo()<<"[F: leer()] Cantidad de lineas leidas: "<<cont<<endl;
    //signalPrincipal->setSizeIntervalo(cont/int(Fs));
    signalPrincipal->setSizeIntervalo(cont-1);

    //___________________________________________________________________________________________________________________________________________________________________________señal normalizada
    //normalize();

    Historial->append(archivo);                                                 // Se agregan al historial las señales cargadas.
    // Aqui se agregan los datos de la señal para verlos en el campo de texto de salida.
    ui->TextoSalida->clear();
    ui->TextoSalida->appendPlainText(archivo);
    QTextCursor cursor(ui->TextoSalida->textCursor());
    cursor.movePosition(QTextCursor::Start);
    ui->TextoSalida->setTextCursor(cursor);

    return true;
}

void MainWindow::SetRangoMaximo(int min, int max, QxtSpanSlider *Slider, QDoubleSpinBox *In, QDoubleSpinBox *Fn){

    (void) In;
    (void) Fn;
    Slider->setRange(min, max);
    //In->setMaximum(max);
    //Fn->setMaximum(max);
    ui->horizontalSlider->setLowerPosition(ui->horizontalSlider->minimum());
    ui->horizontalSlider->setUpperPosition(ui->horizontalSlider->maximum());

}

void MainWindow::lineasGraficoPrincipal(int size, int frecMuestreo)
{
    itemA = new QCPItemLine(ui->grafico1);
    ui->grafico1->addItem(itemA);
    itemA->setPen(QPen(Qt::red));
    itemA->start->setCoords(0,-5000);
    itemA->end->setCoords(0,5000);

    itemB = new QCPItemLine(ui->grafico1);
    ui->grafico1->addItem(itemB);
    itemB->setPen(QPen(Qt::red));
    itemB->start->setCoords(size/frecMuestreo,-5000);
    itemB->end->setCoords(size/frecMuestreo,5000);

    ui->grafico1->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom);
    ui->grafico1->xAxis->setRange(-10,60);
    ui->grafico1->yAxis->setRange(-10,10);
}

bool MainWindow::upDataBase()
{
    /*
    boole=q.exec("insert into pacientes('rut','nombre', 'apellido','direccion','sexo','fecha_nacimiento','edad','fecha_ingreso','peso','estatura','actividad','descripcion') "
           "values('17.666.555-K','Diego','Campos','Linares','Masculino','28-08-1988',28,'dom mayo 15 2016',75,173,'Físico Activo','Esta es informacion extra para la medicion del software')");

    boole=q.exec("insert into pacientes('rut','nombre', 'apellido','direccion','sexo','fecha_nacimiento','edad','fecha_ingreso','peso','estatura','actividad','descripcion') "
           "values('18.777.666-5','Romina','Rodriguez','Linares','Femenino','20-08-1987',27,'dom mayo 15 2016',50,160,'Ninguno','Esta es informacion extra para la medicion del software')");
    */

    db = DataBase::getInstance();
    return (db != nullptr);
}

void MainWindow::actComentariosRecientes(){

    QSqlQueryModel *model = new QSqlQueryModel();
    //QSqlQuery *query = new QSqlQuery(db);
    QString id = ui->informacionSesion->text();
    db->getQuery().prepare("SELECT * FROM comentarios WHERE idsesion = "+id+";");

    if( db->getQuery().exec() ){
        model->setQuery( db->getQuery() );
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Numero"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sesion Actual"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Comentarios"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Fecha"));
        ui->tVComentariosR->setModel(model);
        ui->tVComentariosR->horizontalHeader()->resizeSections(QHeaderView::Stretch);
    }
    else{
        QMessageBox::critical(this,
                              "Error de conexion!..",
                              "Imposible establecer una conexion con la base de datos.\n Pulsar Cancel para salir.",
                              QMessageBox::Cancel);
    }
}

bool MainWindow::newSesion()
{
    DataBase *dataB = DataBase::getInstance();
    QString sesion_id = dataB->crearSesion();
    if(!sesion_id.isNull()){
        ui->informacionSesion->setText(sesion_id);
        /* Aqui se deberia añadir la sesion a una variable (clase global) que mantenga ese dato hasta que s einserte en la BD*/
        return true;
    }else if(sesion_id==""){
        qInfo() << "Info: No hay registros en la BD, Tabla de Sesiones"<<endl;
        ui->informacionSesion->setText("0");
        /* Aqui se deberia añadir la sesion a una variable (clase global) que mantenga ese dato hasta que s einserte en la BD*/
        return true;
    }
    QMessageBox::critical(this,"ERROR: ", "Problema al crear la sesion!\nLos datos no pueden ser guardados.\n ",QMessageBox::Ok);
    return false;
}




/*====================================================================================================//
//                             FUNCIONES DE EJECUCION AUTOMATICA - CONNECT                           /*/

void MainWindow::horzSliderChangedA(int value){

    double sliderA = signalPrincipal->readSignal[0].at(value);
    ui->spinBoxInicio->setValue(sliderA);
    itemA->start->setCoords(sliderA,-5000);
    itemA->end->setCoords(sliderA,5000);
    ui->grafico1->replot();
}

void MainWindow::horzSliderChangedB(int value)
{
    double sliderB = signalPrincipal->readSignal[0].at(value);
    ui->spinBoxFin->setValue(sliderB);
    itemB->start->setCoords(sliderB,-5000);
    itemB->end->setCoords(sliderB,5000);
    ui->grafico1->replot();
}

void MainWindow::captarPaciente(QVector<QString> s)
{
    ui->sesionRut->setText(s.at(0));
    ui->sesionNombre->setText(s.at(1) +" "+s.at(2));
    ui->sesionSexo->setText(s.at(4));

    ui->imagenUsuario->setPixmap(QPixmap(":/imagenes/face_male.ico"));
    if(s.at(4)=="Femenino")  ui->imagenUsuario->setPixmap(QPixmap(":/imagenes/face_female.ico"));
    ui->sesionDireccion->setText(s.at(3));

    ui->informacionRUT->setText(s.at(0));
    ui->swSesion->setCurrentIndex(1);
    ui->tabNYC->setEnabled(true);
    SesionRut = s.at(0);                    //Se guarda en la variable el rut del paciente que se ha iniciado.
//    }else{

//        QMessageBox::critical(this,
//                              "Error!",
//                              "ERROR!... Porfavor asegurese que existe un proyecto iniciado.",
//                              QMessageBox::Ok);

//        qCritical()<<"[F: captarSesion()] Falló al crear la sesion"<<endl;
//        ui->statusBar->showMessage("Falló al crear la sesion", 2000);
//        return;
//    }
    qInfo()<<"[F: captarPaciente()] Exito al cargar el paciente."<<endl;
}

void MainWindow::captarProyecto(QStringList s){

    ProyectoActual = s.at(0);
    ui->nombreProyectoActual->setText(s.at(1));
    //ui->nombreProyectoActual->setAlignment(Qt::AlignLeft);
    ui->nombreProyectoActual->setWordWrap(true);
}

void MainWindow::updateDock(QDockWidget *dock, bool Value, int i, int w, int h){
    int px  = 0;
    int py = 0;
    QRect rect;
    QDesktopWidget *desktop = QApplication::desktop();

    if(!Value){
        switch (i) {
        case 1:
            rect = ui->ContenedorGrafico1->geometry();
            break;
        case 2:
            rect = ui->ContenedorGrafico2->geometry();
            break;
        case 3:
            rect = ui->ContenedorGrafico3->geometry();
            break;
        default:
            break;
        }

    }else{
        rect = desktop->screenGeometry();
    }
    w-=10;
    h-=10;
    px  = (rect.width()/2) - (w/2);
    py = (rect.height()/2) - (h/2);
    dock->setGeometry(px,py,w,h);
}

void MainWindow::guardarImagenes()
{
    QCustomPlot *graf = ui->grafico1;
    QObject* pushButton = QObject::sender();
    QString selectedFilter;
    QString path = QFileDialog::getSaveFileName(this, tr("Save as"), QDir::homePath(), tr("PNG file (*.png);;JPG file (*.jpg);;PDF file (*.pdf)"), &selectedFilter);

    if (path.isEmpty()) return;

    if( pushButton == ui->btnSaveImageG2 ){
        graf = ui->grafico2;
    }else if (pushButton == ui->btnSaveImageG3) {
        graf = ui->grafico3;
    }

    if(selectedFilter.contains("PNG"))
        graf->savePng(path,1000,1000);
    if(selectedFilter.contains("JPG"))
        graf->saveJpg(path,1000,1000);
    if(selectedFilter.contains("PDF"))
        graf->savePdf(path,false,1000,1000);

}

void MainWindow::guardarDatosTxt()
{
    bool in_enca = false;
    DelSignal *sig;
    QVector<double> time;

    QObject* pushButton = QObject::sender();
    QString selectedFilter;
    QString path = QFileDialog::getSaveFileName(this, tr("Save as"), QDir::homePath(), tr("Txt file (*.txt);;Csv file (*.csv);;Raw file (*.raw)"), &selectedFilter);
    QVector<double> seg;

    if(path.isEmpty()) return;


    if( pushButton == ui->btnSaveDataG2 ){
        if(ui->in_enca_2->isChecked()) in_enca = true;
        sig = signalGrafico2;
        time = signalGrafico2->resultSignal.at(0);
        seg = signalGrafico2->resultSignal.at(1);

    }else {
        if(ui->in_enca_3->isChecked()) in_enca = true;
        sig = signalGrafico3;
        time = signalGrafico3->resultSignal.at(0);
        seg = signalGrafico3->resultSignal.at(1);
    }

    QFile file(path);

    if( !file.open(QIODevice::WriteOnly) )
    {
        QMessageBox::critical(this, tr("Error"), tr("No se pudo guardar el archivo."));
        return;
    }else{

        QString item;
        //char f;
        QTextStream stream(&file);

        if(in_enca){
            stream<< "Ruta al archivo:" << sig->getPath()<< endl;
            stream<< "Frecuencia de muestreo:" << sig->getFs()<< "KHz"<< endl;
            stream<< "Método usado:"<<sig->getMetodo()<< "\n" <<endl;
        }

        for (int i=0; i< seg.size(); i++) {
            if(selectedFilter.contains("txt"))
                stream<< item.setNum(seg.at(i),'f',8)<< endl;
            if(selectedFilter.contains("csv"))
                stream<< item.setNum(i) <<","<< QString::number(seg.at(i),'f',8)<< endl;
            else if(selectedFilter.contains("raw"))
                stream<< item.setNum(i) <<";"<< QString::number(seg.at(i),'f',8)<< endl;
        }

        file.flush();
        file.close();
    }
}




/*/==================================================================================================//
//                     ||        FUNCIONES DE LA BARRA DE MENUS           ||                        /*/

void MainWindow::on_actionAdd_Edit_Remove_User_triggered()
{
    winU = new winUsers();
    connect(winU,SIGNAL(enviarPaciente(QVector<QString>)), this, SLOT(captarPaciente(QVector<QString>)));
    //winU->setDatabase(&db);
    winU->exec();
}

void MainWindow::on_btnListaUsuarios_clicked()
{
    try{
        winUsers *winU = new winUsers();
        connect(winU,SIGNAL(enviarPaciente(QVector<QString>)), this, SLOT(captarPaciente(QVector<QString>)));
        //winU->setDatabase(&db);
        winU->exec();
    }
    catch(...){
        QMessageBox::information(this, tr("Aviso:"), tr("Algo salió mal... favor reintentar en 5 seg."));
    }
}

void MainWindow::on_actionOpen_triggered()
{
    if(ExistenModificaciones("Abrir archivo")){
        return;
    }else{
        dialogoFile=new CargaDatos();
        dialogoFile->setHistorialVar(Historial);
        connect(dialogoFile,SIGNAL( lecturaAceptada(DelSignal*) ), this, SLOT( setDatos(DelSignal*) ) );
        dialogoFile->exec();
    }

}

void MainWindow::on_actionCrear_triggered()
{
   Proyecto *pro = new Proyecto();
   //pro->setDatabase(&db);
   connect(pro,SIGNAL(nuevoProyecto(QStringList)), this, SLOT(captarProyecto(QStringList)));
   pro->getSw()->setCurrentIndex(0);
   pro->exec();
}

void MainWindow::on_actionAbrir_2_triggered()
{
    Proyecto *pro = new Proyecto();
    connect(pro,SIGNAL(nuevoProyecto(QStringList)), this, SLOT(captarProyecto(QStringList)));
    //pro->setDatabase(&db);
    pro->getSw()->setCurrentIndex(1);
    pro->exec();
}

void MainWindow::on_actionCerrar_triggered()
{
    if(ExistenModificaciones("Cerrar todo")){
        return;
    }else{
        ProyectoActual="";
        ui->nombreProyectoActual->setText(" --------------- ");
        restaurarGrafico(ui->grafico1);
        restaurarGrafico(ui->grafico2);
        restaurarGrafico(ui->grafico3);
        restaurarGrafico(ui->graficoNorm);
        on_logOut_clicked();

        habilitarCampos(false);             // Funcion que bloquea todo cuando se ha cerrado la señal.
        ui->TextoSalida->clear();           // Se limpia el QplainTextEdit que muestra el contenido del archivo actual.
        ui->tabla_deDatos->clearContents(); // Se limpia el contenido de la tabla estadistica.
    }
}

void MainWindow::on_actionBD_triggered()
{

}

void MainWindow::on_actionParametros_Generales_triggered()
{
    if(!ConfigGlobales->isVisible())
    {
        //ConfigGlobales->getTWConfig()->setCurrentIndex(0);
        ConfigGlobales->setFloating(true);
        ConfigGlobales->show();
        ConfigGlobales->activateWindow();
    }
}

void MainWindow::on_actionCerrar_se_al_triggered()
{
    if(ExistenModificaciones(signalPrincipal->getNombre())){
        return;
    }else{
        restaurarGrafico(ui->grafico1);
        restaurarGrafico(ui->graficoNorm);

        limpiarVariables();
        habilitarCampos(false);
    }
}

void MainWindow::on_actionSave_triggered()
{
    QApplication::setOverrideCursor( Qt::WaitCursor ); // Cursor de carga y espera
    QString Hlast = Historial->last();
    Historial->clear();
    Historial->append(Hlast);
    QApplication::restoreOverrideCursor();             // Cursor original reestablecido
}

void MainWindow::on_actionAnalisis_Multiple_triggered()
{        
    AnalisisMultiples *analisisMultiple = new AnalisisMultiples(this);
    analisisMultiple->setConfig(ConfigGlobales);
    analisisMultiple->setWindowState(Qt::WindowMaximized);
    analisisMultiple->show();
}

void MainWindow::on_actionUndo_triggered()
{
    if(Historial->size()>1){
        Historial->pop_back();                              //  Se quita el string del estado del archivo actual. (la ultima posicion siempre tiene el actual.)
        QString archivo_recuperado = Historial->last();     //  Ya eliminado el actual se puede obtener al anterior.
        QString  path = signalPrincipal->getPath();

        QFile file(path);

        if (!file.open(QIODevice::WriteOnly)){
            qWarning()<<"[F: Undo()] Error al restaurar el archivo: "<<path<<endl;
            return;
        }else{
            QTextStream in(&file);
            in<<archivo_recuperado;
            Historial->pop_back();                          // Tambien se quita el anterior luego de restaurarlo.
            restaurarGrafico(ui->grafico1);

            this->setDatos(signalPrincipal);
        }

    }else{
        QMessageBox::information(this, tr("Info:"), tr("No existen registros de operaciones."));
        return;
    }
}

void MainWindow::on_actionRedoOriginal_triggered()
{
    if(Historial->size()>1){
        QString archivo_recuperado = Historial->at(0);     //  Ya eliminado el actual se puede obtener al anterior.
        QString  path = signalPrincipal->getPath();

        restaurarArchivo(path, archivo_recuperado);

    }else{
        QMessageBox::information(this, tr("Info:"), tr("Ya se está trabajando sobre la señal original."));
        return;
    }

    restaurarGrafico(ui->grafico1);
    this->setDatos(signalPrincipal);
}

bool MainWindow::restaurarArchivo(QString path, QString archivo_recuperado)
{
    QFile file(path);

    if (!file.open(QIODevice::WriteOnly)){
        return false;
    }else{
        QTextStream in(&file);
        in<<archivo_recuperado;
        Historial->clear();
        return true;
    }
}

void MainWindow::on_action_informacion_actual_sig_triggered()
{
    // Prueba de dock para la informacion de la señal:
    if(info_signal==NULL) info_signal = new signal_Info();

    info_signal->setData_principal(signalPrincipal);

    info_signal->show();
    info_signal->activateWindow();
    info_signal->raise();
}

/*/==================================================================================================//
//                     ||        FUNCIONES DE LOS BOTONES                  ||                       /*/

void MainWindow::on_ButtonReplot_clicked()
{
    restaurarGrafico(ui->grafico1);
    int a=0,b=-1;
    int canal;
    //double c = 1000*(signalPrincipal->getFs().toDouble());
    a = ui->horizontalSlider->lowerValue();
    b = ui->horizontalSlider->upperValue();
    canal = ui->comboChannel->currentIndex()+1;

    graficarPrincipal(ui->grafico1,signalPrincipal->readSignal,canal,plot,a,b-a);
    SetRangoMaximo(a,b,ui->horizontalSlider, ui->spinBoxInicio, ui->spinBoxFin);

}

void MainWindow::on_ButtonPlot_clicked()
{
    restaurarGrafico(ui->grafico1);
    int canal=ui->comboChannel->currentIndex()+1;

    graficarPrincipal(ui->grafico1,signalPrincipal->readSignal,canal,plot);
    SetRangoMaximo(0,signalPrincipal->getSizeIntervalo(), ui->horizontalSlider,ui->spinBoxInicio,ui->spinBoxFin);

}

void MainWindow::on_iniciarSession_clicked()
{
    QString rut = ui->rutSesion->text();
    if(!(rut=="")){
        // Aqui falta la validacion del RUT: por motivos prácticos del uso del software posiblemente no se valide completo.
        DataBase *dataB = DataBase::getInstance();
        cPaciente *cp = dataB->getObjPaciente(rut);
        if(cp!=nullptr){
            SesionRut = rut;
            ui->sesionRut->setText(cp->getRUT());
            ui->sesionNombre->setText(cp->getNombre() +" "+cp->getApellido());
            ui->sesionSexo->setText(cp->getSexo());

            ui->imagenUsuario->setPixmap(QPixmap(":/imagenes/face_male.ico"));
            if(cp->getSexo()=="Femenino")  ui->imagenUsuario->setPixmap(QPixmap(":/imagenes/face_female.ico"));
            ui->sesionDireccion->setText(cp->getDireccion());

            ui->informacionRUT->setText(rut);
            ui->swSesion->setCurrentIndex(1);
            ui->tabNYC->setEnabled(true);

//            }else{
//                QMessageBox::critical(this,
//                                      "ERROR: ",
//                                      "No existe el usuario con RUT: "+rut+"",
//                                      QMessageBox::Ok);
//                qWarning()<<"[B: iniciarSesion()] No se encontro el RUT: "<<rut<<" en la Base de datos."<<endl;
//            }
        }
        else{
            QMessageBox::information(this,
                                  "ERROR: ",
                                  "RUT: "+rut+" no encontrado.",
                                  QMessageBox::Ok);
            qCritical()<<"[B: iniciarSesion()] Base de datos no disponible en estos momentos."<<endl;
        }
    }else{
        QMessageBox::critical(this, "Error:",
                              "Ingrese un RUT válido.",
                              QMessageBox::Ok);
    }
}

void MainWindow::on_logOut_clicked()
{
    ui->sesionRut->setText("");
    ui->sesionNombre->setText("");
    ui->sesionSexo->setText("");
    ui->sesionDireccion->setText("");

    SesionRut = "";
    ui->informacionRUT->setText("No Iniciado...");
    ui->informacionSesion->setText("...");
    ui->swSesion->setCurrentIndex(0);
    ui->tabNYC->setEnabled(false);
    ui->tVComentariosR->setModel(NULL);
}

void MainWindow::on_botonNotas_clicked()
{
    QString id = ui->informacionSesion->text();
    QString nota = ui->notasComentarios->toPlainText();

    if(!(nota=="")){
        //QSqlQuery *query = new QSqlQuery(db);
        //QSqlQuery *query_id = new QSqlQuery(db);

        if(db->getQuery().exec("INSERT INTO comentarios (idsesion, comentario, fecha_comentario) VALUES ("+id+", '"+nota+"', datetime() );")){
            if(db->getQuery().exec("SELECT last_insert_rowid() AS rowid FROM comentarios LIMIT 1")){
                db->getQuery().seek(0);
            }
            else{
                QMessageBox::information(this,
                                      "Ocurrió un problema.",
                                      "No se puede acceder al comentario guardado.\n Por favor revise los comentarios recientes.",
                                      QMessageBox::Ok);
            }
        }else{
            QMessageBox::information(this,
                                    "Error!",
                                    "No se puede guardar el comentario!\n Los datos no pueden ser guardados.\n ",
                                    QMessageBox::Ok);
            qCritical()<<"[B: botonNotas()] Base de datos no disponible."<<endl;
            ui->statusBar->showMessage("Base de datos no disponible", 2000);
        }

        ui->notasComentarios->setPlainText("");
        actComentariosRecientes();
    }
}

void MainWindow::on_ButtonGraficar2_clicked()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState()){
        buttonPressed = OctaveProcess::ButtonLeft;

        int a1=ui->horizontalSlider->lowerValue();      // Rango menor del slider
        int b1=ui->horizontalSlider->upperValue();      // Rango mayor del slider
        int analisis=ui->comboAnalisis2->currentIndex(); // Analisis que se quiere hacer. (se obtiene desde la lista).
        QString metodo = ui->comboAnalisis2->currentText();
        signalGrafico2->setMetodo(metodo);

        qInfo()<<"[F: Graficar2()] Se llama a graficar con el metodo: " << ui->comboAnalisis2->currentText()<<", posicion : "<<analisis<<endl;

        calcularEnOctave(analisis, a1, b1);             // Funcion que usa el parametro "analisis" para llamar al "archivo.m" correspondiente.
    }else{
        QMessageBox::information(this, tr("Error"), tr("Recurso: 'Octave-cli'\nEstado: ocupado"));
        return;
    }
}

void MainWindow::on_ButtonGraficar3_clicked()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState()){
        buttonPressed = OctaveProcess::ButtonRight;

        int a1=ui->horizontalSlider->lowerValue();      // Rango menor del slider
        int b1=ui->horizontalSlider->upperValue();      // Rango mayor del slider
        int analisis=ui->comboAnalisis3->currentIndex(); // Analisis que se quiere hacer. (se obtiene desde la lista).

        QString metodo = ui->comboAnalisis3->currentText();
        signalGrafico3->setMetodo(metodo);

        qInfo()<<"[F: Graficar3()] Se llama a graficar con el metodo: " << ui->comboAnalisis3->currentText()<<", posicion : "<<analisis<<endl;

        calcularEnOctave(analisis, a1, b1);             // Funcion que usa el parametro "analisis" para llamar al "archivo.m" correspondiente.
    }else{
        QMessageBox::information(this, tr("Error"), tr("Recurso: 'Octave-cli'\nEstado: ocupado"));
        return;
    }
}

void MainWindow::on_EliminarComentario_clicked()
{

    QItemSelectionModel *select = ui->tVComentariosR->selectionModel();
    if(!(select==NULL)){
        QModelIndex index = select->currentIndex();

        if(select->hasSelection()){
            int row = index.row();
            QString idc = index.sibling(row, 0).data().toString();
            QString ids = index.sibling(row, 1).data().toString();

            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Alerta", "Eliminar Comentario??\n"+idc+"",
                                          QMessageBox::Yes|QMessageBox::No);
            if (reply == QMessageBox::Yes) {

                //QSqlQuery *query = new QSqlQuery(db);
                db->getQuery().prepare("delete from comentarios where ID = "+idc+" and idsesion = "+ids+"");

                if(db->getQuery().exec()){
                    QMessageBox::warning(this, "Aviso",
                                          "Registro Eliminado!",
                                          QMessageBox::Ok);
                }
                else{
                    QMessageBox::critical(this, "Error! :(",
                                      "Ocurrio un Error al procesar su solicitud.\nVuelva a intentar mas tarde.",
                                      QMessageBox::Ok);
                }
                actComentariosRecientes();
            }


        }
        else{
            QMessageBox::critical(this, "warning!",
                                  "Primero debes seleccionar una \nfila de la tabla.",
                                  QMessageBox::Ok);
        }
    }
}

void MainWindow::on_btnCloseG1_clicked()
{
    on_actionCerrar_se_al_triggered();
}

void MainWindow::on_btnOpenG1_clicked()
{
    on_actionOpen_triggered();
}

void MainWindow::on_btnExportarG1_clicked()
{
    QString selectedFilter;
    QString path = QFileDialog::getSaveFileName(this, tr("Save as"), QDir::homePath(), tr("txt file (*.txt);;csv ',' file (*.csv);;csv ';' file (*.csv);;excel file (*.xlsx)"), &selectedFilter);

    if(path.isEmpty()) return;

    QFile file(path);
    if( !file.open(QIODevice::WriteOnly) )
    {
        QMessageBox::information(this, tr("Error"), tr("No se pudo guardo el archivo."));
        return;
    }else{

        ui->statusBar->showMessage("Guardando...", 2000);
        QTextStream stream(&file);

        QString str = Historial->last();
        QString sep = signalPrincipal->getSeparador();
        QString subStr;       // Replacement string.
        int ind=0;

        if(selectedFilter.contains("txt"))
            subStr = " ";
        if(selectedFilter.contains("csv ','"))
            subStr = ",";
        if(selectedFilter.contains("csv ';'"))
            subStr = ";";
        if(selectedFilter.contains("xlsx"))
            subStr = ";";

        if(sep!=subStr){
            while((ind = str.indexOf(sep))!=-1){
                str.replace(ind, sep.size(), subStr);
            }
        }
        stream<<str;

        if(stream.status() == QTextStream::Ok )
            ui->statusBar->showMessage("Archivo guardado con exito!", 2000);
        else
            ui->statusBar->showMessage("Error al guardar el archivo: "+file.fileName(), 2000);
        file.flush();
        file.close();
    }
}

void MainWindow::on_toolBtn_Filtros2_clicked()
{
    ConfigFiltros->show();

}

void MainWindow::on_btn_AplicarFiltro2_clicked()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState()){
        octaveP->setState(false);                       // Se pone el cerrojo al resource
        analize = 10;                                   // Indica que se hara un filtrado de la señal.

        // Cursor de carga y espera
        QApplication::setOverrideCursor( Qt::WaitCursor );
        // Datos de la señal actual.
        int tipo = ui->comboFiltros_2->currentIndex();
        QString cmd;
        QString sep = signalPrincipal->getNumSeparador();
        QString path = signalPrincipal->getPath();
        QString lineaInicio = signalPrincipal->getLeerDesde();
        QString numCanales = signalPrincipal->getCanales();
        QString Fs = signalPrincipal->getFs();
        QString canalActual = ui->comboChannel->currentText();

        signalPrincipal->resultSignal.clear();
        signalPrincipal->resultSignal.resize(2);

        // Se conecta el proceso de octave con la funcion de captura de datos.
        connect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));

        // Se obtienen los parmetros del filtro en cuestion.
        QStringList parametros = ConfigFiltros->getParametrosFiltros(tipo);
        cmd = "OctaveFiltros('"+path+"','"+sep+"','"+lineaInicio+"','"+numCanales+"','"+Fs+"','"+canalActual+"','"+parametros[0]+"','"+parametros[1]+"','"+parametros[2]+"','"+parametros[3]+"');\n";

        qInfo()<<"[B]: AplicarFiltro2()] Comando enviado a Octave:"<<cmd<<endl;
        octaveP->writeCmd(cmd);

    }else{
        QMessageBox::information(this, tr("Error"), tr("Recurso: 'Octave-cli'\nEstado: ocupado"));
        return;
    }
}

void MainWindow::on_toolBtn_Filtros3_clicked()
{
    ConfigFiltros->show();
}

void MainWindow::on_btn_AplicarFiltro3_clicked()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState()){
        octaveP->setState(false);                       // Se pone el cerrojo al resource
        analize = 10;                                   // Indica que se hara un filtrado de la señal.

        // Cursor de carga y espera
        QApplication::setOverrideCursor( Qt::WaitCursor );

        // Datos de la señal actual.
        int tipo = ui->comboFiltros_3->currentIndex();
        QString cmd;
        QString sep = signalPrincipal->getNumSeparador();
        QString path = signalPrincipal->getPath();
        QString lineaInicio = signalPrincipal->getLeerDesde();
        QString numCanales = signalPrincipal->getCanales();
        QString Fs = signalPrincipal->getFs();
        QString canalActual = ui->comboChannel->currentText();

        signalPrincipal->resultSignal.clear();
        signalPrincipal->resultSignal.resize(2);

        // Se conecta el proceso de octave con la funcion de captura de datos.
        connect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));

        // Se obtienen los parmetros del filtro en cuestion.
        QStringList parametros = ConfigFiltros->getParametrosFiltros(tipo);
        cmd = "OctaveFiltros('"+path+"','"+sep+"','"+lineaInicio+"','"+numCanales+"','"+Fs+"','"+canalActual+"','"+parametros[0]+"','"+parametros[1]+"','"+parametros[2]+"','"+parametros[3]+"');\n";

        qInfo()<<"[B]: AplicarFiltro2()] Comando enviado a Octave:"<<cmd<<endl;
        octaveP->writeCmd(cmd);

    }else{
        QMessageBox::information(this, tr("Error"), tr("Recurso: 'Octave-cli'\nEstado: ocupado"));
        return;
    }
}

// Funcion que calcula los datos de la "tabla de Informacion"
void MainWindow::on_btnCalcularDatos_clicked()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState())
    {
        analize = 11;
        octaveP->setState(false);
        QApplication::setOverrideCursor( Qt::WaitCursor ); // Cursor de carga y espera
        connect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));

        amin = ui->horizontalSlider->lowerValue();
        bmax = ui->horizontalSlider->upperValue();
        currentChannel = ui->comboChannel->currentIndex()+1;

        QString cmd = "OctaveStatistics('"+signalPrincipal->getPath()+"','"+signalPrincipal->getSeparador()+"','"+signalPrincipal->getLeerDesde()+"','"+signalPrincipal->getCanales()+"','"+signalPrincipal->getFs()+"','"+QString::number(amin)+"','"+QString::number(bmax)+"','"+QString::number(currentChannel)+"');\n";
        qInfo()<<"[F: CalcularDatosEstadisticos()] Comando enviado a Octave:"<<cmd<<endl;
        octaveP->writeCmd( cmd );

    }else{
        QMessageBox::information(this, tr("Error"), tr("Recurso: 'Octave-cli'\nEstado: ocupado"));
        return;
    }
}

// Funcion que limpia la "tabla de Informacion"
void MainWindow::on_btnLimpiarTabla_clicked()
{
    ui->tabla_deDatos->setRowCount(0);
    ui->tabla_deDatos->clearContents();
}


/*/==================================================================================================//
//                     ||        FUNCIONES DEL DEMO DEL PROYECTO           ||                       /*/

void MainWindow::on_actionDemo_Se_al_1_csv_triggered()
{
    if(ExistenModificaciones("Demo 1")){
        return;
    }else{

        DelSignal *signal = new DelSignal();
        QString path = ":/ejemplos/ejemplo_1.csv";
        QString archivo_recuperado = "";
        QFile file(path);

        if (!file.open(QIODevice::ReadOnly)){
            QMessageBox::critical(this, tr("Info:"), tr("Error al restaurar el archivo de ejemplo."));
            return;
        }else{
            QTextStream in(&file);
            archivo_recuperado = in.readAll();

            if(QDir(QDir::currentPath()+"/ejemplos").exists()){
                crearEjemplos(1,QDir::currentPath()+"/ejemplos",archivo_recuperado);
            }else{
                if(QDir().mkdir(QDir::currentPath()+"/ejemplos"))
                    crearEjemplos(1,QDir::currentPath()+"/ejemplos",archivo_recuperado);
                else
                    return;
            }
        }

        signal->setPath(QDir::currentPath()+"/ejemplos/ejemplo_1.csv");

        ui->statusBar->showMessage("Cargando señal desde:'"+signal->getPath()+"'",5000);

        signal->setNombre("ejemplo_1.csv");
        signal->setSeparador("Comas");
        signal->setLeerDesde("12");
        signal->setCanales("1");
        signal->setFs("1");
        signal->setNombre( "ejemplo_1.csv" );
        qInfo()<<"[F: ActionDemo_señal_1()] Carga de datos desde: 'Ejemplos/ejemplo_1.csv'"<<endl;

        Historial->clear();
        this->setDatos(signal);
    }
}

void MainWindow::on_actionDemo_Se_al_2_txt_triggered()
{
    if(ExistenModificaciones("Demo 2")){
        return;
    }else{
        DelSignal *signal = new DelSignal();
        QString path = ":/ejemplos/ejemplo_2.txt";
        QString archivo_recuperado = "";
        QFile file(path);

        if (!file.open(QIODevice::ReadOnly)){
            QMessageBox::critical(this, tr("Info:"), tr("Error al restaurar el archivo de ejemplo."));
            return;
        }else{
            QTextStream in(&file);
            archivo_recuperado = in.readAll();

            if(QDir(QDir::currentPath()+"/ejemplos").exists()){
                crearEjemplos(2,QDir::currentPath()+"/ejemplos",archivo_recuperado);
            }else{
                if(QDir().mkdir(QDir::currentPath()+"/ejemplos"))
                    crearEjemplos(2,QDir::currentPath()+"/ejemplos",archivo_recuperado);
                else
                    return;
            }
        }

        signal->setPath(QDir::currentPath()+"/ejemplos/ejemplo_2.txt");


        ui->statusBar->showMessage("Cargando señal desde:'"+signal->getPath()+"'",5000);

        signal->setNombre("ejemplo_2.txt");
        signal->setSeparador("Espacios");
        signal->setLeerDesde("0");
        signal->setCanales("1");
        signal->setFs("1");
        signal->setNombre( "ejemplo_2.csv" );
        qInfo()<<"[F: DemoSeñal_2()] Carga de datos desde: 'Ejemplos/ejemplo_2.txt'"<<endl;

        Historial->clear();
        this->setDatos(signal);

    }
}

void MainWindow::on_actionDemo_Se_al_3_csv_triggered()
{
    if(ExistenModificaciones("Demo 3")){
        return;
    }else{
        DelSignal *signal = new DelSignal();
        QString path = ":/ejemplos/RAW.csv";
        QString archivo_recuperado = "";
        QFile file(path);

        if (!file.open(QIODevice::ReadOnly)){
            QMessageBox::critical(this, tr("Info:"), tr("Error al restaurar el archivo de ejemplo."));
            return;
        }else{
            QTextStream in(&file);
            archivo_recuperado = in.readAll();

            if(QDir(QDir::currentPath()+"/ejemplos").exists()){
                crearEjemplos(3,QDir::currentPath()+"/ejemplos",archivo_recuperado);
            }else{
                if(QDir().mkdir(QDir::currentPath()+"/ejemplos"))
                    crearEjemplos(3,QDir::currentPath()+"/ejemplos",archivo_recuperado);
                else
                    return;
            }
        }

        signal->setPath(QDir::currentPath()+"/ejemplos/RAW.csv");

        ui->statusBar->showMessage("Cargando señal desde:'"+signal->getPath()+"'",5000);

        signal->setNombre("RAW.csv");
        signal->setSeparador("Comas");
        signal->setLeerDesde("19");
        signal->setCanales("2");
        signal->setFs("1");
        signal->setNombre( "RAW.csv" );

        qInfo()<<"[F: ActionDemo_señal_3()] Carga de datos desde: 'Ejemplos/RAW.csv'"<<endl;

        Historial->clear();
        this->setDatos(signal);

    }
}

bool MainWindow::crearEjemplos(int numEjemplo, QString path, QString archivo)
{
    QFile ejemplo;

    if(numEjemplo==1)
        ejemplo.setFileName(path+"/ejemplo_1.csv");
    if(numEjemplo==2)
        ejemplo.setFileName(path+"/ejemplo_2.txt");
    if(numEjemplo==3)
        ejemplo.setFileName(path+"/RAW.csv");

    QTextStream in(&ejemplo);

    if (ejemplo.open(QIODevice::WriteOnly)){
        in<<archivo;
    }else{
        QMessageBox::critical(this, tr("Error:"), "No se pudo crear el archivo: "+path);
        return false;
    }

    return true;
}

bool MainWindow::ExistenModificaciones(QString act)
{
    if(Historial->size()>1)
    {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, act, tr("Existen %1 cambios realizados recientemente!\nDesea cerrar la señal actual?\n\nYes : Restaurará el archivo al original.\nNo : Le permitirá volver y guardar los cambios.").arg(QString::number(Historial->size()-1)), QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes){
            restaurarArchivo(signalPrincipal->getPath(), Historial->at(0));
        }
        else{
            return true;
        }
    }
    return false;
}




/********************************************************************************************************
 * @name: graffNormalize()
 * @brief: setea la visibilidad de los graficos respectos al radioButton seleccionado.
 * @return: void
 * *****************************************************************************************************/
void MainWindow::graffNormalize( bool b )
{  
    QRadioButton* check = qobject_cast<QRadioButton*>( sender() );

    if(ui->graficoNorm->graphCount()> 0 && signalPrincipal!=nullptr)
    {

        if( check == ui->radioRms ){
            ui->graficoNorm->graph(1)->setVisible(b);
            ui->graficoNorm->graph(2)->setVisible(!b);
            ui->graficoNorm->graph(3)->setVisible(!b);
        }else if( check == ui->radioEnergy ){
            ui->graficoNorm->graph(1)->setVisible(!b);
            ui->graficoNorm->graph(2)->setVisible(b);
            ui->graficoNorm->graph(3)->setVisible(!b);
        }else if( check == ui->radioNorm ){
            ui->graficoNorm->graph(1)->setVisible(!b);
            ui->graficoNorm->graph(2)->setVisible(!b);
            ui->graficoNorm->graph(3)->setVisible(b);
        }else{
            qDebug()<<"Controlar error de check ";
        }
        ui->graficoNorm->replot();
    }else{
        QMessageBox::information(this, tr("Aviso:"), tr("No hay datos para normalizar."));
        check->setChecked(false);
        return;
    }
    free(check);
    check = nullptr;
}

void MainWindow::normalize()
{
    if( !octaveP->getState() ){
        QMessageBox::information( this, tr("Error"),tr("Recurso: 'Octave-cli'\nEstado: ocupado") );
        return;

    }else{//path,separador,leerDesde,canal
        octaveP->setState(false);
        QString cmd;
        bool channel = ( ui->comboChannel->currentIndex() ) > -1;

        cmd.append("normSignal('");
        cmd.append( QDir::currentPath() );
        cmd.append( "/ejemplos/" );
        cmd.append( signalPrincipal->getNombre() );
        cmd.append( "','" );
        cmd.append( signalPrincipal->getSeparador() +"', '" );
        cmd.append( signalPrincipal->getLeerDesde() +"', '" );

        if( channel )
            cmd.append( QString( ui->comboChannel->currentIndex() ) +"');\n" );
        else
            cmd.append( "0');\n" );

        qDebug()<<"joaojaojaoj"<<cmd<<endl;
        connect( octaveP, SIGNAL( finalDataReady2() ), this, SLOT( chargeData2() ));
        octaveP->writeCmd2(cmd);
    }
}

/*******************************************************************************
 * @name: chargeData
 * @brief: Slot que carga los datos una vez que la señal "FinalReadyData" es
 *         emitida, o sea cuando se ha guardado toda la informacion proveniente
 *         de Octave en el buffer de la clase OctaveProcess
 * @return: void
 * *****************************************************************************/
void MainWindow::chargeData2(){

    qDebug()<<"[S:chargeData()] Cargando los datos...";
    disconnect( octaveP, SIGNAL( finalDataReady2() ), this, SLOT( chargeData2() ) );
    //int size = octaveP->getBuffer().size();// Tamaño de los datos a analizar
    //std::cout<<"size buff "<<size<<endl;

//    for( QString x: octaveP->getBuffer() ){
//        std::cout<<x.toStdString()<<endl;
//    }

    octaveP->setState(true);//se quita el cerrojo chino al resource
    QApplication::restoreOverrideCursor();

}

QVector<double> MainWindow::div(QVector<double> qVec, double dbl)const
{
    std::vector<double> tmp = qVec.toStdVector();
    std::transform( tmp.begin(), tmp.end(), tmp.begin(),
                    [&](double value){ return value/dbl; } );


    return QVector<double>::fromStdVector(tmp);
}

void MainWindow::calcularGraficosNormalizados(QVector<QVector<double> > senal,int canal,int a,int b)
{
    ui->statTab_mean->setText(QString::number(senal[1][0]));
    ui->statTab_median->setText(QString::number(senal[1][1]));
    ui->statTab_std->setText(QString::number(senal[1][2]));
    ui->statTab_var->setText(QString::number(senal[1][3]));
    ui->statTab_rms->setText(QString::number(senal[1][4]));
    ui->statTab_min->setText(QString::number(senal[1][5]));
    ui->statTab_max->setText(QString::number(senal[1][6]));
    ui->statTab_range->setText(QString::number(senal[1][7]));

    //restaurarGrafico(ui->graficoNorm);
    ui->graficoNorm->clearGraphs();
    ui->graficoNorm->addGraph();
    ui->graficoNorm->addGraph();
    ui->graficoNorm->addGraph();
    ui->graficoNorm->addGraph();
    ui->graficoNorm->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom|QCP::iSelectItems);
    //graff second
    ui->graficoNorm->graph(0)->setPen(Qt::DotLine);
    ui->graficoNorm->graph(0)->setPen(QColor(Qt::gray));
    ui->graficoNorm->graph(0)->setData(senal.at(0).mid(a,b),senal.at(canal).mid(a,b));
    ui->graficoNorm->graph(0)->setVisible(true);

    ui->graficoNorm->graph(1)->setPen(Qt::DotLine);
    ui->graficoNorm->graph(1)->setPen(QColor(Qt::green));
    ui->graficoNorm->graph(1)->setData(senal.at(0).mid(a,b), div(senal.at(canal).mid(a,b), signalPrincipal->getRms()));
    ui->graficoNorm->graph(1)->setVisible(false);

    ui->graficoNorm->graph(2)->setPen(Qt::DotLine);
    ui->graficoNorm->graph(2)->setPen(QColor(Qt::red));
    ui->graficoNorm->graph(2)->setData(senal.at(0).mid(a,b), div(senal.at(canal).mid(a,b), signalPrincipal->getEnergy()));
    ui->graficoNorm->graph(2)->setVisible(false);

    ui->graficoNorm->graph(3)->setPen(Qt::DotLine);
    ui->graficoNorm->graph(3)->setPen(QColor(Qt::blue));
    ui->graficoNorm->graph(3)->setData(senal.at(0).mid(a,b),div(senal.at(canal).mid(a,b), signalPrincipal->getNorm()) );
    ui->graficoNorm->graph(3)->setVisible(false);

    ui->graficoNorm->replot();
    ui->graficoNorm->rescaleAxes();
}




void MainWindow::on_action_doTest_triggered()
{
    //    int w = 600;
    //    int h = 300;
    //    int x = this->geometry().width()/2 - w/2;
    //    int y = this->geometry().height()/2 - h/2;

    //    QDialog *consolaOctave = new QDialog(this);
    //    QToolBar *toolbar = new QToolBar("Analisis Multiple");
    //    QStatusBar *statusBar = new QStatusBar;


    //    QMainWindow * mainWindow = new QMainWindow();
    //    mainWindow->addToolBar(toolbar);
    //    mainWindow->setStatusBar(statusBar);
    //    QHBoxLayout * layout = new QHBoxLayout();
    //    layout->addWidget(mainWindow);
    //    consolaOctave->setLayout(layout);

    //    consolaOctave->setGeometry(x,y,w,h);
    //    consolaOctave->show();
    //    statusBar->showMessage("Hola Mundo!", 10000);

    /* Prueba de Objetos*/

//    cProject *cp = new cProject("1", "P1", "10/12/2017", "10/12/2018");
//    qInfo()<<cp->toString()<<endl;
//    cPaciente *cpa = new cPaciente("17.165.923-k", "Diego", "Campos", "Linares");
//    qInfo()<<cpa->toString()<<endl;

    newSesion();
}

