/****************************************************************************
** Meta object code from reading C++ file 'QtSongPlaylist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../QtSongPlaylist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtSongPlaylist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtSongPlaylist_t {
    QByteArrayData data[11];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtSongPlaylist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtSongPlaylist_t qt_meta_stringdata_QtSongPlaylist = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QtSongPlaylist"
QT_MOC_LITERAL(1, 15, 23), // "on_LyricsButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(4, 61, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(5, 85, 27), // "on_Next_in_Playlist_clicked"
QT_MOC_LITERAL(6, 113, 31), // "on_deletePlaylistButton_clicked"
QT_MOC_LITERAL(7, 145, 28), // "on_SortbyTitleButton_clicked"
QT_MOC_LITERAL(8, 174, 30), // "on_sortByArtistsButton_clicked"
QT_MOC_LITERAL(9, 205, 26), // "on_RandomiseButton_clicked"
QT_MOC_LITERAL(10, 232, 21) // "on_playButton_clicked"

    },
    "QtSongPlaylist\0on_LyricsButton_clicked\0"
    "\0on_addButton_clicked\0on_deleteButton_clicked\0"
    "on_Next_in_Playlist_clicked\0"
    "on_deletePlaylistButton_clicked\0"
    "on_SortbyTitleButton_clicked\0"
    "on_sortByArtistsButton_clicked\0"
    "on_RandomiseButton_clicked\0"
    "on_playButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtSongPlaylist[] = {

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
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

       0        // eod
};

void QtSongPlaylist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtSongPlaylist *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_LyricsButton_clicked(); break;
        case 1: _t->on_addButton_clicked(); break;
        case 2: _t->on_deleteButton_clicked(); break;
        case 3: _t->on_Next_in_Playlist_clicked(); break;
        case 4: _t->on_deletePlaylistButton_clicked(); break;
        case 5: _t->on_SortbyTitleButton_clicked(); break;
        case 6: _t->on_sortByArtistsButton_clicked(); break;
        case 7: _t->on_RandomiseButton_clicked(); break;
        case 8: _t->on_playButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QtSongPlaylist::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_QtSongPlaylist.data,
    qt_meta_data_QtSongPlaylist,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtSongPlaylist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSongPlaylist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtSongPlaylist.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QtSongPlaylist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
