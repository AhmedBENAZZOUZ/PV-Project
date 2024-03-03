/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Welcome;
    QLabel *title;
    QLabel *logoPi;
    QPushButton *welcomeButton;
    QWidget *Menu;
    QPushButton *student;
    QPushButton *teacher;
    QPushButton *matiere;
    QPushButton *gm;
    QWidget *Std_mgt;
    QPushButton *addStudent;
    QLineEdit *searchBar;
    QPushButton *returnBack;
    QPushButton *modifyStudent;
    QTableView *tableWidget;
    QWidget *TeacherMgt;
    QPushButton *addTeacher;
    QPushButton *modifyTeacher;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *returnBackProf;
    QLabel *label_2;
    QLineEdit *searchBarTeacher;
    QTableView *tableWidgetTeacher;
    QWidget *matMgt;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *returnBackMat;
    QLabel *label;
    QLineEdit *searchBarMat;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *addMat;
    QPushButton *modifyMat;
    QTableView *tableViewMat;
    QWidget *GM_mgt;
    QStackedWidget *stackedWidget_2;
    QWidget *Welcome_3;
    QLabel *title_3;
    QLabel *logoPi_3;
    QPushButton *welcomeButton_3;
    QWidget *Menu_3;
    QPushButton *student_3;
    QPushButton *teacher_3;
    QPushButton *matiere_3;
    QWidget *Std_mgt_3;
    QPushButton *addStudent_3;
    QLineEdit *searchBar_3;
    QTableWidget *tableWidget_3;
    QPushButton *returnBack_3;
    QPushButton *modifyStudent_3;
    QWidget *TeacherMgt_3;
    QTableWidget *tableWidgetTeacher_3;
    QPushButton *addTeacher_3;
    QPushButton *modifyTeacher_3;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *returnBackProf_3;
    QLabel *label_5;
    QLineEdit *searchBarTeacher_3;
    QWidget *matMgt_3;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *returnBackGM;
    QLabel *label_6;
    QLineEdit *searchBarGM;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *addGM;
    QPushButton *modifyGM;
    QTableView *tableViewGM;
    QLineEdit *lineEdit;
    QWidget *GM_mgt_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        Welcome = new QWidget();
        Welcome->setObjectName("Welcome");
        title = new QLabel(Welcome);
        title->setObjectName("title");
        title->setGeometry(QRect(70, 180, 670, 70));
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara")});
        font.setPointSize(42);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"rgb(255, 0, 0)\n"
"}"));
        logoPi = new QLabel(Welcome);
        logoPi->setObjectName("logoPi");
        logoPi->setGeometry(QRect(260, 40, 250, 70));
        logoPi->setPixmap(QPixmap(QString::fromUtf8("../../qt/pilogo.png")));
        logoPi->setScaledContents(true);
        welcomeButton = new QPushButton(Welcome);
        welcomeButton->setObjectName("welcomeButton");
        welcomeButton->setGeometry(QRect(320, 340, 150, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Terminal")});
        font1.setPointSize(14);
        font1.setBold(true);
        welcomeButton->setFont(font1);
        stackedWidget->addWidget(Welcome);
        Menu = new QWidget();
        Menu->setObjectName("Menu");
        student = new QPushButton(Menu);
        student->setObjectName("student");
        student->setGeometry(QRect(90, 120, 171, 61));
        QFont font2;
        font2.setPointSize(12);
        student->setFont(font2);
        student->setIconSize(QSize(24, 24));
        teacher = new QPushButton(Menu);
        teacher->setObjectName("teacher");
        teacher->setGeometry(QRect(490, 120, 171, 61));
        teacher->setFont(font2);
        teacher->setIconSize(QSize(24, 24));
        matiere = new QPushButton(Menu);
        matiere->setObjectName("matiere");
        matiere->setGeometry(QRect(90, 240, 171, 61));
        matiere->setFont(font2);
        matiere->setIconSize(QSize(24, 24));
        gm = new QPushButton(Menu);
        gm->setObjectName("gm");
        gm->setGeometry(QRect(490, 240, 171, 61));
        gm->setFont(font2);
        gm->setIconSize(QSize(24, 24));
        stackedWidget->addWidget(Menu);
        Std_mgt = new QWidget();
        Std_mgt->setObjectName("Std_mgt");
        addStudent = new QPushButton(Std_mgt);
        addStudent->setObjectName("addStudent");
        addStudent->setGeometry(QRect(520, 530, 120, 30));
        searchBar = new QLineEdit(Std_mgt);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(580, 10, 210, 24));
        searchBar->setStyleSheet(QString::fromUtf8("QLineEdit { padding-left: 20px; background-image: url(D:/Pi/CPP/qt/search.svg); background-position: left center; background-repeat: no-repeat; }"));
        returnBack = new QPushButton(Std_mgt);
        returnBack->setObjectName("returnBack");
        returnBack->setGeometry(QRect(10, 10, 40, 24));
        returnBack->setIconSize(QSize(20, 20));
        modifyStudent = new QPushButton(Std_mgt);
        modifyStudent->setObjectName("modifyStudent");
        modifyStudent->setGeometry(QRect(649, 530, 141, 30));
        tableWidget = new QTableView(Std_mgt);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 60, 780, 460));
        tableWidget->verticalHeader()->setVisible(false);
        stackedWidget->addWidget(Std_mgt);
        TeacherMgt = new QWidget();
        TeacherMgt->setObjectName("TeacherMgt");
        addTeacher = new QPushButton(TeacherMgt);
        addTeacher->setObjectName("addTeacher");
        addTeacher->setGeometry(QRect(520, 530, 120, 30));
        modifyTeacher = new QPushButton(TeacherMgt);
        modifyTeacher->setObjectName("modifyTeacher");
        modifyTeacher->setGeometry(QRect(649, 530, 141, 30));
        layoutWidget = new QWidget(TeacherMgt);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 784, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        returnBackProf = new QPushButton(layoutWidget);
        returnBackProf->setObjectName("returnBackProf");
        returnBackProf->setMinimumSize(QSize(40, 24));
        returnBackProf->setMaximumSize(QSize(40, 24));
        returnBackProf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 10px;\n"
