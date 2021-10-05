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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_filterSettings
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_7;
    QLabel *filtros_lb_OrdenN_2;
    QSpinBox *filtros_OrdenN_value_2;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_12;
    QGroupBox *filtros_gBox_PassBand_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QSpinBox *filtros_FC_BandPassBot_2;
    QSpinBox *filtros_FC_BandPassTop_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *bandpass_2;
    QRadioButton *stop_2;
    QRadioButton *notch_2;
    QGroupBox *filtros_gBox_LowPass_2;
    QGridLayout *gridLayout_5;
    QSpinBox *filtros_FC_LHB_2;
    QLabel *filtros_lb_FCLowpass_2;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *filtros_rb_lowpass_2;
    QRadioButton *filtros_rb_butter_2;
    QRadioButton *filtros_rb_highpass_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_12;

    void setupUi(QDialog *filterSettings)
    {
        if (filterSettings->objectName().isEmpty())
            filterSettings->setObjectName(QStringLiteral("filterSettings"));
        filterSettings->resize(372, 322);
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

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        bandpass_2 = new QRadioButton(filtros_gBox_PassBand_2);
        bandpass_2->setObjectName(QStringLiteral("bandpass_2"));
        bandpass_2->setChecked(true);

        horizontalLayout_4->addWidget(bandpass_2);

        stop_2 = new QRadioButton(filtros_gBox_PassBand_2);
        stop_2->setObjectName(QStringLiteral("stop_2"));

        horizontalLayout_4->addWidget(stop_2);

        notch_2 = new QRadioButton(filtros_gBox_PassBand_2);
        notch_2->setObjectName(QStringLiteral("notch_2"));

        horizontalLayout_4->addWidget(notch_2);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        gridLayout_12->addWidget(filtros_gBox_PassBand_2, 2, 0, 1, 3);

        filtros_gBox_LowPass_2 = new QGroupBox(groupBox_2);
        filtros_gBox_LowPass_2->setObjectName(QStringLiteral("filtros_gBox_LowPass_2"));
        filtros_gBox_LowPass_2->setCheckable(false);
        gridLayout_5 = new QGridLayout(filtros_gBox_LowPass_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
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

        gridLayout_5->addWidget(filtros_FC_LHB_2, 1, 2, 1, 1);

        filtros_lb_FCLowpass_2 = new QLabel(filtros_gBox_LowPass_2);
        filtros_lb_FCLowpass_2->setObjectName(QStringLiteral("filtros_lb_FCLowpass_2"));
        filtros_lb_FCLowpass_2->setMaximumSize(QSize(50, 16777215));

        gridLayout_5->addWidget(filtros_lb_FCLowpass_2, 1, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 1, 3, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        filtros_rb_lowpass_2 = new QRadioButton(filtros_gBox_LowPass_2);
        filtros_rb_lowpass_2->setObjectName(QStringLiteral("filtros_rb_lowpass_2"));
        filtros_rb_lowpass_2->setChecked(true);

        horizontalLayout_5->addWidget(filtros_rb_lowpass_2);

        filtros_rb_butter_2 = new QRadioButton(filtros_gBox_LowPass_2);
        filtros_rb_butter_2->setObjectName(QStringLiteral("filtros_rb_butter_2"));

        horizontalLayout_5->addWidget(filtros_rb_butter_2);

        filtros_rb_highpass_2 = new QRadioButton(filtros_gBox_LowPass_2);
        filtros_rb_highpass_2->setObjectName(QStringLiteral("filtros_rb_highpass_2"));

        horizontalLayout_5->addWidget(filtros_rb_highpass_2);


        gridLayout_5->addLayout(horizontalLayout_5, 0, 0, 1, 4);


        gridLayout_12->addWidget(filtros_gBox_LowPass_2, 0, 0, 1, 3);


        gridLayout_6->addWidget(groupBox_2, 1, 0, 1, 1);

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
        filtros_lb_OrdenN_2->setText(QApplication::translate("filterSettings", "Orden =", 0));
        groupBox_2->setTitle(QString());
        filtros_gBox_PassBand_2->setTitle(QApplication::translate("filterSettings", "Otros Filtros", 0));
        bandpass_2->setText(QApplication::translate("filterSettings", "Pasa Banda", 0));
        stop_2->setText(QApplication::translate("filterSettings", "Elimina Banda", 0));
        notch_2->setText(QApplication::translate("filterSettings", "Filtro Notch", 0));
        filtros_gBox_LowPass_2->setTitle(QApplication::translate("filterSettings", "Filtros", 0));
        filtros_lb_FCLowpass_2->setText(QApplication::translate("filterSettings", "Fc = ", 0));
        filtros_rb_lowpass_2->setText(QApplication::translate("filterSettings", "Low-Pass", 0));
        filtros_rb_butter_2->setText(QApplication::translate("filterSettings", "L-P Butterworth  ", 0));
        filtros_rb_highpass_2->setText(QApplication::translate("filterSettings", "High-Pass", 0));
        pushButton_2->setText(QApplication::translate("filterSettings", "Aceptar", 0));
    } // retranslateUi

};

namespace Ui {
    class filterSettings: public Ui_filterSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERSETTINGS_H
