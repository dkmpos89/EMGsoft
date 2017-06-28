/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>
#include <qxtspanslider.h>
#include "codeeditor.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionAdd_Edit_Remove_User;
    QAction *actionCerrar;
    QAction *actionCrear;
    QAction *actionManual_de_Usuario;
    QAction *actionAbout_Qt_creator;
    QAction *actionReportar_Bug;
    QAction *actionAbrir_2;
    QAction *actionBD;
    QAction *actionOctave;
    QAction *actionFiltros;
    QAction *actionExit;
    QAction *action_doTest;
    QAction *actionBase_de_Datos;
    QAction *actionSpectrogram;
    QAction *actionParametros_Generales;
    QAction *actionCerrar_se_al;
    QAction *actionDemo_Se_al_1_csv;
    QAction *actionDemo_Se_al_2_txt;
    QAction *actionAnalisis_Multiple;
    QAction *actionUndo;
    QAction *actionRedoOriginal;
    QAction *actionDemo_Se_al_3_csv;
    QAction *action_informacion_actual_sig;
    QAction *actionDemo_Se_al_Greasy_csv;
    QAction *actionCrear_Reporte;
    QWidget *centralWidget;
    QGridLayout *gridLayout_10;
    QTabWidget *tabPrincipal;
    QWidget *tabVP;
    QGridLayout *gridLayout_21;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QWidget *InfoProyecto;
    QGridLayout *gridLayout_18;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_19;
    QGridLayout *gridLayout_11;
    QLabel *label;
    QComboBox *comboChannel;
    QDoubleSpinBox *spinBoxInicio;
    QDoubleSpinBox *spinBoxFin;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_2;
    QLabel *nombreProyectoActual;
    QLabel *informacionSesion;
    QLabel *label_2;
    QLabel *label_19;
    QLabel *label_3;
    QLabel *informacionRUT;
    QLabel *label_20;
    QLabel *label_18;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QGridLayout *gridLayout_4;
    QPushButton *ButtonReplot;
    QLabel *label_4;
    QxtSpanSlider *horizontalSlider;
    QPushButton *ButtonPlot;
    QWidget *ContenedorGrafico1;
    QGridLayout *gridLayout_9;
    QCustomPlot *grafico1;
    QToolButton *btnCloseG1;
    QToolButton *btnOpenG1;
    QToolButton *btnSaveImageG1;
    QToolButton *btnExportarG1;
    QStackedWidget *swSesion;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QLabel *rutlabel;
    QLabel *label_6;
    QPushButton *iniciarSession;
    QLineEdit *rutSesion;
    QToolButton *btnListaUsuarios;
    QWidget *page_2;
    QFormLayout *formLayout;
    QGridLayout *gridLayoutPanleUsuario;
    QLabel *imagenUsuario;
    QLabel *sesionNombre;
    QLabel *label_rut;
    QListView *listaSesionesAnteriores;
    QLabel *label_nombre;
    QLabel *sesionRut;
    QLabel *sesionSexo;
    QPushButton *logOut;
    QLabel *label_direccion;
    QLabel *sesionDireccion;
    QLabel *label_sexo;
    QLabel *label_Historial;
    QTabWidget *tabTiempoFrec;
    QWidget *tabAB;
    QGridLayout *gridLayout_13;
    QHBoxLayout *horizontalLayout_3;
    QToolBox *toolBoxGrafico2;
    QWidget *page_10;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboAnalisis2;
    QPushButton *ButtonGraficar2;
    QGridLayout *gridLayout_15;
    QSpacerItem *horizontalSpacer;
    QLabel *label_SaveG2;
    QToolButton *btnSaveImageG2;
    QCheckBox *in_enca_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QToolButton *btnSaveDataG2;
    QLabel *label_16;
    QWidget *page_11;
    QGridLayout *gridLayout_5;
    QComboBox *comboFiltros_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btn_AplicarFiltro2;
    QToolButton *toolBtn_Filtros2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *ContenedorGrafico2;
    QGridLayout *gridLayout_12;
    QCustomPlot *grafico2;
    QWidget *ContenedorGrafico3;
    QGridLayout *gridLayout_14;
    QCustomPlot *grafico3;
    QToolBox *toolBoxGrafico3;
    QWidget *page_17;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_4;
    QComboBox *comboAnalisis3;
    QPushButton *ButtonGraficar3;
    QGridLayout *gridLayout_16;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_SaveG3;
    QToolButton *btnSaveImageG3;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *btnSaveDataG3;
    QCheckBox *in_enca_3;
    QLabel *label_17;
    QWidget *page_21;
    QGridLayout *gridLayout_17;
    QComboBox *comboFiltros_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_AplicarFiltro3;
    QToolButton *toolBtn_Filtros3;
    QWidget *tabAE;
    QGridLayout *gridLayout_24;
    QDockWidget *dockGraficosNorm;
    QCustomPlot *graficoNorm;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *radioRms;
    QFrame *line;
    QRadioButton *radioEnergy;
    QFrame *line_2;
    QRadioButton *radioNorm;
    QFrame *line_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_27;
    QLabel *label_12;
    QLineEdit *statTab_min;
    QLineEdit *statTab_std;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *statTab_rms;
    QLabel *label_8;
    QLineEdit *statTab_mean;
    QLabel *label_9;
    QLineEdit *statTab_var;
    QLineEdit *statTab_median;
    QLabel *label_13;
    QLineEdit *statTab_range;
    QLineEdit *statTab_max;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *tab;
    QGridLayout *gridLayout;
    QDockWidget *dockTablaEstadisticas;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_23;
    QVBoxLayout *verticalLayout_10;
    QTableWidget *tabla_deDatos;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnLimpiarTabla;
    QPushButton *btnCalcularDatos;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnGuardarTabla;
    QWidget *tabInfo;
    QGridLayout *gridLayout_25;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    CodeEditor *codeEditor_Log;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QPlainTextEdit *TextoSalida;
    QWidget *tabNYC;
    QGridLayout *gridLayout_22;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *infoComentarios;
    QLabel *infoComentarios_2;
    QGridLayout *gridLayout_20;
    QToolButton *btnSearchComents;
    QGroupBox *groupBox_2;
    QLineEdit *SearchComents;
    QVBoxLayout *verticalLayout_7;
    QPlainTextEdit *notasComentarios;
    QPushButton *botonNotas;
    QVBoxLayout *verticalLayout_8;
    QTableView *tVComentariosR;
    QToolButton *EliminarComentario;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuExport;
    QMenu *menuAdministrar;
    QMenu *menuHelp;
    QMenu *menuDesarrollador;
    QMenu *menu_Ejemplos;
    QMenu *menuExportar;
    QMenu *menuConfigurac_on;
    QMenu *menuVer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(976, 717);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/icono.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow{		\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(232, 239, 252, 255), stop:1 rgba(241, 248, 239, 255));\n"
"}\n"
"\n"
"QPushButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 5px 5px 5px 5px;\n"
"\n"
"}\n"
"\n"
"QPushButton:disabled {	\n"
"	background-color: rgb(189, 189, 189);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 5px 5px 5px 5px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{ \n"
"    color: #000000;\n"
"	border: 2px solid rgb(15, 103, 0);\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(5, 0, 9, 118));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: qlineargradient(spread:pad, x1:0.489, y1:1, x2:0.494, y2:0.0113636, stop:0 rgba(0, 117, 0, 255), stop:1 rgba(0, 255, 0, 255"
                        "));	  \n"
