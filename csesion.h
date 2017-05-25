#ifndef CSESION_H
#define CSESION_H

#include <QObject>
#include "cproject.h"
#include "cpaciente.h"
#include "csignal.h"

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

private:
    explicit cSesion();
    bool getState();
    static cSesion* Singleton;
    cProject *currentProject;
    cPaciente *currentPaciente;
    cSignal *currentSignal;

    QString sesion_id;
    QString sesion_fecha;

};

#endif // CSESION_H
