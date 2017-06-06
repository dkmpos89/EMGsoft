#-------------------------------------------------
#
# Project created by QtCreator 2015-12-13T15:19:29
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = EGMsoft
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    qxtspanslider.cpp \
    cargadatos.cpp \
    winusers.cpp \
    appsettings.cpp \
    analisismultiples.cpp \
    dockindicadores.cpp \
    octaveprocess.cpp \    
    codeeditor.cpp \
    filtersettings.cpp \
    funcionesgraficas.cpp \
    signalInfo.cpp \
    database.cpp \
    proyecto.cpp \
    cproject.cpp \
    cpaciente.cpp \
    cproyectopaciente.cpp \
    csesion.cpp \
    cestadisticas.cpp \
    csignal.cpp \
    atributo.cpp \
    resultados.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    qxtspanslider.h \
    qxtspanslider_p.h \
    cargadatos.h \
    winusers.h \
    proyecto.h \
    appsettings.h \
    analisismultiples.h \
    dockindicadores.h \
    octaveprocess.h \
    codeeditor.h \
    filtersettings.h \
    funcionesgraficas.h \
    signalInfo.h \
    database.h \
    cproject.h \
    cpaciente.h \
    cproyectopaciente.h \
    csesion.h \
    cestadisticas.h \
    csignal.h \
    atributo.h \
    resultados.h



FORMS    += mainwindow.ui \
    cargadatos.ui \
    winusers.ui \
    proyecto.ui \
    appsettings.ui \
    analisismultiples.ui \
    dockindicadores.ui \
    filtersettings.ui \
    signalInfo.ui


RESOURCES += \
    images.qrc \
    ejemplos.qrc \
    scripts.qrc

QMAKE_CXXFLAGS += -std=gnu++11


