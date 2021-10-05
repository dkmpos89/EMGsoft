#include "atributo.h"

Atributo::Atributo(){}

Atributo::Atributo(QString k, QString v)
{
    this->clave = k;
    this->valor = v;
}

QString Atributo::getKey() const
{
    return clave;
}

void Atributo::setKey(const QString &value)
{
    clave = value;
}

QString Atributo::getValue() const
{
    return valor;
}

void Atributo::setValue(const QString &value)
{
    valor = value;
}

QString Atributo::toString()
{
    return this->getKey()+":"+this->getValue();
}
