#include "analisismultiples.h"
#include "ui_analisismultiples.h"
#include "cargadatos.h"


int btnSender = -1;     // Boton que solicita el analisis
int canalActual = -1;   // Canal al que se le aplicara el analisis
int analisis = -1;      // Analisis solicitado
int indCBox = 0;        // Actual checkBox seleccionado
int min = -1;
int max = -1;

AnalisisMultiples::AnalisisMultiples(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AnalisisMultiples)
{
    ui->setupUi(this);

    octaveP = OctaveProcess::getInstance();

    //connecta el checkBox actual clickeado con la variable analsis.
    connect(ui->checkBox_signal1, &QCheckBox::toggled, [=] () {indCBox = 0; updateSlider(); } );
    connect(ui->checkBox_signal2, &QCheckBox::toggled, [=] () {indCBox = 1; updateSlider(); } );
    connect(ui->checkBox_signal3, &QCheckBox::toggled, [=] () {indCBox = 2; updateSlider(); } );
    connect(ui->checkBox_signal4, &QCheckBox::toggled, [=] () {indCBox = 3; updateSlider(); } );

    // Inicializacion de las listas de señales, graficos, comboBox, checkBox y graficos de resultado
    listSignals<<signal_1<<signal_2<<signal_3<<signal_4;
    listGraph<<ui->Signal_1<<ui->Signal_2<<ui->Signal_3<<ui->Signal_4;
    listcBox<<ui->cBox_canalS1<<ui->cBox_canalS2<<ui->cBox_canalS3<<ui->cBox_canalS4;
    listCheckBox<<ui->checkBox_signal1<<ui->checkBox_signal2<<ui->checkBox_signal3<<ui->checkBox_signal4;

    // Configuracion basica del Slider: position, range and connect
    ui->SliderGraficosAM->setLowerPosition(0);
    ui->SliderGraficosAM->setUpperPosition(ui->SliderGraficosAM->maximum());
    ui->SliderGraficosAM->setHandleMovementMode(QxtSpanSlider::NoOverlapping);
    configureRedLines(0,5000,100);
    configureRedLines(1,5000,100);
    configureRedLines(2,5000,100);
    configureRedLines(3,5000,100);
    connect(ui->SliderGraficosAM, &QxtSpanSlider::lowerValueChanged,[=](const int value){ updateSBoxRedLine(value,0); });
    connect(ui->SliderGraficosAM, &QxtSpanSlider::upperValueChanged,[=](const int value){ updateSBoxRedLine(value,1); });

    ui->dockSignal_1->installEventFilter(this);
    ui->dockSignal_2->installEventFilter(this);
    ui->dockSignal_3->installEventFilter(this);
    ui->dockSignal_4->installEventFilter(this);

}

bool AnalisisMultiples::eventFilter(QObject *target, QEvent *event)
{
    if (event->type() == QCloseEvent::Close) {
        QDockWidget *dock = qobject_cast<QDockWidget *>(target);
        dock->setFloating(false);
        event->ignore();
        return true;
    }
    return QWidget::eventFilter(target, event);
}

AnalisisMultiples::~AnalisisMultiples()
{
    delete ui;
}

void AnalisisMultiples::setConfig(appSettings *config)
{
    ConfigGlobales = config;
}

void AnalisisMultiples::on_abrir_s1_clicked()
{   
    btnSender = 0;
    canalActual = 1;

    CargaDatos *dialogoFile = new CargaDatos();
    dialogoFile->setHistorialVar(new QList<QString>());
    connect(dialogoFile,SIGNAL( lecturaAceptada(cSignal*) ), this, SLOT( setDatos(cSignal*)));
    dialogoFile->exec();
}

void AnalisisMultiples::on_abrir_s2_clicked()
{
    btnSender = 1;
    canalActual = 1;

    CargaDatos *dialogoFile = new CargaDatos();
    dialogoFile->setHistorialVar(new QList<QString>());
    connect(dialogoFile,SIGNAL( lecturaAceptada(cSignal*) ), this, SLOT( setDatos(cSignal*)));
    dialogoFile->exec();
}

