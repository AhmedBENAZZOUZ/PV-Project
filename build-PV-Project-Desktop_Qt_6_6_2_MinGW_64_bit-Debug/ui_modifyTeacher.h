/********************************************************************************
** Form generated from reading UI file 'modifyTeacher.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYTEACHER_H
#define UI_MODIFYTEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyTeacher
{
public:
    QTableView *tableViewUpdateTeacher;
    QLabel *title;
    QLineEdit *name;
    QPushButton *clearTeacherButton;
    QPushButton *cancelTeacherButton;
    QLabel *label_2;
    QLineEdit *mail;
    QPushButton *updateTeacherButton;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *surname;
    QPushButton *deleteTeacherButton;
    QLabel *label;
    QLineEdit *cnss;

    void setupUi(QWidget *modifyTeacher)
    {
        if (modifyTeacher->objectName().isEmpty())
            modifyTeacher->setObjectName("modifyTeacher");
        modifyTeacher->resize(700, 500);
        tableViewUpdateTeacher = new QTableView(modifyTeacher);
        tableViewUpdateTeacher->setObjectName("tableViewUpdateTeacher");
        tableViewUpdateTeacher->setGeometry(QRect(10, 90, 410, 400));
        tableViewUpdateTeacher->verticalHeader()->setVisible(false);
        title = new QLabel(modifyTeacher);
        title->setObjectName("title");
        title->setGeometry(QRect(190, 20, 291, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Sans Serif")});
        font.setPointSize(25);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("QLabel{color: rgb(198, 0, 0);}"));
        name = new QLineEdit(modifyTeacher);
        name->setObjectName("name");
        name->setGeometry(QRect(560, 190, 100, 25));
        clearTeacherButton = new QPushButton(modifyTeacher);
        clearTeacherButton->setObjectName("clearTeacherButton");
        clearTeacherButton->setGeometry(QRect(470, 370, 80, 24));
        cancelTeacherButton = new QPushButton(modifyTeacher);
        cancelTeacherButton->setObjectName("cancelTeacherButton");
        cancelTeacherButton->setGeometry(QRect(570, 370, 80, 24));
        label_2 = new QLabel(modifyTeacher);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(570, 170, 91, 16));
        mail = new QLineEdit(modifyTeacher);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(560, 250, 100, 25));
        updateTeacherButton = new QPushButton(modifyTeacher);
        updateTeacherButton->setObjectName("updateTeacherButton");
        updateTeacherButton->setGeometry(QRect(470, 320, 80, 24));
        label_3 = new QLabel(modifyTeacher);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 230, 91, 16));
        label_4 = new QLabel(modifyTeacher);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(570, 230, 91, 16));
        surname = new QLineEdit(modifyTeacher);
        surname->setObjectName("surname");
        surname->setGeometry(QRect(440, 250, 100, 25));
        deleteTeacherButton = new QPushButton(modifyTeacher);
        deleteTeacherButton->setObjectName("deleteTeacherButton");
        deleteTeacherButton->setGeometry(QRect(570, 320, 80, 24));
        label = new QLabel(modifyTeacher);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 170, 91, 16));
        cnss = new QLineEdit(modifyTeacher);
        cnss->setObjectName("cnss");
        cnss->setEnabled(false);
        cnss->setGeometry(QRect(440, 190, 100, 25));

        retranslateUi(modifyTeacher);

        QMetaObject::connectSlotsByName(modifyTeacher);
    } // setupUi

    void retranslateUi(QWidget *modifyTeacher)
    {
        modifyTeacher->setWindowTitle(QCoreApplication::translate("modifyTeacher", "Form", nullptr));
        title->setText(QCoreApplication::translate("modifyTeacher", "Modify Teacher", nullptr));
        clearTeacherButton->setText(QCoreApplication::translate("modifyTeacher", "Clear", nullptr));
        cancelTeacherButton->setText(QCoreApplication::translate("modifyTeacher", "Cancel", nullptr));
        label_2->setText(QCoreApplication::translate("modifyTeacher", "Name :", nullptr));
        updateTeacherButton->setText(QCoreApplication::translate("modifyTeacher", "Update", nullptr));
        label_3->setText(QCoreApplication::translate("modifyTeacher", "Surname :", nullptr));
        label_4->setText(QCoreApplication::translate("modifyTeacher", "Mail :", nullptr));
        deleteTeacherButton->setText(QCoreApplication::translate("modifyTeacher", "Delete", nullptr));
        label->setText(QCoreApplication::translate("modifyTeacher", "Num insc :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyTeacher: public Ui_modifyTeacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYTEACHER_H
