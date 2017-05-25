#include "csesion.h"
#include <QDateTime>
#include <QDate>
#include "database.h"

//static member
cSesion* cSesion::Singleton = nullptr;

cSesion::cSesion()
{
    currentProject = nullptr;
    currentPaciente = nullptr;
    currentSignal = nullptr;

    sesion_id = "";
    sesion_fecha = "";//QDateTime(QDate().currentDate()).toString("dd-MM-yyyy")
}

bool cSesion::getState()
{
    if(currentPaciente==nullptr || currentProject==nullptr || currentSignal==nullptr)
        return false;
    return true;
}

cSesion *cSesion::getInstance()
{
    if( Singleton == nullptr )
        Singleton = new cSesion();

    return Singleton;
}

bool cSesion::init()
{
    sesion_id = DataBase::getInstance()->crearSesion() ;
    sesion_fecha = QDateTime(QDate().currentDate()).toString("dd-MM-yyyy");

    if(!sesion_id.isNull() && sesion_id!="") return true;
    if(sesion_id=="") { sesion_id = "0000"; return true; }

    return false;
}

cSesion::~cSesion()
{

}

cSignal *cSesion::getCurrentSignal() const
{
    return currentSignal;
}

void cSesion::setCurrentSignal(cSignal *value)
{
    currentSignal = value;
}

cPaciente *cSesion::getCurrentPaciente() const
{
    return currentPaciente;
}

void cSesion::setCurrentPaciente(cPaciente *value)
{
    currentPaciente = value;
}

cProject *cSesion::getCurrentProject() const
{
    return currentProject;
}

void cSesion::setCurrentProject(cProject *value)
{
    currentProject = value;
}



