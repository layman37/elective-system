/****************************************************************************
** Meta object code from reading C++ file 'SC.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SC.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SC.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SC_t {
    QByteArrayData data[8];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SC_t qt_meta_stringdata_SC = {
    {
QT_MOC_LITERAL(0, 0, 2), // "SC"
QT_MOC_LITERAL(1, 3, 7), // "dlgshow"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 6), // "clshow"
QT_MOC_LITERAL(4, 19, 13), // "course_button"
QT_MOC_LITERAL(5, 33, 9), // "sc_button"
QT_MOC_LITERAL(6, 43, 11), // "back_button"
QT_MOC_LITERAL(7, 55, 18) // "recv_login_Student"

    },
    "SC\0dlgshow\0\0clshow\0course_button\0"
    "sc_button\0back_button\0recv_login_Student"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SC *_t = static_cast<SC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dlgshow(); break;
        case 1: _t->clshow(); break;
        case 2: _t->course_button(); break;
        case 3: _t->sc_button(); break;
        case 4: _t->back_button(); break;
        case 5: _t->recv_login_Student(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SC::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SC::dlgshow)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SC::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SC::clshow)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SC::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SC.data,
      qt_meta_data_SC,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SC::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SC.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void SC::dlgshow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SC::clshow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