void AnalisisMultiples::on_abrir_s3_clicked()
{
    btnSender = 2;
    canalActual = 1;

    CargaDatos *dialogoFile = new CargaDatos();
    dialogoFile->setHistorialVar(new QList<QString>());
    connect(dialogoFile,SIGNAL( lecturaAceptada(cSignal*) ), this, SLOT( setDatos(cSignal*)));
    dialogoFile->exec();
}

void AnalisisMultiples::on_abrir_s4_clicked()
{
    btnSender = 3;
    canalActual = 1;

    CargaDatos *dialogoFile = new CargaDatos();
    dialogoFile->setHistorialVar(new QList<QString>());
    connect(dialogoFile,SIGNAL( lecturaAceptada(cSignal*) ), this, SLOT( setDatos(cSignal*)));
    dialogoFile->exec();
}

void AnalisisMultiples::setDatos(cSignal *s)
{
    listSignals[btnSender] = new cSignal();
    listSignals[btnSender]->setPath(s->getPath());
    listSignals[btnSender]->setCanales(s->getCanales());
    listSignals[btnSender]->setFs(s->getFs());
    listSignals[btnSender]->setLeerDesde(s->getLeerDesde());
    listSignals[btnSender]->setSeparador(s->getSeparador());

    FNG->cargaGrafica(listCheckBox[btnSender],listGraph[btnSender],listcBox[btnSender],canalActual,listSignals[btnSender]);

    QDockWidget *dock = qobject_cast<QDockWidget *>(listGraph[btnSender]->parent());
    dock->setWindowTitle("File name: "+s->getNombre()+"  -  Sampling frequency: "+QString::number(s->getFs().toDouble()*1000)+"Hz");
    listCheckBox[btnSender]->setChecked(true);

    updateSlider();
}

void AnalisisMultiples::on_actionReplot_triggered()
{
    if(listCheckBox[indCBox]->isEnabled())
    {

        canalActual = listcBox[indCBox]->currentIndex()+1;
        FNG->cargaGrafica(listCheckBox[indCBox],listGraph[indCBox],listcBox[indCBox],canalActual,listSignals[indCBox]);
        return;
    }else{
        QMessageBox::information(this,"Analisis Multiple","Seleccione o cargue una señal antes de aplicar un analisis",QMessageBox::Ok);
    }
}

void AnalisisMultiples::on_actionShow_Graphs_triggered()
{
    QList<QDockWidget *> allDocks = this->findChildren<QDockWidget *>();
    qDebug() <<allDocks.size();
}




void AnalisisMultiples::on_actionSpectrogram_triggered()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState())
    {
        analisis = sgram;
        int min = ui->SliderGraficosAM->lowerValue();
        int max = ui->SliderGraficosAM->upperValue();

        if(listCheckBox[indCBox]->isEnabled())
        {            
            octaveP->setState(false);
            connect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));

            canalActual = listcBox[indCBox]->currentIndex()+1;
            listSignals[indCBox]->resultSignal.clear();
            listSignals[indCBox]->resultSignal.resize(2);
            listSignals[indCBox]->setMetodo("Spectrogram");

            QStringList parametros = ConfigGlobales->getParametrosSgram();
            QString cmd = "OctaveSpectrogram('"+listSignals[indCBox]->getPath()+"','"+listSignals[indCBox]->getSeparador()+"','"+listSignals[indCBox]->getLeerDesde()+"','"+listSignals[indCBox]->getCanales()+"','"+listSignals[indCBox]->getFs()+"','"+QString::number(min)+"','"+QString::number(max)+"','"+QString::number(canalActual)+"','"+parametros[0]+"','"+parametros[1]+"','"+parametros[2]+"','"+parametros[3]+"');\n";

            qInfo()<<"[Spectrogram] Comando enviado a Octave:"<<cmd<<endl;
            octaveP->writeCmd(cmd);
            return;
        }else{
            QMessageBox::information(this,"Analisis Multiple","Seleccione o cargue una señal antes de aplicar un analisis",QMessageBox::Ok);
        }
    }else{
        QMessageBox::information(this,"Analisis Multiple","Recurso: 'Octave-cli'\nEstado: No disponible",QMessageBox::Ok);
    }
}

