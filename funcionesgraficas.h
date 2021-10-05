#ifndef FUNCIONESGRAFICAS_H
#define FUNCIONESGRAFICAS_H

#include <QTCore>
#include <QObject>
#include <QVector>
#include <QMessageBox>
#include "qcustomplot.h"
#include "delsignal.h"

class funcionesGraficas
{
public:
    enum{plot,stem,color,otro};


    funcionesGraficas();
    bool graficarSpectrogram(QVector<QVector<double> > s, int a, int b, double Fs);
    void restaurarGrafico(QCustomPlot *grafico);
    bool leer(DelSignal *signal);
    void cargaGrafica(QCheckBox *check, QCustomPlot *grafico, QComboBox *cBox, int canal, DelSignal *signal);
    void graficarPrincipal(QCustomPlot *grafico, QVector<QVector<double> > senal, int canal, int tipo, int a=0, int b=-1);
    void habilitarCampos(bool b, QCustomPlot *grafico, QComboBox *cBox, QCheckBox *checkBox);
    void dibujarCurvaFrecuenciasMedia(QStringList parametros, QVector<QVector<double> > s, QCustomPlot *grafico);
    void graficarFourier(QVector<QVector<double> > s, int a, int b, QStringList parametros);
    bool graficarGabor(QVector<QVector<double> > s, int a, int b, double Fs);
    void graficarHistograma(QVector<QVector<double> > s, QString tipo);
    void centrarGraficos(QString title, QCustomPlot *grafico, int w, int h);
    void graficarMovingRms(QVector<double> s, QVector<double> t, int a, int b);
    void graficarMeanFrequency(QVector<double> result, double fs, int a, int b, QString tipo="curva");
    void setParent(QWidget *parent);
private:
    QWidget *parent;
};

#endif // FUNCIONESGRAFICAS_H
