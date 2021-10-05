/********************************************************************************
** Form generated from reading UI file 'winusers.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINUSERS_H
#define UI_WINUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_winUsers
{
public:
    QGridLayout *gridLayout_37;
    QTabWidget *tabUsuarios;
    QWidget *tab_Usuarios;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QTableView *tableView_2;
    QPushButton *BtnEditar;
    QLabel *label;
    QPushButton *btnIniciarSesion;
    QLineEdit *tabAgregar_Search;
    QPushButton *btn_ActualizarTabUs;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_23;
    QPushButton *BtnEliminar;
    QWidget *tab_Agregar;
    QGridLayout *gridLayout_26;
    QLabel *label_25;
    QPushButton *botonOKAgregar;
    QFrame *line;
    QGroupBox *tabAgregar_gBox_Estatura;
    QGridLayout *gridLayout_25;
    QLineEdit *tabAgregar_Estatura;
    QLabel *label_28;
    QGroupBox *tabAgregar_gBox_Peso;
    QGridLayout *gridLayout_24;
    QLineEdit *tabAgregar_Peso;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *tabAgregar_InfoExtra;
    QGridLayout *gridLayout_23;
    QGridLayout *gridLayout_7;
    QLabel *label_24;
    QLabel *label_4;
    QLineEdit *tabAgregar_Nombres;
    QGridLayout *gridLayout_9;
    QLabel *label_26;
    QLabel *label_6;
    QDateEdit *tabAgregar_FechaNac;
    QGridLayout *gridLayout_10;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *tabAgregar_Edad;
    QLabel *label_9;
    QGridLayout *gridLayout_8;
    QLabel *label_31;
    QLabel *label_5;
    QLineEdit *tabAgregar_Apellidos;
    QGridLayout *gridLayout_11;
    QLabel *label_43;
    QLabel *label_11;
    QLabel *tabAgregar_FechaIngreso;
    QGridLayout *gridLayout_3;
    QLabel *label_33;
    QLabel *label_12;
    QLineEdit *tabAgregar_Address;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLineEdit *tabAgregar_Rut;
    QLabel *label_30;
    QGroupBox *tabAgregar_gB_Genero;
    QHBoxLayout *horizontalLayout;
    QRadioButton *tabAgregar_Male;
    QRadioButton *tabAgregar_Female;
    QGridLayout *gridLayout_22;
    QLabel *label_67;
    QLabel *label_68;
    QComboBox *tabAgregar_nivelActividad;
    QWidget *tab_Editar;
    QGridLayout *gridLayout_28;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_29;
    QLabel *label_70;
    QLabel *label_69;
    QLineEdit *tabEditar_Rut;
    QGridLayout *gridLayout_33;
    QLineEdit *tabEditar_Nombres;
    QLabel *label_78;
    QLabel *label_79;
    QGridLayout *gridLayout_30;
    QLabel *label_72;
    QLabel *label_73;
    QLineEdit *tabEditar_Apellidos;
    QGridLayout *gridLayout_31;
    QLabel *label_74;
    QLabel *label_75;
    QDateEdit *tabEditar_FechaNac;
    QGridLayout *gridLayout_34;
    QLabel *label_82;
    QLabel *label_80;
    QLabel *tabEditar_Edad;
    QLabel *label_81;
    QGroupBox *tabEditar_gb_Genero;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *tabEditar_Male;
    QRadioButton *tabEditar_Female;
    QGridLayout *gridLayout_36;
    QLabel *tabEditar_FechaIngreso;
    QLabel *label_85;
    QLabel *label_86;
    QGridLayout *gridLayout_35;
    QLabel *label_84;
    QLabel *label_83;
    QComboBox *tabEditar_cBox_nivelActividad;
    QGridLayout *gridLayout_32;
    QLabel *label_77;
    QLineEdit *tabEditar_Address;
    QLabel *label_76;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *tabEditar_gBox_Peso;
    QGridLayout *gridLayout_6;
    QLineEdit *tabEditar_Peso;
    QLabel *label_87;
    QGroupBox *tabEditar_gBox_Estatura;
    QGridLayout *gridLayout_27;
    QLineEdit *tabEditar_Estatura;
    QLabel *label_32;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_29;
    QPlainTextEdit *tabEditar_InfoExtra;
    QPushButton *btnConfirmarCambios;
    QPushButton *BtnSalir;

    void setupUi(QDialog *winUsers)
    {
        if (winUsers->objectName().isEmpty())
            winUsers->setObjectName(QStringLiteral("winUsers"));
        winUsers->resize(688, 503);
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/Contact.ico"), QSize(), QIcon::Normal, QIcon::Off);
        winUsers->setWindowIcon(icon);
        gridLayout_37 = new QGridLayout(winUsers);
        gridLayout_37->setObjectName(QStringLiteral("gridLayout_37"));
        tabUsuarios = new QTabWidget(winUsers);
        tabUsuarios->setObjectName(QStringLiteral("tabUsuarios"));
        tabUsuarios->setEnabled(true);
        QFont font;
        font.setPointSize(10);
        tabUsuarios->setFont(font);
        tabUsuarios->setIconSize(QSize(20, 20));
        tab_Usuarios = new QWidget();
        tab_Usuarios->setObjectName(QStringLiteral("tab_Usuarios"));
        gridLayout = new QGridLayout(tab_Usuarios);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableView_2 = new QTableView(tab_Usuarios);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout_2->addWidget(tableView_2, 1, 0, 1, 8);

        BtnEditar = new QPushButton(tab_Usuarios);
        BtnEditar->setObjectName(QStringLiteral("BtnEditar"));
        BtnEditar->setStyleSheet(QLatin1String("QPushButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 5px 5px 5px 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"    color: #000000;\n"
"	border: 2px solid rgb(15, 103, 0);\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(5, 0, 9, 118));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: qlineargradient(spread:pad, x1:0.489, y1:1, x2:0.494, y2:0.0113636, stop:0 rgba(0, 117, 0, 255), stop:1 rgba(0, 255, 0, 255));	  \n"
"  text-decoration: none;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/Writing.ico"), QSize(), QIcon::Normal, QIcon::Off);
        BtnEditar->setIcon(icon1);
        BtnEditar->setIconSize(QSize(20, 20));

        gridLayout_2->addWidget(BtnEditar, 2, 6, 1, 1);

        label = new QLabel(tab_Usuarios);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(20, 20));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/Search.ico")));
        label->setScaledContents(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        btnIniciarSesion = new QPushButton(tab_Usuarios);
        btnIniciarSesion->setObjectName(QStringLiteral("btnIniciarSesion"));
        btnIniciarSesion->setStyleSheet(QLatin1String("QPushButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 5px 5px 5px 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"    color: #000000;\n"
"	border: 2px solid rgb(15, 103, 0);\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(5, 0, 9, 118));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: qlineargradient(spread:pad, x1:0.489, y1:1, x2:0.494, y2:0.0113636, stop:0 rgba(0, 117, 0, 255), stop:1 rgba(0, 255, 0, 255));	  \n"
"  text-decoration: none;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagenes/Power.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnIniciarSesion->setIcon(icon2);
        btnIniciarSesion->setIconSize(QSize(20, 20));

        gridLayout_2->addWidget(btnIniciarSesion, 2, 5, 1, 1);

        tabAgregar_Search = new QLineEdit(tab_Usuarios);
        tabAgregar_Search->setObjectName(QStringLiteral("tabAgregar_Search"));
        tabAgregar_Search->setClearButtonEnabled(false);

        gridLayout_2->addWidget(tabAgregar_Search, 0, 4, 1, 4);

        btn_ActualizarTabUs = new QPushButton(tab_Usuarios);
        btn_ActualizarTabUs->setObjectName(QStringLiteral("btn_ActualizarTabUs"));
        btn_ActualizarTabUs->setStyleSheet(QLatin1String("QPushButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 5px 5px 5px 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"    color: #000000;\n"
"	border: 2px solid rgb(15, 103, 0);\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(5, 0, 9, 118));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: qlineargradient(spread:pad, x1:0.489, y1:1, x2:0.494, y2:0.0113636, stop:0 rgba(0, 117, 0, 255), stop:1 rgba(0, 255, 0, 255));	  \n"
"  text-decoration: none;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imagenes/026.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_ActualizarTabUs->setIcon(icon3);
        btn_ActualizarTabUs->setIconSize(QSize(20, 20));

        gridLayout_2->addWidget(btn_ActualizarTabUs, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 4, 1, 1);

        label_23 = new QLabel(tab_Usuarios);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setLayoutDirection(Qt::LeftToRight);
        label_23->setAutoFillBackground(false);
        label_23->setTextFormat(Qt::AutoText);
        label_23->setScaledContents(false);
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_23, 0, 1, 1, 3);

        BtnEliminar = new QPushButton(tab_Usuarios);
        BtnEliminar->setObjectName(QStringLiteral("BtnEliminar"));
        BtnEliminar->setStyleSheet(QLatin1String("QPushButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 5px 5px 5px 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"    color: #000000;\n"
"	border: 2px solid rgb(15, 103, 0);\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(5, 0, 9, 118));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: qlineargradient(spread:pad, x1:0.489, y1:1, x2:0.494, y2:0.0113636, stop:0 rgba(0, 117, 0, 255), stop:1 rgba(0, 255, 0, 255));	  \n"
"  text-decoration: none;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/imagenes/Xion.ico"), QSize(), QIcon::Normal, QIcon::Off);
        BtnEliminar->setIcon(icon4);
        BtnEliminar->setIconSize(QSize(20, 20));

        gridLayout_2->addWidget(BtnEliminar, 2, 7, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        tabUsuarios->addTab(tab_Usuarios, icon, QString());
        tab_Agregar = new QWidget();
        tab_Agregar->setObjectName(QStringLiteral("tab_Agregar"));
        gridLayout_26 = new QGridLayout(tab_Agregar);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        label_25 = new QLabel(tab_Agregar);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_26->addWidget(label_25, 3, 3, 1, 1);

        botonOKAgregar = new QPushButton(tab_Agregar);
        botonOKAgregar->setObjectName(QStringLiteral("botonOKAgregar"));
        botonOKAgregar->setMinimumSize(QSize(100, 30));
        botonOKAgregar->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        botonOKAgregar->setFont(font1);
        botonOKAgregar->setStyleSheet(QLatin1String("QPushButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 8px 20px 10px 20px;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"    color: #000000;\n"
"	border: 2px solid rgb(15, 103, 0);\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(5, 0, 9, 118));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: qlineargradient(spread:pad, x1:0.489, y1:1, x2:0.494, y2:0.0113636, stop:0 rgba(0, 117, 0, 255), stop:1 rgba(0, 255, 0, 255));	  \n"
"  text-decoration: none;\n"
"}"));

        gridLayout_26->addWidget(botonOKAgregar, 5, 3, 1, 1);

        line = new QFrame(tab_Agregar);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_26->addWidget(line, 0, 1, 6, 3);

        tabAgregar_gBox_Estatura = new QGroupBox(tab_Agregar);
        tabAgregar_gBox_Estatura->setObjectName(QStringLiteral("tabAgregar_gBox_Estatura"));
        gridLayout_25 = new QGridLayout(tabAgregar_gBox_Estatura);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        tabAgregar_Estatura = new QLineEdit(tabAgregar_gBox_Estatura);
        tabAgregar_Estatura->setObjectName(QStringLiteral("tabAgregar_Estatura"));
        tabAgregar_Estatura->setMaximumSize(QSize(200, 16777215));
        tabAgregar_Estatura->setInputMethodHints(Qt::ImhDigitsOnly);
        tabAgregar_Estatura->setMaxLength(3);

        gridLayout_25->addWidget(tabAgregar_Estatura, 0, 0, 1, 1);

        label_28 = new QLabel(tabAgregar_gBox_Estatura);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMinimumSize(QSize(25, 0));
        label_28->setMaximumSize(QSize(30, 16777215));

        gridLayout_25->addWidget(label_28, 0, 1, 1, 1);


        gridLayout_26->addWidget(tabAgregar_gBox_Estatura, 2, 2, 1, 2);

        tabAgregar_gBox_Peso = new QGroupBox(tab_Agregar);
        tabAgregar_gBox_Peso->setObjectName(QStringLiteral("tabAgregar_gBox_Peso"));
        tabAgregar_gBox_Peso->setFlat(false);
        gridLayout_24 = new QGridLayout(tabAgregar_gBox_Peso);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        tabAgregar_Peso = new QLineEdit(tabAgregar_gBox_Peso);
        tabAgregar_Peso->setObjectName(QStringLiteral("tabAgregar_Peso"));
        tabAgregar_Peso->setMaximumSize(QSize(200, 16777215));
        tabAgregar_Peso->setInputMethodHints(Qt::ImhDigitsOnly);
        tabAgregar_Peso->setMaxLength(3);

        gridLayout_24->addWidget(tabAgregar_Peso, 0, 0, 1, 1);

        label_27 = new QLabel(tabAgregar_gBox_Peso);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMinimumSize(QSize(25, 0));
        label_27->setMaximumSize(QSize(30, 16777215));

        gridLayout_24->addWidget(label_27, 0, 1, 1, 1);


        gridLayout_26->addWidget(tabAgregar_gBox_Peso, 1, 2, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tabAgregar_InfoExtra = new QPlainTextEdit(tab_Agregar);
        tabAgregar_InfoExtra->setObjectName(QStringLiteral("tabAgregar_InfoExtra"));

        horizontalLayout_3->addWidget(tabAgregar_InfoExtra);


        gridLayout_26->addLayout(horizontalLayout_3, 4, 3, 1, 1);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_24 = new QLabel(tab_Agregar);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMinimumSize(QSize(150, 0));
        label_24->setMaximumSize(QSize(150, 16777215));
        label_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_24, 0, 0, 1, 1);

        label_4 = new QLabel(tab_Agregar);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(20, 0));
        label_4->setMaximumSize(QSize(20, 16777215));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_4, 0, 1, 1, 1);

        tabAgregar_Nombres = new QLineEdit(tab_Agregar);
        tabAgregar_Nombres->setObjectName(QStringLiteral("tabAgregar_Nombres"));
        tabAgregar_Nombres->setMaximumSize(QSize(200, 16777215));
        tabAgregar_Nombres->setMaxLength(20);

        gridLayout_7->addWidget(tabAgregar_Nombres, 0, 2, 1, 1);


        gridLayout_23->addLayout(gridLayout_7, 1, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_26 = new QLabel(tab_Agregar);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMinimumSize(QSize(150, 0));
        label_26->setMaximumSize(QSize(150, 16777215));
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_26, 0, 0, 1, 1);

        label_6 = new QLabel(tab_Agregar);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(10, 0));
        label_6->setMaximumSize(QSize(20, 16777215));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_6, 0, 1, 1, 1);

        tabAgregar_FechaNac = new QDateEdit(tab_Agregar);
        tabAgregar_FechaNac->setObjectName(QStringLiteral("tabAgregar_FechaNac"));
        tabAgregar_FechaNac->setMaximumSize(QSize(200, 16777215));
        tabAgregar_FechaNac->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout_9->addWidget(tabAgregar_FechaNac, 0, 2, 1, 1);


        gridLayout_23->addLayout(gridLayout_9, 3, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_7 = new QLabel(tab_Agregar);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(150, 0));
        label_7->setMaximumSize(QSize(150, 16777215));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(tab_Agregar);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(20, 0));
        label_8->setMaximumSize(QSize(20, 16777215));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_8, 0, 1, 1, 1);

        tabAgregar_Edad = new QLabel(tab_Agregar);
        tabAgregar_Edad->setObjectName(QStringLiteral("tabAgregar_Edad"));

        gridLayout_10->addWidget(tabAgregar_Edad, 0, 2, 1, 1);

        label_9 = new QLabel(tab_Agregar);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_10->addWidget(label_9, 0, 3, 1, 1);


        gridLayout_23->addLayout(gridLayout_10, 4, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_31 = new QLabel(tab_Agregar);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setMinimumSize(QSize(150, 0));
        label_31->setMaximumSize(QSize(150, 16777215));
        label_31->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_31, 0, 0, 1, 1);

        label_5 = new QLabel(tab_Agregar);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(20, 0));
        label_5->setMaximumSize(QSize(20, 16777215));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_5, 0, 1, 1, 1);

        tabAgregar_Apellidos = new QLineEdit(tab_Agregar);
        tabAgregar_Apellidos->setObjectName(QStringLiteral("tabAgregar_Apellidos"));
        tabAgregar_Apellidos->setMaximumSize(QSize(200, 16777215));
        tabAgregar_Apellidos->setMaxLength(20);

        gridLayout_8->addWidget(tabAgregar_Apellidos, 0, 2, 1, 1);


        gridLayout_23->addLayout(gridLayout_8, 2, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_43 = new QLabel(tab_Agregar);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setMinimumSize(QSize(150, 0));
        label_43->setMaximumSize(QSize(150, 16777215));
        label_43->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_11->addWidget(label_43, 0, 0, 1, 1);

        label_11 = new QLabel(tab_Agregar);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(20, 0));
        label_11->setMaximumSize(QSize(20, 16777215));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_11, 0, 1, 1, 1);

        tabAgregar_FechaIngreso = new QLabel(tab_Agregar);
        tabAgregar_FechaIngreso->setObjectName(QStringLiteral("tabAgregar_FechaIngreso"));
        tabAgregar_FechaIngreso->setMaximumSize(QSize(200, 16777215));

        gridLayout_11->addWidget(tabAgregar_FechaIngreso, 0, 2, 1, 1);


        gridLayout_23->addLayout(gridLayout_11, 6, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_33 = new QLabel(tab_Agregar);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_3->addWidget(label_33, 0, 0, 1, 1);

        label_12 = new QLabel(tab_Agregar);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(20, 0));
        label_12->setMaximumSize(QSize(20, 16777215));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_12, 0, 1, 1, 1);

        tabAgregar_Address = new QLineEdit(tab_Agregar);
        tabAgregar_Address->setObjectName(QStringLiteral("tabAgregar_Address"));
        tabAgregar_Address->setMaxLength(45);

        gridLayout_3->addWidget(tabAgregar_Address, 0, 2, 1, 1);


        gridLayout_23->addLayout(gridLayout_3, 8, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_2 = new QLabel(tab_Agregar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(20, 0));
        label_2->setMaximumSize(QSize(20, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 0, 1, 1, 1);

        tabAgregar_Rut = new QLineEdit(tab_Agregar);
        tabAgregar_Rut->setObjectName(QStringLiteral("tabAgregar_Rut"));
        tabAgregar_Rut->setEnabled(true);
        tabAgregar_Rut->setMinimumSize(QSize(120, 0));
        tabAgregar_Rut->setMaximumSize(QSize(200, 16777215));
        tabAgregar_Rut->setMaxLength(12);

        gridLayout_4->addWidget(tabAgregar_Rut, 0, 2, 1, 1);

        label_30 = new QLabel(tab_Agregar);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMinimumSize(QSize(150, 0));
        label_30->setMaximumSize(QSize(150, 16777215));
        label_30->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_30, 0, 0, 1, 1);


        gridLayout_23->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabAgregar_gB_Genero = new QGroupBox(tab_Agregar);
        tabAgregar_gB_Genero->setObjectName(QStringLiteral("tabAgregar_gB_Genero"));
        tabAgregar_gB_Genero->setMinimumSize(QSize(0, 50));
        tabAgregar_gB_Genero->setMaximumSize(QSize(16777215, 50));
        QFont font2;
        font2.setPointSize(10);
        font2.setKerning(true);
        tabAgregar_gB_Genero->setFont(font2);
        tabAgregar_gB_Genero->setStyleSheet(QLatin1String("QGroupBox { \n"
"     border: 1px solid gray; \n"
"     border-radius: 2px; \n"
" }"));
        tabAgregar_gB_Genero->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tabAgregar_gB_Genero->setFlat(true);
        horizontalLayout = new QHBoxLayout(tabAgregar_gB_Genero);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabAgregar_Male = new QRadioButton(tabAgregar_gB_Genero);
        tabAgregar_Male->setObjectName(QStringLiteral("tabAgregar_Male"));
        tabAgregar_Male->setChecked(true);

        horizontalLayout->addWidget(tabAgregar_Male);

        tabAgregar_Female = new QRadioButton(tabAgregar_gB_Genero);
        tabAgregar_Female->setObjectName(QStringLiteral("tabAgregar_Female"));

        horizontalLayout->addWidget(tabAgregar_Female);


        gridLayout_23->addWidget(tabAgregar_gB_Genero, 5, 0, 1, 1);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        label_67 = new QLabel(tab_Agregar);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setMinimumSize(QSize(150, 0));
        label_67->setMaximumSize(QSize(150, 16777215));
        label_67->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_67, 0, 0, 1, 1);

        label_68 = new QLabel(tab_Agregar);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setMinimumSize(QSize(20, 0));
        label_68->setMaximumSize(QSize(20, 16777215));
        label_68->setAlignment(Qt::AlignCenter);

        gridLayout_22->addWidget(label_68, 0, 1, 1, 1);

        tabAgregar_nivelActividad = new QComboBox(tab_Agregar);
        tabAgregar_nivelActividad->setObjectName(QStringLiteral("tabAgregar_nivelActividad"));
        tabAgregar_nivelActividad->setMaximumSize(QSize(200, 16777215));

        gridLayout_22->addWidget(tabAgregar_nivelActividad, 0, 2, 1, 1);


        gridLayout_23->addLayout(gridLayout_22, 7, 0, 1, 1);


        gridLayout_26->addLayout(gridLayout_23, 0, 0, 6, 1);

        QIcon icon5;
        icon5.addFile(QStringLiteral(":/imagenes/3D-Design-Alt.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabUsuarios->addTab(tab_Agregar, icon5, QString());
        tab_Editar = new QWidget();
        tab_Editar->setObjectName(QStringLiteral("tab_Editar"));
        gridLayout_28 = new QGridLayout(tab_Editar);
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_29 = new QGridLayout();
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        label_70 = new QLabel(tab_Editar);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setMinimumSize(QSize(20, 0));
        label_70->setMaximumSize(QSize(20, 16777215));
        label_70->setAlignment(Qt::AlignCenter);

        gridLayout_29->addWidget(label_70, 0, 1, 1, 1);

        label_69 = new QLabel(tab_Editar);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setMinimumSize(QSize(150, 0));
        label_69->setMaximumSize(QSize(150, 16777215));
        label_69->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_29->addWidget(label_69, 0, 0, 1, 1);

        tabEditar_Rut = new QLineEdit(tab_Editar);
        tabEditar_Rut->setObjectName(QStringLiteral("tabEditar_Rut"));
        tabEditar_Rut->setEnabled(true);
        tabEditar_Rut->setMinimumSize(QSize(120, 0));
        tabEditar_Rut->setMaximumSize(QSize(200, 16777215));
        tabEditar_Rut->setMaxLength(12);

        gridLayout_29->addWidget(tabEditar_Rut, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_29);

        gridLayout_33 = new QGridLayout();
        gridLayout_33->setObjectName(QStringLiteral("gridLayout_33"));
        tabEditar_Nombres = new QLineEdit(tab_Editar);
        tabEditar_Nombres->setObjectName(QStringLiteral("tabEditar_Nombres"));
        tabEditar_Nombres->setMaximumSize(QSize(200, 16777215));
        tabEditar_Nombres->setMaxLength(20);

        gridLayout_33->addWidget(tabEditar_Nombres, 0, 2, 1, 1);

        label_78 = new QLabel(tab_Editar);
        label_78->setObjectName(QStringLiteral("label_78"));
        label_78->setMinimumSize(QSize(150, 0));
        label_78->setMaximumSize(QSize(150, 16777215));
        label_78->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_33->addWidget(label_78, 0, 0, 1, 1);

        label_79 = new QLabel(tab_Editar);
        label_79->setObjectName(QStringLiteral("label_79"));
        label_79->setMinimumSize(QSize(20, 0));
        label_79->setMaximumSize(QSize(20, 16777215));
        label_79->setAlignment(Qt::AlignCenter);

        gridLayout_33->addWidget(label_79, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_33);

        gridLayout_30 = new QGridLayout();
        gridLayout_30->setObjectName(QStringLiteral("gridLayout_30"));
        label_72 = new QLabel(tab_Editar);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setMinimumSize(QSize(150, 0));
        label_72->setMaximumSize(QSize(150, 16777215));
        label_72->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_30->addWidget(label_72, 0, 0, 1, 1);

        label_73 = new QLabel(tab_Editar);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setMinimumSize(QSize(20, 0));
        label_73->setMaximumSize(QSize(20, 16777215));
        label_73->setAlignment(Qt::AlignCenter);

        gridLayout_30->addWidget(label_73, 0, 1, 1, 1);

        tabEditar_Apellidos = new QLineEdit(tab_Editar);
        tabEditar_Apellidos->setObjectName(QStringLiteral("tabEditar_Apellidos"));
        tabEditar_Apellidos->setMaximumSize(QSize(200, 16777215));
        tabEditar_Apellidos->setMaxLength(20);

        gridLayout_30->addWidget(tabEditar_Apellidos, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_30);

        gridLayout_31 = new QGridLayout();
        gridLayout_31->setObjectName(QStringLiteral("gridLayout_31"));
        label_74 = new QLabel(tab_Editar);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setMinimumSize(QSize(150, 0));
        label_74->setMaximumSize(QSize(150, 16777215));
        label_74->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_31->addWidget(label_74, 0, 0, 1, 1);

        label_75 = new QLabel(tab_Editar);
        label_75->setObjectName(QStringLiteral("label_75"));
        label_75->setMinimumSize(QSize(10, 0));
        label_75->setMaximumSize(QSize(20, 16777215));
        label_75->setAlignment(Qt::AlignCenter);

        gridLayout_31->addWidget(label_75, 0, 1, 1, 1);

        tabEditar_FechaNac = new QDateEdit(tab_Editar);
        tabEditar_FechaNac->setObjectName(QStringLiteral("tabEditar_FechaNac"));
        tabEditar_FechaNac->setMaximumSize(QSize(200, 16777215));
        tabEditar_FechaNac->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout_31->addWidget(tabEditar_FechaNac, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_31);

        gridLayout_34 = new QGridLayout();
        gridLayout_34->setObjectName(QStringLiteral("gridLayout_34"));
        label_82 = new QLabel(tab_Editar);
        label_82->setObjectName(QStringLiteral("label_82"));

        gridLayout_34->addWidget(label_82, 0, 3, 1, 1);

        label_80 = new QLabel(tab_Editar);
        label_80->setObjectName(QStringLiteral("label_80"));
        label_80->setMinimumSize(QSize(150, 0));
        label_80->setMaximumSize(QSize(150, 16777215));
        label_80->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_34->addWidget(label_80, 0, 0, 1, 1);

        tabEditar_Edad = new QLabel(tab_Editar);
        tabEditar_Edad->setObjectName(QStringLiteral("tabEditar_Edad"));

        gridLayout_34->addWidget(tabEditar_Edad, 0, 2, 1, 1);

        label_81 = new QLabel(tab_Editar);
        label_81->setObjectName(QStringLiteral("label_81"));
        label_81->setMinimumSize(QSize(20, 0));
        label_81->setMaximumSize(QSize(20, 16777215));
        label_81->setAlignment(Qt::AlignCenter);

        gridLayout_34->addWidget(label_81, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_34);

        tabEditar_gb_Genero = new QGroupBox(tab_Editar);
        tabEditar_gb_Genero->setObjectName(QStringLiteral("tabEditar_gb_Genero"));
        tabEditar_gb_Genero->setMinimumSize(QSize(0, 50));
        tabEditar_gb_Genero->setMaximumSize(QSize(16777215, 50));
        tabEditar_gb_Genero->setFont(font2);
        tabEditar_gb_Genero->setStyleSheet(QLatin1String("QGroupBox { \n"
"     border: 1px solid gray; \n"
"     border-radius: 2px; \n"
" }"));
        tabEditar_gb_Genero->setFlat(true);
        horizontalLayout_5 = new QHBoxLayout(tabEditar_gb_Genero);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tabEditar_Male = new QRadioButton(tabEditar_gb_Genero);
        tabEditar_Male->setObjectName(QStringLiteral("tabEditar_Male"));
        tabEditar_Male->setChecked(true);

        horizontalLayout_5->addWidget(tabEditar_Male);

        tabEditar_Female = new QRadioButton(tabEditar_gb_Genero);
        tabEditar_Female->setObjectName(QStringLiteral("tabEditar_Female"));

        horizontalLayout_5->addWidget(tabEditar_Female);


        verticalLayout->addWidget(tabEditar_gb_Genero);

        gridLayout_36 = new QGridLayout();
        gridLayout_36->setObjectName(QStringLiteral("gridLayout_36"));
        tabEditar_FechaIngreso = new QLabel(tab_Editar);
        tabEditar_FechaIngreso->setObjectName(QStringLiteral("tabEditar_FechaIngreso"));
        tabEditar_FechaIngreso->setMaximumSize(QSize(200, 16777215));

        gridLayout_36->addWidget(tabEditar_FechaIngreso, 0, 2, 1, 1);

        label_85 = new QLabel(tab_Editar);
        label_85->setObjectName(QStringLiteral("label_85"));
        label_85->setMinimumSize(QSize(150, 0));
        label_85->setMaximumSize(QSize(150, 16777215));
        label_85->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_36->addWidget(label_85, 0, 0, 1, 1);

        label_86 = new QLabel(tab_Editar);
        label_86->setObjectName(QStringLiteral("label_86"));
        label_86->setMinimumSize(QSize(20, 0));
        label_86->setMaximumSize(QSize(20, 16777215));
        label_86->setAlignment(Qt::AlignCenter);

        gridLayout_36->addWidget(label_86, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_36);

        gridLayout_35 = new QGridLayout();
        gridLayout_35->setObjectName(QStringLiteral("gridLayout_35"));
        label_84 = new QLabel(tab_Editar);
        label_84->setObjectName(QStringLiteral("label_84"));
        label_84->setMinimumSize(QSize(20, 0));
        label_84->setMaximumSize(QSize(20, 16777215));
        label_84->setAlignment(Qt::AlignCenter);

        gridLayout_35->addWidget(label_84, 0, 1, 1, 1);

        label_83 = new QLabel(tab_Editar);
        label_83->setObjectName(QStringLiteral("label_83"));
        label_83->setMinimumSize(QSize(150, 0));
        label_83->setMaximumSize(QSize(150, 16777215));
        label_83->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_35->addWidget(label_83, 0, 0, 1, 1);

        tabEditar_cBox_nivelActividad = new QComboBox(tab_Editar);
        tabEditar_cBox_nivelActividad->setObjectName(QStringLiteral("tabEditar_cBox_nivelActividad"));
        tabEditar_cBox_nivelActividad->setMaximumSize(QSize(200, 16777215));

        gridLayout_35->addWidget(tabEditar_cBox_nivelActividad, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_35);

        gridLayout_32 = new QGridLayout();
        gridLayout_32->setObjectName(QStringLiteral("gridLayout_32"));
        label_77 = new QLabel(tab_Editar);
        label_77->setObjectName(QStringLiteral("label_77"));
        label_77->setMinimumSize(QSize(20, 0));
        label_77->setMaximumSize(QSize(20, 16777215));
        label_77->setAlignment(Qt::AlignCenter);

        gridLayout_32->addWidget(label_77, 0, 1, 1, 1);

        tabEditar_Address = new QLineEdit(tab_Editar);
        tabEditar_Address->setObjectName(QStringLiteral("tabEditar_Address"));
        tabEditar_Address->setMaxLength(45);

        gridLayout_32->addWidget(tabEditar_Address, 0, 2, 1, 1);

        label_76 = new QLabel(tab_Editar);
        label_76->setObjectName(QStringLiteral("label_76"));

        gridLayout_32->addWidget(label_76, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_32);


        gridLayout_28->addLayout(verticalLayout, 0, 0, 1, 1);

        line_3 = new QFrame(tab_Editar);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_28->addWidget(line_3, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tabEditar_gBox_Peso = new QGroupBox(tab_Editar);
        tabEditar_gBox_Peso->setObjectName(QStringLiteral("tabEditar_gBox_Peso"));
        tabEditar_gBox_Peso->setFlat(false);
        gridLayout_6 = new QGridLayout(tabEditar_gBox_Peso);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        tabEditar_Peso = new QLineEdit(tabEditar_gBox_Peso);
        tabEditar_Peso->setObjectName(QStringLiteral("tabEditar_Peso"));
        tabEditar_Peso->setMaximumSize(QSize(200, 16777215));
        tabEditar_Peso->setInputMethodHints(Qt::ImhDigitsOnly);
        tabEditar_Peso->setMaxLength(3);

        gridLayout_6->addWidget(tabEditar_Peso, 0, 0, 1, 1);

        label_87 = new QLabel(tabEditar_gBox_Peso);
        label_87->setObjectName(QStringLiteral("label_87"));
        label_87->setMinimumSize(QSize(25, 0));
        label_87->setMaximumSize(QSize(30, 16777215));

        gridLayout_6->addWidget(label_87, 0, 1, 1, 1);


        verticalLayout_4->addWidget(tabEditar_gBox_Peso);

        tabEditar_gBox_Estatura = new QGroupBox(tab_Editar);
        tabEditar_gBox_Estatura->setObjectName(QStringLiteral("tabEditar_gBox_Estatura"));
        gridLayout_27 = new QGridLayout(tabEditar_gBox_Estatura);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        tabEditar_Estatura = new QLineEdit(tabEditar_gBox_Estatura);
        tabEditar_Estatura->setObjectName(QStringLiteral("tabEditar_Estatura"));
        tabEditar_Estatura->setMaximumSize(QSize(200, 16777215));
        tabEditar_Estatura->setInputMethodHints(Qt::ImhDigitsOnly);
        tabEditar_Estatura->setMaxLength(3);

        gridLayout_27->addWidget(tabEditar_Estatura, 0, 0, 1, 1);

        label_32 = new QLabel(tabEditar_gBox_Estatura);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMinimumSize(QSize(25, 0));
        label_32->setMaximumSize(QSize(30, 16777215));

        gridLayout_27->addWidget(label_32, 0, 1, 1, 1);


        verticalLayout_4->addWidget(tabEditar_gBox_Estatura);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_29 = new QLabel(tab_Editar);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_2->addWidget(label_29);

        tabEditar_InfoExtra = new QPlainTextEdit(tab_Editar);
        tabEditar_InfoExtra->setObjectName(QStringLiteral("tabEditar_InfoExtra"));

        verticalLayout_2->addWidget(tabEditar_InfoExtra);

        btnConfirmarCambios = new QPushButton(tab_Editar);
        btnConfirmarCambios->setObjectName(QStringLiteral("btnConfirmarCambios"));
        btnConfirmarCambios->setEnabled(true);
        btnConfirmarCambios->setMinimumSize(QSize(100, 30));
        btnConfirmarCambios->setMaximumSize(QSize(16777215, 16777215));
        btnConfirmarCambios->setFont(font1);
        btnConfirmarCambios->setStyleSheet(QLatin1String("QPushButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 8px 20px 10px 20px;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"    color: #000000;\n"
"	border: 2px solid rgb(15, 103, 0);\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(5, 0, 9, 118));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: qlineargradient(spread:pad, x1:0.489, y1:1, x2:0.494, y2:0.0113636, stop:0 rgba(0, 117, 0, 255), stop:1 rgba(0, 255, 0, 255));	  \n"
"  text-decoration: none;\n"
"}"));

        verticalLayout_2->addWidget(btnConfirmarCambios);


        verticalLayout_4->addLayout(verticalLayout_2);


        gridLayout_28->addLayout(verticalLayout_4, 0, 2, 1, 1);

        tabUsuarios->addTab(tab_Editar, icon1, QString());

        gridLayout_37->addWidget(tabUsuarios, 0, 0, 1, 1);

        BtnSalir = new QPushButton(winUsers);
        BtnSalir->setObjectName(QStringLiteral("BtnSalir"));
        BtnSalir->setMinimumSize(QSize(100, 30));
        BtnSalir->setMaximumSize(QSize(100, 30));
        BtnSalir->setFont(font1);
        BtnSalir->setStyleSheet(QLatin1String("QPushButton {	\n"
"	background-color: rgb(255, 0, 0);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 8px 20px 10px 20px;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"    color: #000000;\n"
"	border: 2px solid rgb(99, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: qlineargradient(spread:reflect, x1:0.505727, y1:1, x2:0.483, y2:0, stop:0.0738636 rgba(212, 5, 5, 255), stop:0.5625 rgba(255, 25, 25, 255));	  \n"
"  text-decoration: none;\n"
"}"));

        gridLayout_37->addWidget(BtnSalir, 1, 0, 1, 1);

        QWidget::setTabOrder(tabAgregar_Rut, tabAgregar_Nombres);
        QWidget::setTabOrder(tabAgregar_Nombres, tabAgregar_Apellidos);
        QWidget::setTabOrder(tabAgregar_Apellidos, tabAgregar_FechaNac);
        QWidget::setTabOrder(tabAgregar_FechaNac, tabAgregar_Male);
        QWidget::setTabOrder(tabAgregar_Male, tabAgregar_Female);
        QWidget::setTabOrder(tabAgregar_Female, tabAgregar_nivelActividad);
        QWidget::setTabOrder(tabAgregar_nivelActividad, tabAgregar_Address);
        QWidget::setTabOrder(tabAgregar_Address, tabAgregar_Peso);
        QWidget::setTabOrder(tabAgregar_Peso, tabAgregar_Estatura);
        QWidget::setTabOrder(tabAgregar_Estatura, tabAgregar_InfoExtra);
        QWidget::setTabOrder(tabAgregar_InfoExtra, botonOKAgregar);
        QWidget::setTabOrder(botonOKAgregar, tabEditar_Rut);
        QWidget::setTabOrder(tabEditar_Rut, tabEditar_Nombres);
        QWidget::setTabOrder(tabEditar_Nombres, tabEditar_Apellidos);
        QWidget::setTabOrder(tabEditar_Apellidos, tabEditar_FechaNac);
        QWidget::setTabOrder(tabEditar_FechaNac, tabEditar_Male);
        QWidget::setTabOrder(tabEditar_Male, tabEditar_Female);
        QWidget::setTabOrder(tabEditar_Female, tabEditar_cBox_nivelActividad);
        QWidget::setTabOrder(tabEditar_cBox_nivelActividad, tabEditar_Address);
        QWidget::setTabOrder(tabEditar_Address, tabEditar_Peso);
        QWidget::setTabOrder(tabEditar_Peso, tabEditar_Estatura);
        QWidget::setTabOrder(tabEditar_Estatura, tabEditar_InfoExtra);
        QWidget::setTabOrder(tabEditar_InfoExtra, btnConfirmarCambios);
        QWidget::setTabOrder(btnConfirmarCambios, tabAgregar_Search);
        QWidget::setTabOrder(tabAgregar_Search, tableView_2);
        QWidget::setTabOrder(tableView_2, btn_ActualizarTabUs);
        QWidget::setTabOrder(btn_ActualizarTabUs, btnIniciarSesion);
        QWidget::setTabOrder(btnIniciarSesion, BtnEditar);
        QWidget::setTabOrder(BtnEditar, BtnEliminar);
        QWidget::setTabOrder(BtnEliminar, BtnSalir);
        QWidget::setTabOrder(BtnSalir, tabUsuarios);

        retranslateUi(winUsers);
        QObject::connect(BtnSalir, SIGNAL(clicked()), winUsers, SLOT(close()));

        tabUsuarios->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(winUsers);
    } // setupUi

    void retranslateUi(QDialog *winUsers)
    {
        winUsers->setWindowTitle(QApplication::translate("winUsers", "Usuarios", 0));
#ifndef QT_NO_TOOLTIP
        BtnEditar->setToolTip(QApplication::translate("winUsers", "<html><head/><body><p>Editar</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        BtnEditar->setWhatsThis(QApplication::translate("winUsers", "<html><head/><body><p>Editar Registro</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        BtnEditar->setText(QApplication::translate("winUsers", "Editar", 0));
        label->setText(QString());
        btnIniciarSesion->setText(QApplication::translate("winUsers", "Abrir", 0));
        tabAgregar_Search->setPlaceholderText(QApplication::translate("winUsers", "Ingrese RUT, Nombres o Apellidos.", 0));
        btn_ActualizarTabUs->setText(QApplication::translate("winUsers", "Refresh", 0));
        label_23->setText(QApplication::translate("winUsers", "Buscar:", 0));
#ifndef QT_NO_TOOLTIP
        BtnEliminar->setToolTip(QApplication::translate("winUsers", "<html><head/><body><p>Eliminar</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        BtnEliminar->setWhatsThis(QApplication::translate("winUsers", "<html><head/><body><p>Eliminar Registro</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        BtnEliminar->setText(QApplication::translate("winUsers", "Eliminar", 0));
        tabUsuarios->setTabText(tabUsuarios->indexOf(tab_Usuarios), QApplication::translate("winUsers", "Usuarios", 0));
        label_25->setText(QApplication::translate("winUsers", "Extra:", 0));
#ifndef QT_NO_TOOLTIP
        botonOKAgregar->setToolTip(QApplication::translate("winUsers", "<html><head/><body><p>Agregar usuario </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        botonOKAgregar->setText(QApplication::translate("winUsers", "Agregar", 0));
        tabAgregar_gBox_Estatura->setTitle(QApplication::translate("winUsers", "Talla (Altura)", 0));
        label_28->setText(QApplication::translate("winUsers", "(cm)", 0));
        tabAgregar_gBox_Peso->setTitle(QApplication::translate("winUsers", "Masa corporal (Peso)", 0));
        label_27->setText(QApplication::translate("winUsers", "(kg)", 0));
        label_24->setText(QApplication::translate("winUsers", "Nombres", 0));
        label_4->setText(QApplication::translate("winUsers", "=", 0));
        label_26->setText(QApplication::translate("winUsers", "Fecha de nacimiento\n"
" (D\303\255a-Mes-A\303\261o)", 0));
        label_6->setText(QApplication::translate("winUsers", "=", 0));
        label_7->setText(QApplication::translate("winUsers", "Edad", 0));
        label_8->setText(QApplication::translate("winUsers", "=", 0));
        tabAgregar_Edad->setText(QApplication::translate("winUsers", "0", 0));
        label_9->setText(QApplication::translate("winUsers", "A\303\261os", 0));
        label_31->setText(QApplication::translate("winUsers", "Apellidos", 0));
        label_5->setText(QApplication::translate("winUsers", "=", 0));
        label_43->setText(QApplication::translate("winUsers", "Fecha de Ingreso\n"
" (D\303\255a-Mes-A\303\261o)", 0));
        label_11->setText(QApplication::translate("winUsers", "=", 0));
        tabAgregar_FechaIngreso->setText(QApplication::translate("winUsers", "dom mayo 01 2016", 0));
        label_33->setText(QApplication::translate("winUsers", "Direcci\303\263n", 0));
        label_12->setText(QApplication::translate("winUsers", "=", 0));
        label_2->setText(QApplication::translate("winUsers", "=", 0));
        tabAgregar_Rut->setPlaceholderText(QApplication::translate("winUsers", "10.999.888-7", 0));
        label_30->setText(QApplication::translate("winUsers", "Rut", 0));
        tabAgregar_gB_Genero->setTitle(QApplication::translate("winUsers", "Genero:", 0));
        tabAgregar_Male->setText(QApplication::translate("winUsers", "Masculino", 0));
        tabAgregar_Female->setText(QApplication::translate("winUsers", "Femenino", 0));
        label_67->setText(QApplication::translate("winUsers", "Nivel de Actividad", 0));
        label_68->setText(QApplication::translate("winUsers", "=", 0));
        tabAgregar_nivelActividad->clear();
        tabAgregar_nivelActividad->insertItems(0, QStringList()
         << QApplication::translate("winUsers", "Ninguno", 0)
         << QApplication::translate("winUsers", "F\303\255sico Activo", 0)
         << QApplication::translate("winUsers", "F\303\255sico Pasivo", 0)
         << QApplication::translate("winUsers", "Retirado", 0)
         << QApplication::translate("winUsers", "Otros", 0)
        );
        tabUsuarios->setTabText(tabUsuarios->indexOf(tab_Agregar), QApplication::translate("winUsers", "Agregar", 0));
        label_70->setText(QApplication::translate("winUsers", "=", 0));
        label_69->setText(QApplication::translate("winUsers", "Rut", 0));
        tabEditar_Rut->setPlaceholderText(QApplication::translate("winUsers", "10.999.888-7", 0));
        label_78->setText(QApplication::translate("winUsers", "Nombres", 0));
        label_79->setText(QApplication::translate("winUsers", "=", 0));
        label_72->setText(QApplication::translate("winUsers", "Apellidos", 0));
        label_73->setText(QApplication::translate("winUsers", "=", 0));
        label_74->setText(QApplication::translate("winUsers", "Fecha de nacimiento:\n"
" (D\303\255a-Mes-A\303\261o)", 0));
        label_75->setText(QApplication::translate("winUsers", "=", 0));
        label_82->setText(QApplication::translate("winUsers", "A\303\261os", 0));
        label_80->setText(QApplication::translate("winUsers", "Edad", 0));
        tabEditar_Edad->setText(QApplication::translate("winUsers", "0", 0));
        label_81->setText(QApplication::translate("winUsers", "=", 0));
        tabEditar_gb_Genero->setTitle(QApplication::translate("winUsers", "Genero:", 0));
        tabEditar_Male->setText(QApplication::translate("winUsers", "Masculino", 0));
        tabEditar_Female->setText(QApplication::translate("winUsers", "Femenino", 0));
        tabEditar_FechaIngreso->setText(QApplication::translate("winUsers", "dom mayo 01 2016", 0));
        label_85->setText(QApplication::translate("winUsers", "Fecha de Ingreso:\n"
" (D\303\255a-Mes-A\303\261o)", 0));
        label_86->setText(QApplication::translate("winUsers", "=", 0));
        label_84->setText(QApplication::translate("winUsers", "=", 0));
        label_83->setText(QApplication::translate("winUsers", "Nivel de Actividad", 0));
        tabEditar_cBox_nivelActividad->clear();
        tabEditar_cBox_nivelActividad->insertItems(0, QStringList()
         << QApplication::translate("winUsers", "Ninguno", 0)
         << QApplication::translate("winUsers", "F\303\255sico Activo", 0)
         << QApplication::translate("winUsers", "F\303\255sico Pasivo", 0)
         << QApplication::translate("winUsers", "Retirado", 0)
         << QApplication::translate("winUsers", "Otros", 0)
        );
        label_77->setText(QApplication::translate("winUsers", "=", 0));
        label_76->setText(QApplication::translate("winUsers", "Direcci\303\263n", 0));
        tabEditar_gBox_Peso->setTitle(QApplication::translate("winUsers", "Masa corporal (Peso)", 0));
        label_87->setText(QApplication::translate("winUsers", "(kg)", 0));
        tabEditar_gBox_Estatura->setTitle(QApplication::translate("winUsers", "Talla (Altura)", 0));
        label_32->setText(QApplication::translate("winUsers", "(cm)", 0));
        label_29->setText(QApplication::translate("winUsers", "Extra:", 0));
#ifndef QT_NO_TOOLTIP
        btnConfirmarCambios->setToolTip(QApplication::translate("winUsers", "<html><head/><body><p>Guardar cambios</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnConfirmarCambios->setText(QApplication::translate("winUsers", "Confirmar cambios", 0));
        tabUsuarios->setTabText(tabUsuarios->indexOf(tab_Editar), QApplication::translate("winUsers", "Editar", 0));
#ifndef QT_NO_TOOLTIP
        BtnSalir->setToolTip(QApplication::translate("winUsers", "<html><head/><body><p>Cerrar esta ventana</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        BtnSalir->setWhatsThis(QApplication::translate("winUsers", "<html><head/><body><p>Cerrar esta ventana</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        BtnSalir->setText(QApplication::translate("winUsers", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class winUsers: public Ui_winUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINUSERS_H