void AnalisisMultiples::on_actionFourier_triggered()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState())
    {
        analisis = dft;
        int min = ui->SliderGraficosAM->lowerValue();
        int max = ui->SliderGraficosAM->upperValue();

        if(listCheckBox[indCBox]->isEnabled())
        {            
            octaveP->setState(false);
            connect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));

            canalActual = listcBox[indCBox]->currentIndex()+1;
            listSignals[indCBox]->resultSignal.clear();
            listSignals[indCBox]->resultSignal.resize(2);
            listSignals[indCBox]->setMetodo("Discrete Fourier Transform");

            QString cmd = "OctaveFourier('"+listSignals[indCBox]->getPath()+"','"+listSignals[indCBox]->getSeparador()+"','"+listSignals[indCBox]->getLeerDesde()+"','"+listSignals[indCBox]->getCanales()+"','"+listSignals[indCBox]->getFs()+"','"+QString::number(min)+"','"+QString::number(max)+"','"+QString::number(canalActual)+"','0');\n";

            qInfo()<<"[Fourier] Comando enviado a Octave:"<<cmd<<endl;
            octaveP->writeCmd(cmd);
            return;
        }else{
            QMessageBox::information(this,"Analisis Multiple","Seleccione o cargue una señal antes de aplicar un analisis",QMessageBox::Ok);
        }
    }else{
        QMessageBox::information(this,"Analisis Multiple","Recurso: 'Octave-cli'\nEstado: No disponible",QMessageBox::Ok);
    }
}

void AnalisisMultiples::on_actionGabor_Transform_triggered()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState())
    {
        analisis = gabor;
        min = ui->SliderGraficosAM->lowerValue();
        max = ui->SliderGraficosAM->upperValue();

        if(listCheckBox[indCBox]->isEnabled())
        {            
            octaveP->setState(false);
            connect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));

            canalActual = listcBox[indCBox]->currentIndex()+1;
            listSignals[indCBox]->resultSignal.clear();
            listSignals[indCBox]->resultSignal.resize(2);
            listSignals[indCBox]->setMetodo("Discrete Gabor Transform");

            QStringList parametros = ConfigGlobales->getParametrosGabor();
            QString cmd = "OctaveGabor('"+listSignals[indCBox]->getPath()+"','"+listSignals[indCBox]->getSeparador()+"','"+listSignals[indCBox]->getLeerDesde()+"','"+listSignals[indCBox]->getCanales()+"','"+listSignals[indCBox]->getFs()+"','"+QString::number(min)+"','"+QString::number(max)+"','"+QString::number(canalActual)+"','"+parametros[0]+"','"+parametros[1]+"','"+parametros[2]+"','"+parametros[3]+"','"+parametros[4]+"','"+parametros[5]+"');\n";

            qInfo()<<"[Gabor_Transform] Comando enviado a Octave:"<<cmd<<endl;
            octaveP->writeCmd(cmd);
            return;
        }else{
            QMessageBox::information(this,"Analisis Multiple","Seleccione o cargue una señal antes de aplicar un analisis",QMessageBox::Ok);
        }
    }else{
        QMessageBox::information(this,"Analisis Multiple","Recurso: 'Octave-cli'\nEstado: No disponible",QMessageBox::Ok);
    }
}

