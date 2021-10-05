#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDirModel>
#include "qcustomplot.h"
#include "qxtspanslider.h"
#include <cargadatos.h>
#include <winusers.h>
#include <proyecto.h>
#include <appsettings.h>
#include <dockindicadores.h>
#include "filtersettings.h"
#include <octaveprocess.h>
#include <signalInfo.h>
#include "database.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QProcess>
#include <QtSql/QSqlQuery>
#include "funcionesgraficas.h"
#include "csesion.h"
#include "cproject.h"
#include "cpaciente.h"
#include "csignal.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    enum{plot,stem,color,otro};
    enum{ izq, der, none };

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void SetRangoMaximo(int min, int max, QxtSpanSlider *Slider, QDoubleSpinBox *In, QDoubleSpinBox *Fn);
    void lineasGraficoPrincipal(int, int);
    bool upDataBase();
    bool leer();
    void normalize(QString tipoNorm);
    void graficarPrincipal(QCustomPlot *grafico, QVector< QVector<double> > senal, int canal, int tipo, int a=0, int b=-1);
    void createDockWindows();
    void dibujarCurvaFrecuenciasMedia(QStringList parametros, QVector<QVector<double>> s, QCustomPlot *grafico);
    void dibujarHistograma();
    void restaurarGrafico(QCustomPlot *grafico);
    bool restaurarArchivo(QString path, QString archivo_recuperado);
    void configuracionesIniciales();
    void habilitarCampos(bool b);
    void limpiarVariables();
    void copiarDatosG2G3();
    bool levantarServicios();
    QVector<double> div(QVector<double> qVec, double dbl)const;

    void cargaGrafica(int canal=1);
    //bool newSesion();
    void actComentariosRecientes();
    bool event(QEvent *event);
    bool eventFilter(QObject *object, QEvent *event);

    bool crearEjemplos(int numEjemplo, QString path, QString archivo);
    bool ExistenModificaciones(QString act);
    bool crearScripts(QString script);
    void controlNorm(const QString normType);
    bool createJson(cSesion *sesion) const;
    bool createJsonTxt(cSesion *sesion) const;

signals:
    recalcularGraficosN(cSignal *senal,int canal,int a, int b);
    calcularMetodoReporte(int, int, int);

public slots:
    void calcularEnOctave(int analisis, int a, int b);
    void horzSliderChangedA(int value);
    void horzSliderChangedB(int value);
    void updateDock(QDockWidget *dock, bool Value, int i, int w, int h);
    void chargeData();
    void guardarImagenes();
    void guardarDatosTxt();    
    void graffNormalize(bool b);
    void calcularGraficosNormalizados(cSignal *s, int canal, int a, int b);

private slots:
    void on_actionAdd_Edit_Remove_User_triggered();
    void on_actionOpen_triggered();
    void setDatos(cSignal *s);
    void captarPaciente(cPaciente *cp);
    void captarProyecto(cProject *cp);

    void on_ButtonReplot_clicked();
    void on_ButtonPlot_clicked();
    void on_iniciarSession_clicked();
    void on_logOut_clicked();
    void on_botonNotas_clicked();
    void on_ButtonGraficar2_clicked();
    void on_ButtonGraficar3_clicked();
    void on_EliminarComentario_clicked();
    void on_btnCloseG1_clicked();
    void on_btnOpenG1_clicked();

    void on_actionCrear_triggered();
    void on_actionAbrir_2_triggered();
    void on_actionCerrar_triggered();
    void on_btnListaUsuarios_clicked();
    void on_actionBD_triggered();
    void on_actionParametros_Generales_triggered();

    void on_actionCerrar_se_al_triggered();
    void on_actionSave_triggered();
    void on_actionDemo_Se_al_1_csv_triggered();
    void on_actionDemo_Se_al_2_txt_triggered();
    void on_actionDemo_Se_al_3_csv_triggered();

    void on_actionAnalisis_Multiple_triggered();
    void on_btn_AplicarFiltro2_clicked();
    void on_toolBtn_Filtros2_clicked();
    void on_btn_AplicarFiltro3_clicked();
    void on_toolBtn_Filtros3_clicked();
    void on_actionUndo_triggered();
    void on_actionRedoOriginal_triggered();
    void on_btnExportarG1_clicked();
    void on_btnCalcularDatos_clicked();
    void on_btnLimpiarTabla_clicked();
    void on_action_informacion_actual_sig_triggered();
    void on_action_doTest_triggered();
    void on_actionDemo_Se_al_Greasy_csv_triggered();
    void on_btnGuardarTabla_clicked();


    void on_actionCrear_Reporte_triggered();

private:
    Ui::MainWindow *ui;
    QList<QString> *Historial;      // Esta variable se usa para guardar las señales antes y despues de modificarlas con los filtros. (La primera posicion posee la señal original).
    CargaDatos *dialogoFile;
    winUsers *winU;
    cSignal *signalPrincipal = NULL;     // Variable para los datos de entrada y para los resultados de las transformadas : se sobreescribe cada vez que se llama a algun método!
    cSignal *signalGrafico2 = NULL;      // Se usa para almacenar los datos de las tranformadas que se muestran en el grafico 2
    cSignal *signalGrafico3 = NULL;      // Se usa para almacenar los datos de las tranformadas que se muestran en el grafico 3

    QCPItemLine *itemA, *itemB;
    QDirModel *model;    
    OctaveProcess *octaveP;
    cSesion* session;

    DataBase *db;
    QDockWidget * dock1,*dock2,*dock3 ;
    appSettings * ConfigGlobales = NULL;   // menu de configuraciones.
    filterSettings *ConfigFiltros = NULL;  // menu de configuraciones de los filtros.
    signalInfo *info_signal = NULL;       // variable global para el widget de info de la señal actual.

    funcionesGraficas *FNG = new funcionesGraficas();
};

#endif // MAINWINDOW_H
