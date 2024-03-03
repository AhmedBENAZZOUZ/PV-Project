/********************************************************************************
** Form generated from reading UI file 'addStudent.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudent
{
public:
    QLabel *title;
    QGroupBox *numinsc_2;
    QLineEdit *numinsc;
    QGroupBox *name_2;
    QLineEdit *name;
    QGroupBox *surname_2;
    QLineEdit *surname;
    QGroupBox *mail_2;
    QLineEdit *mail;
    QPushButton *addButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *AddStudent)
    {
        if (AddStudent->objectName().isEmpty())
            AddStudent->setObjectName("AddStudent");
        AddStudent->resize(600, 400);
        title = new QLabel(AddStudent);
        title->setObjectName("title");
        title->setGeometry(QRect(170, 20, 231, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Sans Serif")});
        font.setPointSize(25);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("QLabel{color: rgb(198, 0, 0);}"));
        numinsc_2 = new QGroupBox(AddStudent);
        numinsc_2->setObjectName("numinsc_2");
        numinsc_2->setGeometry(QRect(120, 80, 331, 51));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        numinsc_2->setFont(font1);
        numinsc = new QLineEdit(numinsc_2);
        numinsc->setObjectName("numinsc");
        numinsc->setGeometry(QRect(0, 20, 331, 24));
        name_2 = new QGroupBox(AddStudent);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(120, 140, 331, 51));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(true);
        name_2->setFont(font2);
        name = new QLineEdit(name_2);
        name->setObjectName("name");
        name->setGeometry(QRect(0, 20, 331, 24));
        surname_2 = new QGroupBox(AddStudent);
        surname_2->setObjectName("surname_2");
        surname_2->setGeometry(QRect(120, 200, 331, 51));
        surname_2->setFont(font1);
        surname = new QLineEdit(surname_2);
        surname->setObjectName("surname");
        surname->setGeometry(QRect(0, 20, 331, 24));
        mail_2 = new QGroupBox(AddStudent);
        mail_2->setObjectName("mail_2");
        mail_2->setGeometry(QRect(120, 260, 331, 51));
        mail_2->setFont(font1);
        mail = new QLineEdit(mail_2);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(0, 20, 331, 24));
        addButton = new QPushButton(AddStudent);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(190, 350, 80, 24));
        cancelButton = new QPushButton(AddStudent);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(290, 350, 80, 24));

        retranslateUi(AddStudent);

        QMetaObject::connectSlotsByName(AddStudent);
    } // setupUi

    void retranslateUi(QWidget *AddStudent)
    {
        AddStudent->setWindowTitle(QCoreApplication::translate("AddStudent", "Form", nullptr));
        title->setText(QCoreApplication::translate("AddStudent", "Add Student", nullptr));
        numinsc_2->setTitle(QCoreApplication::translate("AddStudent", "N\302\260 Inscription  :", nullptr));
        name_2->setTitle(QCoreApplication::translate("AddStudent", "Name :", nullptr));
        surname_2->setTitle(QCoreApplication::translate("AddStudent", "Surname :", nullptr));
        mail_2->setTitle(QCoreApplication::translate("AddStudent", "Mail :", nullptr));
        addButton->setText(QCoreApplication::translate("AddStudent", "Add", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddStudent", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudent: public Ui_AddStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
