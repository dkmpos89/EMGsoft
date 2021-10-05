/********************************************************************************
** Form generated from reading UI file 'proyecto.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROYECTO_H
#define UI_PROYECTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Proyecto
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QStackedWidget *sWPanelCentral;
    QWidget *page;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_nuevo;
    QLineEdit *nombreProyecto;
    QLabel *label_4;
    QLabel *label_3;
    QDateEdit *fechaIP;
    QLabel *label_2;
    QPlainTextEdit *InfoProyecto;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAgregar;
    QPushButton *btnCerrar;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnVer;
    QDateEdit *fechaTP;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *txtBuscar;
    QToolButton *btnVolver;
    QLabel *label_listado;
    QTableView *tablaProyectos;
    QPushButton *btnEliminar;
    QPushButton *btnOpen;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Proyecto)
    {
        if (Proyecto->objectName().isEmpty())
            Proyecto->setObjectName(QStringLiteral("Proyecto"));
        Proyecto->resize(538, 472);
        QFont font;
        font.setPointSize(10);
        Proyecto->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/graph.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Proyecto->setWindowIcon(icon);
        Proyecto->setStyleSheet(QLatin1String("QDialog{	\n"
"		background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(232, 239, 252, 255), stop:1 rgba(241, 248, 239, 255));\n"
"}"));
        gridLayout_2 = new QGridLayout(Proyecto);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        sWPanelCentral = new QStackedWidget(Proyecto);
        sWPanelCentral->setObjectName(QStringLiteral("sWPanelCentral"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        sWPanelCentral->setFont(font1);
        sWPanelCentral->setStyleSheet(QStringLiteral(""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        gridLayout->addWidget(label, 5, 0, 1, 1);

        label_nuevo = new QLabel(page);
        label_nuevo->setObjectName(QStringLiteral("label_nuevo"));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label_nuevo->setFont(font3);
        label_nuevo->setStyleSheet(QLatin1String("QLabel {	\n"
"    padding: 10px 20px 10px 20px;\n"
"}\n"
""));
        label_nuevo->setScaledContents(false);

        gridLayout->addWidget(label_nuevo, 0, 0, 1, 1);

        nombreProyecto = new QLineEdit(page);
        nombreProyecto->setObjectName(QStringLiteral("nombreProyecto"));
        nombreProyecto->setMinimumSize(QSize(0, 25));
        nombreProyecto->setMaxLength(4500);

        gridLayout->addWidget(nombreProyecto, 2, 0, 1, 1);

        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        fechaIP = new QDateEdit(page);
        fechaIP->setObjectName(QStringLiteral("fechaIP"));
        fechaIP->setMinimumSize(QSize(0, 25));
        fechaIP->setFont(font);
        fechaIP->setCalendarPopup(true);

        gridLayout->addWidget(fechaIP, 4, 0, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        InfoProyecto = new QPlainTextEdit(page);
        InfoProyecto->setObjectName(QStringLiteral("InfoProyecto"));
        InfoProyecto->setFont(font);
        InfoProyecto->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        InfoProyecto->setMouseTracking(true);

        gridLayout->addWidget(InfoProyecto, 8, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnAgregar = new QPushButton(page);
        btnAgregar->setObjectName(QStringLiteral("btnAgregar"));
        btnAgregar->setMinimumSize(QSize(80, 30));
        btnAgregar->setMaximumSize(QSize(90, 16777215));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        btnAgregar->setFont(font4);
        btnAgregar->setStyleSheet(QLatin1String("QPushButton {	\n"
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/Word-Processor.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnAgregar->setIcon(icon1);

        horizontalLayout->addWidget(btnAgregar);

        btnCerrar = new QPushButton(page);
        btnCerrar->setObjectName(QStringLiteral("btnCerrar"));
        btnCerrar->setMinimumSize(QSize(80, 30));
        btnCerrar->setMaximumSize(QSize(70, 16777215));
        btnCerrar->setFont(font4);
        btnCerrar->setStyleSheet(QLatin1String("QPushButton {	\n"
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagenes/Xion.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnCerrar->setIcon(icon2);

        horizontalLayout->addWidget(btnCerrar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnVer = new QPushButton(page);
        btnVer->setObjectName(QStringLiteral("btnVer"));
        btnVer->setMinimumSize(QSize(0, 30));
        btnVer->setMaximumSize(QSize(30, 16777215));
        btnVer->setFont(font4);
        btnVer->setStyleSheet(QLatin1String("QPushButton {	\n"
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imagenes/Media-Player.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnVer->setIcon(icon3);

        horizontalLayout->addWidget(btnVer);


        gridLayout->addLayout(horizontalLayout, 9, 0, 1, 1);

        fechaTP = new QDateEdit(page);
        fechaTP->setObjectName(QStringLiteral("fechaTP"));
        fechaTP->setMinimumSize(QSize(0, 25));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        fechaTP->setFont(font5);
        fechaTP->setCalendarPopup(true);

        gridLayout->addWidget(fechaTP, 6, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        sWPanelCentral->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);
        label_6->setWordWrap(false);

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        txtBuscar = new QLineEdit(page_2);
        txtBuscar->setObjectName(QStringLiteral("txtBuscar"));
        txtBuscar->setMinimumSize(QSize(200, 0));
        txtBuscar->setFont(font);

        gridLayout_3->addWidget(txtBuscar, 2, 0, 1, 5);

        btnVolver = new QToolButton(page_2);
        btnVolver->setObjectName(QStringLiteral("btnVolver"));
        btnVolver->setMinimumSize(QSize(30, 30));
        btnVolver->setStyleSheet(QLatin1String("QToolButton {	\n"
"	background-color: rgb(0, 158, 5);\n"
"	border-radius: 2px;\n"
"    font-family: Arial;\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    padding: 5px 5px 5px 5px;\n"
"\n"
"}\n"
"\n"
"QToolButton:pressed{ \n"
"    color: #000000;\n"
"	border: 2px solid rgb(15, 103, 0);\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(5, 0, 9, 118));\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"  background-color: qlineargradient(spread:pad, x1:0.489, y1:1, x2:0.494, y2:0.0113636, stop:0 rgba(0, 117, 0, 255), stop:1 rgba(0, 255, 0, 255));	  \n"
"  text-decoration: none;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/imagenes/flechaIzq.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnVolver->setIcon(icon4);

        gridLayout_3->addWidget(btnVolver, 4, 0, 1, 1);

        label_listado = new QLabel(page_2);
        label_listado->setObjectName(QStringLiteral("label_listado"));
        label_listado->setFont(font3);
        label_listado->setLayoutDirection(Qt::LeftToRight);
        label_listado->setAutoFillBackground(false);
        label_listado->setStyleSheet(QLatin1String("QLabel {	\n"
"    padding: 10px 20px 10px 20px;\n"
"}\n"
""));
        label_listado->setScaledContents(false);

        gridLayout_3->addWidget(label_listado, 0, 0, 1, 6);

        tablaProyectos = new QTableView(page_2);
        tablaProyectos->setObjectName(QStringLiteral("tablaProyectos"));
        tablaProyectos->setFont(font);

        gridLayout_3->addWidget(tablaProyectos, 3, 0, 1, 6);

        btnEliminar = new QPushButton(page_2);
        btnEliminar->setObjectName(QStringLiteral("btnEliminar"));
        btnEliminar->setStyleSheet(QLatin1String("QPushButton {	\n"
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
        btnEliminar->setIcon(icon2);

        gridLayout_3->addWidget(btnEliminar, 4, 5, 1, 1);

        btnOpen = new QPushButton(page_2);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));
        btnOpen->setStyleSheet(QLatin1String("QPushButton {	\n"
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
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/imagenes/Power.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnOpen->setIcon(icon5);

        gridLayout_3->addWidget(btnOpen, 4, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 4, 1, 1, 3);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        sWPanelCentral->addWidget(page_2);

        verticalLayout->addWidget(sWPanelCentral);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(nombreProyecto, fechaIP);
        QWidget::setTabOrder(fechaIP, fechaTP);
        QWidget::setTabOrder(fechaTP, InfoProyecto);
        QWidget::setTabOrder(InfoProyecto, btnAgregar);
        QWidget::setTabOrder(btnAgregar, btnCerrar);
        QWidget::setTabOrder(btnCerrar, btnVer);
        QWidget::setTabOrder(btnVer, txtBuscar);
        QWidget::setTabOrder(txtBuscar, tablaProyectos);
        QWidget::setTabOrder(tablaProyectos, btnVolver);

        retranslateUi(Proyecto);
        QObject::connect(btnCerrar, SIGNAL(clicked()), Proyecto, SLOT(close()));

        sWPanelCentral->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Proyecto);
    } // setupUi

    void retranslateUi(QDialog *Proyecto)
    {
        Proyecto->setWindowTitle(QApplication::translate("Proyecto", "Proyectos", 0));
        label->setText(QApplication::translate("Proyecto", "Fecha Termino:", 0));
        label_nuevo->setText(QApplication::translate("Proyecto", "NUEVO PROYECTO", 0));
        label_4->setText(QApplication::translate("Proyecto", "Nombre: ", 0));
        label_3->setText(QApplication::translate("Proyecto", "Fecha Inicio:", 0));
        label_2->setText(QApplication::translate("Proyecto", "Descripci\303\263n:", 0));
#ifndef QT_NO_TOOLTIP
        InfoProyecto->setToolTip(QApplication::translate("Proyecto", "<html><head/><body><p>Ingresa una descripcion del proyecto que no supere los 4500 caracteres.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        InfoProyecto->setPlainText(QString());
#ifndef QT_NO_TOOLTIP
        btnAgregar->setToolTip(QApplication::translate("Proyecto", "<html><head/><body><p>Insertar los datos?</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnAgregar->setText(QApplication::translate("Proyecto", "Agregar", 0));
#ifndef QT_NO_TOOLTIP
        btnCerrar->setToolTip(QApplication::translate("Proyecto", "<html><head/><body><p>Cierra esta ventana</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnCerrar->setText(QApplication::translate("Proyecto", "Cerrar", 0));
#ifndef QT_NO_TOOLTIP
        btnVer->setToolTip(QApplication::translate("Proyecto", "<html><head/><body><p>Ve los proyectos actuales?</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnVer->setText(QString());
        label_6->setText(QApplication::translate("Proyecto", "Buscar:", 0));
        txtBuscar->setPlaceholderText(QApplication::translate("Proyecto", "Ingrese Nombre del proyecto", 0));
#ifndef QT_NO_TOOLTIP
        btnVolver->setToolTip(QApplication::translate("Proyecto", "<html><head/><body><p>Volver a la ventana de craci\303\263n de proyectos?</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnVolver->setText(QString());
        label_listado->setText(QApplication::translate("Proyecto", "LISTADO DE PROYECTOS ACTUALES", 0));
        btnEliminar->setText(QApplication::translate("Proyecto", "Eliminar", 0));
#ifndef QT_NO_TOOLTIP
        btnOpen->setToolTip(QApplication::translate("Proyecto", "<html><head/><body><p>Abrir el proyecto seleccionado?</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnOpen->setText(QApplication::translate("Proyecto", "Abrir", 0));
    } // retranslateUi

};

namespace Ui {
    class Proyecto: public Ui_Proyecto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROYECTO_H
