/********************************************************************************
** Form generated from reading UI file 'dockindicadores.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKINDICADORES_H
#define UI_DOCKINDICADORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dockIndicadores
{
public:
    QWidget *dockWidgetContents;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnConfiguraciones;
    QFrame *line;
    QLabel *OctaveEstado;
    QFrame *line_4;
    QToolButton *btnStopOctave;
    QFrame *line_5;
    QToolButton *toolButton_2;
    QFrame *line_2;
    QFormLayout *formLayout;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QFrame *line_3;
    QToolButton *toolButton;

    void setupUi(QDockWidget *dockIndicadores)
    {
        if (dockIndicadores->objectName().isEmpty())
            dockIndicadores->setObjectName(QStringLiteral("dockIndicadores"));
        dockIndicadores->resize(365, 70);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockIndicadores->sizePolicy().hasHeightForWidth());
        dockIndicadores->setSizePolicy(sizePolicy);
        dockIndicadores->setMinimumSize(QSize(80, 38));
        dockIndicadores->setMaximumSize(QSize(524287, 524287));
        dockIndicadores->setAutoFillBackground(true);
        dockIndicadores->setFloating(true);
        dockIndicadores->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        layoutWidget = new QWidget(dockWidgetContents);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 361, 47));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnConfiguraciones = new QToolButton(layoutWidget);
        btnConfiguraciones->setObjectName(QStringLiteral("btnConfiguraciones"));
        btnConfiguraciones->setMaximumSize(QSize(50, 45));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/Gear.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnConfiguraciones->setIcon(icon);
        btnConfiguraciones->setIconSize(QSize(50, 45));
        btnConfiguraciones->setAutoRaise(true);

        horizontalLayout->addWidget(btnConfiguraciones);

        line = new QFrame(layoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        OctaveEstado = new QLabel(layoutWidget);
        OctaveEstado->setObjectName(QStringLiteral("OctaveEstado"));
        OctaveEstado->setMaximumSize(QSize(35, 35));
        OctaveEstado->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/logoOctave.png")));
        OctaveEstado->setScaledContents(true);

        horizontalLayout->addWidget(OctaveEstado);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setLineWidth(1);
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        btnStopOctave = new QToolButton(layoutWidget);
        btnStopOctave->setObjectName(QStringLiteral("btnStopOctave"));
        btnStopOctave->setMaximumSize(QSize(50, 45));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnStopOctave->setIcon(icon1);
        btnStopOctave->setIconSize(QSize(50, 45));
        btnStopOctave->setAutoRaise(true);

        horizontalLayout->addWidget(btnStopOctave);

        line_5 = new QFrame(layoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_5);

        toolButton_2 = new QToolButton(layoutWidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMaximumSize(QSize(50, 45));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagenes/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon2);
        toolButton_2->setIconSize(QSize(50, 45));
        toolButton_2->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_2);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(6);
        font.setBold(false);
        font.setWeight(50);
        lcdNumber->setFont(font);
        lcdNumber->setLayoutDirection(Qt::LeftToRight);
        lcdNumber->setAutoFillBackground(true);
        lcdNumber->setStyleSheet(QStringLiteral(""));
        lcdNumber->setFrameShape(QFrame::StyledPanel);
        lcdNumber->setFrameShadow(QFrame::Raised);
        lcdNumber->setLineWidth(1);
        lcdNumber->setMidLineWidth(0);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(8);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        formLayout->setWidget(1, QFormLayout::SpanningRole, lcdNumber);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(7);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label);


        horizontalLayout->addLayout(formLayout);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        toolButton = new QToolButton(layoutWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);
        toolButton->setMinimumSize(QSize(20, 20));
        toolButton->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imagenes/closeAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon3);
        toolButton->setIconSize(QSize(40, 40));
        toolButton->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton);

        dockIndicadores->setWidget(dockWidgetContents);

        retranslateUi(dockIndicadores);

        QMetaObject::connectSlotsByName(dockIndicadores);
    } // setupUi

    void retranslateUi(QDockWidget *dockIndicadores)
    {
        dockIndicadores->setWindowTitle(QApplication::translate("dockIndicadores", "Indicadores de Estado", 0));
#ifndef QT_NO_TOOLTIP
        btnConfiguraciones->setToolTip(QApplication::translate("dockIndicadores", "<html><head/><body><p>Configuraciones</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnConfiguraciones->setText(QApplication::translate("dockIndicadores", "...", 0));
#ifndef QT_NO_TOOLTIP
        OctaveEstado->setToolTip(QApplication::translate("dockIndicadores", "<html><head/><body><p>Octave</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        OctaveEstado->setText(QString());
        btnStopOctave->setText(QString());
        toolButton_2->setText(QApplication::translate("dockIndicadores", "...", 0));
        label->setText(QApplication::translate("dockIndicadores", "TIEMPO", 0));
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("dockIndicadores", "<html><head/><body><p>Salir</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dockIndicadores: public Ui_dockIndicadores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKINDICADORES_H
