/****************************************************************************
** Meta object code from reading C++ file 'mygazehaptic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mygazehaptic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mygazehaptic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_myGazeHaptic_t {
    QByteArrayData data[7];
    char stringdata[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myGazeHaptic_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myGazeHaptic_t qt_meta_stringdata_myGazeHaptic = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 12),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 11),
QT_MOC_LITERAL(4, 39, 4),
QT_MOC_LITERAL(5, 44, 8),
QT_MOC_LITERAL(6, 53, 9)
    },
    "myGazeHaptic\0theFinalcall\0\0stringAlert\0"
    "talk\0talkSlot\0alertSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myGazeHaptic[] = {

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
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void myGazeHaptic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myGazeHaptic *_t = static_cast<myGazeHaptic *>(_o);
        switch (_id) {
        case 0: _t->theFinalcall(); break;
        case 1: _t->stringAlert(); break;
        case 2: _t->talk(); break;
        case 3: _t->talkSlot(); break;
        case 4: _t->alertSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (myGazeHaptic::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myGazeHaptic::theFinalcall)) {
                *result = 0;
            }
        }
        {
            typedef void (myGazeHaptic::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myGazeHaptic::stringAlert)) {
                *result = 1;
            }
        }
        {
            typedef void (myGazeHaptic::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myGazeHaptic::talk)) {
                *result = 2;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject myGazeHaptic::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_myGazeHaptic.data,
      qt_meta_data_myGazeHaptic,  qt_static_metacall, 0, 0}
};


const QMetaObject *myGazeHaptic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myGazeHaptic::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_myGazeHaptic.stringdata))
        return static_cast<void*>(const_cast< myGazeHaptic*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int myGazeHaptic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void myGazeHaptic::theFinalcall()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void myGazeHaptic::stringAlert()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void myGazeHaptic::talk()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
