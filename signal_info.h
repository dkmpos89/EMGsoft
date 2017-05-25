#ifndef SIGNAL_INFO_H
#define SIGNAL_INFO_H

#include <QWidget>
#include <csignal.h>


namespace Ui {
class signal_Info;
}

class signal_Info : public QWidget
{
    Q_OBJECT

public:
    explicit signal_Info(QWidget *parent = 0);
    ~signal_Info();

    void setData_principal(cSignal *signalPrincipal);
    void set_tabla_estadisticas(QVector<double> lista_datos);
    void set_tabla_caracteristicas(QStringList lista_datos);
private:
    Ui::signal_Info *ui;
    cSignal *signalPrincipal = NULL;
};

#endif // SIGNAL_INFO_H
