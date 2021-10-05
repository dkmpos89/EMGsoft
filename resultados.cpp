#include "resultados.h"
#include <QDebug>


Resultados::Resultados()
{

}

QString Resultados::getNombreMetodo() const
{
    return nombreMetodo;
}

void Resultados::setNombreMetodo(const QString &value)
{
    nombreMetodo = value;
}

QString Resultados::getUrlImagen() const
{
    return urlImagen;
}

void Resultados::setUrlImagen(const QString &value)
{
    urlImagen = value;
}

QStringList Resultados::getAttributeList() const
{
    return attrList;
}

void Resultados::setAttributeList(const QStringList &value)
{
    attrList = value;
}

QString Resultados::toString()
{
    int count = attrList.size();

    QString str = "\n\t\t{";
    str.append("\"url\":\""+getUrlImagen()+"\",\"method\":\""+getNombreMetodo()+"\",\"attr\":");
    str.append("[");
    for (int var = 0; var < count; var+=2)
    {
        str.append("\""+attrList[var]+" : "+attrList[var+1]+"\"");
        if(var+2 < count )
            str.append(",");
    }
    str.append("]");
    str.append("}");
    return str;
}

