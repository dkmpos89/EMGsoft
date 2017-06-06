#include "cSignal.h"

cSignal::cSignal()
{
    path="";
    fs="0";
    canales="0";
    leerDesde="0";
    separador=" ";
    vmean = 1;
    vmedian = 1;
    vstdesv = 1;
    varian = 1;
    vrms = 1;
    venergy = 1;
    vnorm = 1;
    vmin = 1;
    vmax = 1;
    vrange = 1;
}

cSignal::cSignal(QString p, QString f, QString c, QString l){
    path=p;
    fs=f;
    canales=c;
    leerDesde=l;
}

QString cSignal::toString(){

    QString str="Path:"+path+" Fs:"+fs+
            " Canales:"+canales+" leerDesde:"+leerDesde+
            " separador:"+separador;
    return str;
}

void cSignal::showSignal(){
    int tamRow=readSignal.size();
    int tamCol=readSignal[0].size();
    qDebug()<<tamRow<<" "<<tamCol;

}

void cSignal::setStatistics(double mean, double median, double stdd, double varr, double rmss, double energy, double norm, double minn, double maxx, double range)
{
    this->vmean = mean;
    this->vmedian = median;
    this->vstdesv = stdd;
    this->varian = varr;
    this->vrms = rmss;
    this->venergy = energy;
    this->vnorm = norm;
    this->vmin = minn;
    this->vmax = maxx;
    this->vrange = range;
}

QMap<QString, QVariant> cSignal::getMap(){

    //QVariantMap fields;
    QMap<QString, QVariant> myMap{
                                    {"median", QVariant(this->vmedian)},
                                    {"mean", QVariant(this->vmean)},
                                    {"stdDev", QVariant(this->vstdesv)},
                                    {"var", QVariant(this->varian)},
                                    {"rms", QVariant(this->vrms)},
                                    {"energy", QVariant(this->venergy)},
                                    {"frec", QVariant(this->fs)},
                                    {"channels", QVariant(this->canales)}
                                  };
    //fields.insert("Map", QVariant( myMap ) );
    //return fields;
    return myMap;
}

QList<Atributo*> cSignal::getAttrList()
{
    QList<Atributo*> lista_atributos;

    lista_atributos << new Atributo("mean",QString::number(this->vmean));
    lista_atributos << new Atributo("median",QString::number(this->vmedian));
    lista_atributos << new Atributo("deviation",QString::number(this->vstdesv));
    lista_atributos << new Atributo("variance",QString::number(this->varian));
    lista_atributos << new Atributo("rms",QString::number(this->vrms));
    lista_atributos << new Atributo("energy",QString::number(this->venergy));
    lista_atributos << new Atributo("norm",QString::number(this->vnorm));
    lista_atributos << new Atributo("min",QString::number(this->vmin));
    lista_atributos << new Atributo("max",QString::number(this->vmax));
    lista_atributos << new Atributo("range",QString::number(this->vrange));

    return lista_atributos;
}
