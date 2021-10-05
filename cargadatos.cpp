#include "cargadatos.h"
#include "ui_cargadatos.h"
#include <QScrollBar>

//globales utiles
double Fs = -1;
int leerDesde = -1;
QString separador = "";

CargaDatos::CargaDatos(QWidget *parent) : QDialog(parent), ui(new Ui::CargaDatos){

    ui->setupUi(this);
    signal=new DelSignal();

    ui->contenedorInfoArchivos->setVisible(false);
    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(70, 70));
    ui->listWidget->setMovement(QListWidget::Static);
    ui->listWidget->setMaximumWidth(128);
    ui->listWidget->setSpacing(12);
    ui->listWidget->setCurrentRow(0);
    ui->stackedPages->setCurrentIndex(0);
    ui->btnAceptarAA->setEnabled(false);

    centrarWidget(460,320);
    this->adjustSize();

    connect(ui->listWidget,SIGNAL(currentRowChanged(int)), this,SLOT(setCurrentIndexSP(int)));
    connect(ui->ButtonFileTxt,SIGNAL(clicked()),this,SLOT(fileChooser() ) );
    connect(ui->ButtonFileCsv,SIGNAL(clicked()),this,SLOT(fileChooser() ) );

}

void CargaDatos::setCurrentIndexSP(int i){
    ui->stackedPages->setCurrentIndex(i);
    ui->contenedorInfoArchivos->setVisible(false);

    ui->btnVerTxt->setIcon(QIcon(QPixmap(":/imagenes/flechaDer.ico")));
    ui->btnVerCsv->setIcon(QIcon(QPixmap(":/imagenes/flechaDer.ico")));

    ui->PanelInfoArchivos->clear();
    centrarWidget(460,320);
    this->adjustSize();
    ui->btnVerTxt->setToolTip("Abrir contenido del Archivo.");
    ui->btnVerCsv->setToolTip("Abrir contenido del Archivo.");

}

void CargaDatos::centrarWidget(int w, int h)
{
    QDesktopWidget *desktop = QApplication::desktop();
    QRect pantalla = desktop->screenGeometry();
    int px  = (pantalla.width()/2) -w/2;
    int py = (pantalla.height()/2) -h/2;

    this->setGeometry(px,py,w,h);
}

CargaDatos::~CargaDatos(){
    delete ui;
}

void CargaDatos::on_ButtonAccept_clicked()
{
    //QMessageBox *msgBox = new QMessageBox(QIcon(QPixmap(":/imagenes/info.png")),"Error","Mensaje!",QMessageBox::Yes,this);

    if(ui->stackedPages->currentWidget()==ui->pageTxt)
    {
        double fsTXT = ui->TxtFs->text().toDouble()/1000;
        signal->setCanales(ui->comboTxtChannels->currentText());
        signal->setFs(QString::number(fsTXT));
        signal->setPath(ui->lineEditPathTxt->text());
        signal->setSeparador(ui->comboTxtSep->currentText());
        signal->setLeerDesde(ui->TxtLeerDesde->text());
        signal->setNombre(ui->lineEditTxtNombre->text());

    }else{
        double fsCSV = ui->CsvFs->text().toDouble()/1000;
        signal->setCanales(ui->comboCsvChannels->currentText());
        signal->setFs(QString::number(fsCSV));
        signal->setPath(ui->lineEditPathCsv->text());
        signal->setSeparador(ui->comboCsvSep->currentText());
        signal->setLeerDesde(ui->CsvLeerDesde->text());
        signal->setNombre(ui->lineEditCsvNombre->text());
    }

    if(signal->getFs().toDouble()<=0){
        QMessageBox::information(this,"Error","Frecuencia de muestreo no valida (Fs >0", QMessageBox::Ok);
        return;
    }
    else{
        if(signal->getLeerDesde().toInt()<0 || signal->getLeerDesde().isEmpty()){
            QMessageBox::information(this,"Error","Fila desde la que se leera no es valida (Fila >0)", QMessageBox::Ok);
            return;
        }
        else{
            Historial->clear();
            emit lecturaAceptada(signal);            
            this->close();
        }
    }    
}

