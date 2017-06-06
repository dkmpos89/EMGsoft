#ifndef RESULTADOS_H
#define RESULTADOS_H

#include <QObject>
#include "atributo.h"

class Resultados
{
public:
    //explicit Resultados();
    Resultados();
    QString getNombreMetodo() const;
    void setNombreMetodo(const QString &value);

    QString getGraficoResultado() const;
    void setGraficoResultado(const QString &value);

    QList<Atributo> getListaAtttrConfig() const;
    void setListaAtttrConfig(const QList<Atributo> &value);

private:
    QString nombreMetodo;               // nombre del analisis.
    QString graficoResultado;           // ruta hacia la imagen del analisis.
    QList<Atributo> listaAtttrConfig;   //contiene las configuraciones que se usaron para calcular el analisis.
};

#endif // RESULTADOS_H
