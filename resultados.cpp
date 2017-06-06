#include "resultados.h"

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

QString Resultados::getGraficoResultado() const
{
    return graficoResultado;
}

void Resultados::setGraficoResultado(const QString &value)
{
    graficoResultado = value;
}

QList<Atributo> Resultados::getListaAtttrConfig() const
{
    return listaAtttrConfig;
}

void Resultados::setListaAtttrConfig(const QList<Atributo> &value)
{
    listaAtttrConfig = value;
}

