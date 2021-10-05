/********************************************************************************
** Form generated from reading UI file 'signalInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALINFO_H
#define UI_SIGNALINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signalInfo
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *gB_Estadisticas;
    QGridLayout *gridLayout_3;
    QTableWidget *tabla_Estadisticas;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_Guardar;
    QPushButton *btn_Salir;
    QSpacerItem *horizontalSpacer;
    QGroupBox *gB_Caracteristicas;
    QGridLayout *gridLayout_4;
    QTableView *tabal_Caracteristicas;
    QGroupBox *gB_InfoGeneral;
    QGridLayout *gridLayout;
    QLineEdit *file_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_path;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_name;
    QLineEdit *fs;
    QLabel *label_fs;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_numc;
    QLabel *label_8;
    QLineEdit *numc;
    QLineEdit *path;

    void setupUi(QWidget *signalInfo)
    {
        if (signalInfo->objectName().isEmpty())
            signalInfo->setObjectName(QStringLiteral("signalInfo"));
        signalInfo->resize(990, 370);
        signalInfo->setMaximumSize(QSize(16777215, 370));
        QFont font;
        font.setPointSize(10);
        signalInfo->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/icono.ico"), QSize(), QIcon::Normal, QIcon::Off);
        signalInfo->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(signalInfo);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gB_Estadisticas = new QGroupBox(signalInfo);
        gB_Estadisticas->setObjectName(QStringLiteral("gB_Estadisticas"));
        gridLayout_3 = new QGridLayout(gB_Estadisticas);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tabla_Estadisticas = new QTableWidget(gB_Estadisticas);
        if (tabla_Estadisticas->columnCount() < 9)
            tabla_Estadisticas->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabla_Estadisticas->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla_Estadisticas->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabla_Estadisticas->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabla_Estadisticas->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabla_Estadisticas->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabla_Estadisticas->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabla_Estadisticas->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabla_Estadisticas->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabla_Estadisticas->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tabla_Estadisticas->setObjectName(QStringLiteral("tabla_Estadisticas"));

        gridLayout_3->addWidget(tabla_Estadisticas, 0, 0, 1, 1);


        gridLayout_2->addWidget(gB_Estadisticas, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_Guardar = new QPushButton(signalInfo);
        btn_Guardar->setObjectName(QStringLiteral("btn_Guardar"));

        horizontalLayout->addWidget(btn_Guardar);

        btn_Salir = new QPushButton(signalInfo);
        btn_Salir->setObjectName(QStringLiteral("btn_Salir"));

        horizontalLayout->addWidget(btn_Salir);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        gB_Caracteristicas = new QGroupBox(signalInfo);
        gB_Caracteristicas->setObjectName(QStringLiteral("gB_Caracteristicas"));
        gridLayout_4 = new QGridLayout(gB_Caracteristicas);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabal_Caracteristicas = new QTableView(gB_Caracteristicas);
        tabal_Caracteristicas->setObjectName(QStringLiteral("tabal_Caracteristicas"));

        gridLayout_4->addWidget(tabal_Caracteristicas, 1, 0, 1, 1);


        gridLayout_2->addWidget(gB_Caracteristicas, 2, 0, 1, 1);

        gB_InfoGeneral = new QGroupBox(signalInfo);
        gB_InfoGeneral->setObjectName(QStringLiteral("gB_InfoGeneral"));
        gridLayout = new QGridLayout(gB_InfoGeneral);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        file_name = new QLineEdit(gB_InfoGeneral);
        file_name->setObjectName(QStringLiteral("file_name"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(file_name->sizePolicy().hasHeightForWidth());
        file_name->setSizePolicy(sizePolicy);
        file_name->setAutoFillBackground(true);
        file_name->setReadOnly(true);

        gridLayout->addWidget(file_name, 0, 3, 1, 4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_path = new QLabel(gB_InfoGeneral);
        label_path->setObjectName(QStringLiteral("label_path"));

        horizontalLayout_4->addWidget(label_path);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_name = new QLabel(gB_InfoGeneral);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout_3->addWidget(label_name);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        fs = new QLineEdit(gB_InfoGeneral);
        fs->setObjectName(QStringLiteral("fs"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fs->sizePolicy().hasHeightForWidth());
        fs->setSizePolicy(sizePolicy1);
        fs->setMaximumSize(QSize(50, 16777215));
        fs->setAutoFillBackground(true);
        fs->setReadOnly(true);

        gridLayout->addWidget(fs, 0, 9, 1, 1);

        label_fs = new QLabel(gB_InfoGeneral);
        label_fs->setObjectName(QStringLiteral("label_fs"));

        gridLayout->addWidget(label_fs, 0, 7, 1, 1);

        label_9 = new QLabel(gB_InfoGeneral);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_9, 0, 8, 1, 1);

        label_5 = new QLabel(gB_InfoGeneral);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(gB_InfoGeneral);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_numc = new QLabel(gB_InfoGeneral);
        label_numc->setObjectName(QStringLiteral("label_numc"));

        gridLayout->addWidget(label_numc, 0, 10, 1, 1);

        label_8 = new QLabel(gB_InfoGeneral);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_8, 0, 11, 1, 1);

        numc = new QLineEdit(gB_InfoGeneral);
        numc->setObjectName(QStringLiteral("numc"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(numc->sizePolicy().hasHeightForWidth());
        numc->setSizePolicy(sizePolicy3);
        numc->setMaximumSize(QSize(50, 16777215));
        numc->setAutoFillBackground(true);
        numc->setReadOnly(true);

        gridLayout->addWidget(numc, 0, 12, 1, 1);

        path = new QLineEdit(gB_InfoGeneral);
        path->setObjectName(QStringLiteral("path"));
        path->setAutoFillBackground(true);
        path->setReadOnly(true);

        gridLayout->addWidget(path, 1, 3, 1, 10);


        gridLayout_2->addWidget(gB_InfoGeneral, 0, 0, 1, 1);


        retranslateUi(signalInfo);
        QObject::connect(btn_Salir, SIGNAL(clicked()), signalInfo, SLOT(close()));

        QMetaObject::connectSlotsByName(signalInfo);
    } // setupUi

    void retranslateUi(QWidget *signalInfo)
    {
        signalInfo->setWindowTitle(QApplication::translate("signalInfo", "Informacion de la se\303\261al", 0));
        gB_Estadisticas->setTitle(QApplication::translate("signalInfo", "ULTIMAS ESTADISTICAS CALCULADAS:", 0));
        QTableWidgetItem *___qtablewidgetitem = tabla_Estadisticas->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("signalInfo", "NOMBRE", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tabla_Estadisticas->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("signalInfo", "MEAN", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tabla_Estadisticas->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("signalInfo", "MEDIAN", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tabla_Estadisticas->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("signalInfo", "STANDARD DESVIATION", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tabla_Estadisticas->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("signalInfo", "VARIANCE", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tabla_Estadisticas->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("signalInfo", "RMS", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tabla_Estadisticas->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("signalInfo", "MIN", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tabla_Estadisticas->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("signalInfo", "MAX", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tabla_Estadisticas->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("signalInfo", "RANGE", 0));
        btn_Guardar->setText(QApplication::translate("signalInfo", "Guardar", 0));
        btn_Salir->setText(QApplication::translate("signalInfo", "Cerrar", 0));
        gB_Caracteristicas->setTitle(QApplication::translate("signalInfo", "ULTIMO SET DE CARACTERISTICAS CALCULADO:", 0));
        gB_InfoGeneral->setTitle(QApplication::translate("signalInfo", "INFORMACION GENERAL:", 0));
        label_path->setText(QApplication::translate("signalInfo", "Ruta completa al archivo", 0));
        label_name->setText(QApplication::translate("signalInfo", "Nombre del archivo", 0));
        label_fs->setText(QApplication::translate("signalInfo", "Frecuencia de muestreo", 0));
        label_9->setText(QApplication::translate("signalInfo", ":", 0));
        label_5->setText(QApplication::translate("signalInfo", ":", 0));
        label_6->setText(QApplication::translate("signalInfo", ":", 0));
        label_numc->setText(QApplication::translate("signalInfo", "Numero de canales", 0));
        label_8->setText(QApplication::translate("signalInfo", ":", 0));
    } // retranslateUi

};

namespace Ui {
    class signalInfo: public Ui_signalInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALINFO_H
