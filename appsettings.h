#ifndef APPSETTINGS_H
#define APPSETTINGS_H

#include <QDockWidget>
#include <QAbstractButton>
#include <QDebug>
#include <QTabWidget>
#include <octaveprocess.h>


namespace Ui {
class appSettings;
}

class appSettings : public QDockWidget
{
    Q_OBJECT

public:
    explicit appSettings(QWidget *parent = 0);
    void setOctave(OctaveProcess *oc){octaveP = oc;}
    QStringList getParametrosSgram();
    QStringList getParametrosGabor();
    QStringList getParametrosFourier();
    QStringList getParametrosMovingRMS();
    QTabWidget * getTWConfig();
    QString getBDtext();
    ~appSettings();
    bool event(QEvent *event);    
    void crearPrevisualizacion(QString str);

    QStringList getParametrosMeanFrequency();
    QStringList getParametrosWavelet();
    QStringList getParametrosNormalizacion();
    QStringList getConfig(int i);
private slots:
    void on_btnOctave_liberarRecurso_clicked();
    void on_btnOctave_reloadRecurso_clicked();
    void on_Octave_btn_menuOctave_clicked();
    void on_Octave_btn_OctaveFourier_clicked();
    void on_Octave_btn_OctaveSpectrogram_clicked();
    void on_Octave_btn_OctaveGabor_clicked();
    void on_Octave_btn_OctaveWavelets_clicked();
    void on_btn_OctavePath_clicked();
    void updateCostFunc(QString );

private:
    Ui::appSettings *ui;
    OctaveProcess *octaveP;
};

#endif // APPSETTINGS_H
