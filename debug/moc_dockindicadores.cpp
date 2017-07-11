/****************************************************************************
** Meta object code from reading C++ file 'dockindicadores.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dockindicadores.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockindicadores.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dockIndicadores_t {
    QByteArrayData data[8];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dockIndicadores_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dockIndicadores_t qt_meta_stringdata_dockIndicadores = {
    {
QT_MOC_LITERAL(0, 0, 15), // "dockIndicadores"
QT_MOC_LITERAL(1, 16, 18), // "clickConfiguracion"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "updateTimer"
QT_MOC_LITERAL(4, 48, 29), // "on_btnConfiguraciones_clicked"
QT_MOC_LITERAL(5, 78, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(6, 100, 24), // "on_btnStopOctave_clicked"
QT_MOC_LITERAL(7, 125, 23) // "on_toolButton_2_clicked"

    },
    "dockIndicadores\0clickConfiguracion\0\0"
    "updateTimer\0on_btnConfiguraciones_clicked\0"
    "on_toolButton_clicked\0on_btnStopOctave_clicked\0"
    "on_toolButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dockIndicadores[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dockIndicadores::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dockIndicadores *_t = static_cast<dockIndicadores *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickConfiguracion(); break;
        case 1: _t->updateTimer(); break;
        case 2: _t->on_btnConfiguraciones_clicked(); break;
        case 3: _t->on_toolButton_clicked(); break;
        case 4: _t->on_btnStopOctave_clicked(); break;
        case 5: _t->on_toolButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (dockIndicadores::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dockIndicadores::clickConfiguracion)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject dockIndicadores::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_dockIndicadores.data,
      qt_meta_data_dockIndicadores,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dockIndicadores::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dockIndicadores::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dockIndicadores.stringdata0))
        return static_cast<void*>(const_cast< dockIndicadores*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int dockIndicadores::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void dockIndicadores::clickConfiguracion()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
