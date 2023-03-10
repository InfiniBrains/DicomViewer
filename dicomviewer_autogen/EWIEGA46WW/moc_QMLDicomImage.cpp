/****************************************************************************
** Meta object code from reading C++ file 'QMLDicomImage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../QMLDicomImage.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QMLDicomImage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_QMLDicomImage_t {
    uint offsetsAndSizes[12];
    char stringdata0[14];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[18];
    char stringdata5[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QMLDicomImage_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QMLDicomImage_t qt_meta_stringdata_QMLDicomImage = {
    {
        QT_MOC_LITERAL(0, 13),  // "QMLDicomImage"
        QT_MOC_LITERAL(14, 9),  // "getPixmap"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 8),  // "openFile"
        QT_MOC_LITERAL(34, 17),  // "std::vector<char>"
        QT_MOC_LITERAL(52, 4)   // "data"
    },
    "QMLDicomImage",
    "getPixmap",
    "",
    "openFile",
    "std::vector<char>",
    "data"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QMLDicomImage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x02,    1 /* Public */,
       3,    1,   27,    2, 0x02,    2 /* Public */,

 // methods: parameters
    QMetaType::QPixmap,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMLDicomImage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QMLDicomImage.offsetsAndSizes,
    qt_meta_data_QMLDicomImage,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QMLDicomImage_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMLDicomImage, std::true_type>,
        // method 'getPixmap'
        QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>,
        // method 'openFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<char>, std::false_type>
    >,
    nullptr
} };

void QMLDicomImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMLDicomImage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QPixmap _r = _t->getPixmap();
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->openFile((*reinterpret_cast< std::add_pointer_t<std::vector<char>>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QMLDicomImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMLDicomImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMLDicomImage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMLDicomImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
