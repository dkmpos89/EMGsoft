#ifndef SIGNAL_INFO_H
#define SIGNAL_INFO_H

#include <QWidget>
#include <delsignal.h>


namespace Ui {
class signal_Info;
}

class signal_Info : public QWidget
{
    Q_OBJECT

public:
    explicit signal_Info(QWidget *parent = 0);
    ~signal_Info();

    void setData_principal(DelSignal *signalPrincipal);
    void set_tabla_estadisticas(QStringList lista_datos);
    void set_tabla_caracteristicas(QStringList lista_datos);
private:
    Ui::signal_Info *ui;
};

#endif // SIGNAL_INFO_H
