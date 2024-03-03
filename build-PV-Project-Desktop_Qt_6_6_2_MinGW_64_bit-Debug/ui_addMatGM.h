/********************************************************************************
** Form generated from reading UI file 'addMatGM.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMATGM_H
#define UI_ADDMATGM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addMatGM
{
public:
    QTableView *tableViewMatGM;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *addMatGM)
    {
        if (addMatGM->objectName().isEmpty())
            addMatGM->setObjectName("addMatGM");
        addMatGM->resize(500, 300);
        tableViewMatGM = new QTableView(addMatGM);
        tableViewMatGM->setObjectName("tableViewMatGM");
        tableViewMatGM->setGeometry(QRect(10, 11, 481, 241));
        tableViewMatGM->verticalHeader()->setVisible(false);
        widget = new QWidget(addMatGM);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 260, 432, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8("../../qt/warning.svg")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(400, 0));
        label_2->setMaximumSize(QSize(400, 16777215));
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(addMatGM);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 260, 41, 24));

        retranslateUi(addMatGM);

        QMetaObject::connectSlotsByName(addMatGM);
    } // setupUi

    void retranslateUi(QWidget *addMatGM)
    {
        addMatGM->setWindowTitle(QCoreApplication::translate("addMatGM", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("addMatGM", "Double click on matiere to add it to the groupe module", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMatGM: public Ui_addMatGM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMATGM_H