/**********************************************************
 * @name:fileChooser
 * @brief: abre un dialogo para seleccionar un archivo del tipo seleccionado
 * @throw: indica q se puede dar una excepcion y  cual es.
 * @warnig: advertencia de ocupar el fragmento de codigo
 * ********************************************************/
void CargaDatos::fileChooser(){

    QString path,tipo,tipoFile;
    tipoFile=ui->listWidget->currentItem()->text();
    tipo=( tipoFile.toUpper() )+" Files (*."+(tipoFile.toLower())+")";
    path=QFileDialog::getOpenFileName(this, "Abrir Archivo:", QDir::currentPath(),tipo);

    if(path!=NULL){
        QFile fin(path);
        if (!fin.open(QIODevice::ReadOnly | QIODevice::Text)){
            QMessageBox msgBox;
            msgBox.setText("No se pudo abrir el archivo seleccionado");
            msgBox.exec();
            return;
        }else{
            ui->contenedorInfoArchivos->setVisible(false);
            ui->btnAceptarAA->setEnabled(false);
            ui->btnVerTxt->setIcon(QIcon(QPixmap(":/imagenes/flechaDer.ico")));
            ui->btnVerCsv->setIcon(QIcon(QPixmap(":/imagenes/flechaDer.ico")));
            ui->PanelInfoArchivos->clear();
            centrarWidget(460,320);
            this->adjustSize();
            ui->btnVerTxt->setToolTip("Abrir contenido del Archivo.");
            ui->btnVerCsv->setToolTip("Abrir contenido del Archivo.");
            habilita(tipoFile.toLower(),path);
        }
    }
}

void CargaDatos::habilita(QString tipo,QString path)
{
    int i = path.lastIndexOf("/");
    if(tipo=="txt"){
        ui->btnVerTxt->setEnabled(true);
        ui->groupBoxParamTxt->setEnabled(true);
        ui->lineEditPathTxt->setText(path);
        ui->lineEditTxtNombre->setText(path.mid(i+1,-1));
    }else
        if(tipo=="csv"){
            ui->btnVerCsv->setEnabled(true);
            ui->groupBoxParamCsv->setEnabled(true);
            ui->lineEditPathCsv->setText(path);
            ui->lineEditCsvNombre->setText(path.mid(i+1,-1));
        }else
            qDebug()<<"Error en el tipo de dato.";

}

void CargaDatos::on_btnVerCsv_clicked()
{

    if(!ui->PanelInfoArchivos->isVisible()){
        ui->contenedorInfoArchivos->setVisible(true);
        ui->btnVerCsv->setIcon(QIcon(QPixmap(":/imagenes/flechaIzq.ico")));
        centrarWidget(1320,320);
        ui->btnVerCsv->setToolTip("Cerrar contenido del Archivo.");

        verContenidoArchivo(ui->lineEditPathCsv->text());
    }
    else{
        ui->contenedorInfoArchivos->setVisible(false);
        ui->btnVerCsv->setIcon(QIcon(QPixmap(":/imagenes/flechaDer.ico")));
        ui->PanelInfoArchivos->clear();
        centrarWidget(460,320);
        this->adjustSize();
        ui->btnVerCsv->setToolTip("Abrir contenido del Archivo.");
    }

}

