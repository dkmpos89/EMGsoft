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

double cSignal::getVmean() const
{
    return vmean;
}

void cSignal::setVmean(double value)
{
    vmean = value;
}

double cSignal::getVmedian() const
{
    return vmedian;
}

void cSignal::setVmedian(double value)
{
    vmedian = value;
}

double cSignal::getVstdesv() const
{
    return vstdesv;
}

void cSignal::setVstdesv(double value)
{
    vstdesv = value;
}

double cSignal::getVarian() const
{
    return varian;
}

void cSignal::setVarian(double value)
{
    varian = value;
}

double cSignal::getVrms() const
{
    return vrms;
}

void cSignal::setVrms(double value)
{
    vrms = value;
}

double cSignal::getVenergy() const
{
    return venergy;
}

void cSignal::setVenergy(double value)
{
    venergy = value;
}

double cSignal::getVnorm() const
{
    return vnorm;
}

void cSignal::setVnorm(double value)
{
    vnorm = value;
}

double cSignal::getVmin() const
{
    return vmin;
}

void cSignal::setVmin(double value)
{
    vmin = value;
}

double cSignal::getVmax() const
{
    return vmax;
}

void cSignal::setVmax(double value)
{
    vmax = value;
}

double cSignal::getVrange() const
{
    return vrange;
}

void cSignal::setVrange(double value)
{
    vrange = value;
}

QString cSignal::toString(){

    QString str = "";
    str.append("\t\"median\":\""+QString::number(getVmedian())+"\",\n");
    str.append("\t\"mean\":\""+QString::number(getVmean())+"\",\n");
    str.append("\t\"stdDev\":\""+QString::number(getVstdesv())+"\",\n");
    str.append("\t\"var\":\""+QString::number(getVarian())+"\",\n");
    str.append("\t\"rms\":\""+QString::number(getVrms())+"\",\n");
    str.append("\t\"energy\":\""+QString::number(getVenergy())+"\",\n");
    str.append("\t\"frec\":\""+getFs()+"\",\n");
    return str;
}