"border: 1px solid #555555;\n"
"}"));

        horizontalLayout_3->addWidget(returnBackProf);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(520, 0));

        horizontalLayout_3->addWidget(label_2);

        searchBarTeacher = new QLineEdit(layoutWidget);
        searchBarTeacher->setObjectName("searchBarTeacher");
        searchBarTeacher->setMinimumSize(QSize(210, 24));
        searchBarTeacher->setMaximumSize(QSize(210, 24));
        searchBarTeacher->setStyleSheet(QString::fromUtf8("QLineEdit { padding-left: 20px; background-image: url(D:/Pi/CPP/qt/search.svg); background-position: left center; background-repeat: no-repeat; border-radius:10px;border: 1px solid #555555;}"));

        horizontalLayout_3->addWidget(searchBarTeacher);

        tableWidgetTeacher = new QTableView(TeacherMgt);
        tableWidgetTeacher->setObjectName("tableWidgetTeacher");
        tableWidgetTeacher->setGeometry(QRect(10, 60, 780, 460));
        tableWidgetTeacher->verticalHeader()->setVisible(false);
        stackedWidget->addWidget(TeacherMgt);
        matMgt = new QWidget();
        matMgt->setObjectName("matMgt");
        layoutWidget1 = new QWidget(matMgt);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 10, 784, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        returnBackMat = new QPushButton(layoutWidget1);
        returnBackMat->setObjectName("returnBackMat");
        returnBackMat->setMinimumSize(QSize(40, 24));
        returnBackMat->setMaximumSize(QSize(40, 24));
        returnBackMat->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 7px;\n"
"border: 1px solid #555555;\n"
"}"));
        returnBackMat->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(returnBackMat);

        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        label->setMinimumSize(QSize(520, 0));

        horizontalLayout->addWidget(label);

        searchBarMat = new QLineEdit(layoutWidget1);
        searchBarMat->setObjectName("searchBarMat");
        searchBarMat->setMinimumSize(QSize(210, 24));
        searchBarMat->setMaximumSize(QSize(210, 24));
        searchBarMat->setStyleSheet(QString::fromUtf8("QLineEdit { \n"
"padding-left: 20px;\n"
"background-image: url(D:/Pi/CPP/qt/search.svg);\n"
"background-position: left center;\n"
"background-repeat: no-repeat;\n"
"/*background-size: 10px 10px;*/\n"
"border-radius: 7px;\n"
"border: 1px solid #555555;\n"
"}"));

        horizontalLayout->addWidget(searchBarMat);

        layoutWidget2 = new QWidget(matMgt);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 530, 771, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addMat = new QPushButton(layoutWidget2);
        addMat->setObjectName("addMat");
        addMat->setMinimumSize(QSize(120, 30));
        addMat->setMaximumSize(QSize(120, 30));
        addMat->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 7px;\n"
