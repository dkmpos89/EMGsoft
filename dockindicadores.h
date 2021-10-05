#ifndef DOCKINDICADORES_H
#define DOCKINDICADORES_H

#include <QDockWidget>
#include <qdebug.h>
#include <QThread>
#include <octaveprocess.h>
#include <QMovie>
#include <QElapsedTimer>

namespace Ui {
class dockIndicadores;
}

class dockIndicadores : public QDockWidget
{
    Q_OBJECT

public:
    explicit dockIndicadores(QWidget *parent = 0);
    ~dockIndicadores();
    void setOctave(OctaveProcess *oc){octaveP = oc;}
    void revisarEstadoOctave();

signals:
    void clickConfiguracion();

public slots:
    void updateTimer();

private slots:
    void on_btnConfiguraciones_clicked();

    void on_toolButton_clicked();

    void on_btnStopOctave_clicked();

    void on_toolButton_2_clicked();

private:
    Ui::dockIndicadores *ui;
    OctaveProcess *octaveP;
    QMovie *movie = new QMovie(":/imagenes/loading.gif");
    QWidget *p;
    int HH = 0;
    int mm = 0;
    int ss = 0;

};

#endif // DOCKINDICADORES_H

