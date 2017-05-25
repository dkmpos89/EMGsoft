#ifndef CARGADATOS_H
#define CARGADATOS_H

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QListWidgetItem>
#include "csignal.h"
#include <QTextEdit>
#include <QTextCursor>
#include <QDesktopWidget>
#include <QThread>


namespace Ui {
class CargaDatos;
}

class CargaDatos : public QDialog
{
    Q_OBJECT

public:
    explicit CargaDatos(QWidget *parent = 0);

    ~CargaDatos();

    void habilita(QString tipo, QString path);
    void centrarWidget(int w, int h);
    bool leerArchivo(QString path);
    void setHistorialVar(QList<QString> *Hist){this->Historial = Hist; }    
    void verContenidoArchivo(QString ruta);

    void revisarLineas(QString oldLine, QString line, QString path);
signals:
    void lecturaAceptada(cSignal *s);

public slots:
    void setCurrentIndexSP(int);

private slots:
    void on_ButtonAccept_clicked();
    void fileChooser();
    void on_btnVerCsv_clicked();
    void on_btnVerTxt_clicked();
    void on_btnAceptarAA_clicked();
private:
    Ui::CargaDatos *ui;
    cSignal *signal;
    QList<QString> *Historial;
    void createIcons();

};

#endif // CARGADATOS_H