"  text-decoration: none;\n"
"}"));
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(true);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/Search.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagenes/database.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionAdd_Edit_Remove_User = new QAction(MainWindow);
        actionAdd_Edit_Remove_User->setObjectName(QStringLiteral("actionAdd_Edit_Remove_User"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imagenes/ic_person_add_black_48dp.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Edit_Remove_User->setIcon(icon3);
        actionCerrar = new QAction(MainWindow);
        actionCerrar->setObjectName(QStringLiteral("actionCerrar"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/imagenes/Xion.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCerrar->setIcon(icon4);
        actionCrear = new QAction(MainWindow);
        actionCrear->setObjectName(QStringLiteral("actionCrear"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/imagenes/Word-Processor.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCrear->setIcon(icon5);
        actionManual_de_Usuario = new QAction(MainWindow);
        actionManual_de_Usuario->setObjectName(QStringLiteral("actionManual_de_Usuario"));
        actionAbout_Qt_creator = new QAction(MainWindow);
        actionAbout_Qt_creator->setObjectName(QStringLiteral("actionAbout_Qt_creator"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/imagenes/qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Qt_creator->setIcon(icon6);
        actionReportar_Bug = new QAction(MainWindow);
        actionReportar_Bug->setObjectName(QStringLiteral("actionReportar_Bug"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/imagenes/bug.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReportar_Bug->setIcon(icon7);
        actionAbrir_2 = new QAction(MainWindow);
        actionAbrir_2->setObjectName(QStringLiteral("actionAbrir_2"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/imagenes/3D-Design-Alt.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir_2->setIcon(icon8);
        actionBD = new QAction(MainWindow);
        actionBD->setObjectName(QStringLiteral("actionBD"));
        actionOctave = new QAction(MainWindow);
        actionOctave->setObjectName(QStringLiteral("actionOctave"));
        actionFiltros = new QAction(MainWindow);
        actionFiltros->setObjectName(QStringLiteral("actionFiltros"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/imagenes/closeAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon9);
        action_doTest = new QAction(MainWindow);
        action_doTest->setObjectName(QStringLiteral("action_doTest"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/imagenes/console.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_doTest->setIcon(icon10);
        actionBase_de_Datos = new QAction(MainWindow);
        actionBase_de_Datos->setObjectName(QStringLiteral("actionBase_de_Datos"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/imagenes/logoSqlite.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBase_de_Datos->setIcon(icon11);
        actionSpectrogram = new QAction(MainWindow);
        actionSpectrogram->setObjectName(QStringLiteral("actionSpectrogram"));
        actionParametros_Generales = new QAction(MainWindow);
        actionParametros_Generales->setObjectName(QStringLiteral("actionParametros_Generales"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/imagenes/Gear.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionParametros_Generales->setIcon(icon12);
        actionCerrar_se_al = new QAction(MainWindow);
        actionCerrar_se_al->setObjectName(QStringLiteral("actionCerrar_se_al"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/imagenes/Task Manager.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCerrar_se_al->setIcon(icon13);
        actionDemo_Se_al_1_csv = new QAction(MainWindow);
        actionDemo_Se_al_1_csv->setObjectName(QStringLiteral("actionDemo_Se_al_1_csv"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/imagenes/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDemo_Se_al_1_csv->setIcon(icon14);
        actionDemo_Se_al_2_txt = new QAction(MainWindow);
        actionDemo_Se_al_2_txt->setObjectName(QStringLiteral("actionDemo_Se_al_2_txt"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/imagenes/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDemo_Se_al_2_txt->setIcon(icon15);
        actionAnalisis_Multiple = new QAction(MainWindow);
        actionAnalisis_Multiple->setObjectName(QStringLiteral("actionAnalisis_Multiple"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/imagenes/AnalisisMultiple.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAnalisis_Multiple->setIcon(icon16);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/imagenes/045.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon17);
        actionRedoOriginal = new QAction(MainWindow);
        actionRedoOriginal->setObjectName(QStringLiteral("actionRedoOriginal"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/imagenes/026.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedoOriginal->setIcon(icon18);
        actionDemo_Se_al_3_csv = new QAction(MainWindow);
        actionDemo_Se_al_3_csv->setObjectName(QStringLiteral("actionDemo_Se_al_3_csv"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/imagenes/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDemo_Se_al_3_csv->setIcon(icon19);
        action_informacion_actual_sig = new QAction(MainWindow);
        action_informacion_actual_sig->setObjectName(QStringLiteral("action_informacion_actual_sig"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/imagenes/graph_statistics.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_informacion_actual_sig->setIcon(icon20);
        actionDemo_Se_al_Greasy_csv = new QAction(MainWindow);
        actionDemo_Se_al_Greasy_csv->setObjectName(QStringLiteral("actionDemo_Se_al_Greasy_csv"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/imagenes/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDemo_Se_al_Greasy_csv->setIcon(icon21);
        actionCrear_Reporte = new QAction(MainWindow);
        actionCrear_Reporte->setObjectName(QStringLiteral("actionCrear_Reporte"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_10 = new QGridLayout(centralWidget);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        tabPrincipal = new QTabWidget(centralWidget);
        tabPrincipal->setObjectName(QStringLiteral("tabPrincipal"));
        tabPrincipal->setEnabled(true);
        tabPrincipal->setFont(font);
        tabVP = new QWidget();
        tabVP->setObjectName(QStringLiteral("tabVP"));
        gridLayout_21 = new QGridLayout(tabVP);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        InfoProyecto = new QWidget(tabVP);
        InfoProyecto->setObjectName(QStringLiteral("InfoProyecto"));
        InfoProyecto->setMinimumSize(QSize(0, 0));
        InfoProyecto->setMaximumSize(QSize(250, 16777215));
        InfoProyecto->setStyleSheet(QLatin1String("QWidget#InfoProyecto {\n"
"     border: 1px solid gray;\n"
"     border-radius: 2px;\n"
"	 padding: 10px;\n"
" }"));
        gridLayout_18 = new QGridLayout(InfoProyecto);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        groupBox_3 = new QGroupBox(InfoProyecto);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_19 = new QGridLayout(groupBox_3);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 40));
        label->setFont(font);

        gridLayout_11->addWidget(label, 0, 0, 1, 1);

        comboChannel = new QComboBox(groupBox_3);
        comboChannel->setObjectName(QStringLiteral("comboChannel"));
        comboChannel->setEnabled(false);

        gridLayout_11->addWidget(comboChannel, 0, 1, 1, 1);

        spinBoxInicio = new QDoubleSpinBox(groupBox_3);
        spinBoxInicio->setObjectName(QStringLiteral("spinBoxInicio"));
        spinBoxInicio->setEnabled(false);
        spinBoxInicio->setDecimals(5);
        spinBoxInicio->setMaximum(1e+07);

        gridLayout_11->addWidget(spinBoxInicio, 1, 0, 1, 1);

        spinBoxFin = new QDoubleSpinBox(groupBox_3);
        spinBoxFin->setObjectName(QStringLiteral("spinBoxFin"));
        spinBoxFin->setEnabled(false);
        spinBoxFin->setDecimals(5);
        spinBoxFin->setMaximum(1e+07);

        gridLayout_11->addWidget(spinBoxFin, 1, 1, 1, 1);


        gridLayout_19->addLayout(gridLayout_11, 0, 0, 1, 1);


        gridLayout_18->addWidget(groupBox_3, 3, 0, 1, 1);

        groupBox = new QGroupBox(InfoProyecto);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        nombreProyectoActual = new QLabel(groupBox);
        nombreProyectoActual->setObjectName(QStringLiteral("nombreProyectoActual"));
        nombreProyectoActual->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        nombreProyectoActual->setFont(font1);
        nombreProyectoActual->setAutoFillBackground(false);
        nombreProyectoActual->setStyleSheet(QLatin1String("QLabel#nombreProyectoActual {\n"
"	color: blue;\n"
" }"));
        nombreProyectoActual->setInputMethodHints(Qt::ImhNone);
        nombreProyectoActual->setScaledContents(true);
        nombreProyectoActual->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(nombreProyectoActual, 0, 3, 1, 2);

        informacionSesion = new QLabel(groupBox);
        informacionSesion->setObjectName(QStringLiteral("informacionSesion"));
        informacionSesion->setMaximumSize(QSize(16777215, 16777215));
        informacionSesion->setFont(font1);
        informacionSesion->setAutoFillBackground(false);
        informacionSesion->setStyleSheet(QLatin1String("QLabel#informacionSesion {\n"
"	color: red;\n"
" }"));
        informacionSesion->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(informacionSesion, 1, 3, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(40, 20));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);
        label_19->setMaximumSize(QSize(60, 40));
        label_19->setFont(font);

        gridLayout_2->addWidget(label_19, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(40, 20));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        informacionRUT = new QLabel(groupBox);
        informacionRUT->setObjectName(QStringLiteral("informacionRUT"));
        informacionRUT->setMaximumSize(QSize(16777215, 16777215));
        informacionRUT->setFont(font1);
        informacionRUT->setAutoFillBackground(false);
        informacionRUT->setStyleSheet(QLatin1String("QLabel#informacionRUT {\n"
"	color: red;\n"
" }"));
        informacionRUT->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(informacionRUT, 2, 3, 1, 2);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_20, 1, 2, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_18, 0, 2, 1, 1);

        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_21, 2, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_18->addWidget(groupBox, 1, 0, 1, 1);

        label_22 = new QLabel(InfoProyecto);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMaximumSize(QSize(16777215, 20));
        label_22->setFont(font1);

        gridLayout_18->addWidget(label_22, 0, 0, 1, 1);

        label_23 = new QLabel(InfoProyecto);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMaximumSize(QSize(16777215, 20));
        label_23->setFont(font1);

        gridLayout_18->addWidget(label_23, 2, 0, 1, 1);


        horizontalLayout->addWidget(InfoProyecto);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        ButtonReplot = new QPushButton(tabVP);
        ButtonReplot->setObjectName(QStringLiteral("ButtonReplot"));
        ButtonReplot->setEnabled(false);
        ButtonReplot->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(ButtonReplot, 1, 1, 1, 1);

        label_4 = new QLabel(tabVP);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_4, 1, 2, 1, 1);

        horizontalSlider = new QxtSpanSlider(tabVP);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setMaximumSize(QSize(16777215, 20));
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setMaximum(1000);
        horizontalSlider->setSingleStep(1);
        horizontalSlider->setPageStep(10);
        horizontalSlider->setTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider, 1, 3, 1, 3);

        ButtonPlot = new QPushButton(tabVP);
        ButtonPlot->setObjectName(QStringLiteral("ButtonPlot"));
        ButtonPlot->setEnabled(false);
        ButtonPlot->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(ButtonPlot, 1, 0, 1, 1);

        ContenedorGrafico1 = new QWidget(tabVP);
        ContenedorGrafico1->setObjectName(QStringLiteral("ContenedorGrafico1"));
        ContenedorGrafico1->setMinimumSize(QSize(0, 260));
        ContenedorGrafico1->setMaximumSize(QSize(16777215, 16777215));
        ContenedorGrafico1->setFont(font);
        ContenedorGrafico1->setStyleSheet(QLatin1String("QWidget {\n"
"     border: 1px solid gray;\n"
"     border-radius: 2px;\n"
" }"));
        gridLayout_9 = new QGridLayout(ContenedorGrafico1);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        grafico1 = new QCustomPlot(ContenedorGrafico1);
        grafico1->setObjectName(QStringLiteral("grafico1"));
        grafico1->setMaximumSize(QSize(16777215, 16777215));
        grafico1->setFont(font);

        gridLayout_9->addWidget(grafico1, 2, 0, 1, 2);


        gridLayout_4->addWidget(ContenedorGrafico1, 0, 0, 1, 10);

        btnCloseG1 = new QToolButton(tabVP);
        btnCloseG1->setObjectName(QStringLiteral("btnCloseG1"));
        btnCloseG1->setEnabled(false);
        btnCloseG1->setMinimumSize(QSize(27, 27));
        btnCloseG1->setMaximumSize(QSize(27, 27));
        btnCloseG1->setIcon(icon9);
        btnCloseG1->setIconSize(QSize(20, 20));

        gridLayout_4->addWidget(btnCloseG1, 1, 9, 1, 1);

        btnOpenG1 = new QToolButton(tabVP);
        btnOpenG1->setObjectName(QStringLiteral("btnOpenG1"));
        btnOpenG1->setEnabled(true);
        btnOpenG1->setMinimumSize(QSize(27, 27));
        btnOpenG1->setMaximumSize(QSize(27, 27));
        btnOpenG1->setLayoutDirection(Qt::LeftToRight);
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/imagenes/open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnOpenG1->setIcon(icon22);
        btnOpenG1->setIconSize(QSize(20, 20));
        btnOpenG1->setAutoRaise(false);

        gridLayout_4->addWidget(btnOpenG1, 1, 6, 1, 1);

        btnSaveImageG1 = new QToolButton(tabVP);
        btnSaveImageG1->setObjectName(QStringLiteral("btnSaveImageG1"));
        btnSaveImageG1->setEnabled(false);
        btnSaveImageG1->setMinimumSize(QSize(27, 27));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/imagenes/save_as.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSaveImageG1->setIcon(icon23);

        gridLayout_4->addWidget(btnSaveImageG1, 1, 8, 1, 1);

        btnExportarG1 = new QToolButton(tabVP);
        btnExportarG1->setObjectName(QStringLiteral("btnExportarG1"));
        btnExportarG1->setEnabled(false);
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/imagenes/guardar-archivo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnExportarG1->setIcon(icon24);
        btnExportarG1->setIconSize(QSize(20, 20));

        gridLayout_4->addWidget(btnExportarG1, 1, 7, 1, 1);


        horizontalLayout->addLayout(gridLayout_4);

        swSesion = new QStackedWidget(tabVP);
        swSesion->setObjectName(QStringLiteral("swSesion"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(swSesion->sizePolicy().hasHeightForWidth());
        swSesion->setSizePolicy(sizePolicy1);
        swSesion->setMinimumSize(QSize(0, 300));
        swSesion->setMaximumSize(QSize(250, 16777215));
        swSesion->setStyleSheet(QLatin1String("QStackedWidget {\n"
"     border: 1px solid gray;\n"
"     border-radius: 2px;\n"
" }"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        rutlabel = new QLabel(page);
        rutlabel->setObjectName(QStringLiteral("rutlabel"));
        rutlabel->setFont(font1);
        rutlabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(rutlabel, 1, 0, 1, 1);

        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(false);
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/Task Manager.ico")));
        label_6->setScaledContents(true);

        gridLayout_3->addWidget(label_6, 4, 0, 1, 2);

        iniciarSession = new QPushButton(page);
        iniciarSession->setObjectName(QStringLiteral("iniciarSession"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        iniciarSession->setFont(font2);

        gridLayout_3->addWidget(iniciarSession, 3, 0, 1, 1);

        rutSesion = new QLineEdit(page);
        rutSesion->setObjectName(QStringLiteral("rutSesion"));
        rutSesion->setMinimumSize(QSize(0, 0));
        rutSesion->setFont(font);
        rutSesion->setMaxLength(12);
        rutSesion->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(rutSesion, 2, 0, 1, 2);

        btnListaUsuarios = new QToolButton(page);
        btnListaUsuarios->setObjectName(QStringLiteral("btnListaUsuarios"));
        btnListaUsuarios->setFont(font);
        btnListaUsuarios->setIcon(icon1);

        gridLayout_3->addWidget(btnListaUsuarios, 3, 1, 1, 1);

        swSesion->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        formLayout = new QFormLayout(page_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        gridLayoutPanleUsuario = new QGridLayout();
        gridLayoutPanleUsuario->setSpacing(6);
        gridLayoutPanleUsuario->setObjectName(QStringLiteral("gridLayoutPanleUsuario"));
        imagenUsuario = new QLabel(page_2);
        imagenUsuario->setObjectName(QStringLiteral("imagenUsuario"));
        imagenUsuario->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/face_female.ico")));
        imagenUsuario->setScaledContents(true);

        gridLayoutPanleUsuario->addWidget(imagenUsuario, 0, 0, 1, 1);

        sesionNombre = new QLabel(page_2);
        sesionNombre->setObjectName(QStringLiteral("sesionNombre"));
        sesionNombre->setFont(font);
        sesionNombre->setStyleSheet(QLatin1String("QLabel#sesionNombre {\n"
"	color: blue;\n"
" }"));
        sesionNombre->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutPanleUsuario->addWidget(sesionNombre, 2, 1, 1, 2);

        label_rut = new QLabel(page_2);
        label_rut->setObjectName(QStringLiteral("label_rut"));
        label_rut->setFont(font);
        label_rut->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutPanleUsuario->addWidget(label_rut, 1, 0, 1, 1);

        listaSesionesAnteriores = new QListView(page_2);
        listaSesionesAnteriores->setObjectName(QStringLiteral("listaSesionesAnteriores"));

        gridLayoutPanleUsuario->addWidget(listaSesionesAnteriores, 7, 0, 1, 3);

        label_nombre = new QLabel(page_2);
        label_nombre->setObjectName(QStringLiteral("label_nombre"));
        label_nombre->setFont(font);
        label_nombre->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutPanleUsuario->addWidget(label_nombre, 2, 0, 1, 1);

        sesionRut = new QLabel(page_2);
        sesionRut->setObjectName(QStringLiteral("sesionRut"));
        sesionRut->setFont(font);
        sesionRut->setStyleSheet(QLatin1String("QLabel#sesionRut {\n"
"	color: blue;\n"
" }"));
        sesionRut->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutPanleUsuario->addWidget(sesionRut, 1, 1, 1, 2);

        sesionSexo = new QLabel(page_2);
        sesionSexo->setObjectName(QStringLiteral("sesionSexo"));
        sesionSexo->setFont(font);
        sesionSexo->setStyleSheet(QLatin1String("QLabel#sesionSexo {\n"
"	color: blue;\n"
" }"));
        sesionSexo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutPanleUsuario->addWidget(sesionSexo, 3, 1, 1, 2);

        logOut = new QPushButton(page_2);
        logOut->setObjectName(QStringLiteral("logOut"));

        gridLayoutPanleUsuario->addWidget(logOut, 0, 1, 1, 2);

        label_direccion = new QLabel(page_2);
        label_direccion->setObjectName(QStringLiteral("label_direccion"));
        label_direccion->setFont(font);

        gridLayoutPanleUsuario->addWidget(label_direccion, 5, 0, 1, 1);

        sesionDireccion = new QLabel(page_2);
        sesionDireccion->setObjectName(QStringLiteral("sesionDireccion"));
        sesionDireccion->setFont(font);
        sesionDireccion->setStyleSheet(QLatin1String("QLabel#sesionDireccion {\n"
"	color: blue;\n"
" }"));

        gridLayoutPanleUsuario->addWidget(sesionDireccion, 5, 1, 1, 2);

        label_sexo = new QLabel(page_2);
        label_sexo->setObjectName(QStringLiteral("label_sexo"));
        label_sexo->setFont(font);
        label_sexo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutPanleUsuario->addWidget(label_sexo, 3, 0, 1, 1);

        label_Historial = new QLabel(page_2);
        label_Historial->setObjectName(QStringLiteral("label_Historial"));
        label_Historial->setFont(font);

        gridLayoutPanleUsuario->addWidget(label_Historial, 6, 0, 1, 1);


        formLayout->setLayout(0, QFormLayout::SpanningRole, gridLayoutPanleUsuario);

        swSesion->addWidget(page_2);

        horizontalLayout->addWidget(swSesion);


        verticalLayout_3->addLayout(horizontalLayout);

        tabTiempoFrec = new QTabWidget(tabVP);
        tabTiempoFrec->setObjectName(QStringLiteral("tabTiempoFrec"));
        tabTiempoFrec->setMinimumSize(QSize(0, 300));
        tabTiempoFrec->setFont(font);
        tabTiempoFrec->setStyleSheet(QLatin1String("QTabWidget#tabTiempoFrec \n"
"{\n"
"		 padding-top: 30px;\n"
"}"));
        tabAB = new QWidget();
        tabAB->setObjectName(QStringLiteral("tabAB"));
        gridLayout_13 = new QGridLayout(tabAB);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        toolBoxGrafico2 = new QToolBox(tabAB);
        toolBoxGrafico2->setObjectName(QStringLiteral("toolBoxGrafico2"));
        toolBoxGrafico2->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolBoxGrafico2->sizePolicy().hasHeightForWidth());
        toolBoxGrafico2->setSizePolicy(sizePolicy2);
        toolBoxGrafico2->setMaximumSize(QSize(210, 16777215));
        toolBoxGrafico2->setAutoFillBackground(false);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        page_10->setGeometry(QRect(0, 0, 210, 197));
        gridLayout_8 = new QGridLayout(page_10);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        comboAnalisis2 = new QComboBox(page_10);
        comboAnalisis2->setObjectName(QStringLiteral("comboAnalisis2"));

        verticalLayout_2->addWidget(comboAnalisis2);

        ButtonGraficar2 = new QPushButton(page_10);
        ButtonGraficar2->setObjectName(QStringLiteral("ButtonGraficar2"));
        ButtonGraficar2->setMinimumSize(QSize(0, 30));
        ButtonGraficar2->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(ButtonGraficar2);


        gridLayout_8->addLayout(verticalLayout_2, 0, 0, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(6);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer, 1, 0, 1, 1);

        label_SaveG2 = new QLabel(page_10);
        label_SaveG2->setObjectName(QStringLiteral("label_SaveG2"));

        gridLayout_15->addWidget(label_SaveG2, 0, 0, 1, 1);

        btnSaveImageG2 = new QToolButton(page_10);
        btnSaveImageG2->setObjectName(QStringLiteral("btnSaveImageG2"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/imagenes/020.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSaveImageG2->setIcon(icon25);
        btnSaveImageG2->setIconSize(QSize(60, 60));
        btnSaveImageG2->setAutoRaise(true);

        gridLayout_15->addWidget(btnSaveImageG2, 0, 1, 2, 1);

        in_enca_2 = new QCheckBox(page_10);
        in_enca_2->setObjectName(QStringLiteral("in_enca_2"));
        in_enca_2->setMaximumSize(QSize(20, 16777215));

        gridLayout_15->addWidget(in_enca_2, 2, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_4, 2, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_6, 2, 2, 1, 1);

        btnSaveDataG2 = new QToolButton(page_10);
        btnSaveDataG2->setObjectName(QStringLiteral("btnSaveDataG2"));
        btnSaveDataG2->setMinimumSize(QSize(50, 50));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/imagenes/csv_txt.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSaveDataG2->setIcon(icon26);
        btnSaveDataG2->setIconSize(QSize(60, 60));
        btnSaveDataG2->setAutoRepeat(false);
        btnSaveDataG2->setAutoRaise(true);

        gridLayout_15->addWidget(btnSaveDataG2, 0, 2, 2, 3);

        label_16 = new QLabel(page_10);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_15->addWidget(label_16, 2, 0, 1, 2);


        gridLayout_8->addLayout(gridLayout_15, 1, 0, 1, 1);

        toolBoxGrafico2->addItem(page_10, QStringLiteral("Metodos"));
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        page_11->setGeometry(QRect(0, 0, 210, 197));
        gridLayout_5 = new QGridLayout(page_11);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        comboFiltros_2 = new QComboBox(page_11);
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/imagenes/arrowApply.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboFiltros_2->addItem(icon27, QString());
        comboFiltros_2->addItem(icon27, QString());
        comboFiltros_2->addItem(icon27, QString());
        comboFiltros_2->addItem(icon27, QString());
        comboFiltros_2->addItem(icon27, QString());
        comboFiltros_2->addItem(icon27, QString());
        comboFiltros_2->addItem(icon27, QString());
        comboFiltros_2->addItem(icon27, QString());
        comboFiltros_2->setObjectName(QStringLiteral("comboFiltros_2"));
        comboFiltros_2->setMinimumSize(QSize(0, 30));
        comboFiltros_2->setIconSize(QSize(35, 20));
        comboFiltros_2->setDuplicatesEnabled(false);
        comboFiltros_2->setFrame(true);

        gridLayout_5->addWidget(comboFiltros_2, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        btn_AplicarFiltro2 = new QPushButton(page_11);
        btn_AplicarFiltro2->setObjectName(QStringLiteral("btn_AplicarFiltro2"));
        btn_AplicarFiltro2->setMinimumSize(QSize(0, 40));

        horizontalLayout_6->addWidget(btn_AplicarFiltro2);

        toolBtn_Filtros2 = new QToolButton(page_11);
        toolBtn_Filtros2->setObjectName(QStringLiteral("toolBtn_Filtros2"));
        toolBtn_Filtros2->setIcon(icon12);
        toolBtn_Filtros2->setIconSize(QSize(30, 30));
        toolBtn_Filtros2->setAutoRaise(false);

        horizontalLayout_6->addWidget(toolBtn_Filtros2);


        gridLayout_5->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        toolBoxGrafico2->addItem(page_11, QStringLiteral("Filtros"));

        horizontalLayout_3->addWidget(toolBoxGrafico2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ContenedorGrafico2 = new QWidget(tabAB);
        ContenedorGrafico2->setObjectName(QStringLiteral("ContenedorGrafico2"));
        ContenedorGrafico2->setStyleSheet(QLatin1String("QWidget#ContenedorGrafico2 {\n"
"     border: 1px solid gray;\n"
"     border-radius: 2px;\n"
" }"));
        gridLayout_12 = new QGridLayout(ContenedorGrafico2);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        grafico2 = new QCustomPlot(ContenedorGrafico2);
        grafico2->setObjectName(QStringLiteral("grafico2"));
        QFont font3;
        font3.setPointSize(8);
        grafico2->setFont(font3);

        gridLayout_12->addWidget(grafico2, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(ContenedorGrafico2);

        ContenedorGrafico3 = new QWidget(tabAB);
        ContenedorGrafico3->setObjectName(QStringLiteral("ContenedorGrafico3"));
        ContenedorGrafico3->setStyleSheet(QLatin1String("QWidget#ContenedorGrafico3 {\n"
"     border: 1px solid gray;\n"
"     border-radius: 2px;\n"
" }"));
        gridLayout_14 = new QGridLayout(ContenedorGrafico3);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        grafico3 = new QCustomPlot(ContenedorGrafico3);
        grafico3->setObjectName(QStringLiteral("grafico3"));
        grafico3->setFont(font3);

        gridLayout_14->addWidget(grafico3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(ContenedorGrafico3);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        toolBoxGrafico3 = new QToolBox(tabAB);
        toolBoxGrafico3->setObjectName(QStringLiteral("toolBoxGrafico3"));
        toolBoxGrafico3->setEnabled(false);
        sizePolicy2.setHeightForWidth(toolBoxGrafico3->sizePolicy().hasHeightForWidth());
        toolBoxGrafico3->setSizePolicy(sizePolicy2);
        toolBoxGrafico3->setMaximumSize(QSize(210, 16777215));
        page_17 = new QWidget();
        page_17->setObjectName(QStringLiteral("page_17"));
        page_17->setGeometry(QRect(0, 0, 210, 197));
        gridLayout_7 = new QGridLayout(page_17);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        comboAnalisis3 = new QComboBox(page_17);
        comboAnalisis3->setObjectName(QStringLiteral("comboAnalisis3"));

        verticalLayout_4->addWidget(comboAnalisis3);

        ButtonGraficar3 = new QPushButton(page_17);
        ButtonGraficar3->setObjectName(QStringLiteral("ButtonGraficar3"));
        ButtonGraficar3->setMinimumSize(QSize(0, 30));
        ButtonGraficar3->setStyleSheet(QStringLiteral(""));

        verticalLayout_4->addWidget(ButtonGraficar3);


        gridLayout_7->addLayout(verticalLayout_4, 0, 0, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_7, 3, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        label_SaveG3 = new QLabel(page_17);
        label_SaveG3->setObjectName(QStringLiteral("label_SaveG3"));

        gridLayout_16->addWidget(label_SaveG3, 0, 0, 1, 1);

        btnSaveImageG3 = new QToolButton(page_17);
        btnSaveImageG3->setObjectName(QStringLiteral("btnSaveImageG3"));
        btnSaveImageG3->setMinimumSize(QSize(50, 50));
        btnSaveImageG3->setIcon(icon25);
        btnSaveImageG3->setIconSize(QSize(60, 60));
        btnSaveImageG3->setAutoRepeat(false);
        btnSaveImageG3->setAutoRaise(true);

        gridLayout_16->addWidget(btnSaveImageG3, 0, 1, 2, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_8, 3, 2, 1, 1);

        btnSaveDataG3 = new QToolButton(page_17);
        btnSaveDataG3->setObjectName(QStringLiteral("btnSaveDataG3"));
        btnSaveDataG3->setMinimumSize(QSize(50, 50));
        btnSaveDataG3->setIcon(icon26);
        btnSaveDataG3->setIconSize(QSize(60, 60));
        btnSaveDataG3->setAutoRepeat(false);
        btnSaveDataG3->setAutoRaise(true);

        gridLayout_16->addWidget(btnSaveDataG3, 0, 2, 2, 3);

        in_enca_3 = new QCheckBox(page_17);
        in_enca_3->setObjectName(QStringLiteral("in_enca_3"));

        gridLayout_16->addWidget(in_enca_3, 3, 3, 1, 1);

        label_17 = new QLabel(page_17);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_16->addWidget(label_17, 3, 0, 1, 2);


        gridLayout_7->addLayout(gridLayout_16, 1, 0, 1, 1);

        toolBoxGrafico3->addItem(page_17, QStringLiteral("Metodos"));
        page_21 = new QWidget();
        page_21->setObjectName(QStringLiteral("page_21"));
        page_21->setGeometry(QRect(0, 0, 210, 197));
        gridLayout_17 = new QGridLayout(page_21);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        comboFiltros_3 = new QComboBox(page_21);
        comboFiltros_3->addItem(icon27, QString());
        comboFiltros_3->addItem(icon27, QString());
        comboFiltros_3->addItem(icon27, QString());
        comboFiltros_3->addItem(icon27, QString());
        comboFiltros_3->addItem(icon27, QString());
        comboFiltros_3->addItem(icon27, QString());
        comboFiltros_3->addItem(icon27, QString());
        comboFiltros_3->addItem(icon27, QString());
        comboFiltros_3->setObjectName(QStringLiteral("comboFiltros_3"));
        comboFiltros_3->setMinimumSize(QSize(0, 30));
        comboFiltros_3->setIconSize(QSize(35, 20));
        comboFiltros_3->setDuplicatesEnabled(false);
        comboFiltros_3->setFrame(true);

        gridLayout_17->addWidget(comboFiltros_3, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        btn_AplicarFiltro3 = new QPushButton(page_21);
        btn_AplicarFiltro3->setObjectName(QStringLiteral("btn_AplicarFiltro3"));
        btn_AplicarFiltro3->setMinimumSize(QSize(0, 40));

        horizontalLayout_7->addWidget(btn_AplicarFiltro3);

        toolBtn_Filtros3 = new QToolButton(page_21);
        toolBtn_Filtros3->setObjectName(QStringLiteral("toolBtn_Filtros3"));
        toolBtn_Filtros3->setIcon(icon12);
        toolBtn_Filtros3->setIconSize(QSize(30, 30));
        toolBtn_Filtros3->setAutoRaise(false);

        horizontalLayout_7->addWidget(toolBtn_Filtros3);


        gridLayout_17->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        toolBoxGrafico3->addItem(page_21, QStringLiteral("Filtros"));

        horizontalLayout_3->addWidget(toolBoxGrafico3);


        gridLayout_13->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tabTiempoFrec->addTab(tabAB, QString());
        tabAE = new QWidget();
        tabAE->setObjectName(QStringLiteral("tabAE"));
        gridLayout_24 = new QGridLayout(tabAE);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        dockGraficosNorm = new QDockWidget(tabAE);
        dockGraficosNorm->setObjectName(QStringLiteral("dockGraficosNorm"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(dockGraficosNorm->sizePolicy().hasHeightForWidth());
        dockGraficosNorm->setSizePolicy(sizePolicy3);
        graficoNorm = new QCustomPlot();
        graficoNorm->setObjectName(QStringLiteral("graficoNorm"));
        dockGraficosNorm->setWidget(graficoNorm);

        gridLayout_24->addWidget(dockGraficosNorm, 1, 3, 2, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_24->addItem(horizontalSpacer_5, 3, 3, 1, 1);

        groupBox_5 = new QGroupBox(tabAE);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(200, 0));
        groupBox_5->setMaximumSize(QSize(250, 16777215));
        QFont font4;
        font4.setPointSize(9);
        groupBox_5->setFont(font4);
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        radioRms = new QRadioButton(groupBox_5);
        radioRms->setObjectName(QStringLiteral("radioRms"));

        verticalLayout_11->addWidget(radioRms);

        line = new QFrame(groupBox_5);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line);

        radioEnergy = new QRadioButton(groupBox_5);
        radioEnergy->setObjectName(QStringLiteral("radioEnergy"));

        verticalLayout_11->addWidget(radioEnergy);

        line_2 = new QFrame(groupBox_5);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line_2);

        radioNorm = new QRadioButton(groupBox_5);
        radioNorm->setObjectName(QStringLiteral("radioNorm"));

        verticalLayout_11->addWidget(radioNorm);

        line_3 = new QFrame(groupBox_5);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);

        pushButton = new QPushButton(groupBox_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_11->addWidget(pushButton);


        verticalLayout->addLayout(verticalLayout_11);


        gridLayout_24->addWidget(groupBox_5, 0, 1, 4, 1);

        groupBox_4 = new QGroupBox(tabAE);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(200, 16777215));
        groupBox_4->setFont(font4);
        gridLayout_27 = new QGridLayout(groupBox_4);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_27->addWidget(label_12, 5, 0, 1, 1);

        statTab_min = new QLineEdit(groupBox_4);
        statTab_min->setObjectName(QStringLiteral("statTab_min"));

        gridLayout_27->addWidget(statTab_min, 5, 1, 1, 1);

        statTab_std = new QLineEdit(groupBox_4);
        statTab_std->setObjectName(QStringLiteral("statTab_std"));

        gridLayout_27->addWidget(statTab_std, 2, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_27->addWidget(label_11, 2, 0, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_27->addWidget(label_10, 3, 0, 1, 1);

        statTab_rms = new QLineEdit(groupBox_4);
        statTab_rms->setObjectName(QStringLiteral("statTab_rms"));

        gridLayout_27->addWidget(statTab_rms, 4, 1, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_27->addWidget(label_8, 0, 0, 1, 1);

        statTab_mean = new QLineEdit(groupBox_4);
        statTab_mean->setObjectName(QStringLiteral("statTab_mean"));

        gridLayout_27->addWidget(statTab_mean, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_27->addWidget(label_9, 1, 0, 1, 1);

        statTab_var = new QLineEdit(groupBox_4);
        statTab_var->setObjectName(QStringLiteral("statTab_var"));

        gridLayout_27->addWidget(statTab_var, 3, 1, 1, 1);

        statTab_median = new QLineEdit(groupBox_4);
        statTab_median->setObjectName(QStringLiteral("statTab_median"));

        gridLayout_27->addWidget(statTab_median, 1, 1, 1, 1);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_27->addWidget(label_13, 4, 0, 1, 1);

        statTab_range = new QLineEdit(groupBox_4);
        statTab_range->setObjectName(QStringLiteral("statTab_range"));

        gridLayout_27->addWidget(statTab_range, 7, 1, 1, 1);

        statTab_max = new QLineEdit(groupBox_4);
        statTab_max->setObjectName(QStringLiteral("statTab_max"));

        gridLayout_27->addWidget(statTab_max, 6, 1, 1, 1);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_27->addWidget(label_14, 6, 0, 1, 1);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_27->addWidget(label_15, 7, 0, 1, 1);


        gridLayout_24->addWidget(groupBox_4, 0, 4, 4, 1);

        tabTiempoFrec->addTab(tabAE, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dockTablaEstadisticas = new QDockWidget(tab);
        dockTablaEstadisticas->setObjectName(QStringLiteral("dockTablaEstadisticas"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_23 = new QGridLayout(dockWidgetContents);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        tabla_deDatos = new QTableWidget(dockWidgetContents);
        if (tabla_deDatos->columnCount() < 10)
            tabla_deDatos->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabla_deDatos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla_deDatos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabla_deDatos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabla_deDatos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabla_deDatos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabla_deDatos->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabla_deDatos->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabla_deDatos->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabla_deDatos->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tabla_deDatos->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tabla_deDatos->setObjectName(QStringLiteral("tabla_deDatos"));
        tabla_deDatos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tabla_deDatos->setTextElideMode(Qt::ElideMiddle);
        tabla_deDatos->setSortingEnabled(true);
        tabla_deDatos->setWordWrap(true);
        tabla_deDatos->setCornerButtonEnabled(true);
        tabla_deDatos->horizontalHeader()->setCascadingSectionResizes(false);
        tabla_deDatos->horizontalHeader()->setHighlightSections(true);
        tabla_deDatos->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tabla_deDatos->horizontalHeader()->setStretchLastSection(false);
        tabla_deDatos->verticalHeader()->setStretchLastSection(false);

        verticalLayout_10->addWidget(tabla_deDatos);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btnLimpiarTabla = new QPushButton(dockWidgetContents);
        btnLimpiarTabla->setObjectName(QStringLiteral("btnLimpiarTabla"));
        btnLimpiarTabla->setMinimumSize(QSize(100, 30));
        btnLimpiarTabla->setMaximumSize(QSize(100, 50));

        horizontalLayout_4->addWidget(btnLimpiarTabla);

        btnCalcularDatos = new QPushButton(dockWidgetContents);
        btnCalcularDatos->setObjectName(QStringLiteral("btnCalcularDatos"));
        btnCalcularDatos->setEnabled(false);
        btnCalcularDatos->setMinimumSize(QSize(100, 30));
        btnCalcularDatos->setMaximumSize(QSize(100, 50));
        btnCalcularDatos->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(btnCalcularDatos);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        btnGuardarTabla = new QPushButton(dockWidgetContents);
        btnGuardarTabla->setObjectName(QStringLiteral("btnGuardarTabla"));
        btnGuardarTabla->setEnabled(false);
        btnGuardarTabla->setIcon(icon23);

        horizontalLayout_4->addWidget(btnGuardarTabla);


        verticalLayout_10->addLayout(horizontalLayout_4);


        gridLayout_23->addLayout(verticalLayout_10, 0, 0, 1, 1);

        dockTablaEstadisticas->setWidget(dockWidgetContents);

        gridLayout->addWidget(dockTablaEstadisticas, 0, 0, 1, 1);

        tabTiempoFrec->addTab(tab, QString());
        tabInfo = new QWidget();
        tabInfo->setObjectName(QStringLiteral("tabInfo"));
        gridLayout_25 = new QGridLayout(tabInfo);
        gridLayout_25->setSpacing(6);
        gridLayout_25->setContentsMargins(11, 11, 11, 11);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_7 = new QLabel(tabInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 16));

        verticalLayout_9->addWidget(label_7);

        codeEditor_Log = new CodeEditor(tabInfo);
        codeEditor_Log->setObjectName(QStringLiteral("codeEditor_Log"));
        codeEditor_Log->setMinimumSize(QSize(400, 200));

        verticalLayout_9->addWidget(codeEditor_Log);


        gridLayout_25->addLayout(verticalLayout_9, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(tabInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 16));

        verticalLayout_5->addWidget(label_5);

        TextoSalida = new QPlainTextEdit(tabInfo);
        TextoSalida->setObjectName(QStringLiteral("TextoSalida"));
        TextoSalida->setMaximumSize(QSize(400, 16777215));
        TextoSalida->setUndoRedoEnabled(false);
        TextoSalida->setReadOnly(true);

        verticalLayout_5->addWidget(TextoSalida);


        gridLayout_25->addLayout(verticalLayout_5, 0, 1, 1, 1);

        tabTiempoFrec->addTab(tabInfo, QString());

        verticalLayout_3->addWidget(tabTiempoFrec);


        gridLayout_21->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabPrincipal->addTab(tabVP, QString());
        tabNYC = new QWidget();
        tabNYC->setObjectName(QStringLiteral("tabNYC"));
        gridLayout_22 = new QGridLayout(tabNYC);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        infoComentarios = new QLabel(tabNYC);
        infoComentarios->setObjectName(QStringLiteral("infoComentarios"));
        infoComentarios->setMaximumSize(QSize(16777215, 16777215));
        infoComentarios->setAutoFillBackground(false);

        verticalLayout_6->addWidget(infoComentarios);

        infoComentarios_2 = new QLabel(tabNYC);
        infoComentarios_2->setObjectName(QStringLiteral("infoComentarios_2"));
        infoComentarios_2->setMaximumSize(QSize(16777215, 16777215));
        infoComentarios_2->setAutoFillBackground(false);

        verticalLayout_6->addWidget(infoComentarios_2);


        horizontalLayout_5->addLayout(verticalLayout_6);


        gridLayout_22->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(6);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        btnSearchComents = new QToolButton(tabNYC);
        btnSearchComents->setObjectName(QStringLiteral("btnSearchComents"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/imagenes/magnifyingglass.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSearchComents->setIcon(icon28);
        btnSearchComents->setIconSize(QSize(40, 20));

        gridLayout_20->addWidget(btnSearchComents, 2, 2, 1, 1);

        groupBox_2 = new QGroupBox(tabNYC);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QFont font5;
        font5.setKerning(true);
        groupBox_2->setFont(font5);
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"     border: 1px solid gray;\n"
"     border-radius: 2px;\n"
" }"));

        gridLayout_20->addWidget(groupBox_2, 0, 0, 1, 3);

        SearchComents = new QLineEdit(tabNYC);
        SearchComents->setObjectName(QStringLiteral("SearchComents"));

        gridLayout_20->addWidget(SearchComents, 2, 1, 1, 1);


        gridLayout_22->addLayout(gridLayout_20, 0, 1, 3, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        notasComentarios = new QPlainTextEdit(tabNYC);
        notasComentarios->setObjectName(QStringLiteral("notasComentarios"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(notasComentarios->sizePolicy().hasHeightForWidth());
        notasComentarios->setSizePolicy(sizePolicy4);
        notasComentarios->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_7->addWidget(notasComentarios);

        botonNotas = new QPushButton(tabNYC);
        botonNotas->setObjectName(QStringLiteral("botonNotas"));
        botonNotas->setMaximumSize(QSize(100, 100));
        botonNotas->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_7->addWidget(botonNotas);


        gridLayout_22->addLayout(verticalLayout_7, 1, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        tVComentariosR = new QTableView(tabNYC);
        tVComentariosR->setObjectName(QStringLiteral("tVComentariosR"));
        tVComentariosR->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_8->addWidget(tVComentariosR);

        EliminarComentario = new QToolButton(tabNYC);
        EliminarComentario->setObjectName(QStringLiteral("EliminarComentario"));
        EliminarComentario->setIcon(icon4);
        EliminarComentario->setIconSize(QSize(25, 25));

        verticalLayout_8->addWidget(EliminarComentario);


        gridLayout_22->addLayout(verticalLayout_8, 2, 0, 1, 1);

        tabPrincipal->addTab(tabNYC, QString());

        gridLayout_10->addWidget(tabPrincipal, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 976, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuExport = new QMenu(menuBar);
        menuExport->setObjectName(QStringLiteral("menuExport"));
        menuAdministrar = new QMenu(menuExport);
        menuAdministrar->setObjectName(QStringLiteral("menuAdministrar"));
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/imagenes/graph.ico"), QSize(), QIcon::Normal, QIcon::Off);
        menuAdministrar->setIcon(icon29);
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuDesarrollador = new QMenu(menuHelp);
        menuDesarrollador->setObjectName(QStringLiteral("menuDesarrollador"));
        menu_Ejemplos = new QMenu(menuHelp);
        menu_Ejemplos->setObjectName(QStringLiteral("menu_Ejemplos"));
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/imagenes/ejemplos.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_Ejemplos->setIcon(icon30);
        menuExportar = new QMenu(menuBar);
        menuExportar->setObjectName(QStringLiteral("menuExportar"));
        menuConfigurac_on = new QMenu(menuBar);
        menuConfigurac_on->setObjectName(QStringLiteral("menuConfigurac_on"));
        menuVer = new QMenu(menuBar);
        menuVer->setObjectName(QStringLiteral("menuVer"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuVer->menuAction());
        menuBar->addAction(menuExport->menuAction());
        menuBar->addAction(menuExportar->menuAction());
        menuBar->addAction(menuConfigurac_on->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionAdd_Edit_Remove_User);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionCerrar_se_al);
        menuFile->addAction(actionCerrar);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuExport->addSeparator();
        menuExport->addAction(menuAdministrar->menuAction());
        menuAdministrar->addAction(actionCrear);
        menuAdministrar->addAction(actionAbrir_2);
        menuHelp->addAction(menu_Ejemplos->menuAction());
        menuHelp->addAction(actionManual_de_Usuario);
        menuHelp->addSeparator();
        menuHelp->addAction(actionReportar_Bug);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_Qt_creator);
        menuHelp->addSeparator();
        menuHelp->addAction(menuDesarrollador->menuAction());
        menuDesarrollador->addAction(actionBase_de_Datos);
        menuDesarrollador->addAction(action_doTest);
        menuDesarrollador->addSeparator();
        menu_Ejemplos->addAction(actionDemo_Se_al_1_csv);
        menu_Ejemplos->addAction(actionDemo_Se_al_2_txt);
        menu_Ejemplos->addAction(actionDemo_Se_al_3_csv);
        menu_Ejemplos->addAction(actionDemo_Se_al_Greasy_csv);
        menu_Ejemplos->addSeparator();
        menuExportar->addAction(actionCrear_Reporte);
        menuConfigurac_on->addAction(actionParametros_Generales);
        menuConfigurac_on->addSeparator();
        menuVer->addAction(actionAnalisis_Multiple);
        menuVer->addSeparator();
        menuVer->addAction(actionRedoOriginal);
        menuVer->addAction(actionUndo);
        menuVer->addSeparator();
        menuVer->addAction(action_informacion_actual_sig);
        menuVer->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabPrincipal->setCurrentIndex(0);
        swSesion->setCurrentIndex(0);
        tabTiempoFrec->setCurrentIndex(0);
        toolBoxGrafico2->setCurrentIndex(0);
        toolBoxGrafico3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EGMsoft\302\256 2016", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "&Abrir Archivo", 0));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("MainWindow", "&Guardar", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0));
        actionAdd_Edit_Remove_User->setText(QApplication::translate("MainWindow", "&Usuarios", 0));
        actionCerrar->setText(QApplication::translate("MainWindow", "Cerrar todo", 0));
        actionCrear->setText(QApplication::translate("MainWindow", "&Crear", 0));
        actionManual_de_Usuario->setText(QApplication::translate("MainWindow", "&Manual de Usuario", 0));
        actionAbout_Qt_creator->setText(QApplication::translate("MainWindow", "About Qt creator", 0));
        actionReportar_Bug->setText(QApplication::translate("MainWindow", "Reportar Bug", 0));
        actionAbrir_2->setText(QApplication::translate("MainWindow", "Abrir / Eliminar", 0));
        actionBD->setText(QApplication::translate("MainWindow", "Base de Datos", 0));
        actionOctave->setText(QApplication::translate("MainWindow", "Octave", 0));
        actionFiltros->setText(QApplication::translate("MainWindow", "Filtros", 0));
        actionExit->setText(QApplication::translate("MainWindow", "&Exit", 0));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        action_doTest->setText(QApplication::translate("MainWindow", "doTest", 0));
        actionBase_de_Datos->setText(QApplication::translate("MainWindow", "Base de Datos", 0));
        actionSpectrogram->setText(QApplication::translate("MainWindow", "Spectrogram", 0));
        actionParametros_Generales->setText(QApplication::translate("MainWindow", "Parametros Generales", 0));
        actionCerrar_se_al->setText(QApplication::translate("MainWindow", "Cerrar se\303\261al", 0));
        actionDemo_Se_al_1_csv->setText(QApplication::translate("MainWindow", "Demo Se\303\261al 1 (*.csv)", 0));
        actionDemo_Se_al_2_txt->setText(QApplication::translate("MainWindow", "Demo Se\303\261al 2 (*.txt)", 0));
        actionAnalisis_Multiple->setText(QApplication::translate("MainWindow", "Analisis Multiple", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Deshacer", 0));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionRedoOriginal->setText(QApplication::translate("MainWindow", "Restaurar Original", 0));
        actionDemo_Se_al_3_csv->setText(QApplication::translate("MainWindow", "Demo Se\303\261al 3 - 50Hz (*.csv)", 0));
        action_informacion_actual_sig->setText(QApplication::translate("MainWindow", "Informacion Se\303\261al Actual", 0));
        actionDemo_Se_al_Greasy_csv->setText(QApplication::translate("MainWindow", "Demo Se\303\261al - Greasy (*.csv)", 0));
        actionCrear_Reporte->setText(QApplication::translate("MainWindow", "Crear Reporte", 0));
        groupBox_3->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "Canal Actual : ", 0));
        groupBox->setTitle(QString());
        nombreProyectoActual->setText(QApplication::translate("MainWindow", " --------------- ", 0));
        informacionSesion->setText(QApplication::translate("MainWindow", "...", 0));
        label_2->setText(QApplication::translate("MainWindow", "Sesion :", 0));
        label_19->setText(QApplication::translate("MainWindow", "Proyecto", 0));
        label_3->setText(QApplication::translate("MainWindow", "RUT", 0));
        informacionRUT->setText(QApplication::translate("MainWindow", "No Iniciado...", 0));
        label_20->setText(QApplication::translate("MainWindow", ":", 0));
        label_18->setText(QApplication::translate("MainWindow", ":", 0));
        label_21->setText(QApplication::translate("MainWindow", ":", 0));
        label_22->setText(QApplication::translate("MainWindow", "INFORMACION:", 0));
        label_23->setText(QApplication::translate("MainWindow", "RANGO:", 0));
        ButtonReplot->setText(QApplication::translate("MainWindow", "Aplicar", 0));
        label_4->setText(QApplication::translate("MainWindow", "RANGO :", 0));
        ButtonPlot->setText(QApplication::translate("MainWindow", "Restaurar", 0));
#ifndef QT_NO_TOOLTIP
        btnCloseG1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Cerrar</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnCloseG1->setText(QApplication::translate("MainWindow", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnOpenG1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Abrir</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnOpenG1->setText(QApplication::translate("MainWindow", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnSaveImageG1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Guardar</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnSaveImageG1->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnExportarG1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Exportar</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnExportarG1->setText(QApplication::translate("MainWindow", "...", 0));
        rutlabel->setText(QApplication::translate("MainWindow", "RUT:", 0));
        label_6->setText(QString());
        iniciarSession->setText(QApplication::translate("MainWindow", "Ingresar", 0));
#ifndef QT_NO_TOOLTIP
        rutSesion->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Ej: &quot;11.222.333-K&quot;</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        rutSesion->setPlaceholderText(QApplication::translate("MainWindow", "Ej: 10.999.888-7", 0));
        btnListaUsuarios->setText(QString());
        imagenUsuario->setText(QString());
        sesionNombre->setText(QString());
        label_rut->setText(QApplication::translate("MainWindow", "RUT:", 0));
        label_nombre->setText(QApplication::translate("MainWindow", "NOMBRE:", 0));
        sesionRut->setText(QString());
        sesionSexo->setText(QString());
        logOut->setText(QApplication::translate("MainWindow", "logOut", 0));
        label_direccion->setText(QApplication::translate("MainWindow", "DIRECCION:", 0));
        sesionDireccion->setText(QString());
        label_sexo->setText(QApplication::translate("MainWindow", "SEXO:", 0));
        label_Historial->setText(QApplication::translate("MainWindow", "Historial:", 0));
        comboAnalisis2->clear();
        comboAnalisis2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Discrete Fourier Transform", 0)
         << QApplication::translate("MainWindow", "Fast Fourier Transform", 0)
         << QApplication::translate("MainWindow", "Gabor Transform", 0)
         << QApplication::translate("MainWindow", "Wavelet Transform", 0)
         << QApplication::translate("MainWindow", "Spectrogram", 0)
         << QApplication::translate("MainWindow", "Histogram Fourier", 0)
         << QApplication::translate("MainWindow", "Histogram", 0)
         << QApplication::translate("MainWindow", "MovingRms", 0)
         << QApplication::translate("MainWindow", "Mean Frequency", 0)
         << QApplication::translate("MainWindow", "Normalize", 0)
        );
        ButtonGraficar2->setText(QApplication::translate("MainWindow", "Graficar", 0));
        label_SaveG2->setText(QApplication::translate("MainWindow", "Exportar:", 0));
        btnSaveImageG2->setText(QString());
        in_enca_2->setText(QString());
        btnSaveDataG2->setText(QApplication::translate("MainWindow", "...", 0));
        label_16->setText(QApplication::translate("MainWindow", "Incluir encabezado:", 0));
        toolBoxGrafico2->setItemText(toolBoxGrafico2->indexOf(page_10), QApplication::translate("MainWindow", "Metodos", 0));
        comboFiltros_2->setItemText(0, QApplication::translate("MainWindow", "Pasa Bajo", 0));
        comboFiltros_2->setItemText(1, QApplication::translate("MainWindow", "Pasa Alto", 0));
        comboFiltros_2->setItemText(2, QApplication::translate("MainWindow", "Pasa Banda", 0));
        comboFiltros_2->setItemText(3, QApplication::translate("MainWindow", "Elimina Banda", 0));
        comboFiltros_2->setItemText(4, QApplication::translate("MainWindow", "Filtro Notch", 0));
        comboFiltros_2->setItemText(5, QApplication::translate("MainWindow", "Pasa Bajo - Butterworth  ", 0));
        comboFiltros_2->setItemText(6, QApplication::translate("MainWindow", "Filtro de Gabor", 0));
        comboFiltros_2->setItemText(7, QApplication::translate("MainWindow", "Filtro de Wavelet", 0));

        btn_AplicarFiltro2->setText(QApplication::translate("MainWindow", "Aplicar Filtro", 0));
        toolBtn_Filtros2->setText(QApplication::translate("MainWindow", "...", 0));
        toolBoxGrafico2->setItemText(toolBoxGrafico2->indexOf(page_11), QApplication::translate("MainWindow", "Filtros", 0));
        comboAnalisis3->clear();
        comboAnalisis3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Discrete Fourier Transform", 0)
         << QApplication::translate("MainWindow", "Fast Fourier Transform", 0)
         << QApplication::translate("MainWindow", "Gabor Transform", 0)
         << QApplication::translate("MainWindow", "Wavelet Transform", 0)
         << QApplication::translate("MainWindow", "Spectrogram", 0)
         << QApplication::translate("MainWindow", "Histogram Fourier", 0)
         << QApplication::translate("MainWindow", "Histogram", 0)
         << QApplication::translate("MainWindow", "MovingRms", 0)
         << QApplication::translate("MainWindow", "Mean Frequency", 0)
         << QApplication::translate("MainWindow", "Normalize", 0)
        );
        ButtonGraficar3->setText(QApplication::translate("MainWindow", "Graficar", 0));
        label_SaveG3->setText(QApplication::translate("MainWindow", "Exportar:", 0));
        btnSaveImageG3->setText(QString());
        btnSaveDataG3->setText(QApplication::translate("MainWindow", "...", 0));
        in_enca_3->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "Incluir encabezado:", 0));
        toolBoxGrafico3->setItemText(toolBoxGrafico3->indexOf(page_17), QApplication::translate("MainWindow", "Metodos", 0));
        comboFiltros_3->setItemText(0, QApplication::translate("MainWindow", "Pasa Bajo", 0));
        comboFiltros_3->setItemText(1, QApplication::translate("MainWindow", "Pasa Alto", 0));
        comboFiltros_3->setItemText(2, QApplication::translate("MainWindow", "Pasa Banda", 0));
        comboFiltros_3->setItemText(3, QApplication::translate("MainWindow", "Elimina Banda", 0));
        comboFiltros_3->setItemText(4, QApplication::translate("MainWindow", "Filtro Notch", 0));
        comboFiltros_3->setItemText(5, QApplication::translate("MainWindow", "Pasa Bajo - Butterworth", 0));
        comboFiltros_3->setItemText(6, QApplication::translate("MainWindow", "Filtro de Gabor", 0));
        comboFiltros_3->setItemText(7, QApplication::translate("MainWindow", "Filtro de Wavelet", 0));

        btn_AplicarFiltro3->setText(QApplication::translate("MainWindow", "Aplicar Filtro", 0));
        toolBtn_Filtros3->setText(QApplication::translate("MainWindow", "...", 0));
        toolBoxGrafico3->setItemText(toolBoxGrafico3->indexOf(page_21), QApplication::translate("MainWindow", "Filtros", 0));
        tabTiempoFrec->setTabText(tabTiempoFrec->indexOf(tabAB), QApplication::translate("MainWindow", "Analisis Visual", 0));
        dockGraficosNorm->setWindowTitle(QApplication::translate("MainWindow", "Graficos - Se\303\261al Normalizada", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Normalized by:", 0));
        radioRms->setText(QApplication::translate("MainWindow", "RMS", 0));
        radioEnergy->setText(QApplication::translate("MainWindow", "ENERGY", 0));
        radioNorm->setText(QApplication::translate("MainWindow", "NORM", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Apply", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Stadistics", 0));
        label_12->setText(QApplication::translate("MainWindow", "MIN", 0));
        label_11->setText(QApplication::translate("MainWindow", "STD", 0));
        label_10->setText(QApplication::translate("MainWindow", "VAR", 0));
        label_8->setText(QApplication::translate("MainWindow", "MEAN", 0));
        label_9->setText(QApplication::translate("MainWindow", "MEDIAN", 0));
        label_13->setText(QApplication::translate("MainWindow", "RMS", 0));
        label_14->setText(QApplication::translate("MainWindow", "MAX", 0));
        label_15->setText(QApplication::translate("MainWindow", "RANGE", 0));
        tabTiempoFrec->setTabText(tabTiempoFrec->indexOf(tabAE), QApplication::translate("MainWindow", "Analisis Estadistico", 0));
        dockTablaEstadisticas->setWindowTitle(QApplication::translate("MainWindow", "Tabla de datos Estad\303\255sticos", 0));
        QTableWidgetItem *___qtablewidgetitem = tabla_deDatos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tabla_deDatos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Time", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tabla_deDatos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Mean", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tabla_deDatos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Median", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tabla_deDatos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Standard deviation", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tabla_deDatos->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Variance", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tabla_deDatos->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Root Mean Square", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tabla_deDatos->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Minimum", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tabla_deDatos->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Maximum", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tabla_deDatos->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Range", 0));
        btnLimpiarTabla->setText(QApplication::translate("MainWindow", "Limpiar tabla", 0));
        btnCalcularDatos->setText(QApplication::translate("MainWindow", "Calcular", 0));
        btnGuardarTabla->setText(QApplication::translate("MainWindow", "Guardar Datos", 0));
        tabTiempoFrec->setTabText(tabTiempoFrec->indexOf(tab), QApplication::translate("MainWindow", "Tabla de Informacion", 0));
        label_7->setText(QApplication::translate("MainWindow", "Log de eventos del sistema:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Contenido del archivo actual:", 0));
        tabTiempoFrec->setTabText(tabTiempoFrec->indexOf(tabInfo), QApplication::translate("MainWindow", "Log and Info", 0));
        tabPrincipal->setTabText(tabPrincipal->indexOf(tabVP), QApplication::translate("MainWindow", "Ventana Principal", 0));
        infoComentarios->setText(QApplication::translate("MainWindow", "* En esta seccion podras agregar Notas y Comentarios que se almacenaran automaticamente en la sesion actual.", 0));
        infoComentarios_2->setText(QApplication::translate("MainWindow", "* A la derecha se muestra un Historial de los comentarios previamente ingresados.", 0));
        btnSearchComents->setText(QApplication::translate("MainWindow", "Buscar", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Historial de Notas y Comentarios", 0));
        botonNotas->setText(QApplication::translate("MainWindow", "Agregar Nota", 0));
#ifndef QT_NO_TOOLTIP
        EliminarComentario->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Eliminar Comentario</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        EliminarComentario->setText(QApplication::translate("MainWindow", "...", 0));
        tabPrincipal->setTabText(tabPrincipal->indexOf(tabNYC), QApplication::translate("MainWindow", "Notas y Comentarios", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "Archivos", 0));
        menuExport->setTitle(QApplication::translate("MainWindow", "Proyectos", 0));
        menuAdministrar->setTitle(QApplication::translate("MainWindow", "Administrar", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Ayuda", 0));
        menuDesarrollador->setTitle(QApplication::translate("MainWindow", "Desarrollador", 0));
        menu_Ejemplos->setTitle(QApplication::translate("MainWindow", "&Ejemplos", 0));
        menuExportar->setTitle(QApplication::translate("MainWindow", "Exportar", 0));
        menuConfigurac_on->setTitle(QApplication::translate("MainWindow", "Configurac\303\255on", 0));
        menuVer->setTitle(QApplication::translate("MainWindow", "Ver", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