void AnalisisMultiples::on_actionWavelet_Transform_triggered()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState())
    {
        analisis = wavelet;
        min = ui->SliderGraficosAM->lowerValue();
        max = ui->SliderGraficosAM->upperValue();

        if(listCheckBox[indCBox]->isEnabled())
        {
            octaveP->setState(false);
            connect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));

            canalActual = listcBox[indCBox]->currentIndex()+1;
            listSignals[indCBox]->resultSignal.clear();
            listSignals[indCBox]->resultSignal.resize(2);
            listSignals[indCBox]->setMetodo("Discrete Gabor Transform");

            QStringList parametros = ConfigGlobales->getParametrosWavelet();
            QString cmd = "OctaveWavelet('"+listSignals[indCBox]->getPath()+"','"+listSignals[indCBox]->getSeparador()+"','"+listSignals[indCBox]->getLeerDesde()+"','"+listSignals[indCBox]->getCanales()+"','"+listSignals[indCBox]->getFs()+"','"+QString::number(min)+"','"+QString::number(max)+"','"+QString::number(canalActual)+"','"+parametros[0]+"','"+parametros[1]+"','"+parametros[2]+"','"+parametros[3]+"','"+parametros[4]+"','"+parametros[5]+"');\n";

            qInfo()<<"[Wavelet_Transform] Comando enviado a Octave:"<<cmd<<endl;
            octaveP->writeCmd(cmd);
            return;
        }else{
            QMessageBox::information(this,"Analisis Multiple","Seleccione o cargue una señal antes de aplicar un analisis",QMessageBox::Ok);
        }
    }else{
        QMessageBox::information(this,"Analisis Multiple","Recurso: 'Octave-cli'\nEstado: No disponible",QMessageBox::Ok);
    }
}

void AnalisisMultiples::on_actionHistogram_triggered()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState())
    {
        analisis = histc;
        int min = ui->SliderGraficosAM->lowerValue();
        int max = ui->SliderGraficosAM->upperValue();

        if(listCheckBox[indCBox]->isEnabled())
        {            
            octaveP->setState(false);
            connect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));

            canalActual = listcBox[indCBox]->currentIndex()+1;
            listSignals[indCBox]->resultSignal.clear();
            listSignals[indCBox]->resultSignal.resize(2);
            listSignals[indCBox]->setMetodo("Discrete Gabor Transform");

            QString cmd = "menuOctave('"+listSignals[indCBox]->getPath()+"','"+listSignals[indCBox]->getSeparador()+"','"+listSignals[indCBox]->getLeerDesde()+"','"+listSignals[indCBox]->getCanales()+"','"+listSignals[indCBox]->getFs()+"','"+QString::number(min)+"','"+QString::number(max)+"','"+QString::number(canalActual)+"','histc');\n";

            qInfo()<<"[Histogram] Comando enviado a Octave:"<<cmd<<endl;
            octaveP->writeCmd(cmd);
            return;
        }else{
            QMessageBox::information(this,"Analisis Multiple","Seleccione o cargue una señal antes de aplicar un analisis",QMessageBox::Ok);
        }
    }else{
        QMessageBox::information(this,"Analisis Multiple","Recurso: 'Octave-cli'\nEstado: No disponible",QMessageBox::Ok);
    }
}

void AnalisisMultiples::on_actionMoovingRms_triggered()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState())
    {
        analisis = mrms;
        min = ui->SliderGraficosAM->lowerValue();
        max = ui->SliderGraficosAM->upperValue();

        if(listCheckBox[indCBox]->isEnabled())
        {            
            octaveP->setState(false);
            connect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));

            canalActual = listcBox[indCBox]->currentIndex()+1;
            listSignals[indCBox]->resultSignal.clear();
            listSignals[indCBox]->resultSignal.resize(2);
            listSignals[indCBox]->setMetodo("moving RMS");

            QStringList parametros = ConfigGlobales->getParametrosMovingRMS();
            QString cmd = "menuOctave('"+listSignals[indCBox]->getPath()+"','"+listSignals[indCBox]->getSeparador()+"','"+listSignals[indCBox]->getLeerDesde()+"','"+listSignals[indCBox]->getCanales()+"','"+listSignals[indCBox]->getFs()+"','"+QString::number(min)+"','"+QString::number(max)+"','"+QString::number(canalActual)+"','movingrms','"+parametros[0]+"','"+parametros[1]+"');\n";

            qInfo()<<"[MoovingRms] Comando enviado a Octave:"<<cmd<<endl;
            octaveP->writeCmd(cmd);
            return;
        }else{
            QMessageBox::information(this,"Analisis Multiple","Seleccione o cargue una señal antes de aplicar un analisis",QMessageBox::Ok);
        }
    }else{
        QMessageBox::information(this,"Analisis Multiple","Recurso: 'Octave-cli'\nEstado: No disponible",QMessageBox::Ok);
    }
}

