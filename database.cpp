#include "database.h"
#include <QDebug>
#include <QSqlQuery>
#include <QtSql>
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QMessageBox>



//static member
DataBase* DataBase::instance = nullptr;

DataBase::DataBase()
{
    const QString dbpath = QDir::currentPath()+"/data";
    const QString dbName = dbpath+"/dbEMG.db";
    if(!QDir(dbpath).exists())
        QDir().mkdir(dbpath);

    bool exist = QFile(dbName).exists();

    if( !QSqlDatabase::drivers().contains("QSQLITE") )
        showError( QSqlError() , QString( "[ERROR] La aplicacion necesita el driver asociado a SQLite" ) );

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);
    query = QSqlQuery(db);

    if( db.open()){
        showError( QSqlError(), QString("[Info] Abriendo... Database was opened successfully!") );
        qInfo()<<"[Info] Base de datos en ruta: "<<dbName<<endl;
        if( !exist )
            executeScript( query );
    }else
        showError( db.lastError(), QString("[Info] Abriendo... Unable to open Database!") );
}

DataBase::~DataBase()
{
    db.close();
    delete instance;
}

void DataBase::executeScript(QSqlQuery query){
    //leer archivo
    //iterar y ejecutar cada una de sus lineas
    QFile scriptFile(":data/dbScript.sql");
    if( scriptFile.open(QIODevice::ReadOnly) ){
       QTextStream in(&scriptFile);
       QStringList all = in.readAll().split(";");
       for( QString it : all ){
           bool result = query.exec(it);
           if( result ){
               qInfo()<<"CREATE TABLE: "<<it.split(" ")[2]<<" : TRUE"<<endl;
           }else
               qInfo()<<query.lastError().text()<<endl;
       }
       scriptFile.close();
       qDebug()<<"EnHoraBuena!!! la estructura de la base de datos ha sido creada satisfactoriamente";
    }else
       qDebug()<<"Lastima! archivo no se ha logrado abrir => la estructura de la base de datos no ha sido creada, Joto!";

}

void DataBase::showError( QSqlError err, QString msg ) {

    if( err.type() != QSqlError::NoError ){
        QMessageBox::critical(0, "Error en la Base de Datos", msg +" Error : "+ err.text() );
        exit(-1);
    }

}


/*******************************************************/
/*               FUNCIONES GET & SET                   */

QSqlDatabase DataBase::getDb()
{
    return db;
}

QSqlQuery DataBase::getQuery()
{
    return query;
}

void DataBase::setQuery(const QSqlQuery &value)
{
    query = value;
}

bool DataBase::getState() const
{
    return state;
}

void DataBase::setState(bool value)
{
    state = value;
}

DataBase* DataBase::getInstance(){

    if( instance == nullptr )
        instance = new DataBase();
    return instance;
}


/****************************************************/
/*  FUNCIONES QUE INTERACTUAN CON LA BASE DE DATOS  */

bool DataBase::getProyectos(QString name)
{
    bool result = false;
    if( state ){
        setState(false);
        QString str;
        if( !name.isEmpty() )
            str = "SELECT nombre,fechaInicio,fechaTermino,descripcion,ID FROM PROYECTO WHERE nombre LIKE '%"+name+"%'";
        else
            str = "SELECT nombre,fechaInicio,fechaTermino,descripcion,ID FROM PROYECTO";
        query = QSqlQuery(str, db);
        result = query.exec();
        setState(true);
    }else{
        qWarning()<<"ERROR: "<<endl<<"    Recurso: 'Base de Datos'  -  Estado: ocupado"<<endl;
    }
    return result;
}

bool DataBase::insertProyecto(cProject *cp)
{
    bool result = false;
    if(state){
        if( !cp->getNombre().isEmpty() ){
            setState(false);
            QString str = "INSERT INTO PROYECTO('nombre','fechaInicio','fechaTermino','idSesion','descripcion') values(:name,:FI,:FT,:sesion,:desc)";
            query.prepare(str);
            query.bindValue(":name", cp->getNombre());
            query.bindValue(":FI", cp->getFechaInicio());
            query.bindValue(":FT", cp->getFechaTermino());
            query.bindValue(":sesion", 1);
            query.bindValue(":desc", cp->getDescripcion());
            result = query.exec();
            setState(true);
        }else
            qWarning()<<"[ERROR:] Formulario de registro de proyecto incompleto. (El NOMBRE del proyecto es OBLIGATORIO)"<<endl;
    }else{
        qWarning()<<"ERROR: "<<endl<<"    Recurso: 'Base de Datos'  -  Estado: ocupado"<<endl;
    }
    return result;

}

bool DataBase::borrarProyecto(QString id)
{
    bool result = false;
    if(state){
        setState(false);
        QString str = "DELETE FROM PROYECTO WHERE ID=:id";
        query.prepare(str);
        query.bindValue(":id", id);
        result = query.exec();
        setState(true);
    }else{
        qWarning()<<"ERROR: "<<endl<<"    Recurso: 'Base de Datos'  -  Estado: ocupado"<<endl;
    }
    return result;
}

