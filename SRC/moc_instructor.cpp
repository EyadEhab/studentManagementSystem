/****************************************************************************
** Meta object code from reading C++ file 'instructor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "instructor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'instructor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_instructor_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_instructor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_instructor_t qt_meta_stringdata_instructor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "instructor"
QT_MOC_LITERAL(1, 11, 20), // "on_addCourse_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 23), // "on_removeCourse_clicked"
QT_MOC_LITERAL(4, 57, 22), // "on_updateGrade_clicked"
QT_MOC_LITERAL(5, 80, 9), // "addCourse"
QT_MOC_LITERAL(6, 90, 9) // "add_grade"

    },
    "instructor\0on_addCourse_clicked\0\0"
    "on_removeCourse_clicked\0on_updateGrade_clicked\0"
    "addCourse\0add_grade"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_instructor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       6,    3,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,

       0        // eod
};

void instructor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<instructor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addCourse_clicked(); break;
        case 1: _t->on_removeCourse_clicked(); break;
        case 2: _t->on_updateGrade_clicked(); break;
        case 3: _t->addCourse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->add_grade((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject instructor::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_instructor.data,
    qt_meta_data_instructor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *instructor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *instructor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_instructor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "user"))
        return static_cast< user*>(this);
    return QDialog::qt_metacast(_clname);
}

int instructor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
