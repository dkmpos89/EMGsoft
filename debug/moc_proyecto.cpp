/****************************************************************************
** Meta object code from reading C++ file 'proyecto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../proyecto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proyecto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Proyecto_t {
    QByteArrayData data[12];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Proyecto_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Proyecto_t qt_meta_stringdata_Proyecto = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Proyecto"
QT_MOC_LITERAL(1, 9, 13), // "nuevoProyecto"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "cProject*"
QT_MOC_LITERAL(4, 34, 2), // "cp"
QT_MOC_LITERAL(5, 37, 15), // "actualizarTabla"
QT_MOC_LITERAL(6, 53, 6), // "nombre"
QT_MOC_LITERAL(7, 60, 21), // "on_btnAgregar_clicked"
QT_MOC_LITERAL(8, 82, 17), // "on_btnVer_clicked"
QT_MOC_LITERAL(9, 100, 22), // "on_btnEliminar_clicked"
QT_MOC_LITERAL(10, 123, 18), // "on_btnOpen_clicked"
QT_MOC_LITERAL(11, 142, 20) // "on_btnVolver_clicked"

    },
    "Proyecto\0nuevoProyecto\0\0cProject*\0cp\0"
    "actualizarTabla\0nombre\0on_btnAgregar_clicked\0"
    "on_btnVer_clicked\0on_btnEliminar_clicked\0"
    "on_btnOpen_clicked\0on_btnVolver_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Proyecto[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,
      10,    0,   58,    2, 0x08 /* Private */,
      11,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Proyecto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Proyecto *_t = static_cast<Proyecto *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nuevoProyecto((*reinterpret_cast< cProject*(*)>(_a[1]))); break;
        case 1: _t->actualizarTabla((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_btnAgregar_clicked(); break;
        case 3: _t->on_btnVer_clicked(); break;
        case 4: _t->on_btnEliminar_clicked(); break;
        case 5: _t->on_btnOpen_clicked(); break;
        case 6: _t->on_btnVolver_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Proyecto::*_t)(cProject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Proyecto::nuevoProyecto)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Proyecto::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Proyecto.data,
      qt_meta_data_Proyecto,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Proyecto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Proyecto::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Proyecto.stringdata0))
        return static_cast<void*>(const_cast< Proyecto*>(this));
    return QDialog::qt_metacast(_clname);
}

int Proyecto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Proyecto::nuevoProyecto(cProject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
