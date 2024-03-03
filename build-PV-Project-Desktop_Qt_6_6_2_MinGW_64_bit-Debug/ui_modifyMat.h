/********************************************************************************
** Form generated from reading UI file 'modifyMat.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYMAT_H
#define UI_MODIFYMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyMat
{
public:
    QLabel *title;
    QTableView *tableViewUpdateMat;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *updateMatButton;
    QPushButton *deleteMatButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *clearMatButton;
    QPushButton *cancelMatButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *idMat;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *coef;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QComboBox *teacher;

    void setupUi(QWidget *modifyMat)
    {
        if (modifyMat->objectName().isEmpty())
            modifyMat->setObjectName("modifyMat");
        modifyMat->resize(700, 500);
        title = new QLabel(modifyMat);
        title->setObjectName("title");
        title->setGeometry(QRect(190, 10, 291, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara")});
        font.setPointSize(32);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("QLabel{color: rgb(198, 0, 0);}"));
        tableViewUpdateMat = new QTableView(modifyMat);
        tableViewUpdateMat->setObjectName("tableViewUpdateMat");
        tableViewUpdateMat->setGeometry(QRect(10, 80, 410, 400));
        tableViewUpdateMat->verticalHeader()->setVisible(false);
        layoutWidget = new QWidget(modifyMat);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(470, 320, 170, 60));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        updateMatButton = new QPushButton(layoutWidget);
        updateMatButton->setObjectName("updateMatButton");

        horizontalLayout->addWidget(updateMatButton);

        deleteMatButton = new QPushButton(layoutWidget);
        deleteMatButton->setObjectName("deleteMatButton");

        horizontalLayout->addWidget(deleteMatButton);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        clearMatButton = new QPushButton(layoutWidget);
        clearMatButton->setObjectName("clearMatButton");

        horizontalLayout_2->addWidget(clearMatButton);

        cancelMatButton = new QPushButton(layoutWidget);
        cancelMatButton->setObjectName("cancelMatButton");

        horizontalLayout_2->addWidget(cancelMatButton);


        verticalLayout_5->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(modifyMat);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(440, 160, 230, 109));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        idMat = new QLineEdit(layoutWidget1);
        idMat->setObjectName("idMat");
        idMat->setEnabled(false);

        verticalLayout->addWidget(idMat);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        name = new QLineEdit(layoutWidget1);
        name->setObjectName("name");

        verticalLayout_2->addWidget(name);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        coef = new QDoubleSpinBox(layoutWidget1);
        coef->setObjectName("coef");

        verticalLayout_3->addWidget(coef);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        teacher = new QComboBox(layoutWidget1);
        teacher->addItem(QString());
        teacher->setObjectName("teacher");

        verticalLayout_4->addWidget(teacher);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_4);


        retranslateUi(modifyMat);

        QMetaObject::connectSlotsByName(modifyMat);
    } // setupUi

    void retranslateUi(QWidget *modifyMat)
    {
        modifyMat->setWindowTitle(QCoreApplication::translate("modifyMat", "Form", nullptr));
        title->setText(QCoreApplication::translate("modifyMat", "Modify Matiere", nullptr));
        updateMatButton->setText(QCoreApplication::translate("modifyMat", "Update", nullptr));
        deleteMatButton->setText(QCoreApplication::translate("modifyMat", "Delete", nullptr));
        clearMatButton->setText(QCoreApplication::translate("modifyMat", "Clear", nullptr));
        cancelMatButton->setText(QCoreApplication::translate("modifyMat", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("modifyMat", "Num insc :", nullptr));
        label_2->setText(QCoreApplication::translate("modifyMat", "Name :", nullptr));
        label_3->setText(QCoreApplication::translate("modifyMat", "Coef :", nullptr));
        label_4->setText(QCoreApplication::translate("modifyMat", "Teacher :", nullptr));
        teacher->setItemText(0, QCoreApplication::translate("modifyMat", "Select Teacher", nullptr));

    } // retranslateUi

};

namespace Ui {
    class modifyMat: public Ui_modifyMat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYMAT_H
