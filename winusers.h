#ifndef WINUSERS_H
#define WINUSERS_H

#include <QDialog>
#include <QTableView>
#include <QItemDelegate>
#include <QStandardItemModel>
#include <QtSql>
#include "database.h"


namespace Ui {
class winUsers;
}

class winUsers : public QDialog
{
    Q_OBJECT

public:
    explicit winUsers(QWidget *parent = 0);
    void limpiarFormulario(int n);

    ~winUsers();


signals:
    void enviarPaciente(cPaciente *cp);


public slots:
    void actualizarTabla(QString rut);
    bool setRutFormat();

private slots:

    void on_BtnEliminar_clicked();
    void on_botonOKAgregar_clicked();
    void on_btn_ActualizarTabUs_clicked();
    void on_BtnEditar_clicked();
    void on_btnConfirmarCambios_clicked();

    void on_btnIniciarSesion_clicked();

private:
    Ui::winUsers *ui;
    QSqlQueryModel *model;
    QSqlDatabase database;

};

#endif // WINUSERS_H
