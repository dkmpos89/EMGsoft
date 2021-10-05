#include "delsignal.h"

DelSignal::DelSignal()
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

DelSignal::DelSignal(QString p, QString f, QString c, QString l){
    path=p;
    fs=f;
    canales=c;
    leerDesde=l;
}

QString DelSignal::toString(){

    QString str="Path:"+path+" Fs:"+fs+
            " Canales:"+canales+" leerDesde:"+leerDesde+
            " separador:"+separador;
    return str;
}

void DelSignal::showSignal(){
    int tamRow=readSignal.size();
    int tamCol=readSignal[0].size();
    qDebug()<<tamRow<<" "<<tamCol;

}

void DelSignal::setStatistics(double mean, double median, double stdd, double varr, double rmss, double energy, double norm, double minn, double maxx, double range)
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
    this->vnorm = range;
}
