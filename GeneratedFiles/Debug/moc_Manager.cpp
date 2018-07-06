/****************************************************************************
** Meta object code from reading C++ file 'Manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Manager_t {
    QByteArrayData data[10];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Manager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Manager_t qt_meta_stringdata_Manager = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Manager"
QT_MOC_LITERAL(1, 8, 7), // "dlgshow"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "stlshow"
QT_MOC_LITERAL(4, 25, 6), // "clshow"
QT_MOC_LITERAL(5, 32, 11), // "back_button"
QT_MOC_LITERAL(6, 44, 12), // "apply_button"
QT_MOC_LITERAL(7, 57, 13), // "stlist_button"
QT_MOC_LITERAL(8, 71, 12), // "clist_button"
QT_MOC_LITERAL(9, 84, 18) // "recv_login_manager"

    },
    "Manager\0dlgshow\0\0stlshow\0clshow\0"
    "back_button\0apply_button\0stlist_button\0"
    "clist_button\0recv_login_manager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Manager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Manager *_t = static_cast<Manager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dlgshow(); break;
        case 1: _t->stlshow(); break;
        case 2: _t->clshow(); break;
        case 3: _t->back_button(); break;
        case 4: _t->apply_button(); break;
        case 5: _t->stlist_button(); break;
        case 6: _t->clist_button(); break;
        case 7: _t->recv_login_manager(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manager::dlgshow)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manager::stlshow)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manager::clshow)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Manager::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Manager.data,
      qt_meta_data_Manager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Manager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Manager.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Manager::dlgshow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Manager::stlshow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Manager::clshow()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
