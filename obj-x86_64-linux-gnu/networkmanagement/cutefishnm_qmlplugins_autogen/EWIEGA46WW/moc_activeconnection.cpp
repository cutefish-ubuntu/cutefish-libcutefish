/****************************************************************************
** Meta object code from reading C++ file 'activeconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../networkmanagement/activeconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activeconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActiveConnection_t {
    QByteArrayData data[14];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActiveConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActiveConnection_t qt_meta_stringdata_ActiveConnection = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ActiveConnection"
QT_MOC_LITERAL(1, 17, 19), // "wirelessNameChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "wirelessIconChanged"
QT_MOC_LITERAL(4, 58, 13), // "statusChanged"
QT_MOC_LITERAL(5, 72, 22), // "NetworkManager::Status"
QT_MOC_LITERAL(6, 95, 6), // "status"
QT_MOC_LITERAL(7, 102, 18), // "updateWirelessIcon"
QT_MOC_LITERAL(8, 121, 27), // "NetworkManager::Device::Ptr"
QT_MOC_LITERAL(9, 149, 6), // "device"
QT_MOC_LITERAL(10, 156, 35), // "updateWirelessIconForSignalSt..."
QT_MOC_LITERAL(11, 192, 8), // "strength"
QT_MOC_LITERAL(12, 201, 12), // "wirelessName"
QT_MOC_LITERAL(13, 214, 12) // "wirelessIcon"

    },
    "ActiveConnection\0wirelessNameChanged\0"
    "\0wirelessIconChanged\0statusChanged\0"
    "NetworkManager::Status\0status\0"
    "updateWirelessIcon\0NetworkManager::Device::Ptr\0"
    "device\0updateWirelessIconForSignalStrength\0"
    "strength\0wirelessName\0wirelessIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActiveConnection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x08 /* Private */,
       7,    1,   44,    2, 0x08 /* Private */,
      10,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00495001,
      13, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ActiveConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActiveConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wirelessNameChanged(); break;
        case 1: _t->wirelessIconChanged(); break;
        case 2: _t->statusChanged((*reinterpret_cast< NetworkManager::Status(*)>(_a[1]))); break;
        case 3: _t->updateWirelessIcon((*reinterpret_cast< NetworkManager::Device::Ptr(*)>(_a[1]))); break;
        case 4: _t->updateWirelessIconForSignalStrength((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActiveConnection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActiveConnection::wirelessNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActiveConnection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActiveConnection::wirelessIconChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActiveConnection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->wirelessName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->wirelessIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ActiveConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActiveConnection.data,
    qt_meta_data_ActiveConnection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActiveConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActiveConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActiveConnection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActiveConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ActiveConnection::wirelessNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ActiveConnection::wirelessIconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
