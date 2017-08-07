#include "appsettings.h"
#include "ui_appsettings.h"
#include <QDialog>
#include <QDesktopWidget>
#include "codeeditor.h"
#include <QGridLayout>
#include <QDesktopServices>


appSettings::appSettings(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::appSettings)
{
    ui->setupUi(this);
     connect(this, SIGNAL(topLevelChanged(bool)), this, SLOT(close()));

    //Pestaña de Transformada de Fourier   
    connect(ui->Fourier_gb_Type, &QGroupBox::toggled, [=](const bool Value ) { ui->Fourier_gb_Histogram->setChecked(!Value);  } );
    connect(ui->Fourier_gb_Histogram, &QGroupBox::toggled, [=](const bool Value ) { ui->Fourier_gb_Type->setChecked(!Value);  } );


    //Pestaña de Spectrogram
    connect(ui->sgram_wlen, &QCheckBox::toggled, [=](const bool Value ) { ui->sgram_wlen_value->setEnabled(Value);  } );
    connect(ui->sgram_tfr, &QCheckBox::toggled, [=](const bool Value ) { ui->sgram_tfr_value->setEnabled(Value);  } );

    //Pestaña de Transformada de Gabor
    connect(ui->gabor_cB_GaborWind, &QCheckBox::toggled, [=](const bool value ) { ui->gabor_windowsString_value->setEnabled(value);} );
    connect(ui->gabor_cB_LenghTime, &QCheckBox::toggled, [=](const bool value ) { ui->gabor_lengthTime_value->setEnabled(value);} );
    connect(ui->gabor_cB_numberOfMod, &QCheckBox::toggled, [=](const bool value ) { ui->gabor_numberModulations_value->setEnabled(value);} );
    connect(ui->wav_type_value,SIGNAL(currentIndexChanged(QString)),this,SLOT(updateCostFunc(QString)));

    //Cargamos el script de la BD para mostrarlo en la pestaña de configuraciones:
    QFile bdfile(":data/dbScript - full.sql");
    QString sbd = bdfile.open(QIODevice::ReadOnly) ? QString(bdfile.readAll().replace(";","\n")): QString("## Error al cargar el script de la Base de Datos. \n --> Favor revisar la ruta: .../data/sqlScript.sql");
    ui->bd_scripts->setPlainText(sbd);    
}

appSettings::~appSettings()
{
    delete ui;
}

void appSettings::updateCostFunc(QString wavType){

    qInfo()<<"wavType "<<wavType;
    if( wavType == "wpbest" )
        ui->cost_func->setEnabled(true);
    else
        ui->cost_func->setEnabled(false);

}

bool appSettings::event(QEvent *event)
{
    if (event->type() == QEvent::NonClientAreaMouseButtonDblClick) {
        event->ignore();
        return true;
    }
    return QWidget::event(event);
}

QStringList appSettings::getParametrosSgram(){
    QStringList parametros;
    QString lin="0", tfr="1", wlen="100", dynr="100";

    //if(ui->sgram_db->isChecked()) db="db";
    if(ui->sgram_lin->isChecked()) lin="1"; // 1 es verdadero y 0 es falso
    if(ui->sgram_tfr->isChecked()) tfr=QString::number(ui->sgram_tfr_value->value());
    if(ui->sgram_wlen->isChecked()) wlen=QString::number(ui->sgram_wlen_value->value());
    if(ui->sgram_dynr->isChecked()) dynr=QString::number(ui->sgram_dynr_value->value());

    parametros<<"Energy of the coefficients"<< lin<<"Time-frequency resolution"<< tfr<<"Window length (ms)"<< wlen<<"Dynamical range"<< dynr;

    return parametros;
}

QStringList appSettings::getParametrosWavelet(){
    QStringList parametros;
    QString Fwav = "db8", JJ = "5", dynr = "100", type = "fwt", coeffScale = "db", costFun = "shannon";

    Fwav = ui->wav_fam_value->currentText();
    type = ui->wav_type_value->currentText();
    coeffScale =ui->coeff_scale_value->currentText();
    costFun = ui->cost_func->currentText();

    if(ui->wav_deepLlevel->isChecked())
        JJ=QString::number(ui->wav_deepLlevel_value->value());
    if(ui->wav_dynr->isChecked())
        dynr=QString::number(ui->wav_dynr_value->value());

    parametros<<"Wavelet Family"<< Fwav<<"DeepLevel"<< JJ<<"Dynamical range"<< dynr <<"Type of Wavelet"<< type <<"Coefficients Scale"<< coeffScale <<"Cost Function"<< costFun;

    return parametros;
}

