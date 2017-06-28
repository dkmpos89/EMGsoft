#include "cproject.h"
#include <QDebug>

cProject::cProject()
{
    this->nombre = "";
    this->fechaInicio = "";
    this->fechaTermino = "";
    this->descripcion = "";
}

cProject::cProject(QString nombre, QString fechaInicio, QString fechaTermino, QString descripcion)
{
    this->nombre = nombre;
    this->fechaInicio = fechaInicio;
    this->fechaTermino = fechaTermino;
    this->descripcion = descripcion;
}

QString cProject::getID() const
{
    return ID;
}

void cProject::setID(const QString &value)
{
    ID = value;
}

QString cProject::getNombre() const
{
    return nombre;
}

void cProject::setNombre(const QString &value)
{
    nombre = value;
}

QString cProject::getFechaInicio() const
{
    return fechaInicio;
}

void cProject::setFechaInicio(const QString &value)
{
    fechaInicio = value;
}

QString cProject::getFechaTermino() const
{
    return fechaTermino;
}

void cProject::setFechaTermino(const QString &value)
{
    fechaTermino = value;
}

QString cProject::getDescripcion() const
{
    return descripcion;
}

void cProject::setDescripcion(const QString &value)
{
    descripcion = value;
}

QMap<QString, QVariant> cProject::getMap(){

    //QVariantMap fields;
    QMap<QString, QVariant> myMap{ {"name", QVariant(this->nombre) }, {"initPrj", QVariant(this->fechaInicio)}, {"descriptionPrj", QVariant(this->descripcion)}, {"endPrj", QVariant(this->fechaTermino)} };
    //fields.insert("Map", QVariant( myMap ) );
    //return fields;
    return myMap;
}

QString cProject::toString()
{
    QString salida = "";
    salida.append("\t\"namePrj\":\""+getNombre()+"\",\n");
    salida.append("\t\"initPrj\":\""+getFechaInicio()+"\",\n");
    salida.append("\t\"endPrj\":\""+getFechaTermino()+"\",\n");
    salida.append("\t\"descriptionPrj\":\""+getDescripcion()+"\",\n");
    return salida;
}

bool cProject::isValid(){
    bool ret = !(this->nombre.isEmpty()) && !(this->ID.isEmpty()) && !(this->fechaTermino.isEmpty()) && !(this->fechaInicio.isEmpty()) && !(this->descripcion.isEmpty());
    qDebug()<<"cProject "<<ret ;
    return ret;

}
