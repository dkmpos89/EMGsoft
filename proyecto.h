#ifndef PROYECTO_H
#define PROYECTO_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include <QStackedWidget>
#include "database.h"


namespace Ui {
class Proyecto;
}

class Proyecto : public QDialog
{
    Q_OBJECT

public:
    explicit Proyecto(QWidget *parent = 0);
    void limpiarFormulario();
    //void setDatabase(DataBase *datb){ this->db = datb; }
    QStackedWidget * getSw();

    ~Proyecto();

signals:
    void nuevoProyecto(cProject *cp);


public slots:
    void actualizarTabla(QString nombre);


private slots:
    void on_btnAgregar_clicked();
    void on_btnVer_clicked();
    void on_btnEliminar_clicked();
    void on_btnOpen_clicked();
    void on_btnVolver_clicked();

private:
    Ui::Proyecto *ui;
    QSqlQueryModel *model;
    //QSqlDatabase database;
    DataBase *db;

};

#endif // PROYECTO_H
