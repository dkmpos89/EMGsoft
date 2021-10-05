#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include "cproject.h"
#include "cPaciente.h"

class DataBase{

public:
    DataBase();
    ~DataBase();
    static bool createDB();
    static bool initDB();
    static DataBase *getInstance();
    QSqlQuery getQuery();
    void setQuery(const QSqlQuery &value);

    QSqlDatabase getDb();
    bool getProyectos(QString name);
    bool getState() const;
    void setState(bool value);
    bool insertProyecto(cProject *cp);
    bool borrarProyecto(QString id);
    void showError(QSqlError err, QString msg);
    bool getPacientes(const QString rut);
    bool borrarPaciente(QString rut);
    bool insertPaciente(cPaciente *cp);
    bool updatePaciente(cPaciente *cp);
    cPaciente *getObjPaciente(const QString rut);
    QString crearSesion();
private:
    QSqlDatabase db;
    QSqlQuery query;
    void executeScript(QSqlQuery query);
    bool state = true;
    static DataBase* instance;
};

#endif // DATABASE_H
