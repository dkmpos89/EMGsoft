#include "winusers.h"
#include "ui_winusers.h"
#include <QMessageBox>
#include "cpaciente.h"

winUsers::winUsers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::winUsers)
{
    ui->setupUi(this);
    ui->tabUsuarios->setTabEnabled(2, false);
    ui->tabEditar_Rut->setEnabled(false);

    ui->tabAgregar_FechaNac->setDateRange(QDate::fromString("01-01-1900", "dd-MM-yyyy"),QDate::currentDate());
    ui->tabEditar_FechaNac->setDateRange(QDate::fromString("01-01-1900", "dd-MM-yyyy"),QDate::currentDate());

    connect(ui->tabAgregar_Search, SIGNAL(textChanged(QString)), this, SLOT(actualizarTabla(QString)));

    connect(ui->tabAgregar_FechaNac, &QDateEdit::dateChanged, [=](const QDate date ) { ui->tabAgregar_Edad->setText(QString::number(QDate::currentDate().year()-date.year()));});
    connect(ui->tabEditar_FechaNac, &QDateEdit::dateChanged, [=](const QDate date ) { ui->tabEditar_Edad->setText(QString::number(QDate::currentDate().year()-date.year())); });

    connect(ui->tabUsuarios, &QTabWidget::currentChanged, [=]() { this->actualizarTabla(""); });

    connect(ui->tabAgregar_Rut, SIGNAL(editingFinished()), this, SLOT(setRutFormat()));

    actualizarTabla("");
}

/*****************************************************************************
 * @name: actualizarTabla
 * @brief: cargar los datos de la tabla de usuarios desde la base de datos.
 * @param: String con el DATO que se desea cargar. Si es "" se cargarán todos.
 * @return: void
 * **************************************************************************/
void winUsers::actualizarTabla(QString rut){

    model = new QSqlQueryModel();
    DataBase *dataB = DataBase::getInstance();
    if(dataB->getPacientes(rut)){
        model->setQuery(dataB->getQuery());
        ui->tableView_2->setModel(model);
    }
    else{
        QMessageBox::critical(this,
                              "ERROR: ",
                              "Imposible establecer la conexion con la base de datos.",
                              QMessageBox::Ok);
    }
}

bool winUsers::setRutFormat()
{
    QString rut = ui->tabAgregar_Rut->text();
    QString newRut = "";

    int size = rut.size();

    QLineEdit *LeRut = ui->tabAgregar_Rut;
    LeRut->clear();

    switch (size) {
    case 12:
        if(rut[2]!='.') return false;
        if(rut[6]!='.') return false;
        if(rut[10]!='-') return false;
        LeRut->setText(rut);
        break;
    case 11:
        if(rut[1]!='.') return false;
        if(rut[5]!='.') return false;
        if(rut[9]!='-') return false;
        LeRut->setText(rut);
        break;
    case 9:
        for (int var = 0; var < 9; ++var) {
            newRut.append(rut.at(var));
            if(var==1) newRut.append(".");
            if(var==4) newRut.append(".");
            if(var==7) newRut.append("-");
        }
        LeRut->setText(newRut);
        break;
    case 8:
        for (int var = 0; var < 8; ++var) {
            newRut.append(rut.at(var));
            if(var==0) newRut.append(".");
            if(var==3) newRut.append(".");
            if(var==6) newRut.append("-");
        }
        LeRut->setText(newRut);
        break;
    default:
        if(rut.size()>0) QMessageBox::warning(this, "Error:", "Formato del RUT desconocido.", QMessageBox::Ok);
        break;
    }

    return true;
}

winUsers::~winUsers()
{
    delete ui;
}

/************************************************************************************
 * @name: BtnEliminar_clicked
 * @brief: toma el rut desde la tabla (row selected) y borra sus registros en la BD
 * @return: void
 * **********************************************************************************/
void winUsers::on_BtnEliminar_clicked()
{

    QItemSelectionModel *select = ui->tableView_2->selectionModel();
    QModelIndex index = select->currentIndex();

    int row = index.row();
    QString rut = index.sibling(row, 0).data().toString();

    if(select->hasSelection()){

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Alerta", "Eliminar Usuario??\n"+rut+"",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {

            DataBase *dataB = DataBase::getInstance();
            bool result = dataB->borrarPaciente(rut);

            if(result){
                QMessageBox::warning(this, "Aviso:",
                                      "Registro Eliminado!",
                                      QMessageBox::Ok);
            }
            else{
                QMessageBox::warning(this, "Error:(",
                                  "Ocurrio un Error al procesar su solicitud.\nVuelva a intentar mas tarde.",
                                  QMessageBox::Ok);
            }
            actualizarTabla("");

        }
    }
    else{
        QMessageBox::information(this, "Info:",
                              "Primero debes seleccionar una \nfila de la tabla de usuarios.",
                              QMessageBox::Ok);
    }
}