void CargaDatos::on_btnVerTxt_clicked()
{

    if(!ui->PanelInfoArchivos->isVisible()){
        ui->contenedorInfoArchivos->setVisible(true);
        ui->btnVerTxt->setIcon(QIcon(QPixmap(":/imagenes/flechaIzq.ico")));
        centrarWidget(1320,320);
        ui->btnVerTxt->setToolTip("Cerrar contenido del Archivo.");

        verContenidoArchivo(ui->lineEditPathTxt->text());

    }
    else{
        ui->contenedorInfoArchivos->setVisible(false);
        ui->btnVerTxt->setIcon(QIcon(QPixmap(":/imagenes/flechaDer.ico")));
        ui->PanelInfoArchivos->clear();
        centrarWidget(460,320);
        this->adjustSize();
        ui->btnVerTxt->setToolTip("Abrir contenido del Archivo.");
    }

}

void CargaDatos::verContenidoArchivo(QString ruta)
{
    QString path = ruta;
    QFile fin(path);
    int cont=0;

    if (!fin.open(QIODevice::ReadOnly)){
        qDebug()<<"[F: verArchivo()] Error al abrir el archivo en: "<<path <<"\n";
        return;
    }
    else{
        QTextStream in(&fin);
        QString archivo = "";
        QString oldLine = "";
        QString line = in.readLine();

        for (int var = 0; var < 100; ++var) {
            archivo.append(line+"\n");
            oldLine = line;
            line = in.readLine();
            cont++;
        }
        revisarLineas(oldLine, line, path);
        ui->PanelInfoArchivos->appendPlainText(archivo);
        ui->PanelInfoArchivos->verticalScrollBar()->setValue(0);

    }
    fin.close();
}

void CargaDatos::revisarLineas(QString oldLine, QString line, QString path)
{
    if(line.contains(" ")){ ui->separador->setText("Espacios"); separador=" ";}
    if(line.contains(",")){ ui->separador->setText("Comas"); separador=",";}
    if(line.contains(";")){ ui->separador->setText("Puntos y Comas"); separador=";";}
    if(line.contains("\t")){ ui->separador->setText("Tabulacion"); separador="\t";}

    if(separador.isEmpty()) return;

    QStringList canalesLine1 = oldLine.split(separador);
    QStringList canalesLine2 = line.split(separador);

    QString time1String = canalesLine1[0];
    QString time2String = canalesLine2[0];
    double t1 = time1String.toDouble();
    double t2 = time2String.toDouble();
    Fs = 1/(t2-t1);

    if(Fs==-1) return;

    ui->canales->setText(QString::number(canalesLine1.size()-1));
    ui->fs->setText(QString::number(Fs));


    QFile fin(path);
    if (!fin.open(QIODevice::ReadOnly | QIODevice::Text)){
        ui->leerDesde->setText("No encontrado...");
        return;
    }else{
        int var=0;
        bool ok;
        QStringList filas;
        QTextStream in(&fin);
        QString currentline = in.readLine();

        for (var = 0; var < 100; ++var)
        {
            filas = currentline.split(separador);
            if(filas.size()==canalesLine1.size())
            {
                for ( QString s: filas ){
                    s.toDouble(&ok);
                    if(!ok){
                        break;
                    }
                }
                if(ok)
                {
                    leerDesde = var;
                    break;
                }
            }
            currentline = in.readLine();
        }

        if(leerDesde==-1) return;
        ui->leerDesde->setText(QString::number(var));
    }

    leerDesde = -1;
    Fs = -1;
    separador = "";
    ui->btnAceptarAA->setEnabled(true);
}

void CargaDatos::on_btnAceptarAA_clicked()
{
    if(ui->stackedPages->currentIndex()==0)
    {
        ui->comboTxtChannels->setCurrentText(ui->canales->text());
        ui->comboTxtSep->setCurrentText(ui->separador->text());
        ui->TxtFs->setValue(ui->fs->text().toInt());
        ui->TxtLeerDesde->setValue(ui->leerDesde->text().toInt());
    }else{
        ui->comboCsvChannels->setCurrentText(ui->canales->text());
        ui->comboCsvSep->setCurrentText(ui->separador->text());
        ui->CsvFs->setValue(ui->fs->text().toInt());
        ui->CsvLeerDesde->setValue(ui->leerDesde->text().toInt());
    }
}
