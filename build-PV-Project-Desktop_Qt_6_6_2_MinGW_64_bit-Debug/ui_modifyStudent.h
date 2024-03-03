/********************************************************************************
** Form generated from reading UI file 'modifyStudent.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTUDENT_H
#define UI_MODIFYSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyStudent
{
public:
    QLabel *title;
    QLineEdit *name;
    QLineEdit *surname;
    QLineEdit *mail;
    QLineEdit *numi;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableView *tableUpdateStudent;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *clearButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *ModifyStudent)
    {
        if (ModifyStudent->objectName().isEmpty())
            ModifyStudent->setObjectName("ModifyStudent");
        ModifyStudent->resize(700, 500);
        title = new QLabel(ModifyStudent);
        title->setObjectName("title");
        title->setGeometry(QRect(160, 20, 291, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara")});
        font.setPointSize(32);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("QLabel{color: rgb(198, 0, 0);}"));
        name = new QLineEdit(ModifyStudent);
        name->setObjectName("name");
        name->setGeometry(QRect(550, 210, 100, 25));
        surname = new QLineEdit(ModifyStudent);
        surname->setObjectName("surname");
        surname->setGeometry(QRect(430, 270, 100, 25));
        mail = new QLineEdit(ModifyStudent);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(550, 270, 100, 25));
        numi = new QLineEdit(ModifyStudent);
        numi->setObjectName("numi");
        numi->setEnabled(false);
        numi->setGeometry(QRect(430, 210, 100, 25));
        label = new QLabel(ModifyStudent);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 190, 91, 16));
        label_2 = new QLabel(ModifyStudent);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(560, 190, 91, 16));
        label_3 = new QLabel(ModifyStudent);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 250, 91, 16));
        label_4 = new QLabel(ModifyStudent);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(560, 250, 91, 16));
        tableUpdateStudent = new QTableView(ModifyStudent);
        tableUpdateStudent->setObjectName("tableUpdateStudent");
        tableUpdateStudent->setGeometry(QRect(10, 90, 410, 400));
        tableUpdateStudent->verticalHeader()->setVisible(false);
        widget = new QWidget(ModifyStudent);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(480, 350, 170, 60));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        updateButton = new QPushButton(widget);
        updateButton->setObjectName("updateButton");

        horizontalLayout->addWidget(updateButton);

        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName("deleteButton");

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        clearButton = new QPushButton(widget);
        clearButton->setObjectName("clearButton");

        horizontalLayout_2->addWidget(clearButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ModifyStudent);

        QMetaObject::connectSlotsByName(ModifyStudent);
    } // setupUi

    void retranslateUi(QWidget *ModifyStudent)
    {
        ModifyStudent->setWindowTitle(QCoreApplication::translate("ModifyStudent", "Form", nullptr));
        title->setText(QCoreApplication::translate("ModifyStudent", "Modify Student", nullptr));
        label->setText(QCoreApplication::translate("ModifyStudent", "Num insc :", nullptr));
        label_2->setText(QCoreApplication::translate("ModifyStudent", "Name :", nullptr));
        label_3->setText(QCoreApplication::translate("ModifyStudent", "Surname :", nullptr));
        label_4->setText(QCoreApplication::translate("ModifyStudent", "Mail :", nullptr));
        updateButton->setText(QCoreApplication::translate("ModifyStudent", "Update", nullptr));
        deleteButton->setText(QCoreApplication::translate("ModifyStudent", "Delete", nullptr));
        clearButton->setText(QCoreApplication::translate("ModifyStudent", "Clear", nullptr));
        cancelButton->setText(QCoreApplication::translate("ModifyStudent", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyStudent: public Ui_ModifyStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTUDENT_H
