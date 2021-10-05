#ifndef ANALISISMULTIPLES_H
#define ANALISISMULTIPLES_H

#include <QMainWindow>
#include <QMessageBox>
#include <QToolButton>
#include <QtCore>
#include <QtGui>
#include "qcustomplot.h"
#include "qxtspanslider.h"

#include "delsignal.h"
#include "octaveprocess.h"
#include "appsettings.h"


namespace Ui {
class AnalisisMultiples;
}

class AnalisisMultiples : public QMainWindow
{
    Q_OBJECT

public:
    enum{plot,stem,color,otro};
    enum{dft,fft,gabor,wavelet,sgram,histc,histf,mrms,meanfreq};

    explicit AnalisisMultiples(QWidget *parent = 0);
    ~AnalisisMultiples();
    bool eventFilter(QObject *target, QEvent *event);
    bool leer();
    void setConfig(appSettings *config);
    void updateSlider();
    void configureRedLines(int i, int size, int fs);
    void updateSBoxRedLine(int value, int item);

private slots:
    void setDatos(DelSignal *s);
    void doTest(QString str="is Working!")
    {
        QMessageBox::information(this, tr("Test"), str);
    }
    void on_abrir_s1_clicked();
    void on_abrir_s2_clicked();
    void on_abrir_s3_clicked();
    void on_abrir_s4_clicked();

    void on_actionReplot_triggered();
    void on_actionFourier_triggered();

    void chargeData();
    void on_actionSpectrogram_triggered();

    void on_actionGabor_Transform_triggered();
    void on_actionWavelet_Transform_triggered();
    void on_actionHistogram_triggered();
    void on_actionShow_Graphs_triggered();
    void on_actionMoovingRms_triggered();

    void on_actionMean_Frequency_triggered();

private:
    Ui::AnalisisMultiples *ui;
    appSettings *ConfigGlobales;
    OctaveProcess *octaveP;
    DelSignal *signal_1,*signal_2,*signal_3,*signal_4;
    QList<DelSignal *> listSignals;
    QList<QCustomPlot *> listGraph;
    QList<QComboBox *> listcBox;
    QList<QCheckBox *> listCheckBox;
    QList<QCustomPlot *> listResultGraph;
    QList<QCPItemLine *>listRedItemsA;
    QList<QCPItemLine *>listRedItemsB;
};

#endif // ANALISISMULTIPLES_H
