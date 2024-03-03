/********************************************************************************
** Form generated from reading UI file 'deleteStudent.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETESTUDENT_H
#define UI_DELETESTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteStudent
{
public:

    void setupUi(QWidget *DeleteStudent)
    {
        if (DeleteStudent->objectName().isEmpty())
            DeleteStudent->setObjectName("DeleteStudent");
        DeleteStudent->resize(400, 300);

        retranslateUi(DeleteStudent);

        QMetaObject::connectSlotsByName(DeleteStudent);
    } // setupUi

    void retranslateUi(QWidget *DeleteStudent)
    {
        DeleteStudent->setWindowTitle(QCoreApplication::translate("DeleteStudent", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteStudent: public Ui_DeleteStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETESTUDENT_H
