#pragma once
#include <QMainWindow>
#include <QtWidgets>
#include <QPixmap>
#include <QtSql>
#include "ui_addStudent.h"
#include "ui_modifyStudent.h"
#include "ui_addTeacher.h"
#include "ui_modifyTeacher.h"
#include "ui_addMat.h"
#include "ui_modifyMat.h"
#include "ui_addGM.h"
#include "ui_addMatGM.h"
#include "ui_listeMat.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //********* Constructor && Destructor :
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //********* Connection database :
    void showEvent(QShowEvent *event);
    //********* Student :
    void on_addButton_clicked();
    void on_clearButton_clicked();
    void on_updateButton_clicked();
    void on_deleteButton_clicked();
    //********* Teacher :
    void on_addTeacherButton_clicked();
    void on_clearTeacherButton_clicked();
    void on_deleteTeacherButton_clicked();
    void on_updateTeacherButton_clicked();
    //********* Matiere :
    void on_addMatButton_clicked();
    void on_clearMatButton_clicked();
    void on_deleteMatButton_clicked();
    void on_updateMatButton_clicked();
    //********* Groupe Module :
    void on_addMatGM_clicked();
private slots:
    //********* Welcome Page :
    void on_welcomeButton_clicked();
    //********* Menu :
    void on_student_clicked();
    void on_teacher_clicked();
    void on_matiere_clicked();
    void on_gm_clicked();
    //********* Student :
    void populateTableWithStudents();
    void customizeTableView() ;
    void searchStudents(const QString &);
    void onSearchBarTextChanged(const QString &);
    void on_addStudent_clicked();
    void on_returnBack_clicked();
    void on_modifyStudent_clicked();
    void populateTableUpdateStudent();
    void customizeTableViewUpdate();
    void displaySelectedStudent(const QModelIndex &);
    void UpdateStudent();
    void deleteStudent();
    void clearLineEdits();
    //********* Teacher :
    void populateTableWithTeachears();
    void customizeTableViewTeacher();
    void searchTeacher(const QString &);
    void on_searchBarTeacher_textChanged(const QString &);
    void on_addTeacher_clicked();
    void on_returnBackProf_clicked();
    void on_modifyTeacher_clicked();
    void populateTableUpdateTeacher();
    void customizeTableViewUpdateTeacher();
    void displaySelectedTeacher(const QModelIndex &);
    void UpdateTeacher();
    void deleteTeacher();
    void clearLineEditsTeacher();
    //********* Matiere :
    void populateTableWithMat();
    void customizeTableViewMat();
    void searchMat(const QString &);
    void on_searchBarMat_textChanged(const QString &);
    void on_addMat_clicked();
    void on_returnBackMat_clicked();
    void PopulateTeacher();
    void customizeTableViewUpdateMat();
    void populateTableUpdateMat();
    void on_modifyMat_clicked();
    void clearLineEditsMat();
    void displaySelectedMat(const QModelIndex &);
    void deleteMat();
    void UpdateMat();
    //***** Groupe Module :
    void on_returnBackGM_clicked();
    void customizeTableViewGM();
    void populateTableWithGM();
    void on_addGM_clicked();
    void ajoutGM();
    void displayselectedmat(const QModelIndex &);
    void ToListeMat(const QModelIndex &);
    void deleteGm();
    void displayselectedgm(const QModelIndex &);

private:
    //********* Main Window :
    Ui::MainWindow *ui;
    //********* Student :
    Ui::AddStudent addStudentUi;
    Ui::ModifyStudent modifyStudentUi;
    //********* Teacher :
    Ui::addTeacher addTeeacherUi;
    Ui::modifyTeacher modifyTeacherUi;
    //********* Matiere :
    Ui::addMat addMatUi;
    Ui::modifyMat modifyMatUi;
    //********* Groupe Module :
    Ui::addGM addGmUi;
    Ui::addMatGM addMatGMUi;
    Ui::listeMat listeMatUi;
};
