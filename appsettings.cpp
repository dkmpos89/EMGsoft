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

    //Cargamos el script de la BD para mostrarlo en la pestaña de configuraciones:
    QFile bdfile(":data/dbScript - full.sql");
    QString sbd = bdfile.open(QIODevice::ReadOnly) ? QString(bdfile.readAll().replace(";","\n")): QString("## Error al cargar el script de la Base de Datos. \n --> Favor revisar la ruta: .../data/sqlScript.sql");
    ui->bd_scripts->setPlainText(sbd);    
}

appSettings::~appSettings()
{
    delete ui;
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
    QString lin="0", tfr="1", wlen="100";

    //if(ui->sgram_db->isChecked()) db="db";
    if(ui->sgram_lin->isChecked()) lin="1"; // 1 es verdadero y 0 es falso
    if(ui->sgram_tfr->isChecked()) tfr=QString::number(ui->sgram_tfr_value->value());
    if(ui->sgram_wlen->isChecked()) wlen=QString::number(ui->sgram_wlen_value->value());

    parametros<< lin<< tfr<< wlen;

    return parametros;
}

QStringList appSettings::getParametrosGabor(){
    QStringList parametros;
    QString g="gauss", a="30", M="101", tipo="1";

    if(ui->gabor_cB_GaborWind->isChecked()) g=ui->gabor_windowsString_value->text();
    if(ui->gabor_cB_LenghTime->isChecked()) a=QString::number(ui->gabor_lengthTime_value->value());
    if(ui->gabor_cB_numberOfMod->isChecked()) M=QString::number(ui->gabor_numberModulations_value->value());
    if(ui->gabor_cB_typeOfTransform->isChecked()) tipo="0";

    parametros<<g<<a<<M<<tipo;

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
        parametros<<"histograma";
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

    parametros<<wlen<<wolap;
    return parametros;
}

QStringList appSettings::getParametrosMeanFrequency()
{
    QStringList parametros;
    QString wlen = ui->MeanFreq_Length->text().replace(",",".");
    QString wolap = ui->MeanFreq_overlap->text().replace(",",".");

    QString tipo = ui->comboTipo_MeanFreq->currentText();
    parametros<<wlen<<wolap<<tipo;
    return parametros;
}

QTabWidget * appSettings::getTWConfig(){
    return ui->tabConfig; //devuelve el Widget del panel con pestañas para ser manipulado desde otra ventana.
}

QString appSettings::getBDtext(){
    return ui->bd_scripts->toPlainText();
}

void appSettings::on_btnOctave_liberarRecurso_clicked()
{
    OctaveProcess::getInstance()->setState(true);
}

void appSettings::on_btnOctave_reloadRecurso_clicked()
{
    OctaveProcess::getInstance()->init();
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
