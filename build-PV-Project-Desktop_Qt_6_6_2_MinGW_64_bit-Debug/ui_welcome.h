/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QLabel *logoPi;
    QLabel *title;
    QPushButton *welcomeButton;

    void setupUi(QWidget *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName("welcome");
        welcome->resize(744, 525);
        logoPi = new QLabel(welcome);
        logoPi->setObjectName("logoPi");
        logoPi->setGeometry(QRect(240, 40, 281, 81));
        logoPi->setPixmap(QPixmap(QString::fromUtf8("../../qt/pilogo.png")));
        logoPi->setScaledContents(true);
        title = new QLabel(welcome);
        title->setObjectName("title");
        title->setGeometry(QRect(280, 140, 161, 41));
        welcomeButton = new QPushButton(welcome);
        welcomeButton->setObjectName("welcomeButton");
        welcomeButton->setGeometry(QRect(340, 250, 80, 24));

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QWidget *welcome)
    {
        welcome->setWindowTitle(QCoreApplication::translate("welcome", "Form", nullptr));
        logoPi->setText(QString());
        title->setText(QCoreApplication::translate("welcome", "Student Grade Managment", nullptr));
        welcomeButton->setText(QCoreApplication::translate("welcome", "Welcome!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
