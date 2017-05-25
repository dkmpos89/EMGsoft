#include "dockindicadores.h"
#include "ui_dockindicadores.h"
#include <Qlist>
#include <QTimer>
#include <QMessageBox>

dockIndicadores::dockIndicadores(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::dockIndicadores)
{       
    ui->setupUi(this);
    this->p = parent;

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
    timer->start(1000);    

}

dockIndicadores::~dockIndicadores()
{
    delete ui;
}

void dockIndicadores::on_btnConfiguraciones_clicked()
{
    emit clickConfiguracion();
}

void dockIndicadores::updateTimer()
{
    double px=0,py=0;

    ss+=1;
    if(ss>=60){
        ss=0;
        mm+=1;
        if(mm>=60){
            mm=0;
            HH+=1;
        }
    }
    //  Actualizar Timer
    ui->lcdNumber->display(QString::number(HH)+":"+QString::number(mm)+":"+QString::number(ss));
    //ui->ElapsedTime->setText();
    px = (p->geometry().width()/2)-165;
    py = 30;
    this->setGeometry(px, py, 365, 45);

    revisarEstadoOctave();
}

void dockIndicadores::on_toolButton_clicked()
{
    qApp->closeAllWindows();
}

void dockIndicadores::revisarEstadoOctave()
{
    /* Bloque de Estado del proceso Octave */
    QByteArray ba = OctaveProcess::getInstance()->readAllStandardError();
    if(!OctaveProcess::getInstance()->getState())
    {
        ui->OctaveEstado->setMovie(movie);
        movie->start();

        if(!ba.isEmpty()){
            QMessageBox::information(this->parentWidget(), tr("Informacion:"), tr("Octave:\n"+ba));
            QApplication::restoreOverrideCursor();
            OctaveProcess::getInstance()->setState(true);
        }

    }else{
        ui->OctaveEstado->setPixmap(QPixmap(":/imagenes/logoOctave.png"));
        movie->stop();        
    }
}

void dockIndicadores::on_btnStopOctave_clicked()
{
    OctaveProcess::getInstance()->setState(true);
    QApplication::restoreOverrideCursor();
}

void dockIndicadores::on_toolButton_2_clicked()
{
    OctaveProcess::getInstance()->init();
    QApplication::restoreOverrideCursor();
}
