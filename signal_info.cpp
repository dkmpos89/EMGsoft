#include "signal_info.h"
#include "ui_signal_info.h"



signal_Info::signal_Info(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signal_Info)
{
    ui->setupUi(this);
}

signal_Info::~signal_Info()
{
    delete ui;
}

void signal_Info::setData_principal(DelSignal *signalPrincipal)
{
    if(signalPrincipal!=NULL){
        ui->file_name->setText(signalPrincipal->getNombre());
        ui->path->setText(signalPrincipal->getPath());
        ui->fs->setText(signalPrincipal->getFs());
        ui->numc->setText(signalPrincipal->getCanales());
    }
}

void signal_Info::set_tabla_estadisticas(QStringList lista_datos)
{
    //
}

void signal_Info::set_tabla_caracteristicas(QStringList lista_datos)
{
    //
}
