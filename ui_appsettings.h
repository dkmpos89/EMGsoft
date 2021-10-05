/********************************************************************************
** Form generated from reading UI file 'appsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPSETTINGS_H
#define UI_APPSETTINGS_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appSettings
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAceptar;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabConfig;
    QWidget *tab_octave;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *Octave_lb_OctavePath;
    QLineEdit *OctavePath;
    QToolButton *btn_OctavePath;
    QHBoxLayout *horizontalLayout;
    QLabel *Octave_lb_menuOctave;
    QLineEdit *Octave_dir_menuOctave;
    QToolButton *Octave_btn_menuOctave;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Octave_lb_OctaveFourier;
    QLineEdit *Octave_dir_OctaveFourier;
    QToolButton *Octave_btn_OctaveFourier;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Octave_lb_OctaveSpectrogram;
    QLineEdit *Octave_dir_OctaveSpectrogram;
    QToolButton *Octave_btn_OctaveSpectrogram;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Octave_lb_OctaveGabor;
    QLineEdit *Octave_dir_OctaveGabor;
    QToolButton *Octave_btn_OctaveGabor;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Octave_lb_OctaveWavelets;
    QLineEdit *Octave_dir_OctaveWavelets;
    QToolButton *Octave_btn_OctaveWavelets;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *verticalSpacer_7;
    QWidget *tab_bsededatos;
    QGridLayout *gridLayout;
    QPlainTextEdit *bd_scripts;
    QWidget *tab_spectrogram;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QCheckBox *sgram_lin;
    QCheckBox *sgram_wlen;
    QSpinBox *sgram_wlen_value;
    QLabel *labelWlen;
    QCheckBox *sgram_tfr;
    QDoubleSpinBox *sgram_tfr_value;
    QLabel *labelTfr;
    QLabel *labelLin;
    QLabel *label_5;
    QTextEdit *infoSpectrogram;
    QWidget *tab_fourier;
    QGridLayout *gridLayout_4;
    QGroupBox *Fourier_gb_Type;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *Fourier_rb_Impulse;
    QSpacerItem *verticalSpacer;
    QLabel *logoImpluse;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *Fourier_rb_Curve;
    QSpinBox *Fourier_sp_Curvevalue;
    QLabel *Fourier_infoCurve;
    QLabel *logoCurve;
    QGroupBox *Fourier_gb_Histogram;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_tgabor;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QLabel *label_Modulation;
    QLabel *labelLengthTime;
    QCheckBox *gabor_cB_numberOfMod;
    QSpinBox *gabor_numberModulations_value;
    QLineEdit *gabor_windowsString_value;
    QLabel *label_infoGabor;
    QLabel *labelWindowsG;
    QSpinBox *gabor_lengthTime_value;
    QCheckBox *gabor_cB_GaborWind;
    QCheckBox *gabor_cB_LenghTime;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QTextEdit *infoGaborTransform;
    QCheckBox *gabor_cB_typeOfTransform;
    QLabel *label_dgtGaborReal;
    QWidget *tab_twavelets;
    QWidget *tab;
    QGridLayout *gridLayout_24;
    QGroupBox *gbMovingRMS;
    QGridLayout *gridLayout_12;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_10;
    QDoubleSpinBox *RMS_overlap;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_12;
    QDoubleSpinBox *RMS_Length;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *gbMovingRMS_3;
    QGridLayout *gridLayout_23;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_15;
    QComboBox *comboTipo_MeanFreq;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_25;
    QDoubleSpinBox *MeanFreq_Length;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_24;
    QDoubleSpinBox *MeanFreq_overlap;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_16;

    void setupUi(QDockWidget *appSettings)
    {
        if (appSettings->objectName().isEmpty())
            appSettings->setObjectName(QStringLiteral("appSettings"));
        appSettings->setWindowModality(Qt::WindowModal);
        appSettings->resize(520, 448);
        appSettings->setMinimumSize(QSize(520, 426));
        appSettings->setMaximumSize(QSize(524287, 524287));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        appSettings->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/Gear.ico"), QSize(), QIcon::Normal, QIcon::Off);
        appSettings->setWindowIcon(icon);
        appSettings->setAutoFillBackground(true);
        appSettings->setFloating(true);
        appSettings->setFeatures(QDockWidget::AllDockWidgetFeatures);
        appSettings->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_11 = new QGridLayout(dockWidgetContents);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        btnAceptar = new QPushButton(dockWidgetContents);
        btnAceptar->setObjectName(QStringLiteral("btnAceptar"));

        horizontalLayout_8->addWidget(btnAceptar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        gridLayout_7->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        tabConfig = new QTabWidget(dockWidgetContents);
        tabConfig->setObjectName(QStringLiteral("tabConfig"));
        tabConfig->setMinimumSize(QSize(500, 350));
        tabConfig->setMaximumSize(QSize(16777215, 16777215));
        tabConfig->setLayoutDirection(Qt::LeftToRight);
        tabConfig->setAutoFillBackground(true);
        tabConfig->setTabShape(QTabWidget::Rounded);
        tabConfig->setElideMode(Qt::ElideNone);
        tabConfig->setUsesScrollButtons(true);
        tabConfig->setDocumentMode(false);
        tabConfig->setTabsClosable(false);
        tabConfig->setMovable(false);
        tabConfig->setTabBarAutoHide(false);
        tab_octave = new QWidget();
        tab_octave->setObjectName(QStringLiteral("tab_octave"));
        gridLayout_10 = new QGridLayout(tab_octave);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        Octave_lb_OctavePath = new QLabel(tab_octave);
        Octave_lb_OctavePath->setObjectName(QStringLiteral("Octave_lb_OctavePath"));

        horizontalLayout_11->addWidget(Octave_lb_OctavePath);

        OctavePath = new QLineEdit(tab_octave);
        OctavePath->setObjectName(QStringLiteral("OctavePath"));
        OctavePath->setMaximumSize(QSize(300, 16777215));
        OctavePath->setReadOnly(true);

        horizontalLayout_11->addWidget(OctavePath);

        btn_OctavePath = new QToolButton(tab_octave);
        btn_OctavePath->setObjectName(QStringLiteral("btn_OctavePath"));

        horizontalLayout_11->addWidget(btn_OctavePath);


        gridLayout_10->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Octave_lb_menuOctave = new QLabel(tab_octave);
        Octave_lb_menuOctave->setObjectName(QStringLiteral("Octave_lb_menuOctave"));

        horizontalLayout->addWidget(Octave_lb_menuOctave);

        Octave_dir_menuOctave = new QLineEdit(tab_octave);
        Octave_dir_menuOctave->setObjectName(QStringLiteral("Octave_dir_menuOctave"));
        Octave_dir_menuOctave->setMaximumSize(QSize(300, 16777215));
        Octave_dir_menuOctave->setReadOnly(true);

        horizontalLayout->addWidget(Octave_dir_menuOctave);

        Octave_btn_menuOctave = new QToolButton(tab_octave);
        Octave_btn_menuOctave->setObjectName(QStringLiteral("Octave_btn_menuOctave"));

        horizontalLayout->addWidget(Octave_btn_menuOctave);


        gridLayout_10->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Octave_lb_OctaveFourier = new QLabel(tab_octave);
        Octave_lb_OctaveFourier->setObjectName(QStringLiteral("Octave_lb_OctaveFourier"));

        horizontalLayout_2->addWidget(Octave_lb_OctaveFourier);

        Octave_dir_OctaveFourier = new QLineEdit(tab_octave);
        Octave_dir_OctaveFourier->setObjectName(QStringLiteral("Octave_dir_OctaveFourier"));
        Octave_dir_OctaveFourier->setMaximumSize(QSize(300, 16777215));
        Octave_dir_OctaveFourier->setReadOnly(true);

        horizontalLayout_2->addWidget(Octave_dir_OctaveFourier);

        Octave_btn_OctaveFourier = new QToolButton(tab_octave);
        Octave_btn_OctaveFourier->setObjectName(QStringLiteral("Octave_btn_OctaveFourier"));

        horizontalLayout_2->addWidget(Octave_btn_OctaveFourier);


        gridLayout_10->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Octave_lb_OctaveSpectrogram = new QLabel(tab_octave);
        Octave_lb_OctaveSpectrogram->setObjectName(QStringLiteral("Octave_lb_OctaveSpectrogram"));

        horizontalLayout_3->addWidget(Octave_lb_OctaveSpectrogram);

        Octave_dir_OctaveSpectrogram = new QLineEdit(tab_octave);
        Octave_dir_OctaveSpectrogram->setObjectName(QStringLiteral("Octave_dir_OctaveSpectrogram"));
        Octave_dir_OctaveSpectrogram->setMaximumSize(QSize(300, 16777215));
        Octave_dir_OctaveSpectrogram->setReadOnly(true);

        horizontalLayout_3->addWidget(Octave_dir_OctaveSpectrogram);

        Octave_btn_OctaveSpectrogram = new QToolButton(tab_octave);
        Octave_btn_OctaveSpectrogram->setObjectName(QStringLiteral("Octave_btn_OctaveSpectrogram"));

        horizontalLayout_3->addWidget(Octave_btn_OctaveSpectrogram);


        gridLayout_10->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Octave_lb_OctaveGabor = new QLabel(tab_octave);
        Octave_lb_OctaveGabor->setObjectName(QStringLiteral("Octave_lb_OctaveGabor"));

        horizontalLayout_4->addWidget(Octave_lb_OctaveGabor);

        Octave_dir_OctaveGabor = new QLineEdit(tab_octave);
        Octave_dir_OctaveGabor->setObjectName(QStringLiteral("Octave_dir_OctaveGabor"));
        Octave_dir_OctaveGabor->setMaximumSize(QSize(300, 16777215));
        Octave_dir_OctaveGabor->setReadOnly(true);

        horizontalLayout_4->addWidget(Octave_dir_OctaveGabor);

        Octave_btn_OctaveGabor = new QToolButton(tab_octave);
        Octave_btn_OctaveGabor->setObjectName(QStringLiteral("Octave_btn_OctaveGabor"));

        horizontalLayout_4->addWidget(Octave_btn_OctaveGabor);


        gridLayout_10->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Octave_lb_OctaveWavelets = new QLabel(tab_octave);
        Octave_lb_OctaveWavelets->setObjectName(QStringLiteral("Octave_lb_OctaveWavelets"));

        horizontalLayout_5->addWidget(Octave_lb_OctaveWavelets);

        Octave_dir_OctaveWavelets = new QLineEdit(tab_octave);
        Octave_dir_OctaveWavelets->setObjectName(QStringLiteral("Octave_dir_OctaveWavelets"));
        Octave_dir_OctaveWavelets->setMaximumSize(QSize(300, 16777215));
        Octave_dir_OctaveWavelets->setReadOnly(true);

        horizontalLayout_5->addWidget(Octave_dir_OctaveWavelets);

        Octave_btn_OctaveWavelets = new QToolButton(tab_octave);
        Octave_btn_OctaveWavelets->setObjectName(QStringLiteral("Octave_btn_OctaveWavelets"));

        horizontalLayout_5->addWidget(Octave_btn_OctaveWavelets);


        gridLayout_10->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_9->addItem(verticalSpacer_7);


        gridLayout_10->addLayout(horizontalLayout_9, 6, 0, 1, 1);

        tabConfig->addTab(tab_octave, QString());
        tab_bsededatos = new QWidget();
        tab_bsededatos->setObjectName(QStringLiteral("tab_bsededatos"));
        gridLayout = new QGridLayout(tab_bsededatos);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        bd_scripts = new QPlainTextEdit(tab_bsededatos);
        bd_scripts->setObjectName(QStringLiteral("bd_scripts"));
        bd_scripts->setAcceptDrops(false);
        bd_scripts->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        bd_scripts->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        bd_scripts->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        bd_scripts->setReadOnly(true);
        bd_scripts->setTextInteractionFlags(Qt::TextSelectableByMouse);
        bd_scripts->setCenterOnScroll(false);

        gridLayout->addWidget(bd_scripts, 0, 0, 1, 1);

        tabConfig->addTab(tab_bsededatos, QString());
        tab_spectrogram = new QWidget();
        tab_spectrogram->setObjectName(QStringLiteral("tab_spectrogram"));
        gridLayout_3 = new QGridLayout(tab_spectrogram);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        sgram_lin = new QCheckBox(tab_spectrogram);
        sgram_lin->setObjectName(QStringLiteral("sgram_lin"));
        sgram_lin->setChecked(true);

        gridLayout_2->addWidget(sgram_lin, 0, 0, 1, 1);

        sgram_wlen = new QCheckBox(tab_spectrogram);
        sgram_wlen->setObjectName(QStringLiteral("sgram_wlen"));
        sgram_wlen->setChecked(false);

        gridLayout_2->addWidget(sgram_wlen, 2, 0, 1, 1);

        sgram_wlen_value = new QSpinBox(tab_spectrogram);
        sgram_wlen_value->setObjectName(QStringLiteral("sgram_wlen_value"));
        sgram_wlen_value->setEnabled(false);
        sgram_wlen_value->setMaximum(50000);
        sgram_wlen_value->setSingleStep(10);
        sgram_wlen_value->setValue(100);

        gridLayout_2->addWidget(sgram_wlen_value, 2, 1, 1, 1);

        labelWlen = new QLabel(tab_spectrogram);
        labelWlen->setObjectName(QStringLiteral("labelWlen"));
        labelWlen->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/info.png")));
        labelWlen->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelWlen, 2, 2, 1, 1);

        sgram_tfr = new QCheckBox(tab_spectrogram);
        sgram_tfr->setObjectName(QStringLiteral("sgram_tfr"));
        sgram_tfr->setChecked(false);
        sgram_tfr->setTristate(false);

        gridLayout_2->addWidget(sgram_tfr, 1, 0, 1, 1);

        sgram_tfr_value = new QDoubleSpinBox(tab_spectrogram);
        sgram_tfr_value->setObjectName(QStringLiteral("sgram_tfr_value"));
        sgram_tfr_value->setEnabled(false);
        sgram_tfr_value->setMaximum(5);
        sgram_tfr_value->setSingleStep(0.1);
        sgram_tfr_value->setValue(1);

        gridLayout_2->addWidget(sgram_tfr_value, 1, 1, 1, 1);

        labelTfr = new QLabel(tab_spectrogram);
        labelTfr->setObjectName(QStringLiteral("labelTfr"));
        labelTfr->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/info.png")));
        labelTfr->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelTfr, 1, 2, 1, 1);

        labelLin = new QLabel(tab_spectrogram);
        labelLin->setObjectName(QStringLiteral("labelLin"));
        labelLin->setMaximumSize(QSize(16777215, 16777215));
        labelLin->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/info.png")));
        labelLin->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelLin, 0, 2, 1, 1);

        label_5 = new QLabel(tab_spectrogram);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        infoSpectrogram = new QTextEdit(tab_spectrogram);
        infoSpectrogram->setObjectName(QStringLiteral("infoSpectrogram"));

        gridLayout_2->addWidget(infoSpectrogram, 4, 0, 1, 3);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        tabConfig->addTab(tab_spectrogram, QString());
        tab_fourier = new QWidget();
        tab_fourier->setObjectName(QStringLiteral("tab_fourier"));
        gridLayout_4 = new QGridLayout(tab_fourier);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        Fourier_gb_Type = new QGroupBox(tab_fourier);
        Fourier_gb_Type->setObjectName(QStringLiteral("Fourier_gb_Type"));
        Fourier_gb_Type->setMaximumSize(QSize(16777215, 135));
        Fourier_gb_Type->setCheckable(true);
        gridLayout_6 = new QGridLayout(Fourier_gb_Type);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Fourier_rb_Impulse = new QRadioButton(Fourier_gb_Type);
        Fourier_rb_Impulse->setObjectName(QStringLiteral("Fourier_rb_Impulse"));
        Fourier_rb_Impulse->setChecked(true);

        verticalLayout_3->addWidget(Fourier_rb_Impulse);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_6->addLayout(verticalLayout_3);

        logoImpluse = new QLabel(Fourier_gb_Type);
        logoImpluse->setObjectName(QStringLiteral("logoImpluse"));
        logoImpluse->setMinimumSize(QSize(130, 100));
        logoImpluse->setMaximumSize(QSize(130, 100));
        logoImpluse->setAutoFillBackground(false);
        logoImpluse->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/iconoS_Pulso.png")));
        logoImpluse->setScaledContents(true);

        horizontalLayout_6->addWidget(logoImpluse);


        gridLayout_6->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Fourier_rb_Curve = new QRadioButton(Fourier_gb_Type);
        Fourier_rb_Curve->setObjectName(QStringLiteral("Fourier_rb_Curve"));

        verticalLayout_2->addWidget(Fourier_rb_Curve);

        Fourier_sp_Curvevalue = new QSpinBox(Fourier_gb_Type);
        Fourier_sp_Curvevalue->setObjectName(QStringLiteral("Fourier_sp_Curvevalue"));
        Fourier_sp_Curvevalue->setMaximumSize(QSize(100, 16777215));
        Fourier_sp_Curvevalue->setMaximum(100000000);
        Fourier_sp_Curvevalue->setSingleStep(10);
        Fourier_sp_Curvevalue->setValue(10);

        verticalLayout_2->addWidget(Fourier_sp_Curvevalue);

        Fourier_infoCurve = new QLabel(Fourier_gb_Type);
        Fourier_infoCurve->setObjectName(QStringLiteral("Fourier_infoCurve"));
        Fourier_infoCurve->setMaximumSize(QSize(16777215, 16777215));
        Fourier_infoCurve->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/info.png")));
        Fourier_infoCurve->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Fourier_infoCurve);


        horizontalLayout_7->addLayout(verticalLayout_2);

        logoCurve = new QLabel(Fourier_gb_Type);
        logoCurve->setObjectName(QStringLiteral("logoCurve"));
        logoCurve->setMinimumSize(QSize(130, 100));
        logoCurve->setMaximumSize(QSize(130, 100));
        logoCurve->setAutoFillBackground(false);
        logoCurve->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/iconoS_Analoga.png")));
        logoCurve->setScaledContents(true);

        horizontalLayout_7->addWidget(logoCurve);


        gridLayout_6->addLayout(horizontalLayout_7, 0, 1, 1, 1);


        gridLayout_4->addWidget(Fourier_gb_Type, 0, 0, 1, 1);

        Fourier_gb_Histogram = new QGroupBox(tab_fourier);
        Fourier_gb_Histogram->setObjectName(QStringLiteral("Fourier_gb_Histogram"));
        Fourier_gb_Histogram->setMaximumSize(QSize(16777215, 135));
        Fourier_gb_Histogram->setCheckable(true);
        Fourier_gb_Histogram->setChecked(false);
        gridLayout_5 = new QGridLayout(Fourier_gb_Histogram);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 0, 3, 1, 1);


        gridLayout_4->addWidget(Fourier_gb_Histogram, 1, 0, 1, 1);

        tabConfig->addTab(tab_fourier, QString());
        tab_tgabor = new QWidget();
        tab_tgabor->setObjectName(QStringLiteral("tab_tgabor"));
        gridLayout_9 = new QGridLayout(tab_tgabor);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_Modulation = new QLabel(tab_tgabor);
        label_Modulation->setObjectName(QStringLiteral("label_Modulation"));
        label_Modulation->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/info.png")));
        label_Modulation->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_Modulation, 3, 2, 1, 1);

        labelLengthTime = new QLabel(tab_tgabor);
        labelLengthTime->setObjectName(QStringLiteral("labelLengthTime"));
        labelLengthTime->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/info.png")));
        labelLengthTime->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelLengthTime, 2, 2, 1, 1);

        gabor_cB_numberOfMod = new QCheckBox(tab_tgabor);
        gabor_cB_numberOfMod->setObjectName(QStringLiteral("gabor_cB_numberOfMod"));

        gridLayout_8->addWidget(gabor_cB_numberOfMod, 3, 0, 1, 1);

        gabor_numberModulations_value = new QSpinBox(tab_tgabor);
        gabor_numberModulations_value->setObjectName(QStringLiteral("gabor_numberModulations_value"));
        gabor_numberModulations_value->setEnabled(false);
        gabor_numberModulations_value->setMaximum(5000);
        gabor_numberModulations_value->setSingleStep(1);
        gabor_numberModulations_value->setValue(101);

        gridLayout_8->addWidget(gabor_numberModulations_value, 3, 1, 1, 1);

        gabor_windowsString_value = new QLineEdit(tab_tgabor);
        gabor_windowsString_value->setObjectName(QStringLiteral("gabor_windowsString_value"));
        gabor_windowsString_value->setEnabled(false);
        gabor_windowsString_value->setPlaceholderText(QStringLiteral("Ej:  'hann' , 'gauss', etc"));

        gridLayout_8->addWidget(gabor_windowsString_value, 1, 1, 1, 1);

        label_infoGabor = new QLabel(tab_tgabor);
        label_infoGabor->setObjectName(QStringLiteral("label_infoGabor"));

        gridLayout_8->addWidget(label_infoGabor, 7, 0, 1, 1);

        labelWindowsG = new QLabel(tab_tgabor);
        labelWindowsG->setObjectName(QStringLiteral("labelWindowsG"));
        labelWindowsG->setMaximumSize(QSize(16777215, 16777215));
        labelWindowsG->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/info.png")));
        labelWindowsG->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelWindowsG, 1, 2, 1, 1);

        gabor_lengthTime_value = new QSpinBox(tab_tgabor);
        gabor_lengthTime_value->setObjectName(QStringLiteral("gabor_lengthTime_value"));
        gabor_lengthTime_value->setEnabled(false);
        gabor_lengthTime_value->setMaximum(5000);
        gabor_lengthTime_value->setValue(30);

        gridLayout_8->addWidget(gabor_lengthTime_value, 2, 1, 1, 1);

        gabor_cB_GaborWind = new QCheckBox(tab_tgabor);
        gabor_cB_GaborWind->setObjectName(QStringLiteral("gabor_cB_GaborWind"));

        gridLayout_8->addWidget(gabor_cB_GaborWind, 1, 0, 1, 1);

        gabor_cB_LenghTime = new QCheckBox(tab_tgabor);
        gabor_cB_LenghTime->setObjectName(QStringLiteral("gabor_cB_LenghTime"));

        gridLayout_8->addWidget(gabor_cB_LenghTime, 2, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_4, 4, 0, 3, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 5, 2, 3, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_5, 4, 1, 4, 1);

        infoGaborTransform = new QTextEdit(tab_tgabor);
        infoGaborTransform->setObjectName(QStringLiteral("infoGaborTransform"));

        gridLayout_8->addWidget(infoGaborTransform, 8, 0, 1, 3);

        gabor_cB_typeOfTransform = new QCheckBox(tab_tgabor);
        gabor_cB_typeOfTransform->setObjectName(QStringLiteral("gabor_cB_typeOfTransform"));
        gabor_cB_typeOfTransform->setChecked(true);

        gridLayout_8->addWidget(gabor_cB_typeOfTransform, 0, 0, 1, 2);

        label_dgtGaborReal = new QLabel(tab_tgabor);
        label_dgtGaborReal->setObjectName(QStringLiteral("label_dgtGaborReal"));
        label_dgtGaborReal->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/info.png")));

        gridLayout_8->addWidget(label_dgtGaborReal, 0, 2, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);

        tabConfig->addTab(tab_tgabor, QString());
        tab_twavelets = new QWidget();
        tab_twavelets->setObjectName(QStringLiteral("tab_twavelets"));
        tabConfig->addTab(tab_twavelets, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_24 = new QGridLayout(tab);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        gbMovingRMS = new QGroupBox(tab);
        gbMovingRMS->setObjectName(QStringLiteral("gbMovingRMS"));
        gridLayout_12 = new QGridLayout(gbMovingRMS);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(gbMovingRMS);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        RMS_overlap = new QDoubleSpinBox(gbMovingRMS);
        RMS_overlap->setObjectName(QStringLiteral("RMS_overlap"));
        RMS_overlap->setMinimumSize(QSize(140, 0));
        RMS_overlap->setMinimum(0);
        RMS_overlap->setMaximum(120);
        RMS_overlap->setSingleStep(0.1);
        RMS_overlap->setValue(0.5);

        horizontalLayout_10->addWidget(RMS_overlap);

        label_4 = new QLabel(gbMovingRMS);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_10->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_10);


        gridLayout_12->addLayout(verticalLayout, 0, 3, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(gbMovingRMS);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        RMS_Length = new QDoubleSpinBox(gbMovingRMS);
        RMS_Length->setObjectName(QStringLiteral("RMS_Length"));
        RMS_Length->setMinimumSize(QSize(140, 0));
        RMS_Length->setMaximum(120);
        RMS_Length->setValue(1);

        horizontalLayout_12->addWidget(RMS_Length);

        label_2 = new QLabel(gbMovingRMS);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_12->addWidget(label_2);


        verticalLayout_4->addLayout(horizontalLayout_12);


        gridLayout_12->addLayout(verticalLayout_4, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_4, 0, 0, 1, 1);


        gridLayout_24->addWidget(gbMovingRMS, 0, 0, 1, 2);

        gbMovingRMS_3 = new QGroupBox(tab);
        gbMovingRMS_3->setObjectName(QStringLiteral("gbMovingRMS_3"));
        gridLayout_23 = new QGridLayout(gbMovingRMS_3);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_15 = new QLabel(gbMovingRMS_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_11->addWidget(label_15);

        comboTipo_MeanFreq = new QComboBox(gbMovingRMS_3);
        comboTipo_MeanFreq->setObjectName(QStringLiteral("comboTipo_MeanFreq"));

        verticalLayout_11->addWidget(comboTipo_MeanFreq);


        gridLayout_23->addLayout(verticalLayout_11, 0, 5, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_13 = new QLabel(gbMovingRMS_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_10->addWidget(label_13);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        MeanFreq_Length = new QDoubleSpinBox(gbMovingRMS_3);
        MeanFreq_Length->setObjectName(QStringLiteral("MeanFreq_Length"));
        MeanFreq_Length->setMinimumSize(QSize(140, 0));
        MeanFreq_Length->setMinimum(1);
        MeanFreq_Length->setValue(1);

        horizontalLayout_25->addWidget(MeanFreq_Length);

        label_14 = new QLabel(gbMovingRMS_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_25->addWidget(label_14);


        verticalLayout_10->addLayout(horizontalLayout_25);


        gridLayout_23->addLayout(verticalLayout_10, 0, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_10, 0, 2, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_11 = new QLabel(gbMovingRMS_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_9->addWidget(label_11);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        MeanFreq_overlap = new QDoubleSpinBox(gbMovingRMS_3);
        MeanFreq_overlap->setObjectName(QStringLiteral("MeanFreq_overlap"));
        MeanFreq_overlap->setMinimumSize(QSize(140, 0));
        MeanFreq_overlap->setValue(0.5);

        horizontalLayout_24->addWidget(MeanFreq_overlap);

        label_12 = new QLabel(gbMovingRMS_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_24->addWidget(label_12);


        verticalLayout_9->addLayout(horizontalLayout_24);


        gridLayout_23->addLayout(verticalLayout_9, 0, 3, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_11, 0, 4, 1, 1);


        gridLayout_24->addWidget(gbMovingRMS_3, 1, 0, 1, 2);

        verticalSpacer_15 = new QSpacerItem(20, 142, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_24->addItem(verticalSpacer_15, 2, 0, 1, 1);

        verticalSpacer_16 = new QSpacerItem(20, 142, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_24->addItem(verticalSpacer_16, 2, 1, 1, 1);

        tabConfig->addTab(tab, QString());

        gridLayout_7->addWidget(tabConfig, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_7, 0, 0, 1, 1);

        appSettings->setWidget(dockWidgetContents);

        retranslateUi(appSettings);
        QObject::connect(btnAceptar, SIGNAL(clicked()), appSettings, SLOT(close()));

        tabConfig->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(appSettings);
    } // setupUi

    void retranslateUi(QDockWidget *appSettings)
    {
        appSettings->setWindowTitle(QApplication::translate("appSettings", "Configuraciones", 0));
        btnAceptar->setText(QApplication::translate("appSettings", "Aceptar", 0));
        Octave_lb_OctavePath->setText(QApplication::translate("appSettings", "Directorio Octave (bin)", 0));
        OctavePath->setText(QApplication::translate("appSettings", "C:/Octave/Octave-4.0.0/bin", 0));
        btn_OctavePath->setText(QApplication::translate("appSettings", "...", 0));
        Octave_lb_menuOctave->setText(QApplication::translate("appSettings", "menuOctave.m", 0));
        Octave_dir_menuOctave->setText(QApplication::translate("appSettings", "../scripts/MenuOctave.m", 0));
        Octave_btn_menuOctave->setText(QApplication::translate("appSettings", "...", 0));
        Octave_lb_OctaveFourier->setText(QApplication::translate("appSettings", "OctaveFourier.m", 0));
        Octave_dir_OctaveFourier->setText(QApplication::translate("appSettings", "../scripts/OctaveFourier.m", 0));
        Octave_btn_OctaveFourier->setText(QApplication::translate("appSettings", "...", 0));
        Octave_lb_OctaveSpectrogram->setText(QApplication::translate("appSettings", "OctaveSpectrogram.m", 0));
        Octave_dir_OctaveSpectrogram->setText(QApplication::translate("appSettings", "../scripts/OctaveSpectrogram.m", 0));
        Octave_btn_OctaveSpectrogram->setText(QApplication::translate("appSettings", "...", 0));
        Octave_lb_OctaveGabor->setText(QApplication::translate("appSettings", "OctaveGabor.m", 0));
        Octave_dir_OctaveGabor->setText(QApplication::translate("appSettings", "../scripts/OctaveGabor.m", 0));
        Octave_btn_OctaveGabor->setText(QApplication::translate("appSettings", "...", 0));
        Octave_lb_OctaveWavelets->setText(QApplication::translate("appSettings", "OctaveWavelets.m", 0));
        Octave_dir_OctaveWavelets->setText(QApplication::translate("appSettings", "../scripts/OctaveWavelets.m", 0));
        Octave_dir_OctaveWavelets->setPlaceholderText(QString());
        Octave_btn_OctaveWavelets->setText(QApplication::translate("appSettings", "...", 0));
        tabConfig->setTabText(tabConfig->indexOf(tab_octave), QApplication::translate("appSettings", "Octave", 0));
        bd_scripts->setDocumentTitle(QString());
        bd_scripts->setPlainText(QString());
        tabConfig->setTabText(tabConfig->indexOf(tab_bsededatos), QApplication::translate("appSettings", "Base de datos", 0));
        sgram_lin->setText(QApplication::translate("appSettings", "Show the energy of the coefficients", 0));
        sgram_wlen->setText(QApplication::translate("appSettings", "Window length (ms)", 0));
#ifndef QT_NO_TOOLTIP
        labelWlen->setToolTip(QApplication::translate("appSettings", "<html><head/><body><p><span style=\" font-family:'Times New Roman'; font-size:medium; color:#000000;\">Window length. Specifies the length of the window measured in ms.\302\240</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        labelWlen->setText(QString());
        sgram_tfr->setText(QApplication::translate("appSettings", "Ratio of time-frequency resolution", 0));
#ifndef QT_NO_TOOLTIP
        labelTfr->setToolTip(QApplication::translate("appSettings", "<html><head/><body><p>Set the ratio of frequency resolution to time resolution. A value <span style=\" color:#ff0000;\">v=1</span> is the default. Setting <span style=\" color:#ff0000;\">v&gt;1</span> will give better frequency resolution at the expense of a worse time resolution. A value of <span style=\" color:#ff0000;\">0&lt;v&lt;1</span> will do the opposite</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        labelTfr->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelLin->setToolTip(QApplication::translate("appSettings", "<html><head/><body><p><span style=\" font-family:'Times New Roman'; font-size:medium; color:#000000;\">Show the energy of the coefficients on a linear scale.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        labelLin->setText(QString());
        label_5->setText(QApplication::translate("appSettings", "Informaci\303\263n:", 0));
        tabConfig->setTabText(tabConfig->indexOf(tab_spectrogram), QApplication::translate("appSettings", "Spectrogram", 0));
        Fourier_gb_Type->setTitle(QApplication::translate("appSettings", "Fourier:", 0));
        Fourier_rb_Impulse->setText(QApplication::translate("appSettings", "Impulso", 0));
        logoImpluse->setText(QString());
        Fourier_rb_Curve->setText(QApplication::translate("appSettings", "Curva", 0));
#ifndef QT_NO_TOOLTIP
        Fourier_infoCurve->setToolTip(QApplication::translate("appSettings", "<html><head/><body><p>\303\211ste valor indica cuantos puntos son considerados para el calculo de la curva promedio.</p><p>- No se puede sobrepasar el tama\303\261o maximo de la se\303\261al.</p><p>- Si este valor es muy grande se tomar\303\241 como referencia el valor &quot;size(signal)&quot; para todos los calculos necesarios.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        Fourier_infoCurve->setText(QString());
        logoCurve->setText(QString());
        Fourier_gb_Histogram->setTitle(QApplication::translate("appSettings", "Histograma:", 0));
        tabConfig->setTabText(tabConfig->indexOf(tab_fourier), QApplication::translate("appSettings", "Fourier / Histograma", 0));
#ifndef QT_NO_TOOLTIP
        label_Modulation->setToolTip(QApplication::translate("appSettings", "<html><head/><body><p>El valor &quot;<span style=\" color:#ff0000;\">M</span>&quot; de modulaciones afectar\303\241 el tama\303\261o de la salida y la resolucion de los calculos realizados.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_Modulation->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelLengthTime->setToolTip(QApplication::translate("appSettings", "<html><head/><body><p>El valor por defecto es &quot;<span style=\" color:#ff0000;\">a=30</span><span style=\" color:#000000;\">&quot; pero puede ser cambiado en cualquier momento.</span></p><p><span style=\" color:#000000;\">La resolucion de la salida y de los calculos realizados depender\303\241n directamente de \303\251ste valor, por favor tenga en cuenta eso antes de modificarlo.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        labelLengthTime->setText(QString());
        gabor_cB_numberOfMod->setText(QApplication::translate("appSettings", "Number of modulations (M)", 0));
#ifndef QT_NO_WHATSTHIS
        gabor_windowsString_value->setWhatsThis(QApplication::translate("appSettings", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_infoGabor->setText(QApplication::translate("appSettings", "Informaci\303\263n:", 0));
#ifndef QT_NO_TOOLTIP
        labelWindowsG->setToolTip(QApplication::translate("appSettings", "<html><head/><body><p>Si no se especifica una ventana se usar\303\241 por defecto el tipo &quot;gauss&quot;.</p><p>Para mayor informacion sobre el tipo de ventanas disponibles revise &quot;<span style=\" color:#ff0000;\">GABWIN</span>&quot; en la documentacion.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        labelWindowsG->setText(QString());
        gabor_cB_GaborWind->setText(QApplication::translate("appSettings", "String for Window function (g)", 0));
        gabor_cB_LenghTime->setText(QApplication::translate("appSettings", "Length of time shift (a)", 0));
        infoGaborTransform->setHtml(QApplication::translate("appSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">Input parameters:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#0000ff;\">f</span><span style=\" color:#0000ff;\">	Input data</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#0000ff;\">g</span><span style=\" color:#0000ff;\">	Window function.</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#0000ff;\">a</span><span style=\" color:#0000ff;\">	Length of time shift.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#0000ff;\">M</span><span style=\" color:#0000ff;\">	Number of modulations.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">Output parameters:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000"
                        "0ff;\">c</span><span style=\" color:#0000ff;\">	M\342\210\227N array of coefficients.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">Description</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">dgtreal(f,g,a,M)</span><span style=\" color:#0000ff;\"> computes the Gabor coefficients of the real-valued input signal &quot;</span><span style=\" color:#ff0000;\">f</span><span style=\" color:#0000ff;\">&quot; with respect to the real-valued windows &quot;</span><span style=\" color:#ff0000;\">g</span><span style=\" color:#0000ff;\">&quot; and parameters &quot;</span><span style=\" color:#ff00"
                        "00;\">a&quot;</span><span style=\" color:#0000ff;\"> and &quot;</span><span style=\" color:#ff0000;\">M</span><span style=\" color:#0000ff;\">&quot;</span></p></body></html>", 0));
        gabor_cB_typeOfTransform->setText(QApplication::translate("appSettings", "dgtreal (f , g, a, M);", 0));
#ifndef QT_NO_TOOLTIP
        label_dgtGaborReal->setToolTip(QApplication::translate("appSettings", "<html><head/><body><p>Por defecto se usa <span style=\" color:#ff0000;\">DGT(..)</span><span style=\" color:#000000;\">,</span><span style=\" color:#ff0000;\"/>sin embargo si se marca esta casilla se realizar\303\241 la <span style=\" color:#ff0000;\">DGTREAL(...) </span><span style=\" color:#000000;\">de los vaores de la se\303\261al actual.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_dgtGaborReal->setText(QString());
        tabConfig->setTabText(tabConfig->indexOf(tab_tgabor), QApplication::translate("appSettings", "Gabor Transform", 0));
        tabConfig->setTabText(tabConfig->indexOf(tab_twavelets), QApplication::translate("appSettings", "Wavelet Transform", 0));
        gbMovingRMS->setTitle(QApplication::translate("appSettings", "Moving RMS:", 0));
        label_3->setText(QApplication::translate("appSettings", "Window Overlap:", 0));
        label_4->setText(QApplication::translate("appSettings", "(s)", 0));
        label->setText(QApplication::translate("appSettings", "Window Length:", 0));
        label_2->setText(QApplication::translate("appSettings", "(s)", 0));
        gbMovingRMS_3->setTitle(QApplication::translate("appSettings", "Mean Frequency:", 0));
        label_15->setText(QApplication::translate("appSettings", "Tipo de Grafico:", 0));
        comboTipo_MeanFreq->clear();
        comboTipo_MeanFreq->insertItems(0, QStringList()
         << QApplication::translate("appSettings", "curva", 0)
         << QApplication::translate("appSettings", "colormap", 0)
        );
        label_13->setText(QApplication::translate("appSettings", "Window Length:", 0));
        label_14->setText(QApplication::translate("appSettings", "(s)", 0));
        label_11->setText(QApplication::translate("appSettings", "Window Overlap:", 0));
        label_12->setText(QApplication::translate("appSettings", "(s)", 0));
        tabConfig->setTabText(tabConfig->indexOf(tab), QApplication::translate("appSettings", "Otros", 0));
    } // retranslateUi

};

namespace Ui {
    class appSettings: public Ui_appSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPSETTINGS_H
