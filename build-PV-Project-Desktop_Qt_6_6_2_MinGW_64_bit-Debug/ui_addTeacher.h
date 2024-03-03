/********************************************************************************
** Form generated from reading UI file 'addTeacher.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTEACHER_H
#define UI_ADDTEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addTeacher
{
public:
    QLabel *title;
    QGroupBox *name_2;
    QLineEdit *name;
    QGroupBox *surname_2;
    QLineEdit *surname;
    QGroupBox *mail_2;
    QLineEdit *mail;
    QPushButton *addTeacherButton;
    QPushButton *cancelTeacherButton;
    QGroupBox *cnss_2;
    QLineEdit *cnss;

    void setupUi(QWidget *addTeacher)
    {
        if (addTeacher->objectName().isEmpty())
            addTeacher->setObjectName("addTeacher");
        addTeacher->resize(600, 400);
        title = new QLabel(addTeacher);
        title->setObjectName("title");
        title->setGeometry(QRect(160, 20, 261, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara")});
        font.setPointSize(36);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("QLabel{color: rgb(198, 0, 0);}"));
        name_2 = new QGroupBox(addTeacher);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(110, 140, 331, 51));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        name_2->setFont(font1);
        name_2->setStyleSheet(QString::fromUtf8("QGroupBox { border: 0; }"));
        name = new QLineEdit(name_2);
        name->setObjectName("name");
        name->setGeometry(QRect(0, 20, 331, 24));
        name->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"border: 1px solid #555555;"));
        surname_2 = new QGroupBox(addTeacher);
        surname_2->setObjectName("surname_2");
        surname_2->setGeometry(QRect(110, 210, 331, 51));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(true);
        surname_2->setFont(font2);
        surname_2->setStyleSheet(QString::fromUtf8("QGroupBox { border: 0; }"));
        surname = new QLineEdit(surname_2);
        surname->setObjectName("surname");
        surname->setGeometry(QRect(0, 20, 331, 24));
        surname->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"border: 1px solid #555555;"));
        mail_2 = new QGroupBox(addTeacher);
        mail_2->setObjectName("mail_2");
        mail_2->setGeometry(QRect(110, 280, 331, 51));
        mail_2->setFont(font1);
        mail_2->setStyleSheet(QString::fromUtf8("QGroupBox { border: 0; }"));
        mail = new QLineEdit(mail_2);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(0, 20, 331, 24));
        mail->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"border: 1px solid #555555;"));
        addTeacherButton = new QPushButton(addTeacher);
        addTeacherButton->setObjectName("addTeacherButton");
        addTeacherButton->setGeometry(QRect(170, 350, 80, 24));
        addTeacherButton->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"border: 1px solid #555555;"));
        cancelTeacherButton = new QPushButton(addTeacher);
        cancelTeacherButton->setObjectName("cancelTeacherButton");
        cancelTeacherButton->setGeometry(QRect(280, 350, 80, 24));
        cancelTeacherButton->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"border: 1px solid #555555;"));
        cnss_2 = new QGroupBox(addTeacher);
        cnss_2->setObjectName("cnss_2");
        cnss_2->setGeometry(QRect(110, 80, 331, 51));
        cnss_2->setStyleSheet(QString::fromUtf8("QGroupBox { border: 0; }"));
        cnss = new QLineEdit(cnss_2);
        cnss->setObjectName("cnss");
        cnss->setGeometry(QRect(0, 20, 331, 24));
        cnss->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"border: 1px solid #555555;"));

        retranslateUi(addTeacher);

        QMetaObject::connectSlotsByName(addTeacher);
    } // setupUi

    void retranslateUi(QWidget *addTeacher)
    {
        addTeacher->setWindowTitle(QCoreApplication::translate("addTeacher", "Form", nullptr));
        title->setText(QCoreApplication::translate("addTeacher", "Add Teacher", nullptr));
        name_2->setTitle(QCoreApplication::translate("addTeacher", "Name :", nullptr));
        surname_2->setTitle(QCoreApplication::translate("addTeacher", "Surname :", nullptr));
        mail_2->setTitle(QCoreApplication::translate("addTeacher", "Mail  :", nullptr));
        addTeacherButton->setText(QCoreApplication::translate("addTeacher", "Add", nullptr));
        cancelTeacherButton->setText(QCoreApplication::translate("addTeacher", "Cancel", nullptr));
        cnss_2->setTitle(QCoreApplication::translate("addTeacher", "CNSS :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addTeacher: public Ui_addTeacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTEACHER_H