QStringList appSettings::getParametrosGabor(){
    QStringList parametros;
    QString g="gauss", a="20", M="200", tipo="0", DWS="10", dynr="90";

    if(ui->gabor_cB_GaborWind->isChecked()) g=ui->gabor_windowsString_value->text();
    if(ui->gabor_cB_LenghTime->isChecked()) a=QString::number(ui->gabor_lengthTime_value->value());
    if(ui->gabor_cB_numberOfMod->isChecked()) M=QString::number(ui->gabor_numberModulations_value->value());
    if(ui->gabor_cB_DownSam->isChecked()) DWS=QString::number(ui->gabor_DownSam_value->value());
    if(ui->gabor_cB_Dynrange->isChecked()) dynr=QString::number(ui->gabor_Dynrange_value->value());
    if(ui->gabor_cB_typeOfTransform->isChecked()) tipo="0";

    parametros<<"Window function"<<g<<"Length of time shift"<<a<<"Number of Modulations"<<M<<"Type Of Transform"<<tipo<<"Downsamplig factor"<<DWS<<"Dynamical Range"<<dynr;

    return parametros;
}

QStringList appSettings::getParametrosFourier(){
    QStringList parametros;

    if(ui->Fourier_gb_Type->isChecked()){
        parametros<<"fourier";
        if (ui->Fourier_rb_Impulse->isChecked())
           parametros<<"impulse";
        else
           parametros<<"curve"<<ui->Fourier_sp_Curvevalue->text();

    }else if (ui->Fourier_gb_Histogram->isChecked()) {
        parametros<<"histograma"<<"fourier";
        //parametros<<ui->Fourier_MinSliderValue->text();
        //parametros<<ui->Fourier_MaxSliderValue->text();
    }

    return parametros;
}

QStringList appSettings::getParametrosMovingRMS()
{
    QStringList parametros;
    QString wlen = ui->RMS_Length->text().replace(",",".");
    QString wolap = ui->RMS_overlap->text().replace(",",".");

    parametros<<"Window Length"<<wlen<<"Window Overlap"<<wolap;
    return parametros;
}

QStringList appSettings::getParametrosMeanFrequency()
{
    QStringList parametros;
    QString wlen = ui->MeanFreq_Length->text().replace(",",".");
    QString wolap = ui->MeanFreq_overlap->text().replace(",",".");

    QString tipo = ui->comboTipo_MeanFreq->currentText();
    parametros<<"Window Length"<<wlen<<"Window Overlap"<<wolap<<"Type"<<tipo;;

    return parametros;
}

QStringList appSettings::getParametrosNormalizacion()
{
    QStringList parametros;
    QString tipoNorm = ui->Normalize_value->currentText();
    parametros<<"Type"<<tipoNorm;
    return parametros;
}

QTabWidget * appSettings::getTWConfig(){
    return ui->tabConfig; //devuelve el Widget del panel con pestañas para ser manipulado desde otra ventana.
}

QString appSettings::getBDtext(){
    return ui->bd_scripts->toPlainText();
}

void appSettings::crearPrevisualizacion(QString str)
{
    QString archivo = ":/scripts/"+str;
    QFile file(archivo);

    if (!file.open(QIODevice::ReadOnly))
        return;
    else{
        QDesktopWidget *desktop = QApplication::desktop();
        QRect pantalla = desktop->screenGeometry();
        QTextStream streamMO(&file);
        QDialog *prevArchivo = new QDialog(this);
        CodeEditor *texto = new CodeEditor(prevArchivo);
        texto->setReadOnly(true);

        QVBoxLayout *layout = new QVBoxLayout;
        layout->addWidget(texto);

        texto->setPlainText(streamMO.readAll().toLatin1());
        prevArchivo->setMinimumHeight(pantalla.height()-200);
        prevArchivo->setMinimumWidth(700);
        prevArchivo->setLayout(layout);
        prevArchivo->setWindowTitle("Archivo: "+str);
        prevArchivo->setWindowIcon(QIcon(QPixmap(":/imagenes/logoOctave.png")));
        prevArchivo->exec();
    }
}

void appSettings::on_Octave_btn_menuOctave_clicked()
{
    crearPrevisualizacion("menuOctave.m");
}

void appSettings::on_Octave_btn_OctaveFourier_clicked()
{
    crearPrevisualizacion("OctaveFourier.m");
}

void appSettings::on_Octave_btn_OctaveSpectrogram_clicked()
{
    crearPrevisualizacion("OctaveSpectrogram.m");
}

void appSettings::on_Octave_btn_OctaveGabor_clicked()
{
    crearPrevisualizacion("OctaveGabor.m");
}

void appSettings::on_Octave_btn_OctaveWavelets_clicked()
{
    crearPrevisualizacion("OctaveWavelets.m");
}

void appSettings::on_btn_OctavePath_clicked()
{
    QDesktopServices::openUrl(ui->OctavePath->text());
}

QStringList appSettings::getConfig(int i)
{
    QStringList parametros;
    switch (i) {
    case 1:
        parametros = getParametrosFourier();
        break;
    case 2:
        parametros = getParametrosGabor();
        break;
    case 3:
        parametros = getParametrosWavelet();
        break;
    case 4:
        parametros = getParametrosSgram();
        break;
    case 5:
        parametros<<"Histograma"<<"Fourier";
        break;
    case 6:
        parametros<<"Histograma"<<"Clasico";
        break;
    case 7:
        parametros = getParametrosMovingRMS();
        break;
    case 8:
        parametros = getParametrosMeanFrequency();
        break;
    default:
        parametros<<"NULL"<<"404";
        break;
    }
    return parametros;
}
