/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PV-Project/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_welcomeButton_clicked",
    "",
    "on_student_clicked",
    "on_teacher_clicked",
    "on_matiere_clicked",
    "on_gm_clicked",
    "populateTableWithStudents",
    "customizeTableView",
    "searchStudents",
    "onSearchBarTextChanged",
    "on_addStudent_clicked",
    "on_returnBack_clicked",
    "on_modifyStudent_clicked",
    "populateTableUpdateStudent",
    "customizeTableViewUpdate",
    "displaySelectedStudent",
    "QModelIndex",
    "UpdateStudent",
    "deleteStudent",
    "clearLineEdits",
    "populateTableWithTeachears",
    "customizeTableViewTeacher",
    "searchTeacher",
    "on_searchBarTeacher_textChanged",
    "on_addTeacher_clicked",
    "on_returnBackProf_clicked",
    "on_modifyTeacher_clicked",
    "populateTableUpdateTeacher",
    "customizeTableViewUpdateTeacher",
    "displaySelectedTeacher",
    "UpdateTeacher",
    "deleteTeacher",
    "clearLineEditsTeacher",
    "populateTableWithMat",
    "customizeTableViewMat",
    "searchMat",
    "on_searchBarMat_textChanged",
    "on_addMat_clicked",
    "on_returnBackMat_clicked",
    "PopulateTeacher",
    "customizeTableViewUpdateMat",
    "populateTableUpdateMat",
    "on_modifyMat_clicked",
    "clearLineEditsMat",
    "displaySelectedMat",
    "deleteMat",
    "UpdateMat",
    "on_returnBackGM_clicked",
    "customizeTableViewGM",
    "populateTableWithGM",
    "on_addGM_clicked",
    "ajoutGM",
    "displayselectedmat",
    "ToListeMat",
    "deleteGm",
    "displayselectedgm"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[114];
    char stringdata0[11];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[19];
    char stringdata5[19];
    char stringdata6[14];
    char stringdata7[26];
    char stringdata8[19];
    char stringdata9[15];
    char stringdata10[23];
    char stringdata11[22];
    char stringdata12[22];
    char stringdata13[25];
    char stringdata14[27];
    char stringdata15[25];
    char stringdata16[23];
    char stringdata17[12];
    char stringdata18[14];
    char stringdata19[14];
    char stringdata20[15];
    char stringdata21[27];
    char stringdata22[26];
    char stringdata23[14];
    char stringdata24[32];
    char stringdata25[22];
    char stringdata26[26];
    char stringdata27[25];
    char stringdata28[27];
    char stringdata29[32];
    char stringdata30[23];
    char stringdata31[14];
    char stringdata32[14];
    char stringdata33[22];
    char stringdata34[21];
    char stringdata35[22];
    char stringdata36[10];
    char stringdata37[28];
    char stringdata38[18];
    char stringdata39[25];
    char stringdata40[16];
    char stringdata41[28];
    char stringdata42[23];
    char stringdata43[21];
    char stringdata44[18];
    char stringdata45[19];
    char stringdata46[10];
    char stringdata47[10];
    char stringdata48[24];
    char stringdata49[21];
    char stringdata50[20];
    char stringdata51[17];
    char stringdata52[8];
    char stringdata53[19];
    char stringdata54[11];
    char stringdata55[9];
    char stringdata56[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 24),  // "on_welcomeButton_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 18),  // "on_student_clicked"
        QT_MOC_LITERAL(56, 18),  // "on_teacher_clicked"
        QT_MOC_LITERAL(75, 18),  // "on_matiere_clicked"
        QT_MOC_LITERAL(94, 13),  // "on_gm_clicked"
        QT_MOC_LITERAL(108, 25),  // "populateTableWithStudents"
        QT_MOC_LITERAL(134, 18),  // "customizeTableView"
        QT_MOC_LITERAL(153, 14),  // "searchStudents"
        QT_MOC_LITERAL(168, 22),  // "onSearchBarTextChanged"
        QT_MOC_LITERAL(191, 21),  // "on_addStudent_clicked"
        QT_MOC_LITERAL(213, 21),  // "on_returnBack_clicked"
        QT_MOC_LITERAL(235, 24),  // "on_modifyStudent_clicked"
        QT_MOC_LITERAL(260, 26),  // "populateTableUpdateStudent"
        QT_MOC_LITERAL(287, 24),  // "customizeTableViewUpdate"
        QT_MOC_LITERAL(312, 22),  // "displaySelectedStudent"
        QT_MOC_LITERAL(335, 11),  // "QModelIndex"
        QT_MOC_LITERAL(347, 13),  // "UpdateStudent"
        QT_MOC_LITERAL(361, 13),  // "deleteStudent"
        QT_MOC_LITERAL(375, 14),  // "clearLineEdits"
        QT_MOC_LITERAL(390, 26),  // "populateTableWithTeachears"
        QT_MOC_LITERAL(417, 25),  // "customizeTableViewTeacher"
        QT_MOC_LITERAL(443, 13),  // "searchTeacher"
        QT_MOC_LITERAL(457, 31),  // "on_searchBarTeacher_textChanged"
        QT_MOC_LITERAL(489, 21),  // "on_addTeacher_clicked"
        QT_MOC_LITERAL(511, 25),  // "on_returnBackProf_clicked"
        QT_MOC_LITERAL(537, 24),  // "on_modifyTeacher_clicked"
        QT_MOC_LITERAL(562, 26),  // "populateTableUpdateTeacher"
        QT_MOC_LITERAL(589, 31),  // "customizeTableViewUpdateTeacher"
        QT_MOC_LITERAL(621, 22),  // "displaySelectedTeacher"
        QT_MOC_LITERAL(644, 13),  // "UpdateTeacher"
        QT_MOC_LITERAL(658, 13),  // "deleteTeacher"
        QT_MOC_LITERAL(672, 21),  // "clearLineEditsTeacher"
        QT_MOC_LITERAL(694, 20),  // "populateTableWithMat"
        QT_MOC_LITERAL(715, 21),  // "customizeTableViewMat"
        QT_MOC_LITERAL(737, 9),  // "searchMat"
        QT_MOC_LITERAL(747, 27),  // "on_searchBarMat_textChanged"
        QT_MOC_LITERAL(775, 17),  // "on_addMat_clicked"
        QT_MOC_LITERAL(793, 24),  // "on_returnBackMat_clicked"
        QT_MOC_LITERAL(818, 15),  // "PopulateTeacher"
        QT_MOC_LITERAL(834, 27),  // "customizeTableViewUpdateMat"
        QT_MOC_LITERAL(862, 22),  // "populateTableUpdateMat"
        QT_MOC_LITERAL(885, 20),  // "on_modifyMat_clicked"
        QT_MOC_LITERAL(906, 17),  // "clearLineEditsMat"
        QT_MOC_LITERAL(924, 18),  // "displaySelectedMat"
        QT_MOC_LITERAL(943, 9),  // "deleteMat"
        QT_MOC_LITERAL(953, 9),  // "UpdateMat"
        QT_MOC_LITERAL(963, 23),  // "on_returnBackGM_clicked"
        QT_MOC_LITERAL(987, 20),  // "customizeTableViewGM"
        QT_MOC_LITERAL(1008, 19),  // "populateTableWithGM"
        QT_MOC_LITERAL(1028, 16),  // "on_addGM_clicked"
        QT_MOC_LITERAL(1045, 7),  // "ajoutGM"
        QT_MOC_LITERAL(1053, 18),  // "displayselectedmat"
        QT_MOC_LITERAL(1072, 10),  // "ToListeMat"
        QT_MOC_LITERAL(1083, 8),  // "deleteGm"
        QT_MOC_LITERAL(1092, 17)   // "displayselectedgm"
    },
    "MainWindow",
    "on_welcomeButton_clicked",
    "",
    "on_student_clicked",
    "on_teacher_clicked",
    "on_matiere_clicked",
    "on_gm_clicked",
    "populateTableWithStudents",
    "customizeTableView",
    "searchStudents",
    "onSearchBarTextChanged",
    "on_addStudent_clicked",
    "on_returnBack_clicked",
    "on_modifyStudent_clicked",
    "populateTableUpdateStudent",
    "customizeTableViewUpdate",
    "displaySelectedStudent",
    "QModelIndex",
    "UpdateStudent",
    "deleteStudent",
    "clearLineEdits",
    "populateTableWithTeachears",
    "customizeTableViewTeacher",
    "searchTeacher",
    "on_searchBarTeacher_textChanged",
    "on_addTeacher_clicked",
    "on_returnBackProf_clicked",
    "on_modifyTeacher_clicked",
    "populateTableUpdateTeacher",
    "customizeTableViewUpdateTeacher",
    "displaySelectedTeacher",
    "UpdateTeacher",
    "deleteTeacher",
    "clearLineEditsTeacher",
    "populateTableWithMat",
    "customizeTableViewMat",
    "searchMat",
    "on_searchBarMat_textChanged",
    "on_addMat_clicked",
    "on_returnBackMat_clicked",
    "PopulateTeacher",
    "customizeTableViewUpdateMat",
    "populateTableUpdateMat",
    "on_modifyMat_clicked",
    "clearLineEditsMat",
    "displaySelectedMat",
    "deleteMat",
    "UpdateMat",
    "on_returnBackGM_clicked",
    "customizeTableViewGM",
    "populateTableWithGM",
    "on_addGM_clicked",
    "ajoutGM",
    "displayselectedmat",
    "ToListeMat",
    "deleteGm",
    "displayselectedgm"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  338,    2, 0x08,    1 /* Private */,
       3,    0,  339,    2, 0x08,    2 /* Private */,
       4,    0,  340,    2, 0x08,    3 /* Private */,
       5,    0,  341,    2, 0x08,    4 /* Private */,
       6,    0,  342,    2, 0x08,    5 /* Private */,
       7,    0,  343,    2, 0x08,    6 /* Private */,
       8,    0,  344,    2, 0x08,    7 /* Private */,
       9,    1,  345,    2, 0x08,    8 /* Private */,
      10,    1,  348,    2, 0x08,   10 /* Private */,
      11,    0,  351,    2, 0x08,   12 /* Private */,
      12,    0,  352,    2, 0x08,   13 /* Private */,
      13,    0,  353,    2, 0x08,   14 /* Private */,
      14,    0,  354,    2, 0x08,   15 /* Private */,
      15,    0,  355,    2, 0x08,   16 /* Private */,
      16,    1,  356,    2, 0x08,   17 /* Private */,
      18,    0,  359,    2, 0x08,   19 /* Private */,
      19,    0,  360,    2, 0x08,   20 /* Private */,
      20,    0,  361,    2, 0x08,   21 /* Private */,
      21,    0,  362,    2, 0x08,   22 /* Private */,
      22,    0,  363,    2, 0x08,   23 /* Private */,
      23,    1,  364,    2, 0x08,   24 /* Private */,
      24,    1,  367,    2, 0x08,   26 /* Private */,
      25,    0,  370,    2, 0x08,   28 /* Private */,
      26,    0,  371,    2, 0x08,   29 /* Private */,
      27,    0,  372,    2, 0x08,   30 /* Private */,
      28,    0,  373,    2, 0x08,   31 /* Private */,
      29,    0,  374,    2, 0x08,   32 /* Private */,
      30,    1,  375,    2, 0x08,   33 /* Private */,
      31,    0,  378,    2, 0x08,   35 /* Private */,
      32,    0,  379,    2, 0x08,   36 /* Private */,
      33,    0,  380,    2, 0x08,   37 /* Private */,
      34,    0,  381,    2, 0x08,   38 /* Private */,
      35,    0,  382,    2, 0x08,   39 /* Private */,
      36,    1,  383,    2, 0x08,   40 /* Private */,
      37,    1,  386,    2, 0x08,   42 /* Private */,
      38,    0,  389,    2, 0x08,   44 /* Private */,
      39,    0,  390,    2, 0x08,   45 /* Private */,
      40,    0,  391,    2, 0x08,   46 /* Private */,
      41,    0,  392,    2, 0x08,   47 /* Private */,
      42,    0,  393,    2, 0x08,   48 /* Private */,
      43,    0,  394,    2, 0x08,   49 /* Private */,
      44,    0,  395,    2, 0x08,   50 /* Private */,
      45,    1,  396,    2, 0x08,   51 /* Private */,
      46,    0,  399,    2, 0x08,   53 /* Private */,
      47,    0,  400,    2, 0x08,   54 /* Private */,
      48,    0,  401,    2, 0x08,   55 /* Private */,
      49,    0,  402,    2, 0x08,   56 /* Private */,
      50,    0,  403,    2, 0x08,   57 /* Private */,
      51,    0,  404,    2, 0x08,   58 /* Private */,
      52,    0,  405,    2, 0x08,   59 /* Private */,
      53,    1,  406,    2, 0x08,   60 /* Private */,
      54,    1,  409,    2, 0x08,   62 /* Private */,
      55,    0,  412,    2, 0x08,   64 /* Private */,
      56,    1,  413,    2, 0x08,   65 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_welcomeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_student_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_teacher_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_matiere_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_gm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'populateTableWithStudents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customizeTableView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchStudents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onSearchBarTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_addStudent_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_returnBack_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modifyStudent_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'populateTableUpdateStudent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customizeTableViewUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displaySelectedStudent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'UpdateStudent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteStudent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearLineEdits'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'populateTableWithTeachears'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customizeTableViewTeacher'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchTeacher'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_searchBarTeacher_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_addTeacher_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_returnBackProf_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modifyTeacher_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'populateTableUpdateTeacher'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customizeTableViewUpdateTeacher'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displaySelectedTeacher'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'UpdateTeacher'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteTeacher'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearLineEditsTeacher'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'populateTableWithMat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customizeTableViewMat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchMat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_searchBarMat_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_addMat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_returnBackMat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PopulateTeacher'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customizeTableViewUpdateMat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'populateTableUpdateMat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modifyMat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearLineEditsMat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displaySelectedMat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'deleteMat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateMat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_returnBackGM_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customizeTableViewGM'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'populateTableWithGM'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addGM_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ajoutGM'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayselectedmat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'ToListeMat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'deleteGm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayselectedgm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_welcomeButton_clicked(); break;
        case 1: _t->on_student_clicked(); break;
        case 2: _t->on_teacher_clicked(); break;
        case 3: _t->on_matiere_clicked(); break;
        case 4: _t->on_gm_clicked(); break;
        case 5: _t->populateTableWithStudents(); break;
        case 6: _t->customizeTableView(); break;
        case 7: _t->searchStudents((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->onSearchBarTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_addStudent_clicked(); break;
        case 10: _t->on_returnBack_clicked(); break;
        case 11: _t->on_modifyStudent_clicked(); break;
        case 12: _t->populateTableUpdateStudent(); break;
        case 13: _t->customizeTableViewUpdate(); break;
        case 14: _t->displaySelectedStudent((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 15: _t->UpdateStudent(); break;
        case 16: _t->deleteStudent(); break;
        case 17: _t->clearLineEdits(); break;
        case 18: _t->populateTableWithTeachears(); break;
        case 19: _t->customizeTableViewTeacher(); break;
        case 20: _t->searchTeacher((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->on_searchBarTeacher_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->on_addTeacher_clicked(); break;
        case 23: _t->on_returnBackProf_clicked(); break;
        case 24: _t->on_modifyTeacher_clicked(); break;
        case 25: _t->populateTableUpdateTeacher(); break;
        case 26: _t->customizeTableViewUpdateTeacher(); break;
        case 27: _t->displaySelectedTeacher((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 28: _t->UpdateTeacher(); break;
        case 29: _t->deleteTeacher(); break;
        case 30: _t->clearLineEditsTeacher(); break;
        case 31: _t->populateTableWithMat(); break;
        case 32: _t->customizeTableViewMat(); break;
        case 33: _t->searchMat((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 34: _t->on_searchBarMat_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 35: _t->on_addMat_clicked(); break;
        case 36: _t->on_returnBackMat_clicked(); break;
        case 37: _t->PopulateTeacher(); break;
        case 38: _t->customizeTableViewUpdateMat(); break;
        case 39: _t->populateTableUpdateMat(); break;
        case 40: _t->on_modifyMat_clicked(); break;
        case 41: _t->clearLineEditsMat(); break;
        case 42: _t->displaySelectedMat((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 43: _t->deleteMat(); break;
        case 44: _t->UpdateMat(); break;
        case 45: _t->on_returnBackGM_clicked(); break;
        case 46: _t->customizeTableViewGM(); break;
        case 47: _t->populateTableWithGM(); break;
        case 48: _t->on_addGM_clicked(); break;
        case 49: _t->ajoutGM(); break;
        case 50: _t->displayselectedmat((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 51: _t->ToListeMat((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 52: _t->deleteGm(); break;
        case 53: _t->displayselectedgm((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 54;
    }
    return _id;
}
QT_WARNING_POP
