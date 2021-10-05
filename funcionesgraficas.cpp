#include "funcionesgraficas.h"

funcionesGraficas::funcionesGraficas()
{

}

void funcionesGraficas::setParent(QWidget *parent){
    this->parent = parent;
}

/********************************************************************************************************
 * @name: graficarSpectrogram()
 * @brief: Grafica los datos del espectrograma tomando en cuenta que los dos ultimos valores del vector de
 *         datos corresponden a las dimensiones de la matriz de salida de octave.
 * @return: bool
 * *****************************************************************************************************/
void funcionesGraficas::restaurarGrafico(QCustomPlot *grafico){
    bool colColor = grafico->plotLayout()->hasElement(0,1);
    if(colColor)
    {
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

void funcionesGraficas::cargaGrafica(QCheckBox *checkBox,QCustomPlot *grafico, QComboBox *cBox, int canal, cSignal *signal)
{    
    cBox->clear();
    if( leer(signal)==true){
        qInfo()<<"[cargandoGraficas] Añadiendo datos de la serie Temporal."<<endl;
        graficarPrincipal(grafico,signal->readSignal,canal,plot);

        QString itm;
        for (int i = 1; i <= signal->getCanales().toInt(); i++){
            itm.setNum(i);
            qInfo()<<"[F: cargaGrafica()] Habilitando y añadiendo a comboBox los canales: "<< itm<<endl;
            cBox->addItem(itm);
        }
        habilitarCampos(true,grafico,cBox,checkBox);
    }else
        qCritical()<<"[cargandoGraficas] Error: No se logro la leer el archivo."<<endl;

    cBox->setCurrentIndex(canal-1);
}

bool funcionesGraficas::leer(cSignal *signal)
{
    QFile fin(signal->getPath());

    if (!fin.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"[leer] Error al abrir el archivo en: "<<signal->getPath()<<endl;
        return false;
    }
    QTextStream in(&fin);
    QString line;
    QStringList strList;
    int cont=0;
    int canales = signal->getCanales().toInt()+1;

    for (int i = 0; i <= signal->getLeerDesde().toInt(); i++){
        line=in.readLine();
    }
    strList = line.split(signal->getSeparador());

    if((strList.size())!= canales)
    {
        qCritical()<<"[leer] El Numero de canales del archivo no coincide."<<endl;
        return false;
    }

    while (!line.isNull()) {
        signal->readSignal.resize(canales);
        for (int i = 0; i < canales; i++){
            (signal->readSignal)[i].append( QString(strList.at(i)).toDouble() );
        }
        cont++;
        line = in.readLine();
        strList = line.split(signal->getSeparador());
    }

    qInfo()<<"[leer] Cantidad de lineas leidas: "<<cont<<endl;
    signal->setSizeIntervalo(cont-1);

    return true;
}

void funcionesGraficas::graficarPrincipal(QCustomPlot *grafico, QVector<QVector<double> > senal, int canal,int tipo, int a,int b)
{
    restaurarGrafico(grafico);
    grafico->addGraph();
    switch (tipo){
        case plot:
                qInfo()<<"[graficarPrincipal] Graficando serie Temporal."<<endl;
                grafico->graph(0)->setData(senal.at(0).mid(a,b),senal.at(canal).mid(a,b));
                grafico->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom|QCP::iSelectItems);
                break;

        default:
                qDebug()<<"[graficarPrincipal] Error en el tipo de grafico."<<endl;

    }
    grafico->rescaleAxes();
    grafico->replot();
}

void funcionesGraficas::habilitarCampos(bool b, QCustomPlot *grafico, QComboBox *cBox, QCheckBox *checkBox)
{
    QDockWidget *dock = qobject_cast<QDockWidget *>(grafico->parent());
    dock->setEnabled(b);
    cBox->setEnabled(b);
    checkBox->setEnabled(b);
}

bool funcionesGraficas::graficarSpectrogram(QCustomPlot *cp, QVector<QVector<double>> s, int a, int b, double Fs)
{
    QCustomPlot *grafico;
    if(cp==NULL){
        grafico = new QCustomPlot();
        centrarGraficos("Spectrogram",grafico,500,400);
    }else
        grafico = cp;
    restaurarGrafico(grafico);
    double fs = Fs*1000;
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


    qDebug()<<"[Spectrogram] Graficando ColorMap (Spectrogram) : columnas="<<col<<" ; filas="<<filas<<endl;

    grafico->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom);
    grafico->xAxis->setLabel("Time (s)");
    grafico->yAxis->setLabel("Frequency (Hz)");
    QCCM = new QCPColorMap(grafico->xAxis, grafico->yAxis);
    grafico->addPlottable(QCCM);

    //Values in the x and y direction
    QCCM->data()->setKeyRange(QCPRange(aa, bb));
    QCCM->data()->setValueRange(QCPRange(0, Fs*500));

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

    grafico->rescaleAxes();
    grafico->replot();

    guardarImagen(grafico,"Spectrogram.png");

    return true;
}

