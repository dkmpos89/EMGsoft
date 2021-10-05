/********************************************************************************
** Form generated from reading UI file 'cargadatos.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARGADATOS_H
#define UI_CARGADATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "codeeditor.h"

QT_BEGIN_NAMESPACE

class Ui_CargaDatos
{
public:
    QGridLayout *gridLayout_10;
    QListWidget *listWidget;
    QStackedWidget *stackedPages;
    QWidget *pageTxt;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBoxTxt;
    QGridLayout *gridLayout_4;
    QPushButton *ButtonFileTxt;
    QLineEdit *lineEditPathTxt;
    QToolButton *btnVerTxt;
    QGroupBox *groupBoxParamTxt;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout;
    QComboBox *comboTxtChannels;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label;
    QComboBox *comboTxtSep;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_17;
    QLineEdit *lineEditTxtNombre;
    QSpinBox *TxtFs;
    QSpinBox *TxtLeerDesde;
    QWidget *pageCsv;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBoxCsv;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBoxParamCsv;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *comboCsvSep;
    QLabel *label_10;
    QLabel *label_16;
    QLabel *label_6;
    QLabel *label_15;
    QLabel *label_14;
    QComboBox *comboCsvChannels;
    QLabel *label_13;
    QLineEdit *lineEditCsvNombre;
    QLabel *label_18;
    QSpinBox *CsvFs;
    QSpinBox *CsvLeerDesde;
    QPushButton *ButtonFileCsv;
    QToolButton *btnVerCsv;
    QLineEdit *lineEditPathCsv;
    QPushButton *ButtonAccept;
    QPushButton *ButtonCancelar;
    QWidget *contenedorInfoArchivos;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_info_1;
    QLabel *label_info_2;
    CodeEditor *PanelInfoArchivos;
    QLabel *labelFs;
    QLabel *labelSep;
    QLineEdit *fs;
    QLineEdit *canales;
    QLineEdit *separador;
    QLabel *labelCanales;
    QLineEdit *leerDesde;
    QLabel *label_22;
    QToolButton *btnAceptarAA;

    void setupUi(QDialog *CargaDatos)
    {
        if (CargaDatos->objectName().isEmpty())
            CargaDatos->setObjectName(QStringLiteral("CargaDatos"));
        CargaDatos->resize(1220, 320);
        CargaDatos->setMinimumSize(QSize(0, 0));
        CargaDatos->setMaximumSize(QSize(16777215, 320));
        QFont font;
        font.setPointSize(10);
        CargaDatos->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/Search.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CargaDatos->setWindowIcon(icon);
        CargaDatos->setStyleSheet(QLatin1String("QDialog{		\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(232, 239, 252, 255), stop:1 rgba(241, 248, 239, 255));\n"
"}\n"
"\n"
"QPushButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 8px 20px 10px 20px;\n"
"}\n"
"\n"
"QPushButton:disabled {	\n"
"	background-color: rgb(85, 170, 255);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 8px 20px 10px 20px;\n"
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
""
                        "  text-decoration: none;\n"
"}"));
        gridLayout_10 = new QGridLayout(CargaDatos);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        listWidget = new QListWidget(CargaDatos);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/txt.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem->setIcon(icon1);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagenes/csv.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem1->setIcon(icon2);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMaximumSize(QSize(128, 250));

        gridLayout_10->addWidget(listWidget, 0, 0, 1, 1);

        stackedPages = new QStackedWidget(CargaDatos);
        stackedPages->setObjectName(QStringLiteral("stackedPages"));
        pageTxt = new QWidget();
        pageTxt->setObjectName(QStringLiteral("pageTxt"));
        gridLayout_6 = new QGridLayout(pageTxt);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBoxTxt = new QGroupBox(pageTxt);
        groupBoxTxt->setObjectName(QStringLiteral("groupBoxTxt"));
        gridLayout_4 = new QGridLayout(groupBoxTxt);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        ButtonFileTxt = new QPushButton(groupBoxTxt);
        ButtonFileTxt->setObjectName(QStringLiteral("ButtonFileTxt"));
        ButtonFileTxt->setEnabled(true);
        ButtonFileTxt->setStyleSheet(QLatin1String("QPushButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 5px 5px 5px 5px;\n"
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

        gridLayout_4->addWidget(ButtonFileTxt, 0, 0, 1, 1);

        lineEditPathTxt = new QLineEdit(groupBoxTxt);
        lineEditPathTxt->setObjectName(QStringLiteral("lineEditPathTxt"));
        lineEditPathTxt->setEnabled(true);
        lineEditPathTxt->setReadOnly(true);

        gridLayout_4->addWidget(lineEditPathTxt, 0, 1, 1, 1);

        btnVerTxt = new QToolButton(groupBoxTxt);
        btnVerTxt->setObjectName(QStringLiteral("btnVerTxt"));
        btnVerTxt->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imagenes/Media-Player.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnVerTxt->setIcon(icon3);

        gridLayout_4->addWidget(btnVerTxt, 0, 2, 1, 1);

        groupBoxParamTxt = new QGroupBox(groupBoxTxt);
        groupBoxParamTxt->setObjectName(QStringLiteral("groupBoxParamTxt"));
        groupBoxParamTxt->setEnabled(false);
        gridLayout_9 = new QGridLayout(groupBoxParamTxt);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboTxtChannels = new QComboBox(groupBoxParamTxt);
        comboTxtChannels->setObjectName(QStringLiteral("comboTxtChannels"));

        gridLayout->addWidget(comboTxtChannels, 2, 1, 1, 1);

        label_2 = new QLabel(groupBoxParamTxt);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_9 = new QLabel(groupBoxParamTxt);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 4, 2, 1, 1);

        label_4 = new QLabel(groupBoxParamTxt);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label = new QLabel(groupBoxParamTxt);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        comboTxtSep = new QComboBox(groupBoxParamTxt);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/imagenes/Espacio.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboTxtSep->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/imagenes/C.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboTxtSep->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/imagenes/PyC.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboTxtSep->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/imagenes/Tab.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboTxtSep->addItem(icon7, QString());
        comboTxtSep->setObjectName(QStringLiteral("comboTxtSep"));

        gridLayout->addWidget(comboTxtSep, 3, 1, 1, 1);

        label_5 = new QLabel(groupBoxParamTxt);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        label_7 = new QLabel(groupBoxParamTxt);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 2, 2, 1, 1);

        label_3 = new QLabel(groupBoxParamTxt);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_8 = new QLabel(groupBoxParamTxt);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 2, 1, 1);

        label_17 = new QLabel(groupBoxParamTxt);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 0, 0, 1, 1);

        lineEditTxtNombre = new QLineEdit(groupBoxParamTxt);
        lineEditTxtNombre->setObjectName(QStringLiteral("lineEditTxtNombre"));
        lineEditTxtNombre->setReadOnly(true);

        gridLayout->addWidget(lineEditTxtNombre, 0, 1, 1, 1);

        TxtFs = new QSpinBox(groupBoxParamTxt);
        TxtFs->setObjectName(QStringLiteral("TxtFs"));
        TxtFs->setMaximum(100000);

        gridLayout->addWidget(TxtFs, 1, 1, 1, 1);

        TxtLeerDesde = new QSpinBox(groupBoxParamTxt);
        TxtLeerDesde->setObjectName(QStringLiteral("TxtLeerDesde"));

        gridLayout->addWidget(TxtLeerDesde, 4, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBoxParamTxt, 1, 0, 1, 3);


        gridLayout_6->addWidget(groupBoxTxt, 0, 0, 1, 1);

        stackedPages->addWidget(pageTxt);
        pageCsv = new QWidget();
        pageCsv->setObjectName(QStringLiteral("pageCsv"));
        gridLayout_5 = new QGridLayout(pageCsv);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBoxCsv = new QGroupBox(pageCsv);
        groupBoxCsv->setObjectName(QStringLiteral("groupBoxCsv"));
        groupBoxCsv->setMinimumSize(QSize(300, 0));
        gridLayout_7 = new QGridLayout(groupBoxCsv);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        groupBoxParamCsv = new QGroupBox(groupBoxCsv);
        groupBoxParamCsv->setObjectName(QStringLiteral("groupBoxParamCsv"));
        groupBoxParamCsv->setEnabled(false);
        gridLayout_8 = new QGridLayout(groupBoxParamCsv);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_11 = new QLabel(groupBoxParamCsv);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        label_12 = new QLabel(groupBoxParamCsv);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 2, 2, 1, 1);

        comboCsvSep = new QComboBox(groupBoxParamCsv);
        comboCsvSep->addItem(icon4, QString());
        comboCsvSep->addItem(icon5, QString());
        comboCsvSep->addItem(icon6, QString());
        comboCsvSep->addItem(icon7, QString());
        comboCsvSep->setObjectName(QStringLiteral("comboCsvSep"));

        gridLayout_2->addWidget(comboCsvSep, 3, 1, 1, 1);

        label_10 = new QLabel(groupBoxParamCsv);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 1, 2, 1, 1);

        label_16 = new QLabel(groupBoxParamCsv);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 4, 2, 1, 1);

        label_6 = new QLabel(groupBoxParamCsv);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_15 = new QLabel(groupBoxParamCsv);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 4, 0, 1, 1);

        label_14 = new QLabel(groupBoxParamCsv);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 3, 2, 1, 1);

        comboCsvChannels = new QComboBox(groupBoxParamCsv);
        comboCsvChannels->setObjectName(QStringLiteral("comboCsvChannels"));

        gridLayout_2->addWidget(comboCsvChannels, 2, 1, 1, 1);

        label_13 = new QLabel(groupBoxParamCsv);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 3, 0, 1, 1);

        lineEditCsvNombre = new QLineEdit(groupBoxParamCsv);
        lineEditCsvNombre->setObjectName(QStringLiteral("lineEditCsvNombre"));
        lineEditCsvNombre->setReadOnly(true);

        gridLayout_2->addWidget(lineEditCsvNombre, 0, 1, 1, 1);

        label_18 = new QLabel(groupBoxParamCsv);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_2->addWidget(label_18, 0, 0, 1, 1);

        CsvFs = new QSpinBox(groupBoxParamCsv);
        CsvFs->setObjectName(QStringLiteral("CsvFs"));
        CsvFs->setMaximum(100000);

        gridLayout_2->addWidget(CsvFs, 1, 1, 1, 1);

        CsvLeerDesde = new QSpinBox(groupBoxParamCsv);
        CsvLeerDesde->setObjectName(QStringLiteral("CsvLeerDesde"));

        gridLayout_2->addWidget(CsvLeerDesde, 4, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBoxParamCsv, 1, 0, 1, 3);

        ButtonFileCsv = new QPushButton(groupBoxCsv);
        ButtonFileCsv->setObjectName(QStringLiteral("ButtonFileCsv"));
        ButtonFileCsv->setStyleSheet(QLatin1String("QPushButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 5px 5px 5px 5px;\n"
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

        gridLayout_7->addWidget(ButtonFileCsv, 0, 0, 1, 1);

        btnVerCsv = new QToolButton(groupBoxCsv);
        btnVerCsv->setObjectName(QStringLiteral("btnVerCsv"));
        btnVerCsv->setEnabled(false);
        btnVerCsv->setIcon(icon3);

        gridLayout_7->addWidget(btnVerCsv, 0, 2, 1, 1);

        lineEditPathCsv = new QLineEdit(groupBoxCsv);
        lineEditPathCsv->setObjectName(QStringLiteral("lineEditPathCsv"));
        lineEditPathCsv->setEnabled(true);
        lineEditPathCsv->setReadOnly(true);

        gridLayout_7->addWidget(lineEditPathCsv, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBoxCsv, 0, 0, 1, 1);

        stackedPages->addWidget(pageCsv);

        gridLayout_10->addWidget(stackedPages, 0, 1, 1, 2);

        ButtonAccept = new QPushButton(CargaDatos);
        ButtonAccept->setObjectName(QStringLiteral("ButtonAccept"));
        ButtonAccept->setMinimumSize(QSize(140, 30));
        ButtonAccept->setMaximumSize(QSize(140, 30));
        ButtonAccept->setStyleSheet(QStringLiteral(""));

        gridLayout_10->addWidget(ButtonAccept, 1, 1, 1, 1);

        ButtonCancelar = new QPushButton(CargaDatos);
        ButtonCancelar->setObjectName(QStringLiteral("ButtonCancelar"));
        ButtonCancelar->setMinimumSize(QSize(140, 30));
        ButtonCancelar->setMaximumSize(QSize(140, 30));
        ButtonCancelar->setStyleSheet(QStringLiteral(""));

        gridLayout_10->addWidget(ButtonCancelar, 1, 2, 1, 1);

        contenedorInfoArchivos = new QWidget(CargaDatos);
        contenedorInfoArchivos->setObjectName(QStringLiteral("contenedorInfoArchivos"));
        gridLayout_3 = new QGridLayout(contenedorInfoArchivos);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_info_1 = new QLabel(contenedorInfoArchivos);
        label_info_1->setObjectName(QStringLiteral("label_info_1"));
        label_info_1->setFont(font);

        horizontalLayout->addWidget(label_info_1);

        label_info_2 = new QLabel(contenedorInfoArchivos);
        label_info_2->setObjectName(QStringLiteral("label_info_2"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_info_2->setFont(font1);
        label_info_2->setStyleSheet(QLatin1String("QLabel#label_info_2{\n"
"	color: red;\n"
" }"));

        horizontalLayout->addWidget(label_info_2);


        verticalLayout->addLayout(horizontalLayout);

        PanelInfoArchivos = new CodeEditor(contenedorInfoArchivos);
        PanelInfoArchivos->setObjectName(QStringLiteral("PanelInfoArchivos"));
        PanelInfoArchivos->setFont(font);
        PanelInfoArchivos->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        PanelInfoArchivos->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        PanelInfoArchivos->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        PanelInfoArchivos->setTabStopWidth(150);
        PanelInfoArchivos->setTextInteractionFlags(Qt::TextSelectableByMouse);
        PanelInfoArchivos->setMaximumBlockCount(1000000000);

        verticalLayout->addWidget(PanelInfoArchivos);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 7);

        labelFs = new QLabel(contenedorInfoArchivos);
        labelFs->setObjectName(QStringLiteral("labelFs"));

        gridLayout_3->addWidget(labelFs, 1, 0, 1, 1);

        labelSep = new QLabel(contenedorInfoArchivos);
        labelSep->setObjectName(QStringLiteral("labelSep"));

        gridLayout_3->addWidget(labelSep, 1, 1, 1, 1);

        fs = new QLineEdit(contenedorInfoArchivos);
        fs->setObjectName(QStringLiteral("fs"));
        fs->setReadOnly(true);

        gridLayout_3->addWidget(fs, 2, 0, 1, 1);

        canales = new QLineEdit(contenedorInfoArchivos);
        canales->setObjectName(QStringLiteral("canales"));
        canales->setReadOnly(true);

        gridLayout_3->addWidget(canales, 2, 2, 1, 1);

        separador = new QLineEdit(contenedorInfoArchivos);
        separador->setObjectName(QStringLiteral("separador"));
        separador->setReadOnly(true);

        gridLayout_3->addWidget(separador, 2, 1, 1, 1);

        labelCanales = new QLabel(contenedorInfoArchivos);
        labelCanales->setObjectName(QStringLiteral("labelCanales"));

        gridLayout_3->addWidget(labelCanales, 1, 2, 1, 1);

        leerDesde = new QLineEdit(contenedorInfoArchivos);
        leerDesde->setObjectName(QStringLiteral("leerDesde"));
        leerDesde->setReadOnly(true);

        gridLayout_3->addWidget(leerDesde, 2, 3, 1, 1);

        label_22 = new QLabel(contenedorInfoArchivos);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_3->addWidget(label_22, 1, 3, 1, 1);

        btnAceptarAA = new QToolButton(contenedorInfoArchivos);
        btnAceptarAA->setObjectName(QStringLiteral("btnAceptarAA"));
        btnAceptarAA->setStyleSheet(QLatin1String("QToolButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 5px 5px 5px 5px;\n"
"}\n"
"\n"
"QToolButton:pressed{ \n"
"    color: #000000;\n"
"	border: 2px solid rgb(15, 103, 0);\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(5, 0, 9, 118));\n"
"}\n"
"\n"
"QToolButton:disabled{ \n"
"	background-color: rgb(22, 81, 22);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 5px 5px 5px 5px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"  background-color: qlineargradient(spread:pad, x1:0.489, y1:1, x2:0.494, y2:0.0113636, stop:0 rgba(0, 117, 0, 255), stop:1 rgba(0, 255, 0, 255));	  \n"
"  text-decoration: none;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/imagenes/023.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAceptarAA->setIcon(icon8);
        btnAceptarAA->setIconSize(QSize(30, 40));

        gridLayout_3->addWidget(btnAceptarAA, 1, 4, 2, 3);


        gridLayout_10->addWidget(contenedorInfoArchivos, 0, 3, 2, 1);

        QWidget::setTabOrder(lineEditPathTxt, lineEditTxtNombre);
        QWidget::setTabOrder(lineEditTxtNombre, comboTxtChannels);
        QWidget::setTabOrder(comboTxtChannels, comboTxtSep);
        QWidget::setTabOrder(comboTxtSep, ButtonFileTxt);
        QWidget::setTabOrder(ButtonFileTxt, btnVerTxt);
        QWidget::setTabOrder(btnVerTxt, ButtonAccept);
        QWidget::setTabOrder(ButtonAccept, ButtonCancelar);
        QWidget::setTabOrder(ButtonCancelar, listWidget);
        QWidget::setTabOrder(listWidget, lineEditPathCsv);
        QWidget::setTabOrder(lineEditPathCsv, lineEditCsvNombre);
        QWidget::setTabOrder(lineEditCsvNombre, comboCsvChannels);
        QWidget::setTabOrder(comboCsvChannels, comboCsvSep);
        QWidget::setTabOrder(comboCsvSep, ButtonFileCsv);
        QWidget::setTabOrder(ButtonFileCsv, btnVerCsv);
        QWidget::setTabOrder(btnVerCsv, PanelInfoArchivos);

        retranslateUi(CargaDatos);
        QObject::connect(ButtonCancelar, SIGNAL(clicked()), CargaDatos, SLOT(close()));

        listWidget->setCurrentRow(-1);
        stackedPages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CargaDatos);
    } // setupUi

    void retranslateUi(QDialog *CargaDatos)
    {
        CargaDatos->setWindowTitle(QApplication::translate("CargaDatos", "Cargar Archivo", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("CargaDatos", "Txt", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("CargaDatos", "Csv", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        groupBoxTxt->setTitle(QApplication::translate("CargaDatos", "Carga de datos *.Txt", 0));
        ButtonFileTxt->setText(QApplication::translate("CargaDatos", "Archivo", 0));
#ifndef QT_NO_TOOLTIP
        btnVerTxt->setToolTip(QApplication::translate("CargaDatos", "<html><head/><body><p>Abrir contenido del Archivo.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnVerTxt->setText(QApplication::translate("CargaDatos", "Ver", 0));
        groupBoxParamTxt->setTitle(QApplication::translate("CargaDatos", "Parametros", 0));
        comboTxtChannels->clear();
        comboTxtChannels->insertItems(0, QStringList()
         << QApplication::translate("CargaDatos", "1", 0)
         << QApplication::translate("CargaDatos", "2", 0)
         << QApplication::translate("CargaDatos", "3", 0)
         << QApplication::translate("CargaDatos", "4", 0)
         << QApplication::translate("CargaDatos", "5", 0)
         << QApplication::translate("CargaDatos", "6", 0)
         << QApplication::translate("CargaDatos", "7", 0)
         << QApplication::translate("CargaDatos", "8", 0)
         << QApplication::translate("CargaDatos", "9", 0)
         << QApplication::translate("CargaDatos", "10", 0)
         << QApplication::translate("CargaDatos", "11", 0)
         << QApplication::translate("CargaDatos", "12", 0)
        );
        label_2->setText(QApplication::translate("CargaDatos", "Canales", 0));
        label_9->setText(QApplication::translate("CargaDatos", "(Fila)", 0));
        label_4->setText(QApplication::translate("CargaDatos", "Leer Desde", 0));
        label->setText(QApplication::translate("CargaDatos", "Frec. Muestreo", 0));
        comboTxtSep->setItemText(0, QApplication::translate("CargaDatos", "Espacios", 0));
        comboTxtSep->setItemText(1, QApplication::translate("CargaDatos", "Comas", 0));
        comboTxtSep->setItemText(2, QApplication::translate("CargaDatos", "Puntos y Comas", 0));
        comboTxtSep->setItemText(3, QApplication::translate("CargaDatos", "Tabulacion", 0));

        label_5->setText(QApplication::translate("CargaDatos", "(Hz)", 0));
        label_7->setText(QString());
        label_3->setText(QApplication::translate("CargaDatos", "Separador", 0));
        label_8->setText(QString());
        label_17->setText(QApplication::translate("CargaDatos", "Nombre", 0));
        groupBoxCsv->setTitle(QApplication::translate("CargaDatos", "Carga de Datos *.Csv", 0));
        groupBoxParamCsv->setTitle(QApplication::translate("CargaDatos", "Parametros", 0));
        label_11->setText(QApplication::translate("CargaDatos", "Canales", 0));
        label_12->setText(QString());
        comboCsvSep->setItemText(0, QApplication::translate("CargaDatos", "Espacios", 0));
        comboCsvSep->setItemText(1, QApplication::translate("CargaDatos", "Comas", 0));
        comboCsvSep->setItemText(2, QApplication::translate("CargaDatos", "Puntos y Comas", 0));
        comboCsvSep->setItemText(3, QApplication::translate("CargaDatos", "Tabulacion", 0));

        label_10->setText(QApplication::translate("CargaDatos", "(Hz)", 0));
        label_16->setText(QApplication::translate("CargaDatos", "(Fila)", 0));
        label_6->setText(QApplication::translate("CargaDatos", "Frec. Muestreo", 0));
        label_15->setText(QApplication::translate("CargaDatos", "Leer Desde", 0));
        label_14->setText(QString());
        comboCsvChannels->clear();
        comboCsvChannels->insertItems(0, QStringList()
         << QApplication::translate("CargaDatos", "1", 0)
         << QApplication::translate("CargaDatos", "2", 0)
         << QApplication::translate("CargaDatos", "3", 0)
         << QApplication::translate("CargaDatos", "4", 0)
         << QApplication::translate("CargaDatos", "5", 0)
         << QApplication::translate("CargaDatos", "6", 0)
         << QApplication::translate("CargaDatos", "7", 0)
         << QApplication::translate("CargaDatos", "8", 0)
         << QApplication::translate("CargaDatos", "9", 0)
         << QApplication::translate("CargaDatos", "10", 0)
         << QApplication::translate("CargaDatos", "11", 0)
         << QApplication::translate("CargaDatos", "12", 0)
        );
        label_13->setText(QApplication::translate("CargaDatos", "Separador", 0));
        label_18->setText(QApplication::translate("CargaDatos", "Nombre", 0));
        ButtonFileCsv->setText(QApplication::translate("CargaDatos", "Archivo", 0));
#ifndef QT_NO_TOOLTIP
        btnVerCsv->setToolTip(QApplication::translate("CargaDatos", "<html><head/><body><p>Abrir contenido del archivo.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnVerCsv->setText(QApplication::translate("CargaDatos", "Ver", 0));
        ButtonAccept->setText(QApplication::translate("CargaDatos", "Aceptar", 0));
        ButtonCancelar->setText(QApplication::translate("CargaDatos", "Cancelar", 0));
        label_info_1->setText(QApplication::translate("CargaDatos", "Previsualizacion del contenido del archivo actual: IMPORTANTE", 0));
        label_info_2->setText(QApplication::translate("CargaDatos", "\"Solo se cargar\303\241n las primeras 100 lineas\"", 0));
        labelFs->setText(QApplication::translate("CargaDatos", "Frecuencia de Muestreo (Hz):", 0));
        labelSep->setText(QApplication::translate("CargaDatos", "Separador de columnas:", 0));
        labelCanales->setText(QApplication::translate("CargaDatos", "N\302\260 Canales:", 0));
        label_22->setText(QApplication::translate("CargaDatos", "Linea de Inicio (Datos):", 0));
#ifndef QT_NO_TOOLTIP
        btnAceptarAA->setToolTip(QApplication::translate("CargaDatos", "<html><head/><body><p>\302\277Estos valores son correctos?</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnAceptarAA->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CargaDatos: public Ui_CargaDatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARGADATOS_H
