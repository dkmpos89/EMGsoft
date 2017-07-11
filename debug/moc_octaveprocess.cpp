/****************************************************************************
** Meta object code from reading C++ file 'octaveprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../octaveprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'octaveprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OctaveProcess_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OctaveProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OctaveProcess_t qt_meta_stringdata_OctaveProcess = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OctaveProcess"
QT_MOC_LITERAL(1, 14, 14), // "finalDataReady"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "finalDataReady2"
QT_MOC_LITERAL(4, 46, 8), // "cmdEmpty"
QT_MOC_LITERAL(5, 55, 16), // "readOctaveOutput"
QT_MOC_LITERAL(6, 72, 17) // "readOctaveOutput2"

    },
    "OctaveProcess\0finalDataReady\0\0"
    "finalDataReady2\0cmdEmpty\0readOctaveOutput\0"
    "readOctaveOutput2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OctaveProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x09 /* Protected */,
       6,    0,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OctaveProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OctaveProcess *_t = static_cast<OctaveProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finalDataReady(); break;
        case 1: _t->finalDataReady2(); break;
        case 2: _t->cmdEmpty(); break;
        case 3: _t->readOctaveOutput(); break;
        case 4: _t->readOctaveOutput2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OctaveProcess::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OctaveProcess::finalDataReady)) {
                *result = 0;
            }
        }
        {
            typedef void (OctaveProcess::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OctaveProcess::finalDataReady2)) {
                *result = 1;
            }
        }
        {
            typedef void (OctaveProcess::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OctaveProcess::cmdEmpty)) {
                *result = 2;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OctaveProcess::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_OctaveProcess.data,
      qt_meta_data_OctaveProcess,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OctaveProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OctaveProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OctaveProcess.stringdata0))
        return static_cast<void*>(const_cast< OctaveProcess*>(this));
    return QProcess::qt_metacast(_clname);
}

int OctaveProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OctaveProcess::finalDataReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OctaveProcess::finalDataReady2()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void OctaveProcess::cmdEmpty()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
