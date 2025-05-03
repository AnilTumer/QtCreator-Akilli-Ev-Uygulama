/****************************************************************************
** Meta object code from reading C++ file 'roommenu2.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../roommenu2.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roommenu2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN9roommenu2E_t {};
} // unnamed namespace

template <> constexpr inline auto roommenu2::qt_create_metaobjectdata<qt_meta_tag_ZN9roommenu2E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "roommenu2",
        "on_pushButtonOk_clicked",
        "",
        "on_pushButtonCancel_clicked",
        "on_lineEditSaksiAdi_textEdited",
        "arg1",
        "on_horizontalSlider_valueChanged",
        "value",
        "on_lineEditSaksiAdi_returnPressed",
        "on_spinBoxSaksilar_valueChanged",
        "on_pushButtonYeniSaksiAdiOnay_clicked",
        "on_pushButtonSilinecekSaksiOnay_clicked",
        "on_checkBoxYangin_checkStateChanged",
        "Qt::CheckState",
        "on_checkBoxSuBaskini_checkStateChanged",
        "on_checkBoxHirsiz_checkStateChanged",
        "on_pushButtonPerdeOpen_clicked",
        "on_pushButtonPerdeClose_clicked",
        "on_horizontalSliderPerde_valueChanged",
        "on_verticalSliderKlima_valueChanged",
        "on_pushButtonKlimaOpen_clicked",
        "on_pushButtonKlimaClose_clicked",
        "on_lineEditYeniSaksiAdi_returnPressed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_pushButtonOk_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonCancel_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lineEditSaksiAdi_textEdited'
        QtMocHelpers::SlotData<void(const QString &)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'on_horizontalSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'on_lineEditSaksiAdi_returnPressed'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_spinBoxSaksilar_valueChanged'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'on_pushButtonYeniSaksiAdiOnay_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSilinecekSaksiOnay_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_checkBoxYangin_checkStateChanged'
        QtMocHelpers::SlotData<void(const Qt::CheckState &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 5 },
        }}),
        // Slot 'on_checkBoxSuBaskini_checkStateChanged'
        QtMocHelpers::SlotData<void(const Qt::CheckState &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 5 },
        }}),
        // Slot 'on_checkBoxHirsiz_checkStateChanged'
        QtMocHelpers::SlotData<void(const Qt::CheckState &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 5 },
        }}),
        // Slot 'on_pushButtonPerdeOpen_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonPerdeClose_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_horizontalSliderPerde_valueChanged'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'on_verticalSliderKlima_valueChanged'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'on_pushButtonKlimaOpen_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonKlimaClose_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lineEditYeniSaksiAdi_returnPressed'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<roommenu2, qt_meta_tag_ZN9roommenu2E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject roommenu2::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9roommenu2E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9roommenu2E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9roommenu2E_t>.metaTypes,
    nullptr
} };

void roommenu2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<roommenu2 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_pushButtonOk_clicked(); break;
        case 1: _t->on_pushButtonCancel_clicked(); break;
        case 2: _t->on_lineEditSaksiAdi_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_lineEditSaksiAdi_returnPressed(); break;
        case 5: _t->on_spinBoxSaksilar_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_pushButtonYeniSaksiAdiOnay_clicked(); break;
        case 7: _t->on_pushButtonSilinecekSaksiOnay_clicked(); break;
        case 8: _t->on_checkBoxYangin_checkStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 9: _t->on_checkBoxSuBaskini_checkStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 10: _t->on_checkBoxHirsiz_checkStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 11: _t->on_pushButtonPerdeOpen_clicked(); break;
        case 12: _t->on_pushButtonPerdeClose_clicked(); break;
        case 13: _t->on_horizontalSliderPerde_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_verticalSliderKlima_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_pushButtonKlimaOpen_clicked(); break;
        case 16: _t->on_pushButtonKlimaClose_clicked(); break;
        case 17: _t->on_lineEditYeniSaksiAdi_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObject *roommenu2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *roommenu2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9roommenu2E_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int roommenu2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