void AnalisisMultiples::on_actionMean_Frequency_triggered()
{
    octaveP = OctaveProcess::getInstance();
    if(octaveP->getState())
    {
        analisis = meanfreq;
        min = ui->SliderGraficosAM->lowerValue();
        max = ui->SliderGraficosAM->upperValue();

        if(listCheckBox[indCBox]->isEnabled())
        {
            octaveP->setState(false);
            connect( octaveP, SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));

            canalActual = listcBox[indCBox]->currentIndex()+1;
            listSignals[indCBox]->resultSignal.clear();
            listSignals[indCBox]->resultSignal.resize(2);
            listSignals[indCBox]->setMetodo("Mean Frequency");

            QStringList parametros = ConfigGlobales->getParametrosMeanFrequency();
            QString cmd = "menuOctave('"+listSignals[indCBox]->getPath()+"','"+listSignals[indCBox]->getSeparador()+"','"+listSignals[indCBox]->getLeerDesde()+"','"+listSignals[indCBox]->getCanales()+"','"+listSignals[indCBox]->getFs()+"','"+QString::number(min)+"','"+QString::number(max)+"','"+QString::number(canalActual)+"','meanfreq','"+parametros[0]+"','"+parametros[1]+"');\n";

            qInfo()<<"[Mean_Frequency] Comando enviado a Octave:"<<cmd<<endl;
            octaveP->writeCmd(cmd);
            return;
        }else{
            QMessageBox::information(this,"Analisis Multiple","Seleccione o cargue una señal antes de aplicar un analisis",QMessageBox::Ok);
        }
    }else{
        QMessageBox::information(this,"Analisis Multiple","Recurso: 'Octave-cli'\nEstado: No disponible",QMessageBox::Ok);
    }
}




void AnalisisMultiples::updateSlider()
{
    ui->SliderGraficosAM->setEnabled(true);
    int Max = listSignals[indCBox]->getSizeIntervalo();
    ui->SliderGraficosAM->setRange(0,Max);
    ui->SliderGraficosAM->setLowerPosition(0);
    ui->SliderGraficosAM->setUpperPosition(ui->SliderGraficosAM->maximum());
}

void AnalisisMultiples::configureRedLines(int i, int size, int fs)
{
    listRedItemsA.insert(i, new QCPItemLine(listGraph[i]));
    listGraph[i]->addItem(listRedItemsA[i]);
    listRedItemsA[i]->setPen(QPen(Qt::red, 2));
    listRedItemsA[i]->start->setCoords(0,-5000);
    listRedItemsA[i]->end->setCoords(0,5000);

    listRedItemsB.insert(i, new QCPItemLine(listGraph[i]));
    listGraph[i]->addItem(listRedItemsB[i]);
    listRedItemsB[i]->setPen(QPen(Qt::red, 2));
    listRedItemsB[i]->start->setCoords(size/fs,-5000);
    listRedItemsB[i]->end->setCoords(size/fs,5000);
    listGraph[i]->xAxis->setRange(-10,60);
    listGraph[i]->yAxis->setRange(-10,10);
}

