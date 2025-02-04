/****************************************************************************
** Meta object code from reading C++ file 'student.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "student.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'student.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_student_t {
    QByteArrayData data[9];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_student_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_student_t qt_meta_stringdata_student = {
    {
QT_MOC_LITERAL(0, 0, 7), // "student"
QT_MOC_LITERAL(1, 8, 15), // "on_next_clicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "readCourseNames"
QT_MOC_LITERAL(4, 41, 13), // "enroll_course"
QT_MOC_LITERAL(5, 55, 10), // "courseName"
QT_MOC_LITERAL(6, 66, 11), // "drop_course"
QT_MOC_LITERAL(7, 78, 10), // "view_grade"
QT_MOC_LITERAL(8, 89, 13) // "course_exists"

    },
    "student\0on_next_clicked\0\0readCourseNames\0"
    "enroll_course\0courseName\0drop_course\0"
    "view_grade\0course_exists"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_student[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       7,    1,   52,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Bool, QMetaType::QString,    5,

       0        // eod
};

void student::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<student *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_next_clicked(); break;
        case 1: { QStringList _r = _t->readCourseNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->enroll_course((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->drop_course((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->view_grade((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject student::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_student.data,
    qt_meta_data_student,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *student::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *student::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_student.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "user"))
        return static_cast< user*>(this);
    return QDialog::qt_metacast(_clname);
}

int student::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
