/****************************************************************************
** Meta object code from reading C++ file 'adminstrator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "adminstrator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminstrator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adminstrator_t {
    QByteArrayData data[10];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_adminstrator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_adminstrator_t qt_meta_stringdata_adminstrator = {
    {
QT_MOC_LITERAL(0, 0, 12), // "adminstrator"
QT_MOC_LITERAL(1, 13, 20), // "on_addCourse_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_removeCourse_clicked"
QT_MOC_LITERAL(4, 59, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 81, 21), // "on_removeUser_clicked"
QT_MOC_LITERAL(6, 103, 20), // "on_addperson_clicked"
QT_MOC_LITERAL(7, 124, 14), // "on_add_clicked"
QT_MOC_LITERAL(8, 139, 15), // "on_plus_clicked"
QT_MOC_LITERAL(9, 155, 20) // "on_removed_2_clicked"

    },
    "adminstrator\0on_addCourse_clicked\0\0"
    "on_removeCourse_clicked\0on_pushButton_clicked\0"
    "on_removeUser_clicked\0on_addperson_clicked\0"
    "on_add_clicked\0on_plus_clicked\0"
    "on_removed_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adminstrator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void adminstrator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminstrator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addCourse_clicked(); break;
        case 1: _t->on_removeCourse_clicked(); break;
        case 6: _t->on_plus_clicked(); break;
        case 7: _t->on_removed_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject adminstrator::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_adminstrator.data,
    qt_meta_data_adminstrator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *adminstrator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminstrator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adminstrator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "user"))
        return static_cast< user*>(this);
    return QDialog::qt_metacast(_clname);
}

int adminstrator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
