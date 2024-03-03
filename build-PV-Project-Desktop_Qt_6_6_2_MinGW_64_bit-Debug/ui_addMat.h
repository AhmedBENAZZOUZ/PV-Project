/********************************************************************************
** Form generated from reading UI file 'addMat.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMAT_H
#define UI_ADDMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addMat
{
public:
    QGroupBox *teacher_2;
    QComboBox *teacher;
    QGroupBox *name_2;
    QLineEdit *name;
    QGroupBox *idmat_2;
    QLineEdit *idmat;
    QPushButton *addMatButton;
    QPushButton *cancelMatButton;
    QLabel *title;
    QDoubleSpinBox *coef;
    QLabel *label;

    void setupUi(QWidget *addMat)
    {
        if (addMat->objectName().isEmpty())
            addMat->setObjectName("addMat");
        addMat->setWindowModality(Qt::NonModal);
        addMat->resize(600, 400);
        teacher_2 = new QGroupBox(addMat);
        teacher_2->setObjectName("teacher_2");
        teacher_2->setGeometry(QRect(120, 250, 331, 51));
        QFont font;
        font.setPointSize(12);
        font.setItalic(true);
        teacher_2->setFont(font);
        teacher_2->setStyleSheet(QString::fromUtf8("QGroupBox { border: 0; }"));
        teacher = new QComboBox(teacher_2);
        teacher->setObjectName("teacher");
        teacher->setGeometry(QRect(0, 20, 331, 24));
        name_2 = new QGroupBox(addMat);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(120, 140, 331, 51));
        name_2->setFont(font);
        name_2->setStyleSheet(QString::fromUtf8("QGroupBox { border: 0; }"));
        name = new QLineEdit(name_2);
        name->setObjectName("name");
        name->setGeometry(QRect(0, 20, 331, 24));
        name->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"border: 1px solid #555555;"));
        idmat_2 = new QGroupBox(addMat);
        idmat_2->setObjectName("idmat_2");
        idmat_2->setGeometry(QRect(120, 80, 331, 51));
        QFont font1;
        font1.setPointSize(12);
        idmat_2->setFont(font1);
        idmat_2->setStyleSheet(QString::fromUtf8("QGroupBox { border: 0; }"));
        idmat = new QLineEdit(idmat_2);
        idmat->setObjectName("idmat");
        idmat->setGeometry(QRect(0, 20, 331, 24));
        idmat->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"border: 1px solid #555555;"));
        addMatButton = new QPushButton(addMat);
        addMatButton->setObjectName("addMatButton");
        addMatButton->setGeometry(QRect(180, 350, 80, 24));
        addMatButton->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"border: 1px solid #555555;"));
        cancelMatButton = new QPushButton(addMat);
        cancelMatButton->setObjectName("cancelMatButton");
        cancelMatButton->setGeometry(QRect(290, 350, 80, 24));
        cancelMatButton->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"border: 1px solid #555555;"));
        title = new QLabel(addMat);
        title->setObjectName("title");
        title->setGeometry(QRect(160, 20, 261, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Candara")});
        font2.setPointSize(36);
        font2.setBold(true);
        title->setFont(font2);
        title->setStyleSheet(QString::fromUtf8("QLabel{color: rgb(198, 0, 0);}"));
        coef = new QDoubleSpinBox(addMat);
        coef->setObjectName("coef");
        coef->setGeometry(QRect(240, 210, 62, 25));
        coef->setFont(font1);
        coef->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"border: 1px solid #555555;"));
        coef->setDecimals(1);
        coef->setMinimum(1.000000000000000);
        coef->setMaximum(7.000000000000000);
        coef->setSingleStep(0.500000000000000);
        label = new QLabel(addMat);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 210, 101, 21));
        label->setFont(font1);

        retranslateUi(addMat);

        QMetaObject::connectSlotsByName(addMat);
    } // setupUi

    void retranslateUi(QWidget *addMat)
    {
        addMat->setWindowTitle(QCoreApplication::translate("addMat", "Form", nullptr));
        teacher_2->setTitle(QCoreApplication::translate("addMat", "Teacher  :", nullptr));
        name_2->setTitle(QCoreApplication::translate("addMat", "Name :", nullptr));
        idmat_2->setTitle(QCoreApplication::translate("addMat", "Id Matiere :", nullptr));
        addMatButton->setText(QCoreApplication::translate("addMat", "Add", nullptr));
        cancelMatButton->setText(QCoreApplication::translate("addMat", "Cancel", nullptr));
        title->setText(QCoreApplication::translate("addMat", "Add Matiere", nullptr));
        label->setText(QCoreApplication::translate("addMat", "Coefficient   :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMat: public Ui_addMat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMAT_H
