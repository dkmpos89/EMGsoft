#include "cpaciente.h"

cPaciente::cPaciente()
{

}

cPaciente::cPaciente(QString RUT, QString nombre, QString apellido, QString direccion, QString sexo, QString fecha_nacimiento, QString edad, QString fecha_ingreso, QString peso, QString estatura, QString actividad, QString descripcion)
{
    this->RUT = RUT;
    this->nombre = nombre;
    this->apellido = apellido;
    this->direccion = direccion;
    this->sexo = sexo;
    this->fecha_nacimiento = fecha_nacimiento;
    this->edad = edad;
    this->fecha_ingreso = fecha_ingreso;
    this->peso = peso;
    this->estatura = estatura;
    this->actividad = actividad;
    this->descripcion = descripcion;
}

QString cPaciente::getRUT() const
{
    return RUT;
}

void cPaciente::setRUT(const QString &value)
{
    RUT = value;
}

QString cPaciente::getNombre() const
{
    return nombre;
}

void cPaciente::setNombre(const QString &value)
{
    nombre = value;
}

QString cPaciente::getApellido() const
{
    return apellido;
}

void cPaciente::setApellido(const QString &value)
{
    apellido = value;
}

QString cPaciente::getDireccion() const
{
    return direccion;
}

void cPaciente::setDireccion(const QString &value)
{
    direccion = value;
}

QString cPaciente::getSexo() const
{
    return sexo;
}

void cPaciente::setSexo(const QString &value)
{
    sexo = value;
}

QString cPaciente::getFecha_nacimiento() const
{
    return fecha_nacimiento;
}

void cPaciente::setFecha_nacimiento(const QString &value)
{
    fecha_nacimiento = value;
}

QString cPaciente::getPeso() const
{
    return peso;
}

void cPaciente::setPeso(const QString &value)
{
    peso = value;
}

QString cPaciente::getEstatura() const
{
    return estatura;
}

void cPaciente::setEstatura(const QString &value)
{
    estatura = value;
}

QString cPaciente::getActividad() const
{
    return actividad;
}

void cPaciente::setActividad(const QString &value)
{
    actividad = value;
}

QString cPaciente::getDescripcion() const
{
    return descripcion;
}

void cPaciente::setDescripcion(const QString &value)
{
    descripcion = value;
}

QString cPaciente::getEdad() const
{
    return edad;
}

void cPaciente::setEdad(const QString &value)
{
    edad = value;
}

QString cPaciente::getFecha_ingreso() const
{
    return fecha_ingreso;
}

void cPaciente::setFecha_ingreso(const QString &value)
{
    fecha_ingreso = value;
}

QMap<QString, QVariant> cPaciente::getMap(){

    //QVariantMap fields;
    QMap<QString, QVariant> myMap{  {"rut", QVariant(this->RUT) },
                                    {"name", QVariant(this->nombre)},
                                    {"lastName", QVariant(this->apellido)},
                                    {"address", QVariant(this->direccion)},
                                    {"sex", QVariant(this->sexo)},
                                    {"birthDate", QVariant(this->fecha_nacimiento)},
                                    {"age", QVariant(this->edad)},
                                    {"dateIn", QVariant(this->fecha_ingreso)},
                                    {"weight", QVariant(this->peso)},
                                    {"height", QVariant(this->estatura)},
                                    {"activities", QVariant(this->actividad)},
                                    {"desc", QVariant(this->descripcion)}
                                  };
    //fields.insert("Map", QVariant( myMap ) );
    //return fields;
    return myMap;

}

QString cPaciente::toString(){
    QString salida = "";
    salida.append("\t\"rut\":\""+getRUT()+"\",\n");
    salida.append("\t\"name\":\""+getNombre()+"\",\n");
    salida.append("\t\"lastName\":\""+getApellido()+"\",\n");
    salida.append("\t\"address\":\""+getDireccion()+"\",\n");
    salida.append("\t\"sex\":\""+getSexo()+"\",\n");
    salida.append("\t\"birthDate\":\""+getFecha_nacimiento()+"\",\n");
    salida.append("\t\"age\":\""+getEdad()+"\",\n");
    salida.append("\t\"dateIn\":\""+getFecha_ingreso()+"\",\n");
    salida.append("\t\"weight\":\""+getPeso()+"\",\n");
    salida.append("\t\"height\":\""+getEstatura()+"\",\n");
    salida.append("\t\"activities\":\""+getActividad()+"\",\n");
    salida.append("\t\"desc\":\""+getDescripcion()+"\",\n");

    return salida;
}
