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

void signal_Info::setData_principal(cSignal *signalPrincipal)
{
    if(signalPrincipal!=NULL){
        ui->file_name->setText(signalPrincipal->getNombre());
        ui->path->setText(signalPrincipal->getPath());
        ui->fs->setText(signalPrincipal->getFs());
        ui->numc->setText(signalPrincipal->getCanales());
        this->signalPrincipal = signalPrincipal;

        //Ajustando el header de la tabla de datos
        QTableWidget* myTable = ui->tabla_Estadisticas;
        QHeaderView* header = myTable->horizontalHeader();
        header->setSectionResizeMode(QHeaderView::Stretch);
    }
}

void signal_Info::set_tabla_estadisticas(QVector<double> lista_datos)
{

    ui->tabla_Estadisticas->setRowCount(1);
    int nrows = 0;

    ui->tabla_Estadisticas->setItem(nrows,0,new QTableWidgetItem(this->signalPrincipal->getNombre()));

    for (int var = 0; var < lista_datos.size(); ++var)
    {
       ui->tabla_Estadisticas->setItem(nrows, var+1, new QTableWidgetItem(QString::number(lista_datos[var])));
    }

}

void signal_Info::set_tabla_caracteristicas(QStringList lista_datos)
{
    //
}
