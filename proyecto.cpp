#include "proyecto.h"
#include "ui_proyecto.h"
#include "cproject.h"


Proyecto::Proyecto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Proyecto)
{
    ui->setupUi(this);
    ui->label_listado->setAlignment(Qt::AlignCenter);
    ui->label_nuevo->setAlignment(Qt::AlignCenter);

    ui->fechaIP->setDate(QDate::currentDate());
    ui->fechaTP->setDate(QDate::currentDate());

    //CARGAR PROYECTOS ACTUALES.....

    actualizarTabla("");
    connect(ui->txtBuscar, SIGNAL(textChanged(QString)), this, SLOT(actualizarTabla(QString)));
}

Proyecto::~Proyecto()
{
    delete ui;
}

QStackedWidget * Proyecto::getSw(){
    return ui->sWPanelCentral;
}

void Proyecto::actualizarTabla(QString nombre)
{
    model = new QSqlQueryModel();
    DataBase *dataB = DataBase::getInstance();

    if(dataB->getProyectos(nombre)){
        model->setQuery(dataB->getQuery());
        ui->tablaProyectos->setModel(model);
    }
    else{
        QMessageBox::critical(this,
                              "Error de conexion..",
                              QString("[AcTabla] Imposible establecer una conexion con la base de datos.\n "+dataB->getQuery().lastError().text()),
                              QMessageBox::Ok);
    }

}

void Proyecto::on_btnAgregar_clicked()
{
    QString nombre = ui->nombreProyecto->text();
    QString fechaInicio = ui->fechaIP->text();
    QString fechaTermino = ui->fechaTP->text();
    QString descripcion = ui->InfoProyecto->toPlainText();

    if(nombre.isEmpty() || fechaInicio.isEmpty() || fechaTermino.isEmpty() || descripcion.isEmpty())
    {
        QMessageBox::critical(this, "Error:",
                              "Faltan datos del formulario.",
                              QMessageBox::Ok);
        return;
    }else{
        DataBase *dataB = DataBase::getInstance();
        bool boolquery = dataB->insertProyecto(new cProject(nombre,fechaInicio,fechaTermino,descripcion));
        if(boolquery){
            QMessageBox::information(this, "Exito!",
                                  tr("Operacion realizada con exito."),
                                  QMessageBox::Ok);
            limpiarFormulario();
        }
        else{
            QMessageBox::critical(this, "Error:",
                                  QString("Ocurrio un problema durante el ingreso del nuevo proyecto.\n "+dataB->getQuery().lastError().text()),
                                  QMessageBox::Ok);
        }
    }
    actualizarTabla("");
}

void Proyecto::limpiarFormulario(){

    ui->nombreProyecto->setText("");
    ui->fechaIP->setDate(QDate::currentDate());
    ui->fechaTP->setDate(QDate::currentDate());
    ui->InfoProyecto->setPlainText("");

}

void Proyecto::on_btnVer_clicked()
{
    ui->sWPanelCentral->setCurrentIndex(1);
}

void Proyecto::on_btnEliminar_clicked()
{
    QItemSelectionModel *select = ui->tablaProyectos->selectionModel();
    QModelIndex index = select->currentIndex();

    int row = index.row();
    QString id = index.sibling(row, 4).data().toString();

    if(select->hasSelection()){

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Alerta", "Está a punto de eliminar un proyecto!\n(Esto eliminará por completo sesiones y señales asociadas a él)\nDesea continuar?",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            DataBase *dataB = DataBase::getInstance();
            bool result = dataB->borrarProyecto(id);

            if(result){
                QMessageBox::warning(this, "Aviso",
                                      "Registros eliminados!",
                                      QMessageBox::Ok);
            }
            else{
                QMessageBox::critical(this, "Error! :(",
                                  "Ocurrió un error al procesar su solicitud.\nVuelva a intentar más tarde.",
                                  QMessageBox::Ok);
            }
            actualizarTabla("");
        }
    }
    else{
        QMessageBox::critical(this, "warning!",
                              "Primero debes seleccionar una \nfila de la tabla.",
                              QMessageBox::Ok);
    }
}

void Proyecto::on_btnOpen_clicked()
{
    QItemSelectionModel *select = ui->tablaProyectos->selectionModel();
    QModelIndex index = select->currentIndex();

    int row = index.row();

    if(select->hasSelection()){
        QString nombre = index.sibling(row, 0).data().toString();
        QString fechaI = index.sibling(row, 1).data().toString();
        QString fechaT = index.sibling(row, 2).data().toString();
        QString desc = index.sibling(row, 3).data().toString();
        QString id = index.sibling(row, 4).data().toString();

        emit nuevoProyecto(new cProject(nombre, fechaI, fechaT, desc));
        close();
    }

}

void Proyecto::on_btnVolver_clicked()
{
    ui->sWPanelCentral->setCurrentIndex(0);
}