bool DataBase::getPacientes(const QString rut)
{
    bool result = false;
    if(state){
        setState(false);
        query.clear();

        const QString str = !rut.isEmpty() ?
                    "SELECT * FROM PACIENTES WHERE RUT LIKE :rut OR nombre LIKE :name OR apellido LIKE :apell" :
                    "SELECT * FROM PACIENTES";
        query.prepare(str);
        if( str.contains("RUT") ){

            query.bindValue(":rut", "%"+rut+"%");
            query.bindValue(":name", "%"+rut+"%");
            query.bindValue(":apell", "%"+rut+"%");
        }

        result = query.exec();
        setState(true);
    }else{
        qWarning()<<"ERROR: "<<endl<<"    Recurso: 'Base de Datos'  -  Estado: ocupado"<<endl;
    }
    return result;
}

cPaciente* DataBase::getObjPaciente(const QString rut)
{
    if( getPacientes(rut) ){

        if(query.next() && query.seek(0)){
            //set object pacient
            cPaciente *cp = new cPaciente(query.value(0).toString(),
                                          query.value(1).toString(),
                                          query.value(2).toString(),
                                          query.value(3).toString(),
                                          query.value(4).toString(),
                                          query.value(5).toString(),
                                          query.value(6).toString(),
                                          query.value(7).toString(),
                                          query.value(8).toString(),
                                          query.value(9).toString(),
                                          query.value(10).toString(),
                                          query.value(11).toString()
                                          );
            return cp;
        }
    }
    return nullptr;
}

bool DataBase::borrarPaciente(QString rut)
{
    bool result = false;
    if(state){
        setState(false);
        QString str = "DELETE FROM PACIENTES WHERE RUT=:rut";
        query.prepare(str);
        query.bindValue(":rut", rut);
        result = query.exec();
        setState( result );
    }else{
        qWarning()<<"ERROR: "<<endl<<"    Recurso: 'Base de Datos'  -  Estado: ocupado"<<endl;
    }
    return result;
}

bool DataBase::insertPaciente(cPaciente *cp)
{
    bool result = false;
    if(state){
        if(!cp->getRUT().isEmpty() && !cp->getNombre().isEmpty()){
            setState(false);
            QString str = "INSERT INTO PACIENTES('RUT','nombre', 'apellido','direccion','sexo','fecha_nacimiento','edad','fecha_ingreso','peso','estatura','actividad','descripcion') values(:RUT,:name,:apell,:dir,:sexo,:FN,:edad,:FI,:peso,:size,:NA,:desc)";
            query.prepare(str);
            query.bindValue(":RUT", cp->getRUT());
            query.bindValue(":name", cp->getNombre());
            query.bindValue(":apell", cp->getApellido());
            query.bindValue(":dir", cp->getDireccion());
            query.bindValue(":sexo", cp->getSexo());
            query.bindValue(":FN", cp->getFecha_nacimiento());
            query.bindValue(":edad", cp->getEdad());
            query.bindValue(":FI", cp->getFecha_ingreso());
            query.bindValue(":peso", cp->getPeso());
            query.bindValue(":size", cp->getEstatura());
            query.bindValue(":NA", cp->getActividad());
            query.bindValue(":desc", cp->getDescripcion());
            result = query.exec();
            setState(true);
        }else
            qWarning()<<"[ERROR:] Formulario de registro de paciente incompleto. (RUT Y NOMBRE SON CAMPOS OBLIGATORIOS)"<<endl;
    }else{
        qWarning()<<"ERROR: "<<endl<<"    Recurso: 'Base de Datos'  -  Estado: ocupado"<<endl;
    }
    return result;

}

bool DataBase::updatePaciente(cPaciente *cp)
{
    bool result = false;
    if(state){
        setState(false);
        QString str = "UPDATE PACIENTES SET RUT=:RUT,nombre=:name,apellido=:apell,direccion=:dir,sexo=:sexo,fecha_nacimiento=:FN,edad=:edad,fecha_ingreso=:FI,peso=:peso,estatura=:size,actividad=:NA,descripcion=:desc WHERE RUT=:RUT";
        query.prepare(str);
        query.bindValue(":RUT", cp->getRUT());
        query.bindValue(":name", cp->getNombre());
        query.bindValue(":apell", cp->getApellido());
        query.bindValue(":dir", cp->getDireccion());
        query.bindValue(":sexo", cp->getSexo());
        query.bindValue(":FN", cp->getFecha_nacimiento());
        query.bindValue(":edad", cp->getEdad());
        query.bindValue(":FI", cp->getFecha_ingreso());
        query.bindValue(":peso", cp->getPeso());
        query.bindValue(":size", cp->getEstatura());
        query.bindValue(":NA", cp->getActividad());
        query.bindValue(":desc", cp->getDescripcion());
        result = query.exec();
        setState(true);
    }else{
        qWarning()<<"ERROR: "<<endl<<"    Recurso: 'Base de Datos'  -  Estado: ocupado"<<endl;
    }
    return result;
}

QString DataBase::crearSesion()
{
    bool result = false;
    if(state){
        setState(false);
        QString str = "SELECT max(ID) as ID FROM SESION";
        query.prepare(str);
        result = query.exec();
        if(result ){
            setState(true);
            return query.next() ? query.value(0).toString() : "";
        }
        else
            qWarning()<<"ERROR: "<<"No se puede crear la sesion - Info: "<<query.lastError().text()<<endl;
        setState(true);
    }else
        qWarning()<<"ERROR: "<<endl<<"    Recurso: 'Base de Datos'  -  Estado: ocupado"<<endl;
    return nullptr;
}







