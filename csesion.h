#ifndef CSESION_H
#define CSESION_H

#include <QObject>
#include "cproject.h"
#include "cpaciente.h"
#include "csignal.h"
#include "resultados.h"

class cSesion
{
public:
    static cSesion* getInstance();

    ~cSesion();
    cProject *getCurrentProject() const;
    void setCurrentProject(cProject *value);

    cPaciente *getCurrentPaciente() const;
    void setCurrentPaciente(cPaciente *value);

    cSignal *getCurrentSignal() const;
    void setCurrentSignal(cSignal *value);
    bool init();

    void addReport(Resultados *result);
    QString getRRtoString();
    bool isValid();
    QList<Resultados *> getResultadosReportes();
    void setResultadosReportes(const QList<Resultados *> &value);

private:
    explicit cSesion();
    bool getState();
    static cSesion* Singleton;
    cProject *currentProject;
    cPaciente *currentPaciente;
    cSignal *currentSignal;
    QList<Resultados*> resultadosReportes; // la funcion getRRtoString() devuelve esta variable en forma de string

    QString sesion_id;
    QString sesion_fecha;

};

#endif // CSESION_H
