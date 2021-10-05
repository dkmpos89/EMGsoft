#ifndef FUNCIONESGRAFICAS_H
#define FUNCIONESGRAFICAS_H

#include <QTCore>
#include <QObject>
#include <QVector>
#include <QMessageBox>
#include "qcustomplot.h"
#include "csignal.h"

class funcionesGraficas
{
public:
    enum{plot,stem,color,otro};

    funcionesGraficas();
    void setParent(QWidget *parent);
    void centrarGraficos(QString title, QCustomPlot *grafico, int w, int h);

    void restaurarGrafico(QCustomPlot *grafico);
    bool leer(cSignal *signal);
    void cargaGrafica(QCheckBox *check, QCustomPlot *grafico, QComboBox *cBox, int canal, cSignal *signal);

    void habilitarCampos(bool b, QCustomPlot *grafico, QComboBox *cBox, QCheckBox *checkBox);
    void dibujarCurvaFrecuenciasMedia(QStringList parametros, QVector<QVector<double> > s, QCustomPlot *grafico);

    void graficarHistograma(QCustomPlot *cp, QVector<QVector<double> > s, QString tipo);
    void graficarMovingRms(QCustomPlot *cp, QVector<double> s, QVector<double> t, int a, int b);
    void graficarMeanFrequency(QCustomPlot *cp, QVector<double> result, double fs, int a, int b, QString tipo="curva");

    void graficarPrincipal(QCustomPlot *grafico, QVector<QVector<double> > senal, int canal, int tipo, int a=0, int b=-1);
    void graficarFourier(QCustomPlot *cp, QVector<QVector<double> > s, int a, int b, QStringList parametros);
    bool graficarSpectrogram(QCustomPlot *cp, QVector<QVector<double> > s, int a, int b, double Fs);
    bool graficarGabor(QCustomPlot *cp, QVector<QVector<double> > s, int a, int b, double Fs);
    bool graficarWavelet(QCustomPlot *cp, QVector<QVector<double> > s, int a, int b, double Fs);
    void guardarImagen(QCustomPlot *cp, QString name);
private:
    QWidget *parent;
};

#endif // FUNCIONESGRAFICAS_H
