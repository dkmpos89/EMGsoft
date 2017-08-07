#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("WindowsVista");
    MainWindow w;   
    QMessageBox msgBox;

    int final=0;
    if(w.levantarServicios()){
        w.show();        
        w.setWindowState(Qt::WindowMaximized);
        final=a.exec();
    }else{
        final=-1;
        msgBox.setText( "Error la levantar los Servicios.");
        msgBox.exec();
    }

    return final;
}
