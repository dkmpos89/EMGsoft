#ifndef cSignal_H
#define cSignal_H

#include <QString>
#include <QMainWindow>
#include <QObject>
#include <QList>
#include <QVector2D>
#include <QDebug>

class cSignal
{
public:
    cSignal();
    cSignal(QString p, QString f, QString c, QString l);

    QVector<QVector <double> > readSignal;   // Señal que se lee y se guarda aqui.
    QVector<QVector <double> > resultSignal; // variable "resultSignal" para guardar los reultados de los metodos
    void showSignal();

    //getters and setters
    QString getNombre(){return nombre;}
    QString getPath(){return path;}
    QString getFs(){return fs;}
    QString getCanales(){return canales;}
    QString getLeerDesde(){return leerDesde;}
    QString getSeparador(){return separador;}
    QString getNumSeparador(){return n_separador;}
    QString getMetodo(){return metodo;}
    double getRms(){return vrms;}
    double getEnergy(){return venergy;}
    double getNorm(){return vnorm;}
    int getSizeIntervalo(){return sizeIntervalo;}

    QVector<QVector <double> > getreadSignal(){return readSignal;}

    void setNombre(QString n){nombre=n;}
    void setPath(QString s){path=s;}
    void setFs(QString f){fs=f;}
    void setCanales(QString c){canales=c;}
    void setLeerDesde(QString l){leerDesde=l;}

    void setNumSeparador(QString l)
    {
        if(l==" ") n_separador="0";
        if(l==",") n_separador="1";
        if(l==";") n_separador="2";
        if(l=="	") n_separador="3";
    }
    void setSeparador(QString l)
    {
        if(l=="Espacios" || l==" ") separador=" ";
        if(l=="Comas" || l==",") separador=",";
        if(l=="Puntos y Comas" || l==";") separador=";";
        if(l=="Tabulacion" || l=="	") separador="	";
        setNumSeparador(l);
    }

    void setSizeIntervalo(int s){sizeIntervalo=s;}
    void setMetodo(QString s){metodo=s;}
    void setStatistics(double mean, double median, double stdd, double varr, double rmss, double energy, double norm, double minn, double maxx, double range);
    QString toString();
    QMap<QString, QVariant> getMap();
    double getVmean() const;
    void setVmean(double value);

    double getVmedian() const;
    void setVmedian(double value);

    double getVstdesv() const;
    void setVstdesv(double value);

    double getVarian() const;
    void setVarian(double value);

    double getVrms() const;
    void setVrms(double value);

    double getVenergy() const;
    void setVenergy(double value);

    double getVnorm() const;
    void setVnorm(double value);

    double getVmin() const;
    void setVmin(double value);

    double getVmax() const;
    void setVmax(double value);

    double getVrange() const;
    void setVrange(double value);

private:
    QString path,fs,canales,leerDesde,separador,n_separador,metodo,nombre;
    int sizeIntervalo;
    double vmean, vmedian, vstdesv, varian, vrms, venergy, vnorm, vmin, vmax, vrange;

};

#endif // cSignal_H