void funcionesGraficas::graficarFourier(QCustomPlot *cp, QVector<QVector<double>> s, int a, int b, QStringList parametros){
    (void) a;
    (void) b;
    QCustomPlot *grafico;
    if(cp==NULL){
        grafico = new QCustomPlot();
        centrarGraficos("Transformada de Fourier",grafico,500,400);
    }else
        grafico = cp;
    restaurarGrafico(grafico);

    qDebug()<<"[Fourier] Graficando Transformada de Fourier."<<s.at(1).size()<<endl;

    grafico->addGraph();
    grafico->yAxis->setPadding(10);
    grafico->xAxis->setPadding(10);
    grafico->xAxis->setLabel("Frequency (Hz)");
    grafico->yAxis->setLabel("Amplitude (V)");
    grafico->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

    if (parametros[0]=="fourier")
    {
        if(parametros[1]=="impulse"){
            grafico->graph(0)->setData(s.at(0), s.at(1));
            grafico->graph(0)->setPen(QPen(Qt::blue));
        }
        else{
            dibujarCurvaFrecuenciasMedia(parametros, s, grafico);
        }
    }
    else if(parametros[0]=="histograma"){
        //dibujarHistograma();
        QMessageBox::information(grafico,"Fourier transform:","Método no implementado.",QMessageBox::Ok);
    }

    grafico->rescaleAxes();
    grafico->replot();

    guardarImagen(grafico,"Fast_Fourier_Transform.png");
}

bool funcionesGraficas::graficarGabor(QCustomPlot *cp, QVector<QVector<double> > s, int a, int b, double Fs)
{
    QCustomPlot *grafico;
    if(cp==NULL){
        grafico = new QCustomPlot();
        centrarGraficos("Transformada de Gabor",grafico,500,400);
    }else
        grafico = cp;
    restaurarGrafico(grafico);

    double fs = Fs*1000;
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


    qDebug()<<"[GaborTransform] Graficando Transformada de Gabor : columnas="<<col<<" ; filas="<<filas<<endl;

    grafico->setInteractions(QCP::iRangeDrag);
    grafico->xAxis->setLabel("Time (s)");
    grafico->yAxis->setLabel("Frequency (Hz)");
    QCCM = new QCPColorMap(grafico->xAxis, grafico->yAxis);
    grafico->addPlottable(QCCM);

    //Values in the x and y direction
    QCCM->data()->setKeyRange(QCPRange(aa, bb));
    QCCM->data()->setValueRange(QCPRange(0, Fs*500));

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

    grafico->rescaleAxes();
    grafico->replot();

    guardarImagen(grafico,"Gabor_Transform.png");

    return true;
}

bool funcionesGraficas::graficarWavelet(QCustomPlot *cp, QVector<QVector<double> > s, int a, int b, double Fs)
{
    QCustomPlot *grafico;
    if(cp==NULL){
        grafico = new QCustomPlot();
        centrarGraficos("Transformada de Wavelets",grafico,500,400);
    }else
        grafico = cp;
    restaurarGrafico(grafico);

    double fs = Fs*1000;
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


    qDebug()<<"[WaveletTransform] Graficando Transformada de Wavelet : columnas="<<col<<" ; filas="<<filas<<endl;

    grafico->setInteractions(QCP::iRangeDrag);
    grafico->xAxis->setLabel("Time (s)");
    grafico->yAxis->setLabel("Frequency (Hz)");
    QCCM = new QCPColorMap(grafico->xAxis, grafico->yAxis);
    grafico->addPlottable(QCCM);

    //Values in the x and y direction
    QCCM->data()->setKeyRange(QCPRange(aa, bb));
    QCCM->data()->setValueRange(QCPRange(0, Fs*500));

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

    grafico->rescaleAxes();
    grafico->replot();

    guardarImagen(grafico,"Wavelet_Transform.png");

    return true;
}

