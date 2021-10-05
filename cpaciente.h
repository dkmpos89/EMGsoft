#ifndef CPACIENTE_H
#define CPACIENTE_H

#include <QString>


class cPaciente
{
public:
    cPaciente();
    cPaciente(QString RUT, QString nombre, QString apellido, QString direccion, QString sexo, QString fecha_nacimiento, QString edad, QString fecha_ingreso, QString peso, QString estatura, QString actividad, QString descripcion);

    QString getRUT() const;
    void setRUT(const QString &value);

    QString getNombre() const;
    void setNombre(const QString &value);

    QString getApellido() const;
    void setApellido(const QString &value);

    QString getDireccion() const;
    void setDireccion(const QString &value);

    QString toString() { return QString(RUT+" - "+nombre+" - "+apellido+" - "+direccion); }

    QString getSexo() const;
    void setSexo(const QString &value);

    QString getFecha_nacimiento() const;
    void setFecha_nacimiento(const QString &value);

    QString getPeso() const;
    void setPeso(const QString &value);

    QString getEstatura() const;
    void setEstatura(const QString &value);

    QString getActividad() const;
    void setActividad(const QString &value);

    QString getDescripcion() const;
    void setDescripcion(const QString &value);

    QString getEdad() const;
    void setEdad(const QString &value);

    QString getFecha_ingreso() const;
    void setFecha_ingreso(const QString &value);

private:
    QString RUT, nombre, apellido, direccion, sexo, fecha_nacimiento, edad, fecha_ingreso, peso, estatura, actividad, descripcion;
};

#endif // CPACIENTE_H
