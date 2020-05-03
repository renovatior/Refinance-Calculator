/****************************************************************************
** Meta object code from reading C++ file 'refinance_calculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../refinance_calculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'refinance_calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Refinance_Calculator_t {
    QByteArrayData data[11];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Refinance_Calculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Refinance_Calculator_t qt_meta_stringdata_Refinance_Calculator = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Refinance_Calculator"
QT_MOC_LITERAL(1, 21, 21), // "on_Balance_textEdited"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "arg1"
QT_MOC_LITERAL(4, 49, 19), // "on_CRate_textEdited"
QT_MOC_LITERAL(5, 69, 19), // "on_RRate_textEdited"
QT_MOC_LITERAL(6, 89, 19), // "on_CTerm_textEdited"
QT_MOC_LITERAL(7, 109, 19), // "on_RTerm_textEdited"
QT_MOC_LITERAL(8, 129, 23), // "on_PaidTimes_textEdited"
QT_MOC_LITERAL(9, 153, 22), // "on_ExtraFee_textEdited"
QT_MOC_LITERAL(10, 176, 20) // "on_Calculate_clicked"

    },
    "Refinance_Calculator\0on_Balance_textEdited\0"
    "\0arg1\0on_CRate_textEdited\0on_RRate_textEdited\0"
    "on_CTerm_textEdited\0on_RTerm_textEdited\0"
    "on_PaidTimes_textEdited\0on_ExtraFee_textEdited\0"
    "on_Calculate_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Refinance_Calculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void Refinance_Calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Refinance_Calculator *_t = static_cast<Refinance_Calculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Balance_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_CRate_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_RRate_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_CTerm_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_RTerm_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_PaidTimes_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_ExtraFee_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_Calculate_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Refinance_Calculator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Refinance_Calculator.data,
      qt_meta_data_Refinance_Calculator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Refinance_Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Refinance_Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Refinance_Calculator.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Refinance_Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
