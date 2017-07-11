/****************************************************************************
** Meta object code from reading C++ file 'winusers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../winusers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'winusers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_winUsers_t {
    QByteArrayData data[14];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_winUsers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_winUsers_t qt_meta_stringdata_winUsers = {
    {
QT_MOC_LITERAL(0, 0, 8), // "winUsers"
QT_MOC_LITERAL(1, 9, 14), // "enviarPaciente"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "cPaciente*"
QT_MOC_LITERAL(4, 36, 2), // "cp"
QT_MOC_LITERAL(5, 39, 15), // "actualizarTabla"
QT_MOC_LITERAL(6, 55, 3), // "rut"
QT_MOC_LITERAL(7, 59, 12), // "setRutFormat"
QT_MOC_LITERAL(8, 72, 22), // "on_BtnEliminar_clicked"
QT_MOC_LITERAL(9, 95, 25), // "on_botonOKAgregar_clicked"
QT_MOC_LITERAL(10, 121, 30), // "on_btn_ActualizarTabUs_clicked"
QT_MOC_LITERAL(11, 152, 20), // "on_BtnEditar_clicked"
QT_MOC_LITERAL(12, 173, 30), // "on_btnConfirmarCambios_clicked"
QT_MOC_LITERAL(13, 204, 27) // "on_btnIniciarSesion_clicked"

    },
    "winUsers\0enviarPaciente\0\0cPaciente*\0"
    "cp\0actualizarTabla\0rut\0setRutFormat\0"
    "on_BtnEliminar_clicked\0on_botonOKAgregar_clicked\0"
    "on_btn_ActualizarTabUs_clicked\0"
    "on_BtnEditar_clicked\0"
    "on_btnConfirmarCambios_clicked\0"
    "on_btnIniciarSesion_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_winUsers[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   62,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,
      12,    0,   70,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void winUsers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        winUsers *_t = static_cast<winUsers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enviarPaciente((*reinterpret_cast< cPaciente*(*)>(_a[1]))); break;
        case 1: _t->actualizarTabla((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->setRutFormat();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->on_BtnEliminar_clicked(); break;
        case 4: _t->on_botonOKAgregar_clicked(); break;
        case 5: _t->on_btn_ActualizarTabUs_clicked(); break;
        case 6: _t->on_BtnEditar_clicked(); break;
        case 7: _t->on_btnConfirmarCambios_clicked(); break;
        case 8: _t->on_btnIniciarSesion_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (winUsers::*_t)(cPaciente * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&winUsers::enviarPaciente)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject winUsers::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_winUsers.data,
      qt_meta_data_winUsers,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *winUsers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *winUsers::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_winUsers.stringdata0))
        return static_cast<void*>(const_cast< winUsers*>(this));
    return QDialog::qt_metacast(_clname);
}

int winUsers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void winUsers::enviarPaciente(cPaciente * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
