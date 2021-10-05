/********************************************************************************
** Form generated from reading UI file 'analisismultiples.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALISISMULTIPLES_H
#define UI_ANALISISMULTIPLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>
#include <qxtspanslider.h>

QT_BEGIN_NAMESPACE

class Ui_AnalisisMultiples
{
public:
    QAction *actionSalir;
    QAction *actionReplot;
    QAction *actionFourier;
    QAction *actionSpectrogram;
    QAction *actionHistogram;
    QAction *actionGabor_Transform;
    QAction *actionWavelet_Transform;
    QAction *actionShow_Graphs;
    QAction *actionMoovingRms;
    QAction *actionMean_Frequency;
    QWidget *centralwidget;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBox_Signals;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_8;
    QCheckBox *checkBox_signal2;
    QWidget *contenedorGrafico2;
    QGridLayout *gridLayout_2;
    QDockWidget *dockSignal_2;
    QCustomPlot *Signal_2;
    QVBoxLayout *verticalLayout_2;
    QToolButton *abrir_s2;
    QComboBox *cBox_canalS2;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *MinSBox;
    QLabel *label;
    QxtSpanSlider *SliderGraficosAM;
    QDoubleSpinBox *MaxSBox;
    QLabel *label_2;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox_signal1;
    QWidget *contenedorGrafico1;
    QGridLayout *gridLayout;
    QDockWidget *dockSignal_1;
    QCustomPlot *Signal_1;
    QVBoxLayout *verticalLayout;
    QToolButton *abrir_s1;
    QComboBox *cBox_canalS1;
    QGridLayout *gridLayout_9;
    QCheckBox *checkBox_signal3;
    QWidget *contenedorGrafico3;
    QGridLayout *gridLayout_3;
    QDockWidget *dockSignal_3;
    QCustomPlot *Signal_3;
    QVBoxLayout *verticalLayout_3;
    QToolButton *abrir_s3;
    QComboBox *cBox_canalS3;
    QGridLayout *gridLayout_10;
    QWidget *contenedorGrafico4;
    QGridLayout *gridLayout_4;
    QDockWidget *dockSignal_4;
    QCustomPlot *Signal_4;
    QVBoxLayout *verticalLayout_4;
    QToolButton *abrir_s4;
    QComboBox *cBox_canalS4;
    QCheckBox *checkBox_signal4;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuVer;
    QMenu *menuAnalisis;
    QStatusBar *statusbar;
    QToolBar *BarraHerramientas;

    void setupUi(QMainWindow *AnalisisMultiples)
    {
        if (AnalisisMultiples->objectName().isEmpty())
            AnalisisMultiples->setObjectName(QStringLiteral("AnalisisMultiples"));
        AnalisisMultiples->resize(878, 480);
        actionSalir = new QAction(AnalisisMultiples);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/closeAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon);
        actionReplot = new QAction(AnalisisMultiples);
        actionReplot->setObjectName(QStringLiteral("actionReplot"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/replot_Icono.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReplot->setIcon(icon1);
        actionFourier = new QAction(AnalisisMultiples);
        actionFourier->setObjectName(QStringLiteral("actionFourier"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagenes/fourier_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFourier->setIcon(icon2);
        actionSpectrogram = new QAction(AnalisisMultiples);
        actionSpectrogram->setObjectName(QStringLiteral("actionSpectrogram"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imagenes/sgram.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSpectrogram->setIcon(icon3);
        actionHistogram = new QAction(AnalisisMultiples);
        actionHistogram->setObjectName(QStringLiteral("actionHistogram"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/imagenes/graph_statistics.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHistogram->setIcon(icon4);
        actionGabor_Transform = new QAction(AnalisisMultiples);
        actionGabor_Transform->setObjectName(QStringLiteral("actionGabor_Transform"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/imagenes/loading_2.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionGabor_Transform->setIcon(icon5);
        actionWavelet_Transform = new QAction(AnalisisMultiples);
        actionWavelet_Transform->setObjectName(QStringLiteral("actionWavelet_Transform"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/imagenes/026.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWavelet_Transform->setIcon(icon6);
        actionShow_Graphs = new QAction(AnalisisMultiples);
        actionShow_Graphs->setObjectName(QStringLiteral("actionShow_Graphs"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/imagenes/view.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_Graphs->setIcon(icon7);
        actionMoovingRms = new QAction(AnalisisMultiples);
        actionMoovingRms->setObjectName(QStringLiteral("actionMoovingRms"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/imagenes/console.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMoovingRms->setIcon(icon8);
        actionMean_Frequency = new QAction(AnalisisMultiples);
        actionMean_Frequency->setObjectName(QStringLiteral("actionMean_Frequency"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/imagenes/Task Manager.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionMean_Frequency->setIcon(icon9);
        centralwidget = new QWidget(AnalisisMultiples);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_11 = new QGridLayout(centralwidget);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        groupBox_Signals = new QGroupBox(centralwidget);
        groupBox_Signals->setObjectName(QStringLiteral("groupBox_Signals"));
        gridLayout_6 = new QGridLayout(groupBox_Signals);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        checkBox_signal2 = new QCheckBox(groupBox_Signals);
        checkBox_signal2->setObjectName(QStringLiteral("checkBox_signal2"));
        checkBox_signal2->setEnabled(false);
        checkBox_signal2->setMinimumSize(QSize(50, 0));
        checkBox_signal2->setMaximumSize(QSize(13, 13));
        checkBox_signal2->setAutoExclusive(true);

        gridLayout_8->addWidget(checkBox_signal2, 0, 0, 1, 1);

        contenedorGrafico2 = new QWidget(groupBox_Signals);
        contenedorGrafico2->setObjectName(QStringLiteral("contenedorGrafico2"));
        gridLayout_2 = new QGridLayout(contenedorGrafico2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        dockSignal_2 = new QDockWidget(contenedorGrafico2);
        dockSignal_2->setObjectName(QStringLiteral("dockSignal_2"));
        dockSignal_2->setEnabled(false);
        Signal_2 = new QCustomPlot();
        Signal_2->setObjectName(QStringLiteral("Signal_2"));
        dockSignal_2->setWidget(Signal_2);

        gridLayout_2->addWidget(dockSignal_2, 0, 0, 1, 1);


        gridLayout_8->addWidget(contenedorGrafico2, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        abrir_s2 = new QToolButton(groupBox_Signals);
        abrir_s2->setObjectName(QStringLiteral("abrir_s2"));
        abrir_s2->setMinimumSize(QSize(70, 30));
        abrir_s2->setMaximumSize(QSize(70, 40));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/imagenes/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        abrir_s2->setIcon(icon10);
        abrir_s2->setIconSize(QSize(30, 30));
        abrir_s2->setAutoRaise(false);

        verticalLayout_2->addWidget(abrir_s2);

        cBox_canalS2 = new QComboBox(groupBox_Signals);
        cBox_canalS2->setObjectName(QStringLiteral("cBox_canalS2"));
        cBox_canalS2->setEnabled(false);
        cBox_canalS2->setMaximumSize(QSize(70, 20));

        verticalLayout_2->addWidget(cBox_canalS2);


        gridLayout_8->addLayout(verticalLayout_2, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_8, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        MinSBox = new QDoubleSpinBox(groupBox_Signals);
        MinSBox->setObjectName(QStringLiteral("MinSBox"));
        MinSBox->setEnabled(false);
        MinSBox->setDecimals(4);
        MinSBox->setMaximum(1e+07);

        horizontalLayout->addWidget(MinSBox);

        label = new QLabel(groupBox_Signals);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        SliderGraficosAM = new QxtSpanSlider(groupBox_Signals);
        SliderGraficosAM->setObjectName(QStringLiteral("SliderGraficosAM"));
        SliderGraficosAM->setEnabled(false);
        SliderGraficosAM->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(SliderGraficosAM);

        MaxSBox = new QDoubleSpinBox(groupBox_Signals);
        MaxSBox->setObjectName(QStringLiteral("MaxSBox"));
        MaxSBox->setEnabled(false);
        MaxSBox->setDecimals(4);
        MaxSBox->setMaximum(1e+07);

        horizontalLayout->addWidget(MaxSBox);


        gridLayout_6->addLayout(horizontalLayout, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_Signals);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_6->addWidget(label_2, 0, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        checkBox_signal1 = new QCheckBox(groupBox_Signals);
        checkBox_signal1->setObjectName(QStringLiteral("checkBox_signal1"));
        checkBox_signal1->setEnabled(false);
        checkBox_signal1->setMinimumSize(QSize(50, 0));
        checkBox_signal1->setMaximumSize(QSize(13, 13));
        QFont font;
        font.setPointSize(8);
        checkBox_signal1->setFont(font);
        checkBox_signal1->setChecked(true);
        checkBox_signal1->setAutoExclusive(true);

        gridLayout_5->addWidget(checkBox_signal1, 0, 0, 1, 1);

        contenedorGrafico1 = new QWidget(groupBox_Signals);
        contenedorGrafico1->setObjectName(QStringLiteral("contenedorGrafico1"));
        gridLayout = new QGridLayout(contenedorGrafico1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dockSignal_1 = new QDockWidget(contenedorGrafico1);
        dockSignal_1->setObjectName(QStringLiteral("dockSignal_1"));
        dockSignal_1->setEnabled(false);
        dockSignal_1->setFeatures(QDockWidget::AllDockWidgetFeatures);
        Signal_1 = new QCustomPlot();
        Signal_1->setObjectName(QStringLiteral("Signal_1"));
        dockSignal_1->setWidget(Signal_1);

        gridLayout->addWidget(dockSignal_1, 0, 0, 1, 1);


        gridLayout_5->addWidget(contenedorGrafico1, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        abrir_s1 = new QToolButton(groupBox_Signals);
        abrir_s1->setObjectName(QStringLiteral("abrir_s1"));
        abrir_s1->setMinimumSize(QSize(70, 30));
        abrir_s1->setMaximumSize(QSize(70, 40));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/imagenes/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        abrir_s1->setIcon(icon11);
        abrir_s1->setIconSize(QSize(30, 30));
        abrir_s1->setCheckable(false);
        abrir_s1->setAutoRaise(false);

        verticalLayout->addWidget(abrir_s1);

        cBox_canalS1 = new QComboBox(groupBox_Signals);
        cBox_canalS1->setObjectName(QStringLiteral("cBox_canalS1"));
        cBox_canalS1->setEnabled(false);
        cBox_canalS1->setMaximumSize(QSize(70, 20));

        verticalLayout->addWidget(cBox_canalS1);


        gridLayout_5->addLayout(verticalLayout, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 1, 0, 1, 2);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        checkBox_signal3 = new QCheckBox(groupBox_Signals);
        checkBox_signal3->setObjectName(QStringLiteral("checkBox_signal3"));
        checkBox_signal3->setEnabled(false);
        checkBox_signal3->setMinimumSize(QSize(50, 0));
        checkBox_signal3->setMaximumSize(QSize(13, 13));
        checkBox_signal3->setAutoExclusive(true);

        gridLayout_9->addWidget(checkBox_signal3, 0, 0, 1, 1);

        contenedorGrafico3 = new QWidget(groupBox_Signals);
        contenedorGrafico3->setObjectName(QStringLiteral("contenedorGrafico3"));
        gridLayout_3 = new QGridLayout(contenedorGrafico3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        dockSignal_3 = new QDockWidget(contenedorGrafico3);
        dockSignal_3->setObjectName(QStringLiteral("dockSignal_3"));
        dockSignal_3->setEnabled(false);
        Signal_3 = new QCustomPlot();
        Signal_3->setObjectName(QStringLiteral("Signal_3"));
        dockSignal_3->setWidget(Signal_3);

        gridLayout_3->addWidget(dockSignal_3, 0, 0, 1, 1);


        gridLayout_9->addWidget(contenedorGrafico3, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        abrir_s3 = new QToolButton(groupBox_Signals);
        abrir_s3->setObjectName(QStringLiteral("abrir_s3"));
        abrir_s3->setMinimumSize(QSize(70, 30));
        abrir_s3->setMaximumSize(QSize(70, 40));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/imagenes/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        abrir_s3->setIcon(icon12);
        abrir_s3->setIconSize(QSize(30, 30));
        abrir_s3->setAutoRaise(false);

        verticalLayout_3->addWidget(abrir_s3);

        cBox_canalS3 = new QComboBox(groupBox_Signals);
        cBox_canalS3->setObjectName(QStringLiteral("cBox_canalS3"));
        cBox_canalS3->setEnabled(false);
        cBox_canalS3->setMaximumSize(QSize(70, 20));

        verticalLayout_3->addWidget(cBox_canalS3);


        gridLayout_9->addLayout(verticalLayout_3, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_9, 3, 0, 1, 2);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        contenedorGrafico4 = new QWidget(groupBox_Signals);
        contenedorGrafico4->setObjectName(QStringLiteral("contenedorGrafico4"));
        gridLayout_4 = new QGridLayout(contenedorGrafico4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        dockSignal_4 = new QDockWidget(contenedorGrafico4);
        dockSignal_4->setObjectName(QStringLiteral("dockSignal_4"));
        dockSignal_4->setEnabled(false);
        Signal_4 = new QCustomPlot();
        Signal_4->setObjectName(QStringLiteral("Signal_4"));
        dockSignal_4->setWidget(Signal_4);

        gridLayout_4->addWidget(dockSignal_4, 0, 0, 1, 1);


        gridLayout_10->addWidget(contenedorGrafico4, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        abrir_s4 = new QToolButton(groupBox_Signals);
        abrir_s4->setObjectName(QStringLiteral("abrir_s4"));
        abrir_s4->setMinimumSize(QSize(70, 30));
        abrir_s4->setMaximumSize(QSize(70, 40));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/imagenes/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        abrir_s4->setIcon(icon13);
        abrir_s4->setIconSize(QSize(30, 30));
        abrir_s4->setAutoRaise(false);

        verticalLayout_4->addWidget(abrir_s4);

        cBox_canalS4 = new QComboBox(groupBox_Signals);
        cBox_canalS4->setObjectName(QStringLiteral("cBox_canalS4"));
        cBox_canalS4->setEnabled(false);
        cBox_canalS4->setMaximumSize(QSize(70, 20));

        verticalLayout_4->addWidget(cBox_canalS4);


        gridLayout_10->addLayout(verticalLayout_4, 0, 2, 1, 1);

        checkBox_signal4 = new QCheckBox(groupBox_Signals);
        checkBox_signal4->setObjectName(QStringLiteral("checkBox_signal4"));
        checkBox_signal4->setEnabled(false);
        checkBox_signal4->setMinimumSize(QSize(50, 0));
        checkBox_signal4->setMaximumSize(QSize(13, 13));
        checkBox_signal4->setAutoExclusive(true);

        gridLayout_10->addWidget(checkBox_signal4, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_10, 4, 0, 1, 2);


        gridLayout_11->addWidget(groupBox_Signals, 0, 0, 1, 1);

        AnalisisMultiples->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AnalisisMultiples);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 878, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuVer = new QMenu(menubar);
        menuVer->setObjectName(QStringLiteral("menuVer"));
        menuAnalisis = new QMenu(menubar);
        menuAnalisis->setObjectName(QStringLiteral("menuAnalisis"));
        AnalisisMultiples->setMenuBar(menubar);
        statusbar = new QStatusBar(AnalisisMultiples);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AnalisisMultiples->setStatusBar(statusbar);
        BarraHerramientas = new QToolBar(AnalisisMultiples);
        BarraHerramientas->setObjectName(QStringLiteral("BarraHerramientas"));
        BarraHerramientas->setMovable(false);
        BarraHerramientas->setFloatable(false);
        AnalisisMultiples->addToolBar(Qt::LeftToolBarArea, BarraHerramientas);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuVer->menuAction());
        menubar->addAction(menuAnalisis->menuAction());
        menuArchivo->addAction(actionSalir);
        menuVer->addAction(actionReplot);
        menuVer->addAction(actionShow_Graphs);
        menuAnalisis->addAction(actionFourier);
        menuAnalisis->addAction(actionSpectrogram);
        menuAnalisis->addAction(actionHistogram);
        menuAnalisis->addAction(actionGabor_Transform);
        menuAnalisis->addAction(actionWavelet_Transform);
        menuAnalisis->addAction(actionMoovingRms);
        menuAnalisis->addAction(actionMean_Frequency);
        BarraHerramientas->addAction(actionReplot);
        BarraHerramientas->addAction(actionShow_Graphs);
        BarraHerramientas->addSeparator();
        BarraHerramientas->addSeparator();
        BarraHerramientas->addAction(actionFourier);
        BarraHerramientas->addAction(actionSpectrogram);
        BarraHerramientas->addAction(actionGabor_Transform);
        BarraHerramientas->addAction(actionWavelet_Transform);
        BarraHerramientas->addAction(actionHistogram);
        BarraHerramientas->addAction(actionMoovingRms);
        BarraHerramientas->addSeparator();
        BarraHerramientas->addAction(actionMean_Frequency);
        BarraHerramientas->addSeparator();
        BarraHerramientas->addAction(actionSalir);
        BarraHerramientas->addSeparator();

        retranslateUi(AnalisisMultiples);
        QObject::connect(actionSalir, SIGNAL(triggered()), AnalisisMultiples, SLOT(close()));

        QMetaObject::connectSlotsByName(AnalisisMultiples);
    } // setupUi

    void retranslateUi(QMainWindow *AnalisisMultiples)
    {
        AnalisisMultiples->setWindowTitle(QApplication::translate("AnalisisMultiples", "MainWindow", 0));
        actionSalir->setText(QApplication::translate("AnalisisMultiples", "Salir", 0));
        actionSalir->setShortcut(QApplication::translate("AnalisisMultiples", "Ctrl+Q", 0));
        actionReplot->setText(QApplication::translate("AnalisisMultiples", "Replot", 0));
        actionReplot->setShortcut(QApplication::translate("AnalisisMultiples", "Ctrl+R", 0));
        actionFourier->setText(QApplication::translate("AnalisisMultiples", "Fourier Transform", 0));
        actionSpectrogram->setText(QApplication::translate("AnalisisMultiples", "Spectrogram", 0));
        actionHistogram->setText(QApplication::translate("AnalisisMultiples", "Histogram", 0));
        actionGabor_Transform->setText(QApplication::translate("AnalisisMultiples", "Gabor Transform", 0));
        actionWavelet_Transform->setText(QApplication::translate("AnalisisMultiples", "Wavelet Transform", 0));
        actionShow_Graphs->setText(QApplication::translate("AnalisisMultiples", "Show Graphs", 0));
        actionMoovingRms->setText(QApplication::translate("AnalisisMultiples", "MoovingRms", 0));
        actionMean_Frequency->setText(QApplication::translate("AnalisisMultiples", "Mean Frequency", 0));
        groupBox_Signals->setTitle(QString());
        checkBox_signal2->setText(QString());
        abrir_s2->setText(QString());
        label->setText(QApplication::translate("AnalisisMultiples", "(s)", 0));
        label_2->setText(QApplication::translate("AnalisisMultiples", "(s)", 0));
        checkBox_signal1->setText(QString());
        abrir_s1->setText(QString());
        checkBox_signal3->setText(QString());
        abrir_s3->setText(QString());
        abrir_s4->setText(QString());
        checkBox_signal4->setText(QString());
        menuArchivo->setTitle(QApplication::translate("AnalisisMultiples", "Archivo", 0));
        menuVer->setTitle(QApplication::translate("AnalisisMultiples", "Opciones", 0));
        menuAnalisis->setTitle(QApplication::translate("AnalisisMultiples", "Analisis", 0));
        BarraHerramientas->setWindowTitle(QApplication::translate("AnalisisMultiples", "toolBar_2", 0));
    } // retranslateUi

};

namespace Ui {
    class AnalisisMultiples: public Ui_AnalisisMultiples {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALISISMULTIPLES_H
