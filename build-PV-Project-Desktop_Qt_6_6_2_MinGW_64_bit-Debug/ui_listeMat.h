/********************************************************************************
** Form generated from reading UI file 'listeMat.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEMAT_H
#define UI_LISTEMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listeMat
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableViewlisteMat;
    QPushButton *deleteMatGM;

    void setupUi(QWidget *listeMat)
    {
        if (listeMat->objectName().isEmpty())
            listeMat->setObjectName("listeMat");
        listeMat->resize(500, 200);
        verticalLayout = new QVBoxLayout(listeMat);
        verticalLayout->setObjectName("verticalLayout");
        tableViewlisteMat = new QTableView(listeMat);
        tableViewlisteMat->setObjectName("tableViewlisteMat");
        tableViewlisteMat->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableViewlisteMat);

        deleteMatGM = new QPushButton(listeMat);
        deleteMatGM->setObjectName("deleteMatGM");

        verticalLayout->addWidget(deleteMatGM);


        retranslateUi(listeMat);

        QMetaObject::connectSlotsByName(listeMat);
    } // setupUi

    void retranslateUi(QWidget *listeMat)
    {
        listeMat->setWindowTitle(QCoreApplication::translate("listeMat", "Form", nullptr));
        deleteMatGM->setText(QCoreApplication::translate("listeMat", "Delete selected Matiere", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listeMat: public Ui_listeMat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEMAT_H
