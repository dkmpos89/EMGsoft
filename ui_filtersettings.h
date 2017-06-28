/********************************************************************************
** Form generated from reading UI file 'filtersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERSETTINGS_H
#define UI_FILTERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_filterSettings
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_12;
    QGroupBox *filtros_gBox_PassBand_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QSpinBox *filtros_FC_BandPassBot_2;
    QSpinBox *filtros_FC_BandPassTop_2;
    QLabel *label_3;
    QGroupBox *filtros_gBox_LowPass_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *filtros_lb_FCLowpass_2;
    QSpinBox *filtros_FC_LHB_2;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_7;
    QLabel *filtros_lb_OrdenN_2;
    QSpinBox *filtros_OrdenN_value_2;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_12;

    void setupUi(QDialog *filterSettings)
    {
        if (filterSettings->objectName().isEmpty())
            filterSettings->setObjectName(QStringLiteral("filterSettings"));
        filterSettings->resize(494, 322);
        QFont font;
        font.setPointSize(10);
        filterSettings->setFont(font);
        filterSettings->setModal(true);
        gridLayout_3 = new QGridLayout(filterSettings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(filterSettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFlat(true);
        groupBox_2->setCheckable(false);
        gridLayout_12 = new QGridLayout(groupBox_2);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        filtros_gBox_PassBand_2 = new QGroupBox(groupBox_2);
        filtros_gBox_PassBand_2->setObjectName(QStringLiteral("filtros_gBox_PassBand_2"));
        filtros_gBox_PassBand_2->setEnabled(true);
        filtros_gBox_PassBand_2->setCheckable(false);
        filtros_gBox_PassBand_2->setChecked(false);
        gridLayout_4 = new QGridLayout(filtros_gBox_PassBand_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        filtros_FC_BandPassBot_2 = new QSpinBox(filtros_gBox_PassBand_2);
        filtros_FC_BandPassBot_2->setObjectName(QStringLiteral("filtros_FC_BandPassBot_2"));
        filtros_FC_BandPassBot_2->setMinimumSize(QSize(80, 0));
        filtros_FC_BandPassBot_2->setAlignment(Qt::AlignCenter);
        filtros_FC_BandPassBot_2->setMinimum(1);
        filtros_FC_BandPassBot_2->setMaximum(50000);
        filtros_FC_BandPassBot_2->setSingleStep(10);
        filtros_FC_BandPassBot_2->setValue(100);

        horizontalLayout_12->addWidget(filtros_FC_BandPassBot_2);

        filtros_FC_BandPassTop_2 = new QSpinBox(filtros_gBox_PassBand_2);
        filtros_FC_BandPassTop_2->setObjectName(QStringLiteral("filtros_FC_BandPassTop_2"));
        filtros_FC_BandPassTop_2->setMinimumSize(QSize(80, 0));
        filtros_FC_BandPassTop_2->setAlignment(Qt::AlignCenter);
        filtros_FC_BandPassTop_2->setMinimum(1);
        filtros_FC_BandPassTop_2->setMaximum(50000);
        filtros_FC_BandPassTop_2->setSingleStep(10);
        filtros_FC_BandPassTop_2->setValue(200);

        horizontalLayout_12->addWidget(filtros_FC_BandPassTop_2);


        gridLayout_4->addLayout(horizontalLayout_12, 1, 0, 1, 1);

        label_3 = new QLabel(filtros_gBox_PassBand_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_12->addWidget(filtros_gBox_PassBand_2, 2, 0, 1, 3);

        filtros_gBox_LowPass_2 = new QGroupBox(groupBox_2);
        filtros_gBox_LowPass_2->setObjectName(QStringLiteral("filtros_gBox_LowPass_2"));
        filtros_gBox_LowPass_2->setCheckable(false);
        gridLayout = new QGridLayout(filtros_gBox_LowPass_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(filtros_gBox_LowPass_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(filtros_gBox_LowPass_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        filtros_lb_FCLowpass_2 = new QLabel(filtros_gBox_LowPass_2);
        filtros_lb_FCLowpass_2->setObjectName(QStringLiteral("filtros_lb_FCLowpass_2"));
        filtros_lb_FCLowpass_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(filtros_lb_FCLowpass_2);

        filtros_FC_LHB_2 = new QSpinBox(filtros_gBox_LowPass_2);
        filtros_FC_LHB_2->setObjectName(QStringLiteral("filtros_FC_LHB_2"));
        filtros_FC_LHB_2->setMinimumSize(QSize(100, 0));
        filtros_FC_LHB_2->setMaximumSize(QSize(16777215, 16777215));
        filtros_FC_LHB_2->setFrame(true);
        filtros_FC_LHB_2->setAlignment(Qt::AlignCenter);
        filtros_FC_LHB_2->setMinimum(1);
        filtros_FC_LHB_2->setMaximum(50000);
        filtros_FC_LHB_2->setSingleStep(10);
        filtros_FC_LHB_2->setValue(100);

        horizontalLayout->addWidget(filtros_FC_LHB_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);


        gridLayout_12->addWidget(filtros_gBox_LowPass_2, 0, 0, 1, 3);


        gridLayout_6->addWidget(groupBox_2, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);

        filtros_lb_OrdenN_2 = new QLabel(groupBox);
        filtros_lb_OrdenN_2->setObjectName(QStringLiteral("filtros_lb_OrdenN_2"));
        filtros_lb_OrdenN_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_11->addWidget(filtros_lb_OrdenN_2);

        filtros_OrdenN_value_2 = new QSpinBox(groupBox);
        filtros_OrdenN_value_2->setObjectName(QStringLiteral("filtros_OrdenN_value_2"));
        filtros_OrdenN_value_2->setMinimumSize(QSize(0, 0));
        filtros_OrdenN_value_2->setAlignment(Qt::AlignCenter);
        filtros_OrdenN_value_2->setMinimum(1);
        filtros_OrdenN_value_2->setMaximum(500000000);
        filtros_OrdenN_value_2->setSingleStep(10);
        filtros_OrdenN_value_2->setValue(100);

        horizontalLayout_11->addWidget(filtros_OrdenN_value_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);


        gridLayout_6->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(150, 30));
        pushButton_2->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_6->addWidget(pushButton_2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        gridLayout_6->addLayout(horizontalLayout_6, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);


        retranslateUi(filterSettings);
        QObject::connect(pushButton_2, SIGNAL(clicked()), filterSettings, SLOT(close()));

        QMetaObject::connectSlotsByName(filterSettings);
    } // setupUi

    void retranslateUi(QDialog *filterSettings)
    {
        filterSettings->setWindowTitle(QApplication::translate("filterSettings", "Configuraciones de Filtros Digitales", 0));
        groupBox->setTitle(QApplication::translate("filterSettings", "Configuraciones:", 0));
        groupBox_2->setTitle(QString());
        filtros_gBox_PassBand_2->setTitle(QApplication::translate("filterSettings", "Otros Filtros", 0));
        label_3->setText(QApplication::translate("filterSettings", "Pasa Banda / Elimina Banda / Filtro Notch   :", 0));
        filtros_gBox_LowPass_2->setTitle(QApplication::translate("filterSettings", "Filtros", 0));
        label->setText(QApplication::translate("filterSettings", "Low-Pass / L-P Butterworth  / High-Pass", 0));
        label_2->setText(QApplication::translate("filterSettings", "   :   ", 0));
        filtros_lb_FCLowpass_2->setText(QApplication::translate("filterSettings", "Fc = ", 0));
        filtros_lb_OrdenN_2->setText(QApplication::translate("filterSettings", "Orden =", 0));
        pushButton_2->setText(QApplication::translate("filterSettings", "Aceptar", 0));
    } // retranslateUi

};

namespace Ui {
    class filterSettings: public Ui_filterSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERSETTINGS_H