/************************************************************************************
 * @name: botonOKAgregar_clicked()
 * @brief: guarda un registro de usuario en la BD con los datos del formulario.
 * @return: void
 * **********************************************************************************/
void winUsers::on_botonOKAgregar_clicked()
{
    QString rut = ui->tabAgregar_Rut->text();
    QString nombre = ui->tabAgregar_Nombres->text();
    QString apellido = ui->tabAgregar_Apellidos->text();
    QString fechaNac = ui->tabAgregar_FechaNac->text();
    QString edad = ui->tabAgregar_Edad->text();

    QString sexo = ui->tabAgregar_Female->text();
    if(ui->tabAgregar_Male->isChecked())  sexo = ui->tabAgregar_Male->text();

    QString fechaIng = ui->tabAgregar_FechaIngreso->text();
    QString nivelAct = ui->tabAgregar_nivelActividad->currentText();
    QString direccion = ui->tabAgregar_Address->text();

    QString peso = ui->tabAgregar_Peso->text();
    QString estatura = ui->tabAgregar_Estatura->text();
    QString descripcion = ui->tabAgregar_InfoExtra->toPlainText();

    if(!rut.isEmpty() && !nombre.isEmpty()){
        DataBase *dataB = DataBase::getInstance();
        bool boolquery = dataB->insertPaciente(new cPaciente(rut,nombre,apellido,direccion,sexo,fechaNac,edad,fechaIng,peso,estatura,nivelAct,descripcion));
        if(boolquery){
            QMessageBox::information(this, "Info:", tr("Operacion realizada con exito."), QMessageBox::Ok);
            limpiarFormulario(1);
        }
        else{
            QMessageBox::critical(this, "Error:","Ocurrio un problema durante el ingreso del nuevo usuario.\nINFO: "+dataB->getQuery().lastError().text()+"",QMessageBox::Ok);
        }
    }else
        QMessageBox::information(this, "Aviso: ","Por favor complete el formulario antes de continuar.",QMessageBox::Ok);

}

/************************************************************************************
 * @name: limpiarFormulario
 * @brief: limpia el formulario despues de usarlo para agregar o editar datos.
 * @return: void
 * **********************************************************************************/
void winUsers::limpiarFormulario(int n){
    if(n==1){
        ui->tabAgregar_Rut->setText("");
        ui->tabAgregar_Nombres->setText("");
        ui->tabAgregar_Apellidos->setText("");
        ui->tabAgregar_Address->setText("");
        ui->tabAgregar_Female->setChecked(true);
        ui->tabAgregar_FechaNac->setDate(QDate::fromString("01-01-00","dd-MM-yy"));
        ui->tabAgregar_Edad->setText("0");
        ui->tabAgregar_FechaIngreso->setText(QDate::currentDate().toString());
        ui->tabAgregar_Peso->setText("");
        ui->tabAgregar_Estatura->setText("");
        ui->tabAgregar_nivelActividad->setCurrentIndex(0);
        ui->tabAgregar_InfoExtra->setPlainText("");
    }else{
        ui->tabEditar_Rut->setText("");
        ui->tabEditar_Nombres->setText("");
        ui->tabEditar_Apellidos->setText("");
        ui->tabEditar_Address->setText("");
        ui->tabEditar_Female->setChecked(true);
        ui->tabEditar_FechaNac->setDate(QDate::fromString("01-01-00","dd-MM-yy"));
        ui->tabEditar_Edad->setText("0");
        ui->tabEditar_FechaIngreso->setText(QDate::currentDate().toString());
        ui->tabEditar_Peso->setText("");
        ui->tabEditar_Estatura->setText("");
        ui->tabEditar_cBox_nivelActividad->setCurrentIndex(0);
        ui->tabEditar_InfoExtra->setPlainText("");
    }
}

/******************************************************************************************************
 * @name: toolButton_clicked
 * @brief: actualiza la tabla luego de alguna operacion. El parametro "" indica cargar todos los datos.
 * @return: void
 * ****************************************************************************************************/
void winUsers::on_btn_ActualizarTabUs_clicked()
{
    actualizarTabla("");
}

/************************************************************************************
 * @name: BtnEditar_clicked
 * @brief: Se setea la pestaña de Edicion con los datos seleccionados de la tabla.
 * @return: void
 * **********************************************************************************/
