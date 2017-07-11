/****************************************************************************
** Meta object code from reading C++ file 'appsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_appSettings_t {
    QByteArrayData data[11];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_appSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_appSettings_t qt_meta_stringdata_appSettings = {
    {
QT_MOC_LITERAL(0, 0, 11), // "appSettings"
QT_MOC_LITERAL(1, 12, 35), // "on_btnOctave_liberarRecurso_c..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 34), // "on_btnOctave_reloadRecurso_cl..."
QT_MOC_LITERAL(4, 84, 32), // "on_Octave_btn_menuOctave_clicked"
QT_MOC_LITERAL(5, 117, 35), // "on_Octave_btn_OctaveFourier_c..."
QT_MOC_LITERAL(6, 153, 39), // "on_Octave_btn_OctaveSpectrogr..."
QT_MOC_LITERAL(7, 193, 33), // "on_Octave_btn_OctaveGabor_cli..."
QT_MOC_LITERAL(8, 227, 36), // "on_Octave_btn_OctaveWavelets_..."
QT_MOC_LITERAL(9, 264, 25), // "on_btn_OctavePath_clicked"
QT_MOC_LITERAL(10, 290, 14) // "updateCostFunc"

    },
    "appSettings\0on_btnOctave_liberarRecurso_clicked\0"
    "\0on_btnOctave_reloadRecurso_clicked\0"
    "on_Octave_btn_menuOctave_clicked\0"
    "on_Octave_btn_OctaveFourier_clicked\0"
    "on_Octave_btn_OctaveSpectrogram_clicked\0"
    "on_Octave_btn_OctaveGabor_clicked\0"
    "on_Octave_btn_OctaveWavelets_clicked\0"
    "on_btn_OctavePath_clicked\0updateCostFunc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_appSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void appSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        appSettings *_t = static_cast<appSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnOctave_liberarRecurso_clicked(); break;
        case 1: _t->on_btnOctave_reloadRecurso_clicked(); break;
        case 2: _t->on_Octave_btn_menuOctave_clicked(); break;
        case 3: _t->on_Octave_btn_OctaveFourier_clicked(); break;
        case 4: _t->on_Octave_btn_OctaveSpectrogram_clicked(); break;
        case 5: _t->on_Octave_btn_OctaveGabor_clicked(); break;
        case 6: _t->on_Octave_btn_OctaveWavelets_clicked(); break;
        case 7: _t->on_btn_OctavePath_clicked(); break;
        case 8: _t->updateCostFunc((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject appSettings::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_appSettings.data,
      qt_meta_data_appSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *appSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *appSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_appSettings.stringdata0))
        return static_cast<void*>(const_cast< appSettings*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int appSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