"border: 1px solid #555555;\n"
"}"));

        horizontalLayout_2->addWidget(addMat);

        modifyMat = new QPushButton(layoutWidget2);
        modifyMat->setObjectName("modifyMat");
        modifyMat->setMinimumSize(QSize(140, 30));
        modifyMat->setMaximumSize(QSize(140, 30));
        modifyMat->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 7px;\n"
"border: 1px solid #555555;\n"
"}"));

        horizontalLayout_2->addWidget(modifyMat);

        tableViewMat = new QTableView(matMgt);
        tableViewMat->setObjectName("tableViewMat");
        tableViewMat->setGeometry(QRect(10, 50, 780, 460));
        tableViewMat->setStyleSheet(QString::fromUtf8(""));
        tableViewMat->verticalHeader()->setVisible(false);
        stackedWidget->addWidget(matMgt);
        GM_mgt = new QWidget();
        GM_mgt->setObjectName("GM_mgt");
        stackedWidget_2 = new QStackedWidget(GM_mgt);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(0, 0, 800, 600));
        Welcome_3 = new QWidget();
        Welcome_3->setObjectName("Welcome_3");
        title_3 = new QLabel(Welcome_3);
        title_3->setObjectName("title_3");
        title_3->setGeometry(QRect(70, 180, 670, 70));
        title_3->setFont(font);
        title_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"rgb(255, 0, 0)\n"
"}"));
        logoPi_3 = new QLabel(Welcome_3);
        logoPi_3->setObjectName("logoPi_3");
        logoPi_3->setGeometry(QRect(260, 40, 250, 70));
        logoPi_3->setPixmap(QPixmap(QString::fromUtf8("../../qt/pilogo.png")));
        logoPi_3->setScaledContents(true);
        welcomeButton_3 = new QPushButton(Welcome_3);
        welcomeButton_3->setObjectName("welcomeButton_3");
        welcomeButton_3->setGeometry(QRect(320, 340, 150, 40));
        welcomeButton_3->setFont(font1);
        stackedWidget_2->addWidget(Welcome_3);
        Menu_3 = new QWidget();
        Menu_3->setObjectName("Menu_3");
        student_3 = new QPushButton(Menu_3);
        student_3->setObjectName("student_3");
        student_3->setGeometry(QRect(90, 120, 171, 61));
        student_3->setFont(font2);
        student_3->setIconSize(QSize(24, 24));
        teacher_3 = new QPushButton(Menu_3);
        teacher_3->setObjectName("teacher_3");
        teacher_3->setGeometry(QRect(490, 120, 171, 61));
        teacher_3->setFont(font2);
        teacher_3->setIconSize(QSize(24, 24));
        matiere_3 = new QPushButton(Menu_3);
        matiere_3->setObjectName("matiere_3");
        matiere_3->setGeometry(QRect(90, 240, 171, 61));
        matiere_3->setFont(font2);
        matiere_3->setIconSize(QSize(24, 24));
        stackedWidget_2->addWidget(Menu_3);
        Std_mgt_3 = new QWidget();
        Std_mgt_3->setObjectName("Std_mgt_3");
        addStudent_3 = new QPushButton(Std_mgt_3);
        addStudent_3->setObjectName("addStudent_3");
        addStudent_3->setGeometry(QRect(520, 530, 120, 30));
        searchBar_3 = new QLineEdit(Std_mgt_3);
        searchBar_3->setObjectName("searchBar_3");
        searchBar_3->setGeometry(QRect(580, 10, 210, 24));
        searchBar_3->setStyleSheet(QString::fromUtf8("QLineEdit { padding-left: 20px; background-image: url(D:/Pi/CPP/qt/search.svg); background-position: left center; background-repeat: no-repeat; }"));
        tableWidget_3 = new QTableWidget(Std_mgt_3);
        if (tableWidget_3->columnCount() < 4)
            tableWidget_3->setColumnCount(4);
        QFont font3;
        font3.setPointSize(16);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font3);
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font3);
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font3);
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font3);
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_3->setObjectName("tableWidget_3");
        tableWidget_3->setEnabled(false);
        tableWidget_3->setGeometry(QRect(10, 60, 780, 460));
        tableWidget_3->setMinimumSize(QSize(771, 411));
        tableWidget_3->setMaximumSize(QSize(2000, 2000));
        tableWidget_3->setRowCount(0);
        tableWidget_3->verticalHeader()->setVisible(false);
        returnBack_3 = new QPushButton(Std_mgt_3);
        returnBack_3->setObjectName("returnBack_3");
        returnBack_3->setGeometry(QRect(10, 10, 40, 24));
        returnBack_3->setIconSize(QSize(20, 20));
        modifyStudent_3 = new QPushButton(Std_mgt_3);
        modifyStudent_3->setObjectName("modifyStudent_3");
        modifyStudent_3->setGeometry(QRect(649, 530, 141, 30));
        stackedWidget_2->addWidget(Std_mgt_3);
        TeacherMgt_3 = new QWidget();
        TeacherMgt_3->setObjectName("TeacherMgt_3");
        tableWidgetTeacher_3 = new QTableWidget(TeacherMgt_3);
        if (tableWidgetTeacher_3->columnCount() < 4)
            tableWidgetTeacher_3->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font3);
        tableWidgetTeacher_3->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font3);
        tableWidgetTeacher_3->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font3);
        tableWidgetTeacher_3->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font3);
        tableWidgetTeacher_3->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableWidgetTeacher_3->setObjectName("tableWidgetTeacher_3");
        tableWidgetTeacher_3->setEnabled(false);
        tableWidgetTeacher_3->setGeometry(QRect(10, 60, 780, 460));
        tableWidgetTeacher_3->setStyleSheet(QString::fromUtf8(""));
        tableWidgetTeacher_3->verticalHeader()->setVisible(false);
        addTeacher_3 = new QPushButton(TeacherMgt_3);
        addTeacher_3->setObjectName("addTeacher_3");
        addTeacher_3->setGeometry(QRect(520, 530, 120, 30));
        modifyTeacher_3 = new QPushButton(TeacherMgt_3);
        modifyTeacher_3->setObjectName("modifyTeacher_3");
        modifyTeacher_3->setGeometry(QRect(649, 530, 141, 30));
        layoutWidget_5 = new QWidget(TeacherMgt_3);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(10, 10, 784, 26));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        returnBackProf_3 = new QPushButton(layoutWidget_5);
        returnBackProf_3->setObjectName("returnBackProf_3");
        returnBackProf_3->setMinimumSize(QSize(40, 24));
        returnBackProf_3->setMaximumSize(QSize(40, 24));
        returnBackProf_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 10px;\n"
