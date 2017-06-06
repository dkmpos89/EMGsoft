#ifndef CPROJECT_H
#define CPROJECT_H

#include <QString>
#include <QVariantMap>

class cProject
{
public:
    cProject();
    cProject(QString nombre, QString fechaInicio, QString fechaTermino, QString descripcion);
    QString getID() const;
    void setID(const QString &value);

    QString getNombre() const;
    void setNombre(const QString &value);

    QString getFechaInicio() const;
    void setFechaInicio(const QString &value);

    QString getFechaTermino() const;
    void setFechaTermino(const QString &value);

    QString toString() { return QString(ID+" - "+nombre+" - "+fechaInicio+" - "+fechaTermino); }

    QString getDescripcion() const;
    void setDescripcion(const QString &value);

    QMap<QString, QVariant> getMap();
private:
    QString ID, nombre, fechaInicio, fechaTermino, descripcion;
};

#endif // CPROJECT_H