void AnalisisMultiples::updateSBoxRedLine(int value, int item)
{
    double valor = listSignals[indCBox]->readSignal[0].at(value);
    if(item == 0){
        ui->MinSBox->setValue(valor);
        listRedItemsA[indCBox]->start->setCoords(valor,-5000);
        listRedItemsA[indCBox]->end->setCoords(valor,5000);
    }else{
        ui->MaxSBox->setValue(valor);
        listRedItemsB[indCBox]->start->setCoords(valor,-5000);
        listRedItemsB[indCBox]->end->setCoords(valor,5000);
    }
    listGraph[indCBox]->replot();
}

void AnalisisMultiples::chargeData(){
    qInfo()<<"[chargeData] Cargando los datos..."<<endl;
    double i = 0;
    QStringList parametros;
    int size = OctaveProcess::getInstance()->getBuffer().size();     // Tamaño de los datos a analizar
    double Fs = listSignals[indCBox]->getFs().toDouble()*500;        // Frecuencia de muestreo
    double tick = Fs/size;                                           // Variable necesaria para poder construir el eje_x en la transformada de fourier.
    bool ok = false;                                                 // Se usa en la conversion de los datos doubles.
    double n = 0;


    FNG->setParent(this->centralWidget());

    int a = ui->SliderGraficosAM->lowerValue();                 // Rango menor del slider
    int b = ui->SliderGraficosAM->upperValue();                 // Rango mayor del slider

    for ( QString s: OctaveProcess::getInstance()->getBuffer() ){
        //qInfo()<<s<<endl;
        n = s.toDouble(&ok);
        if(ok){
            listSignals[indCBox]->resultSignal[0].append(i);
            listSignals[indCBox]->resultSignal[1].append(n);
            i=i+tick;
        }
    }

    qInfo()<<"[chargeData] Tamaño de los datos recibidos:"<<size<<endl;


//    // Se discrimina para saber que se hara con los datos recibidos y se llama a la funcion correspondiente.
    switch (analisis) {
    case 0:
        FNG->graficarFourier(NULL, listSignals[indCBox]->resultSignal, 0, listSignals[indCBox]->getFs().toDouble()*500, ConfigGlobales->getParametrosFourier());
        break;
    case 1:
        //graficarFourier(sigActual->resultSignal, graffico, 0, signalPrincipal->getFs().toDouble()*500);
        break;
    case 2:
        FNG->graficarGabor(NULL, listSignals[indCBox]->resultSignal, a, b, listSignals[indCBox]->getFs().toDouble());
        break;
    case 3:
        FNG->graficarWavelet(NULL, listSignals[indCBox]->resultSignal, a, b, listSignals[indCBox]->getFs().toDouble());
        break;
    case 4:
        FNG->graficarSpectrogram(NULL, listSignals[indCBox]->resultSignal, a, b, listSignals[indCBox]->getFs().toDouble() );
        break;
    case 5:        
        FNG->graficarHistograma(NULL, listSignals[indCBox]->resultSignal, "hist_normal");
        break;
    case 6:
        FNG->graficarHistograma(NULL, listSignals[indCBox]->resultSignal, "hist_fourier");
        break;
    case 7:
        FNG->graficarMovingRms(NULL, listSignals[indCBox]->resultSignal.at(1),listSignals[indCBox]->readSignal.at(0), min, max);
        break;
    case 8:
        parametros = ConfigGlobales->getParametrosMeanFrequency();
        FNG->graficarMeanFrequency(NULL, listSignals[indCBox]->resultSignal.at(1),listSignals[indCBox]->getFs().toDouble(), min, max, parametros[2]);
        break;
    default:
        break;
    }

    // Se restablece el rango de los sliders. min y max
    min = -1;
    max = -1;
    OctaveProcess::getInstance()->setState(true);                           //se quita el cerrojo al resource
    disconnect( OctaveProcess::getInstance(), SIGNAL( finalDataReady() ), this, SLOT( chargeData() ));
    QApplication::restoreOverrideCursor();
}




