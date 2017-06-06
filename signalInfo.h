#ifndef signalInfo_H
#define signalInfo_H

#include <QWidget>
#include <csignal.h>


namespace Ui {
class signalInfo;
}

class signalInfo : public QWidget
{
    Q_OBJECT

public:
    explicit signalInfo(QWidget *parent = 0);
    ~signalInfo();

    void setData_principal(cSignal *signalPrincipal);
    void set_tabla_estadisticas(QVector<double> lista_datos);
    void set_tabla_caracteristicas(QStringList lista_datos);
private:
    Ui::signalInfo *ui;
    cSignal *signalPrincipal = NULL;
};

#endif // signalInfo_H