void funcionesGraficas::graficarHistograma(QCustomPlot *cp, QVector<QVector<double>> s, QString tipo)
{
    QString nombreGrafico = "";
    QCustomPlot *grafico;
    if(cp==NULL){
        grafico = new QCustomPlot();
        centrarGraficos("Histograma de Frecuencias",grafico,500,400);
    }else
        grafico = cp;
    restaurarGrafico(grafico);

    qInfo()<<"[Histograma] Graficando el Histograma de Frecuencias."<<endl;
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
    if(tipo=="hist_normal"){
        nombreGrafico = "Histogram.png";
        grafico->yAxis->setLabel("[V]");
        grafico->xAxis->setLabel("[n]");
    }else{
        nombreGrafico = "Histogram_Fourier.png";
        grafico->yAxis->setLabel("Frequency");
        grafico->xAxis->setLabel("Amplitude");
    }

    // Add data:
    bars->setData(s.at(1).mid(max,tam-1), s.at(1).mid(0,max-1));

    // setup legend:
    grafico->legend->setVisible(true);
    grafico->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignRight);
    grafico->legend->setBrush(QColor(255, 255, 255, 200));

    grafico->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

    grafico->rescaleAxes();
    grafico->replot();

    guardarImagen(grafico,nombreGrafico);

}

void funcionesGraficas::dibujarCurvaFrecuenciasMedia(QStringList parametros, QVector<QVector<double>> s, QCustomPlot *grafico){

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

    grafico->rescaleAxes();
    grafico->replot();
    guardarImagen(grafico,"Mean_Frequency.png");
}

void funcionesGraficas::graficarMovingRms(QCustomPlot *cp, QVector<double> s, QVector<double> t, int a, int b){

    QCustomPlot *graffico;
    if(cp==NULL){
        graffico = new QCustomPlot();
        centrarGraficos("Moving RMS",graffico,500,400);
    }else
        graffico = cp;
    restaurarGrafico(graffico);

    qInfo()<<"[MovingRms] Graficando el RMS en el tiempo."<<endl;
    graffico->addGraph();

    graffico->graph(0)->setData(t.mid(a,b),s.mid(a,b));
    graffico->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom|QCP::iSelectItems);

    graffico->rescaleAxes();
    graffico->replot();
    guardarImagen(graffico,"MovingRms.png");
}

void funcionesGraficas::graficarMeanFrequency(QCustomPlot *cp, QVector<double> result, double fs, int a, int b, QString tipo)
{
    QCustomPlot *graffico;
    if(cp==NULL){
        graffico = new QCustomPlot();
        centrarGraficos("Mean Frequency",graffico,500,400);
    }else
        graffico = cp;
    restaurarGrafico(graffico);

    qInfo()<<"[MeanFrequency] Graficando el la frecuencia media en el tiempo."<<endl;
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

    guardarImagen(graffico,"Mean_Frequency.png");
}

void funcionesGraficas::centrarGraficos(QString title, QCustomPlot *grafico, int w, int h)
{
    QDesktopWidget *desktop = QApplication::desktop();
    QRect pantalla = desktop->screenGeometry();
    int px  = (pantalla.width()/2) -w/2;
    int py = (pantalla.height()/2) -h/2;

    //QDockWidget *dock = qobject_cast<QDockWidget *>(grafico->parent());
    QDockWidget *dock = new QDockWidget(parent);
    dock->setWindowFlags(Qt::WindowStaysOnTopHint);
    dock->setWindowTitle(title);
    dock->setWidget(grafico);
    dock->setFloating(true);
    dock->setVisible(true);

    dock->setGeometry(px,py,w,h);
    grafico->rescaleAxes();
    grafico->replot();

}

void funcionesGraficas::guardarImagen(QCustomPlot *cp, QString name)
{
    //nombres de las imagenes: gabor, wavelete, sgram, fourier,

    QString path = QDir::currentPath()+"/reportes";
    if(!QDir(path).exists())
        QDir().mkdir(QDir::currentPath()+"/reportes");
    QFile file(path+"/"+name);
    file.open(QIODevice::WriteOnly);
    cp->toPixmap(1920/3,1280/3).save(&file, "PNG");
}
