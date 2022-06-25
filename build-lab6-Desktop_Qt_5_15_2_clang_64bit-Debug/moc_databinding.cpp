/****************************************************************************
** Meta object code from reading C++ file 'databinding.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../lab06/src/databinding.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databinding.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataBinding_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataBinding_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataBinding_t qt_meta_stringdata_DataBinding = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DataBinding"
QT_MOC_LITERAL(1, 12, 11), // "dataChanged"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "DataBinding\0dataChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataBinding[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void DataBinding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataBinding *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataBinding::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataBinding::dataChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DataBinding::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataBinding.data,
    qt_meta_data_DataBinding,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataBinding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataBinding::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataBinding.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataBinding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DataBinding::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_FloatBinding_t {
    QByteArrayData data[7];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FloatBinding_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FloatBinding_t qt_meta_stringdata_FloatBinding = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FloatBinding"
QT_MOC_LITERAL(1, 13, 9), // "updateInt"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "newValue"
QT_MOC_LITERAL(4, 33, 12), // "updateString"
QT_MOC_LITERAL(5, 46, 10), // "intChanged"
QT_MOC_LITERAL(6, 57, 13) // "stringChanged"

    },
    "FloatBinding\0updateInt\0\0newValue\0"
    "updateString\0intChanged\0stringChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FloatBinding[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void FloatBinding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FloatBinding *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->intChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->stringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FloatBinding::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FloatBinding::updateInt)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FloatBinding::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FloatBinding::updateString)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FloatBinding::staticMetaObject = { {
    QMetaObject::SuperData::link<DataBinding::staticMetaObject>(),
    qt_meta_stringdata_FloatBinding.data,
    qt_meta_data_FloatBinding,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FloatBinding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FloatBinding::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FloatBinding.stringdata0))
        return static_cast<void*>(this);
    return DataBinding::qt_metacast(_clname);
}

int FloatBinding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DataBinding::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FloatBinding::updateInt(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FloatBinding::updateString(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ColorBinding_t {
    QByteArrayData data[10];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorBinding_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorBinding_t qt_meta_stringdata_ColorBinding = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ColorBinding"
QT_MOC_LITERAL(1, 13, 13), // "updateRString"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "newValue"
QT_MOC_LITERAL(4, 37, 13), // "updateGString"
QT_MOC_LITERAL(5, 51, 13), // "updateBString"
QT_MOC_LITERAL(6, 65, 12), // "buttonPushed"
QT_MOC_LITERAL(7, 78, 14), // "rStringChanged"
QT_MOC_LITERAL(8, 93, 14), // "gStringChanged"
QT_MOC_LITERAL(9, 108, 14) // "bStringChanged"

    },
    "ColorBinding\0updateRString\0\0newValue\0"
    "updateGString\0updateBString\0buttonPushed\0"
    "rStringChanged\0gStringChanged\0"
    "bStringChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorBinding[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
       9,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void ColorBinding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorBinding *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateRString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateGString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->updateBString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->buttonPushed(); break;
        case 4: _t->rStringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->gStringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->bStringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorBinding::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorBinding::updateRString)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorBinding::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorBinding::updateGString)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColorBinding::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorBinding::updateBString)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColorBinding::staticMetaObject = { {
    QMetaObject::SuperData::link<DataBinding::staticMetaObject>(),
    qt_meta_stringdata_ColorBinding.data,
    qt_meta_data_ColorBinding,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorBinding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorBinding::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorBinding.stringdata0))
        return static_cast<void*>(this);
    return DataBinding::qt_metacast(_clname);
}

int ColorBinding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DataBinding::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ColorBinding::updateRString(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ColorBinding::updateGString(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ColorBinding::updateBString(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