void winUsers::on_BtnEditar_clicked()
{
    QItemSelectionModel *select = ui->tableView_2->selectionModel();
    QModelIndex index = select->currentIndex();

    if(select->hasSelection()){
        int row = index.row();
        QString rut = index.sibling(row, 0).data().toString();
        QString nombres = index.sibling(row, 1).data().toString();
        QString apellidos = index.sibling(row, 2).data().toString();
        QString direccion = index.sibling(row, 3).data().toString();
        QString sexo = index.sibling(row, 4).data().toString();
        QString fechaNac = index.sibling(row, 5).data().toString();
        QString edad = index.sibling(row, 6).data().toString();
        QString fechaIngreso = index.sibling(row, 7).data().toString();
        QString peso = index.sibling(row, 8).data().toString();
        QString estatura = index.sibling(row, 9).data().toString();
        QString actividad = index.sibling(row, 10).data().toString();
        QString descripcion = index.sibling(row, 11).data().toString();

        ui->tabEditar_Rut->setText(rut);
        ui->tabEditar_Nombres->setText(nombres);
        ui->tabEditar_Apellidos->setText(apellidos);
        ui->tabEditar_Address->setText(direccion);

        ui->tabEditar_Female->setChecked(true);
        if(sexo=="Masculino") ui->tabEditar_Male->setChecked(true);

        ui->tabEditar_FechaNac->setDate(QDate::fromString(fechaNac, "dd-MM-yyyy"));
        ui->tabEditar_Edad->setText(edad);
        ui->tabEditar_FechaIngreso->setText(fechaIngreso);
        ui->tabEditar_Peso->setText(peso);
        ui->tabEditar_Estatura->setText(estatura);
        ui->tabEditar_cBox_nivelActividad->setCurrentText(actividad);
        ui->tabEditar_InfoExtra->setPlainText(descripcion);

        ui->tabUsuarios->setTabEnabled(2, true);
        ui->tabUsuarios->setCurrentIndex(2);

    }
    else{
        QMessageBox::information(this, "Info:",
                              "Primero debes seleccionar un usuario de la tabla.",
                              QMessageBox::Ok);
    }

}

/************************************************************************************
 * @name: botonOKEditar_clicked
 * @brief: Envia a la base de datos los datos modificados del usuario.
 * @return: void
 * **********************************************************************************/
void winUsers::on_btnConfirmarCambios_clicked()
{
    QString rut = ui->tabEditar_Rut->text();
    QString nombre = ui->tabEditar_Nombres->text();
    QString apellido = ui->tabEditar_Apellidos->text();
    QString direccion = ui->tabEditar_Address->text();

    QString sexo = ui->tabEditar_Female->text();
    if(ui->tabEditar_Male->isChecked()) sexo=ui->tabEditar_Male->text();

    QString fechaNac = ui->tabEditar_FechaNac->text();
    QString edad = ui->tabEditar_Edad->text();
    QString fechaIng = ui->tabEditar_FechaIngreso->text();
    QString peso = ui->tabEditar_Peso->text();
    QString estatura = ui->tabEditar_Estatura->text();
    QString nivelAct = ui->tabEditar_cBox_nivelActividad->currentText();
    QString descripcion = ui->tabEditar_InfoExtra->toPlainText();

    DataBase *dataB = DataBase::getInstance();
    bool boolquery = dataB->updatePaciente(new cPaciente(rut,nombre,apellido,direccion,sexo,fechaNac,edad,fechaIng,peso,estatura,nivelAct,descripcion));
    if(boolquery){
        QMessageBox::information(this, "Aviso:",
                              tr("Operacion realizada con exito."),
                              QMessageBox::Ok);
        limpiarFormulario(2);
        ui->tabUsuarios->setTabEnabled(2, false);
    }
    else{
        QMessageBox::critical(this, "Error:",
                              "Ocurrio un problema durante el ingreso del nuevo usuario.\nINFO: "+dataB->getQuery().lastError().text()+"",
                              QMessageBox::Ok);
        return;
    }

}

void winUsers::on_btnIniciarSesion_clicked()
{
    QItemSelectionModel *select = ui->tableView_2->selectionModel();
    QModelIndex index = select->currentIndex();

    if(select->hasSelection()){
        int row = index.row();
        QString rut = index.sibling(row, 0).data().toString();
        QString nombre = index.sibling(row, 1).data().toString();
        QString apellido = index.sibling(row, 2).data().toString();
        QString direccion = index.sibling(row, 3).data().toString();
        QString sexo = index.sibling(row, 4).data().toString();
        QString fecha_nacimiento = index.sibling(row, 5).data().toString();
        QString edad = index.sibling(row, 6).data().toString();
        QString fecha_ingreso = index.sibling(row, 7).data().toString();
        QString peso = index.sibling(row, 8).data().toString();
        QString estatura = index.sibling(row, 9).data().toString();
        QString actividad = index.sibling(row, 10).data().toString();
        QString descripcion = index.sibling(row, 11).data().toString();

        cPaciente *cp = new cPaciente(rut, nombre, apellido, direccion, sexo, fecha_nacimiento, edad, fecha_ingreso, peso, estatura, actividad, descripcion);
        emit enviarPaciente(cp);
        close();

    }
    else{
        QMessageBox::information(this, "Info:",
                              "Primero debes seleccionar un usuario de la tabla.",
                              QMessageBox::Ok);
    }
}