"border: 1px solid #555555;\n"
"}"));

        horizontalLayout_7->addWidget(returnBackProf_3);

        label_5 = new QLabel(layoutWidget_5);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(520, 0));

        horizontalLayout_7->addWidget(label_5);

        searchBarTeacher_3 = new QLineEdit(layoutWidget_5);
        searchBarTeacher_3->setObjectName("searchBarTeacher_3");
        searchBarTeacher_3->setMinimumSize(QSize(210, 24));
        searchBarTeacher_3->setMaximumSize(QSize(210, 24));
        searchBarTeacher_3->setStyleSheet(QString::fromUtf8("QLineEdit { padding-left: 20px; background-image: url(D:/Pi/CPP/qt/search.svg); background-position: left center; background-repeat: no-repeat; border-radius:10px;border: 1px solid #555555;}"));

        horizontalLayout_7->addWidget(searchBarTeacher_3);

        stackedWidget_2->addWidget(TeacherMgt_3);
        matMgt_3 = new QWidget();
        matMgt_3->setObjectName("matMgt_3");
        layoutWidget_6 = new QWidget(matMgt_3);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(10, 10, 784, 26));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        returnBackGM = new QPushButton(layoutWidget_6);
        returnBackGM->setObjectName("returnBackGM");
        returnBackGM->setMinimumSize(QSize(40, 24));
        returnBackGM->setMaximumSize(QSize(40, 24));
        returnBackGM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 7px;\n"
"border: 1px solid #555555;\n"
"}"));
        returnBackGM->setIconSize(QSize(20, 20));

        horizontalLayout_8->addWidget(returnBackGM);

        label_6 = new QLabel(layoutWidget_6);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(520, 0));

        horizontalLayout_8->addWidget(label_6);

        searchBarGM = new QLineEdit(layoutWidget_6);
        searchBarGM->setObjectName("searchBarGM");
        searchBarGM->setMinimumSize(QSize(210, 24));
        searchBarGM->setMaximumSize(QSize(210, 24));
        searchBarGM->setStyleSheet(QString::fromUtf8("QLineEdit { \n"
"padding-left: 20px;\n"
"background-image: url(D:/Pi/CPP/qt/search.svg);\n"
"background-position: left center;\n"
"background-repeat: no-repeat;\n"
"/*background-size: 10px 10px;*/\n"
"border-radius: 7px;\n"
"border: 1px solid #555555;\n"
"}"));

        horizontalLayout_8->addWidget(searchBarGM);

        layoutWidget_7 = new QWidget(matMgt_3);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(20, 530, 771, 32));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        addGM = new QPushButton(layoutWidget_7);
        addGM->setObjectName("addGM");
        addGM->setMinimumSize(QSize(150, 30));
        addGM->setMaximumSize(QSize(150, 30));
        addGM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 7px;\n"
