#include "filtersettings.h"
#include "ui_filtersettings.h"
#include <qdebug.h>

filterSettings::filterSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filterSettings)
{
    ui->setupUi(this);
}

filterSettings::~filterSettings()
{
    delete ui;
}

QStringList filterSettings::getParametrosFiltros(int t)
{
    QStringList parametros;
    QString orden = QString::number(ui->filtros_OrdenN_value_2->value());
    QString fc1="", fc2="", tipo="";

    switch (t) {
    case 0:
        fc1 = QString::number(ui->filtros_FC_LHB_2->value());
        tipo="low";
        break;
    case 1:
        fc1 = QString::number(ui->filtros_FC_LHB_2->value());
        tipo="high";
        break;
    case 2:
        fc1 = QString::number(ui->filtros_FC_BandPassBot_2->value());
        fc2 = QString::number(ui->filtros_FC_BandPassTop_2->value());
        tipo="pass";
        break;
    case 3:
        fc1 = QString::number(ui->filtros_FC_BandPassBot_2->value());
        fc2 = QString::number(ui->filtros_FC_BandPassTop_2->value());
        tipo="stop";
        break;
    case 4:
        fc1 = QString::number(ui->filtros_FC_BandPassBot_2->value());
        fc2 = QString::number(ui->filtros_FC_BandPassTop_2->value());
        tipo="notch";
        break;
    case 5:
        fc1 = QString::number(ui->filtros_FC_LHB_2->value());
        tipo="butter";
        break;

    default:
        break;
    }

    parametros<<orden<<tipo<<fc1<<fc2;

    return parametros;

}
