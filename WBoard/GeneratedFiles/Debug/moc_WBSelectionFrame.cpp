/****************************************************************************
** Meta object code from reading C++ file 'WBSelectionFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/domain/WBSelectionFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBSelectionFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBSelectionFrame_t {
    QByteArrayData data[13];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBSelectionFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBSelectionFrame_t qt_meta_stringdata_WBSelectionFrame = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WBSelectionFrame"
QT_MOC_LITERAL(1, 17, 17), // "setAntiScaleRatio"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "pAntiscaleRatio"
QT_MOC_LITERAL(4, 52, 13), // "onZoomChanged"
QT_MOC_LITERAL(5, 66, 5), // "pZoom"
QT_MOC_LITERAL(6, 72, 6), // "remove"
QT_MOC_LITERAL(7, 79, 9), // "duplicate"
QT_MOC_LITERAL(8, 89, 16), // "increaseZlevelUp"
QT_MOC_LITERAL(9, 106, 17), // "increaseZlevelTop"
QT_MOC_LITERAL(10, 124, 18), // "increaseZlevelDown"
QT_MOC_LITERAL(11, 143, 20), // "increaseZlevelBottom"
QT_MOC_LITERAL(12, 164, 10) // "groupItems"

    },
    "WBSelectionFrame\0setAntiScaleRatio\0\0"
    "pAntiscaleRatio\0onZoomChanged\0pZoom\0"
    "remove\0duplicate\0increaseZlevelUp\0"
    "increaseZlevelTop\0increaseZlevelDown\0"
    "increaseZlevelBottom\0groupItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBSelectionFrame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBSelectionFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBSelectionFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAntiScaleRatio((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->onZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->remove(); break;
        case 3: _t->duplicate(); break;
        case 4: _t->increaseZlevelUp(); break;
        case 5: _t->increaseZlevelTop(); break;
        case 6: _t->increaseZlevelDown(); break;
        case 7: _t->increaseZlevelBottom(); break;
        case 8: _t->groupItems(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBSelectionFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBSelectionFrame.data,
    qt_meta_data_WBSelectionFrame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBSelectionFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBSelectionFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBSelectionFrame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(this);
    return QObject::qt_metacast(_clname);
}

int WBSelectionFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