"border: 1px solid #555555;\n"
"}"));

        horizontalLayout_9->addWidget(addGM);

        modifyGM = new QPushButton(layoutWidget_7);
        modifyGM->setObjectName("modifyGM");
        modifyGM->setMinimumSize(QSize(180, 30));
        modifyGM->setMaximumSize(QSize(180, 30));
        modifyGM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 7px;\n"
"border: 1px solid #555555;\n"
"}\n"
"QPushButton:hover { color: black; background-color: red; }"));

        horizontalLayout_9->addWidget(modifyGM);

        tableViewGM = new QTableView(matMgt_3);
        tableViewGM->setObjectName("tableViewGM");
        tableViewGM->setGeometry(QRect(10, 50, 780, 460));
        tableViewGM->setStyleSheet(QString::fromUtf8(""));
        tableViewGM->verticalHeader()->setVisible(false);
        lineEdit = new QLineEdit(matMgt_3);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 510, 61, 24));
        stackedWidget_2->addWidget(matMgt_3);
        GM_mgt_3 = new QWidget();
        GM_mgt_3->setObjectName("GM_mgt_3");
        stackedWidget_2->addWidget(GM_mgt_3);
        stackedWidget->addWidget(GM_mgt);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);
        stackedWidget_2->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Student Grade Managment", nullptr));
        logoPi->setText(QString());
        welcomeButton->setText(QCoreApplication::translate("MainWindow", "Welcome!", nullptr));
        student->setText(QCoreApplication::translate("MainWindow", "Students", nullptr));
        teacher->setText(QCoreApplication::translate("MainWindow", "Teachers", nullptr));
        matiere->setText(QCoreApplication::translate("MainWindow", "Matiere", nullptr));
        gm->setText(QCoreApplication::translate("MainWindow", "Goupe Module", nullptr));
        addStudent->setText(QCoreApplication::translate("MainWindow", "Add Student", nullptr));
        returnBack->setText(QString());
        modifyStudent->setText(QCoreApplication::translate("MainWindow", "Modify/Delete Student", nullptr));
        addTeacher->setText(QCoreApplication::translate("MainWindow", "Add Teacher", nullptr));
        modifyTeacher->setText(QCoreApplication::translate("MainWindow", "Modify/Delete Teacher", nullptr));
        returnBackProf->setText(QString());
        label_2->setText(QString());
        returnBackMat->setText(QString());
        label->setText(QString());
        addMat->setText(QCoreApplication::translate("MainWindow", "Add Matiere", nullptr));
        modifyMat->setText(QCoreApplication::translate("MainWindow", "Modify/Delete Matiere", nullptr));
        title_3->setText(QCoreApplication::translate("MainWindow", "Student Grade Managment", nullptr));
        logoPi_3->setText(QString());
        welcomeButton_3->setText(QCoreApplication::translate("MainWindow", "Welcome!", nullptr));
        student_3->setText(QCoreApplication::translate("MainWindow", "Students", nullptr));
        teacher_3->setText(QCoreApplication::translate("MainWindow", "Teachers", nullptr));
        matiere_3->setText(QCoreApplication::translate("MainWindow", "Matiere", nullptr));
        addStudent_3->setText(QCoreApplication::translate("MainWindow", "Add Student", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "N\302\260 inscri", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Surname", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Mail", nullptr));
        returnBack_3->setText(QString());
        modifyStudent_3->setText(QCoreApplication::translate("MainWindow", "Modify/Delete Student", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetTeacher_3->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "CNSS", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetTeacher_3->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetTeacher_3->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Surname", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetTeacher_3->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Mail", nullptr));
        addTeacher_3->setText(QCoreApplication::translate("MainWindow", "Add Teacher", nullptr));
        modifyTeacher_3->setText(QCoreApplication::translate("MainWindow", "Modify/Delete Teacher", nullptr));
        returnBackProf_3->setText(QString());
        label_5->setText(QString());
        returnBackGM->setText(QString());
        label_6->setText(QString());
        addGM->setText(QCoreApplication::translate("MainWindow", "Add/Modify Groupe M", nullptr));
        modifyGM->setText(QCoreApplication::translate("MainWindow", "Delete Selected Groupe M", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
