/****************************************************************************
** Meta object code from reading C++ file 'admindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../admindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminDialog_t {
    QByteArrayData data[16];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminDialog_t qt_meta_stringdata_AdminDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AdminDialog"
QT_MOC_LITERAL(1, 12, 8), // "openChat"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "myclose"
QT_MOC_LITERAL(4, 30, 12), // "amountUpdate"
QT_MOC_LITERAL(5, 43, 13), // "incomeUpdate1"
QT_MOC_LITERAL(6, 57, 13), // "incomeUpdate2"
QT_MOC_LITERAL(7, 71, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 95, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(9, 119, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(10, 143, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(11, 165, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(12, 189, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(13, 213, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(14, 237, 18), // "on_boardBt_clicked"
QT_MOC_LITERAL(15, 256, 20) // "on_deplaneBt_clicked"

    },
    "AdminDialog\0openChat\0\0myclose\0"
    "amountUpdate\0incomeUpdate1\0incomeUpdate2\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_7_clicked\0on_boardBt_clicked\0"
    "on_deplaneBt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void AdminDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openChat(); break;
        case 1: _t->myclose(); break;
        case 2: _t->amountUpdate(); break;
        case 3: _t->incomeUpdate1(); break;
        case 4: _t->incomeUpdate2(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        case 7: _t->on_pushButton_6_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->on_pushButton_5_clicked(); break;
        case 11: _t->on_pushButton_7_clicked(); break;
        case 12: _t->on_boardBt_clicked(); break;
        case 13: _t->on_deplaneBt_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AdminDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_AdminDialog.data,
    qt_meta_data_AdminDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdminDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdminDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
