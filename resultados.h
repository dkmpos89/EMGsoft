#ifndef RESULTADOS_H
#define RESULTADOS_H

#include <QObject>

class Resultados
{
public:
    //explicit Resultados();
    Resultados();
    QString getNombreMetodo() const;
    void setNombreMetodo(const QString &value);

    QString getUrlImagen() const;
    void setUrlImagen(const QString &value);

    QStringList getAttributeList() const;
    void setAttributeList(const QStringList &value);

    QString toString();

private:
    QString nombreMetodo;               // nombre del analisis.
    QString urlImagen;                  // ruta hacia la imagen del analisis.
    QStringList attrList;               //contiene las configuraciones que se usaron para calcular el analisis.
};

#endif // RESULTADOS_H
