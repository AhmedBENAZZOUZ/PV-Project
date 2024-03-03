#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "databasemanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //********* Welcome :
    show();
    setWindowTitle("Grade managment");
    setWindowIcon(QIcon("D:/Pi/CPP/qt/logopi.jpg"));
    QPixmap pix("D:/Pi/CPP/qt/pilogo.png");
    int w = ui->logoPi->width();
    int h = ui->logoPi->height();
    ui->logoPi->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->welcomeButton->setStyleSheet("QPushButton:hover { color: white; background-color: red; }");
    //********* Menu :
    ui->student->setIcon(QIcon("D:/Pi/CPP/qt/student.svg"));
    ui->teacher->setIcon(QIcon("D:/Pi/CPP/qt/teacher.svg"));
    ui->matiere->setIcon(QIcon("D:/Pi/CPP/qt/subject.svg"));
    ui->gm->setIcon(QIcon("D:/Pi/CPP/qt/gm2.svg"));
    //********* Student :
    populateTableWithStudents();
    ui->returnBack->setIcon(QIcon("D:/Pi/CPP/qt/returnback.svg"));
    ui->addStudent->setIcon(QIcon("D:/Pi/CPP/qt/add.svg"));
    ui->searchBar->setClearButtonEnabled(true);
    ui->searchBar->setPlaceholderText("Search student");
    connect(ui->searchBar, &QLineEdit::textChanged, this, &MainWindow::onSearchBarTextChanged);
    //********* Teacher :
    populateTableWithTeachears();
    ui->returnBackProf->setIcon(QIcon("D:/Pi/CPP/qt/returnback.svg"));
    ui->addTeacher->setIcon(QIcon("D:/Pi/CPP/qt/add.svg"));
    ui->searchBarTeacher->setClearButtonEnabled(true);
    ui->searchBarTeacher->setPlaceholderText("Search teacher");
    connect(ui->searchBarTeacher, &QLineEdit::textChanged, this, &MainWindow::on_searchBarTeacher_textChanged);
    //********* Matiere :
    populateTableWithMat();
    ui->returnBackMat->setIcon(QIcon("D:/Pi/CPP/qt/returnback.svg"));
    ui->addMat->setIcon(QIcon("D:/Pi/CPP/qt/add.svg"));
    ui->searchBarMat->setClearButtonEnabled(true);
    ui->searchBarMat->setPlaceholderText("Search Matiere");
    connect(ui->searchBarMat, &QLineEdit::textChanged, this, &MainWindow::on_searchBarMat_textChanged);
    //********* Groupe Module :
    populateTableWithGM();
    // populateTableWithTeachears();
    ui->returnBackGM->setIcon(QIcon("D:/Pi/CPP/qt/returnback.svg"));
    ui->modifyGM->setIcon(QIcon("D:/Pi/CPP/qt/delete.svg"));
    ui->searchBarGM->setClearButtonEnabled(true);
    ui->searchBarGM->setPlaceholderText("Search Groupe Module");
    // connect(ui->searchBarTeacher, &QLineEdit::textChanged, this, &MainWindow::on_searchBarTeacher_textChanged);
    connect(ui->tableViewGM, &QTableView::doubleClicked, this, &MainWindow::ToListeMat);
    connect(ui->tableViewGM, &QTableView::clicked, this, &MainWindow::displayselectedgm);
    connect(ui->modifyGM, &QPushButton::clicked, this, &MainWindow::deleteGm);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//********************************* Connection Database *******************************************
void MainWindow::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);


    QSqlDatabase db = DatabaseManager::instance().database();
    if (!db.isOpen()) {
        qDebug() << "Database not open!";
        // ui->status->setText("Database not open!");
    }else{
        qDebug() << "Connected...!";
        // ui->status->setText("Connected...!");
    }
}
//********************************* Welcome *******************************************************
void MainWindow::on_welcomeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
//********************************* Menu **********************************************************
void MainWindow::on_student_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_teacher_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_matiere_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_gm_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

//********************************* Student *******************************************************
void MainWindow::on_returnBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::customizeTableView()
{
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->tableWidget->horizontalHeader()->resizeSection(0, 80);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    ui->tableWidget->horizontalHeader()->resizeSection(1, 200);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    ui->tableWidget->horizontalHeader()->resizeSection(2, 200);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Fixed);
    ui->tableWidget->horizontalHeader()->resizeSection(3, 298);
}


void MainWindow::populateTableWithStudents()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Etudiant");
    ui->tableWidget->setModel(model);
    customizeTableView();
}

void MainWindow::on_addStudent_clicked()
{
    QDialog dialog;
    addStudentUi.setupUi(&dialog);
    dialog.setWindowTitle("Grade managment");
    dialog.setWindowIcon(QIcon("D:/Pi/CPP/qt/logopi.jpg"));
    connect(addStudentUi.addButton, &QPushButton::clicked, this, &MainWindow::on_addButton_clicked);
    connect(addStudentUi.cancelButton, &QPushButton::clicked, &dialog, &QDialog::reject);

    if (dialog.exec() == QDialog::Accepted) {

    } else {
        // Handle the rejected action or do nothing
        // This block of code will be executed if the user closes the dialog without accepting it
    }
}

void MainWindow::on_addButton_clicked()
{
    QSqlQuery createTableQuery;
    if (!createTableQuery.exec("CREATE TABLE IF NOT EXISTS Etudiant ("
                               "num_insc number(5) PRIMARY KEY,"
                               "nom varchar2(20) NOT NULL COLLATE NOCASE,"
                               "prenom varchar2(20) NOT NULL COLLATE NOCASE,"
                               "mail varchar2(30) NOT NULL COLLATE NOCASE);")) {
        qDebug() << "Error creating table:" << createTableQuery.lastError().text();
        return;
    } else {
        qDebug() << "Table created successfully";
    }

    int numInsc = addStudentUi.numinsc->text().toInt();
    QString name = addStudentUi.name->text();
    QString surname = addStudentUi.surname->text();
    QString mail = addStudentUi.mail->text();

    QString numinscString =addStudentUi.numinsc->text();
    if (numinscString.isEmpty()) {
        QMessageBox::critical(this, "Error", "Student number cannot be empty");
        return;
    }
    bool ok;
    numinscString.toInt(&ok);
    if (!ok) {
        QMessageBox::critical(this, "Error", "Invalid student number");
        return;
    }


    // Validate input
    if (name.isEmpty() || surname.isEmpty() || mail.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please fill in all fields");
        return;
    }

    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO Etudiant (num_insc, nom, prenom, mail) VALUES (:num_insc, :nom, :prenom, :mail)");
    insertQuery.bindValue(":num_insc", numInsc);
    insertQuery.bindValue(":nom", name);
    insertQuery.bindValue(":prenom", surname);
    insertQuery.bindValue(":mail", mail);

    if (!insertQuery.exec()) {
        qDebug() << "Error inserting data:" << insertQuery.lastError().text();
    } else {
        qDebug() << "Data inserted successfully";
        QDialog* dialog = qobject_cast<QDialog*>(sender()->parent());
        if (dialog)
            dialog->accept();
        populateTableWithStudents();
        QMessageBox::information(this, "Success", "Student added successfully");
    }
}

void MainWindow::searchStudents(const QString &text)
{
    QSqlQuery query;
    QString queryString = "SELECT * FROM Etudiant WHERE num_insc LIKE :search OR nom LIKE :search OR prenom LIKE :search OR mail LIKE :search";
    query.prepare(queryString);
    query.bindValue(":search", "%" + text + "%");

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel(); // Create a new model
    model->setQuery(std::move(query)); // Move the query to setQuery

    // Set the model to the TableView
    ui->tableWidget->setModel(model);
}

void MainWindow::onSearchBarTextChanged(const QString &text)
{
    searchStudents(text);
}

void MainWindow::populateTableUpdateStudent() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Etudiant");

    modifyStudentUi.tableUpdateStudent->setModel(model);
}

void MainWindow::customizeTableViewUpdate() {
    modifyStudentUi.tableUpdateStudent->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    modifyStudentUi.tableUpdateStudent->horizontalHeader()->resizeSection(0, 60);

    modifyStudentUi.tableUpdateStudent->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    modifyStudentUi.tableUpdateStudent->horizontalHeader()->resizeSection(1, 80);

    modifyStudentUi.tableUpdateStudent->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    modifyStudentUi.tableUpdateStudent->horizontalHeader()->resizeSection(2, 80);

    modifyStudentUi.tableUpdateStudent->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Fixed);
    modifyStudentUi.tableUpdateStudent->horizontalHeader()->resizeSection(3, 188);
}

void MainWindow::on_modifyStudent_clicked()
{
    //tableUpdateStudent
    QDialog dialog2;
    modifyStudentUi.setupUi(&dialog2);
    populateTableUpdateStudent();
    customizeTableViewUpdate();
    dialog2.setWindowTitle("Grade managment");
    dialog2.setWindowIcon(QIcon("D:/Pi/CPP/qt/logopi.jpg"));
    connect(modifyStudentUi.updateButton, &QPushButton::clicked, this, &MainWindow::on_updateButton_clicked);
    connect(modifyStudentUi.deleteButton, &QPushButton::clicked, this, &MainWindow::on_deleteButton_clicked);
    connect(modifyStudentUi.clearButton, &QPushButton::clicked, this, &MainWindow::on_clearButton_clicked);
    connect(modifyStudentUi.cancelButton, &QPushButton::clicked, &dialog2, &QDialog::reject);
    connect(modifyStudentUi.tableUpdateStudent, &QTableView::clicked, this, &MainWindow::displaySelectedStudent);
    modifyStudentUi.updateButton->hide();
    modifyStudentUi.deleteButton->hide();
    modifyStudentUi.clearButton->hide();
    if (dialog2.exec() == QDialog::Accepted) {

    } else {
        // Handle the rejected action or do nothing
        // This block of code will be executed if the user closes the dialog without accepting it
    }
}

void MainWindow::displaySelectedStudent(const QModelIndex &index) {
    int row = index.row();

    QSqlQueryModel *model = qobject_cast<QSqlQueryModel*>( modifyStudentUi.tableUpdateStudent->model());
    QString numinsc = model->data(model->index(row, 0)).toString();
    QString nom = model->data(model->index(row, 1)).toString();
    QString prenom = model->data(model->index(row, 2)).toString();
    QString mail = model->data(model->index(row, 3)).toString();



    modifyStudentUi.numi->setText(numinsc);
    modifyStudentUi.name->setText(nom);
    modifyStudentUi.surname->setText(prenom);
    modifyStudentUi.mail->setText(mail);

    modifyStudentUi.updateButton->show();
    modifyStudentUi.deleteButton->show();
    modifyStudentUi.clearButton->show();
    modifyStudentUi.deleteButton->setIcon(QIcon("D:/Pi/CPP/qt/delete.svg"));
    modifyStudentUi.deleteButton->setStyleSheet("QPushButton:hover { color: black; background-color: red; }");
    modifyStudentUi.updateButton->setIcon(QIcon("D:/Pi/CPP/qt/edit.svg"));
    modifyStudentUi.clearButton->setIcon(QIcon("D:/Pi/CPP/qt/clear.svg"));
}

void MainWindow::clearLineEdits() {
    modifyStudentUi.numi->clear();
    modifyStudentUi.name->clear();
    modifyStudentUi.surname->clear();
    modifyStudentUi.mail->clear();
}

void MainWindow::UpdateStudent() {
    int numinsc = modifyStudentUi.numi->text().toInt();
    QString nom = modifyStudentUi.name->text();
    QString prenom = modifyStudentUi.surname->text();
    QString mail = modifyStudentUi.mail->text();

    if (nom.isEmpty() || prenom.isEmpty() || mail.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please fill in all fields");
        return;
    }

    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE Etudiant SET nom = :nom, prenom = :prenom, mail = :mail WHERE num_insc = :num_insc");
    updateQuery.bindValue(":num_insc", numinsc);
    updateQuery.bindValue(":nom", nom);
    updateQuery.bindValue(":prenom", prenom);
    updateQuery.bindValue(":mail", mail);

    if (!updateQuery.exec()) {
        qDebug() << "Error updating data:" << updateQuery.lastError().text();
    } else {
        qDebug() << "Data updated successfully";
        populateTableUpdateStudent();
        clearLineEdits();
    }
}

void MainWindow::on_updateButton_clicked()
{
    UpdateStudent();
    populateTableWithStudents();
    modifyStudentUi.updateButton->hide();
    modifyStudentUi.deleteButton->hide();
    modifyStudentUi.clearButton->hide();
}

void MainWindow::deleteStudent() {
    int numinsc = modifyStudentUi.numi->text().toInt();

    QMessageBox::StandardButton reply = QMessageBox::critical(this, "Delete Student",
                                                              "Are you sure you want to delete this student?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No){
        return;
    }

    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM Etudiant WHERE num_insc = :num_insc");
    deleteQuery.bindValue(":num_insc", numinsc);

    if (!deleteQuery.exec()) {
        qDebug() << "Error deleting data:" << deleteQuery.lastError().text();
    } else {
        qDebug() << "Data deleted successfully";
        populateTableUpdateStudent();
        clearLineEdits();
    }
}

void MainWindow::on_deleteButton_clicked()
{
    deleteStudent();
    populateTableWithStudents();
    modifyStudentUi.updateButton->hide();
    modifyStudentUi.deleteButton->hide();
    modifyStudentUi.clearButton->hide();
}


void MainWindow::on_clearButton_clicked()
{
    clearLineEdits();
    modifyStudentUi.updateButton->hide();
    modifyStudentUi.deleteButton->hide();
    modifyStudentUi.clearButton->hide();
}

//********************************* Teacher *******************************************************
void MainWindow::on_returnBackProf_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::customizeTableViewTeacher()
{
    ui->tableWidgetTeacher->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->tableWidgetTeacher->horizontalHeader()->resizeSection(0, 80);

    ui->tableWidgetTeacher->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    ui->tableWidgetTeacher->horizontalHeader()->resizeSection(1, 200);

    ui->tableWidgetTeacher->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    ui->tableWidgetTeacher->horizontalHeader()->resizeSection(2, 200);

    ui->tableWidgetTeacher->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Fixed);
    ui->tableWidgetTeacher->horizontalHeader()->resizeSection(3, 298);
}


void MainWindow::populateTableWithTeachears()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Enseignant");

    ui->tableWidgetTeacher->setModel(model);
    customizeTableViewTeacher();
}

void MainWindow::on_addTeacher_clicked()
{
    QDialog dialog;
    addTeeacherUi.setupUi(&dialog);
    dialog.setWindowTitle("Grade managment");
    dialog.setWindowIcon(QIcon("D:/Pi/CPP/qt/logopi.jpg"));
    connect(addTeeacherUi.addTeacherButton, &QPushButton::clicked, this, &MainWindow::on_addTeacherButton_clicked);
    connect(addTeeacherUi.cancelTeacherButton, &QPushButton::clicked, &dialog, &QDialog::reject);

    if (dialog.exec() == QDialog::Accepted) {

    } else {
        // Handle the rejected action or do nothing
        // This block of code will be executed if the user closes the dialog without accepting it
    }
}


void MainWindow::on_addTeacherButton_clicked()
{
    QSqlQuery createTableQuery;
    if (!createTableQuery.exec("CREATE TABLE IF NOT EXISTS Enseignant ("
                               "cnss number(5) PRIMARY KEY,"
                               "nom varchar2(20) NOT NULL COLLATE NOCASE,"
                               "prenom varchar2(20) NOT NULL COLLATE NOCASE,"
                               "mail varchar2(30) NOT NULL COLLATE NOCASE);")) {
        qDebug() << "Error creating table:" << createTableQuery.lastError().text();
        return;
    } else {
        qDebug() << "Table Enseignant created successfully";
    }

    int cnss = addTeeacherUi.cnss->text().toInt();
    QString name = addTeeacherUi.name->text();
    QString surname = addTeeacherUi.surname->text();
    QString mail = addTeeacherUi.mail->text();

    QString cnssString =addTeeacherUi.cnss->text();
    if (cnssString.isEmpty()) {
        QMessageBox::critical(this, "Error", "Cnss number cannot be empty");
        return;
    }
    bool ok;
    cnssString.toInt(&ok);
    if (!ok) {
        QMessageBox::critical(this, "Error", "Invalid teacher number");
        return;
    }


    // Validate input
    if (name.isEmpty() || surname.isEmpty() || mail.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please fill in all fields");
        return;
    }

    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO Enseignant (cnss, nom, prenom, mail) VALUES (:cnss, :nom, :prenom, :mail)");
    insertQuery.bindValue(":cnss", cnss);
    insertQuery.bindValue(":nom", name);
    insertQuery.bindValue(":prenom", surname);
    insertQuery.bindValue(":mail", mail);

    if (!insertQuery.exec()) {
        qDebug() << "Error inserting data:" << insertQuery.lastError().text();
    } else {
        qDebug() << "Data inserted successfully";
        QDialog* dialog = qobject_cast<QDialog*>(sender()->parent());
        if (dialog)
            dialog->accept();
        populateTableWithTeachears();
        QMessageBox::information(this, "Success", "Teacher added successfully");
    }
}

void MainWindow::searchTeacher(const QString &text)
{
    QSqlQuery query;
    QString queryString = "SELECT * FROM Enseignant WHERE cnss LIKE :search OR nom LIKE :search OR prenom LIKE :search OR mail LIKE :search";
    query.prepare(queryString);
    query.bindValue(":search", "%" + text + "%");

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel(); // Create a new model
    model->setQuery(std::move(query)); // Move the query to setQuery

    // Set the model to the TableView
    ui->tableWidgetTeacher->setModel(model);
}

void MainWindow::on_searchBarTeacher_textChanged(const QString &text)
{
    searchTeacher(text);
}

void MainWindow::populateTableUpdateTeacher() {
    //tableViewUpdateTeacher
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Enseignant");

    modifyTeacherUi.tableViewUpdateTeacher->setModel(model);
}

void MainWindow::customizeTableViewUpdateTeacher() {
    modifyTeacherUi.tableViewUpdateTeacher->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    modifyTeacherUi.tableViewUpdateTeacher->horizontalHeader()->resizeSection(0, 60);

    modifyTeacherUi.tableViewUpdateTeacher->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    modifyTeacherUi.tableViewUpdateTeacher->horizontalHeader()->resizeSection(1, 80);

    modifyTeacherUi.tableViewUpdateTeacher->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    modifyTeacherUi.tableViewUpdateTeacher->horizontalHeader()->resizeSection(2, 80);

    modifyTeacherUi.tableViewUpdateTeacher->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Fixed);
    modifyTeacherUi.tableViewUpdateTeacher->horizontalHeader()->resizeSection(3, 188);
}

void MainWindow::on_modifyTeacher_clicked()
{
    QDialog dialog2;
    modifyTeacherUi.setupUi(&dialog2);
    populateTableUpdateTeacher();
    customizeTableViewUpdateTeacher();
    dialog2.setWindowTitle("Grade managment");
    dialog2.setWindowIcon(QIcon("D:/Pi/CPP/qt/logopi.jpg"));
    connect(modifyTeacherUi.updateTeacherButton, &QPushButton::clicked, this, &MainWindow::on_updateTeacherButton_clicked);
    connect(modifyTeacherUi.deleteTeacherButton, &QPushButton::clicked, this, &MainWindow::on_deleteTeacherButton_clicked);
    connect(modifyTeacherUi.clearTeacherButton, &QPushButton::clicked, this, &MainWindow::on_clearTeacherButton_clicked);
    connect(modifyTeacherUi.cancelTeacherButton, &QPushButton::clicked, &dialog2, &QDialog::reject);
    connect(modifyTeacherUi.tableViewUpdateTeacher, &QTableView::clicked, this, &MainWindow::displaySelectedTeacher);
    modifyTeacherUi.updateTeacherButton->hide();
    modifyTeacherUi.deleteTeacherButton->hide();
    modifyTeacherUi.clearTeacherButton->hide();
    if (dialog2.exec() == QDialog::Accepted) {

    } else {
        // Handle the rejected action or do nothing
        // This block of code will be executed if the user closes the dialog without accepting it
    }
}

void MainWindow::displaySelectedTeacher(const QModelIndex &index) {
    int row = index.row();

    QSqlQueryModel *model = qobject_cast<QSqlQueryModel*>( modifyTeacherUi.tableViewUpdateTeacher->model());
    QString cnss = model->data(model->index(row, 0)).toString();
    QString nom = model->data(model->index(row, 1)).toString();
    QString prenom = model->data(model->index(row, 2)).toString();
    QString mail = model->data(model->index(row, 3)).toString();



    modifyTeacherUi.cnss->setText(cnss);
    modifyTeacherUi.name->setText(nom);
    modifyTeacherUi.surname->setText(prenom);
    modifyTeacherUi.mail->setText(mail);

    modifyTeacherUi.updateTeacherButton->show();
    modifyTeacherUi.deleteTeacherButton->show();
    modifyTeacherUi.clearTeacherButton->show();
    modifyTeacherUi.deleteTeacherButton->setIcon(QIcon("D:/Pi/CPP/qt/delete.svg"));
    modifyTeacherUi.deleteTeacherButton->setStyleSheet("QPushButton:hover { color: black; background-color: red; }");
    modifyTeacherUi.updateTeacherButton->setIcon(QIcon("D:/Pi/CPP/qt/edit.svg"));
    modifyTeacherUi.clearTeacherButton->setIcon(QIcon("D:/Pi/CPP/qt/clear.svg"));
}

void MainWindow::clearLineEditsTeacher() {
    modifyTeacherUi.cnss->clear();
    modifyTeacherUi.name->clear();
    modifyTeacherUi.surname->clear();
    modifyTeacherUi.mail->clear();
}

void MainWindow::UpdateTeacher() {
    int cnss = modifyTeacherUi.cnss->text().toInt();
    QString nom = modifyTeacherUi.name->text();
    QString prenom = modifyTeacherUi.surname->text();
    QString mail = modifyTeacherUi.mail->text();

    if (nom.isEmpty() || prenom.isEmpty() || mail.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please fill in all fields");
        return;
    }

    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE Enseignant SET nom = :nom, prenom = :prenom, mail = :mail WHERE cnss = :cnss");
    updateQuery.bindValue(":cnss", cnss);
    updateQuery.bindValue(":nom", nom);
    updateQuery.bindValue(":prenom", prenom);
    updateQuery.bindValue(":mail", mail);

    if (!updateQuery.exec()) {
        qDebug() << "Error updating data:" << updateQuery.lastError().text();
    } else {
        qDebug() << "Data updated successfully";
        populateTableUpdateTeacher();
        clearLineEditsTeacher();
    }
}

void MainWindow::on_updateTeacherButton_clicked()
{
    UpdateTeacher();
    populateTableWithTeachears();
    modifyTeacherUi.updateTeacherButton->hide();
    modifyTeacherUi.deleteTeacherButton->hide();
    modifyTeacherUi.clearTeacherButton->hide();
}

void MainWindow::deleteTeacher() {
    int cnss = modifyTeacherUi.cnss->text().toInt();

    QMessageBox::StandardButton reply = QMessageBox::critical(this, "Delete Teacher",
                                                              "Are you sure you want to delete this teacher?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No){
        return;
    }

    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM Enseignant WHERE cnss = :cnss");
    deleteQuery.bindValue(":cnss", cnss);

    if (!deleteQuery.exec()) {
        qDebug() << "Error deleting data:" << deleteQuery.lastError().text();
    } else {
        qDebug() << "Data deleted successfully";
        populateTableUpdateTeacher();
        clearLineEditsTeacher();
    }
}

void MainWindow::on_deleteTeacherButton_clicked()
{
    deleteTeacher();
    populateTableWithTeachears();
    modifyTeacherUi.updateTeacherButton->hide();
    modifyTeacherUi.deleteTeacherButton->hide();
    modifyTeacherUi.clearTeacherButton->hide();
}

void MainWindow::on_clearTeacherButton_clicked()
{
    clearLineEditsTeacher();
    modifyTeacherUi.updateTeacherButton->hide();
    modifyTeacherUi.deleteTeacherButton->hide();
    modifyTeacherUi.clearTeacherButton->hide();
}
//********************************* Matiere *******************************************************
void MainWindow::on_returnBackMat_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::customizeTableViewMat()
{
    ui->tableViewMat->setColumnWidth(0, 120);
    ui->tableViewMat->setColumnWidth(1, 240);
    ui->tableViewMat->setColumnWidth(2, 80);
    ui->tableViewMat->setColumnWidth(3, 80);
    ui->tableViewMat->setColumnWidth(4, 130);
    ui->tableViewMat->setColumnWidth(5, 128);
}

void MainWindow::populateTableWithMat()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select m.idmat , m.nom , m.coef, e.cnss , e.prenom , e.nom from Matiere m , Enseignant e where m.teacher=e.cnss;");

    ui->tableViewMat->setModel(model);
    customizeTableViewMat();
}

void MainWindow::PopulateTeacher() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT cnss, nom, prenom FROM Enseignant");

    addMatUi.teacher->clear();

    addMatUi.teacher->addItem("Select Teacher");

    int rowCount = model->rowCount();
    for (int i = 0; i < rowCount; ++i) {
        int teacherId = model->record(i).value("CNSS").toInt();
        QString teacherName = model->record(i).value("nom").toString();
        QString teacherLastName = model->record(i).value("prenom").toString();
        addMatUi.teacher->addItem(QString("%1 - %2 %3").arg(teacherId).arg(teacherName).arg(teacherLastName));
    }
}

void MainWindow::on_addMat_clicked()
{
    QDialog dialog;
    addMatUi.setupUi(&dialog);
    dialog.setWindowTitle("Grade managment");
    dialog.setWindowIcon(QIcon("D:/Pi/CPP/qt/logopi.jpg"));
    connect(addMatUi.addMatButton, &QPushButton::clicked, this, &MainWindow::on_addMatButton_clicked);
    connect(addMatUi.cancelMatButton, &QPushButton::clicked, &dialog, &QDialog::reject);
    PopulateTeacher();
    // QSqlQuery createleQuery;
    // if (!createleQuery.exec("DROP TABLE Matiere ;")) {
    //     qDebug() << "Error creating table:" << createleQuery.lastError().text();
    //     return;
    // } else {
    //     qDebug() << "Table Matiere droped successfully";
    // }
    if (dialog.exec() == QDialog::Accepted) {

    } else {
        // Handle the rejected action or do nothing
        // This block of code will be executed if the user closes the dialog without accepting it
    }
}

void MainWindow::on_addMatButton_clicked()
{
    QSqlQuery createTableQuery;
    if (!createTableQuery.exec("CREATE TABLE IF NOT EXISTS Matiere ("
                               "idmat varchar2(20) PRIMARY KEY,"
                               "nom varchar2(20) NOT NULL COLLATE NOCASE,"
                               "coef number(3.2) NOT NULL COLLATE NOCASE,"
                               "teacher number(5) NOT NULL COLLATE NOCASE);")) {
        qDebug() << "Error creating table:" << createTableQuery.lastError().text();
        return;
    } else {
        qDebug() << "Table Matiere created successfully";
    }

    QString idMat = addMatUi.idmat->text();
    QString name = addMatUi.name->text();
    float coef = addMatUi.coef->text().toFloat();
    QString selectedText = addMatUi.teacher->currentText();
    int cnss = selectedText.section(" - ", 0, 0).toInt();

    if (idMat.isEmpty()) {
        QMessageBox::critical(this, "Error", "Id matiere cannot be empty");
        return;
    }

    if (name.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please fill name fields");
        return;
    }

    if (selectedText=="Select Teacher") {
        QMessageBox::critical(this, "Error", "Please select a teacher");
        return;
    }

    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO Matiere (idmat, nom, coef, teacher) VALUES (:idmat, :nom, :coef, :teacher)");
    insertQuery.bindValue(":idmat", idMat);
    insertQuery.bindValue(":nom", name);
    insertQuery.bindValue(":coef", coef);
    insertQuery.bindValue(":teacher", cnss);

    if (!insertQuery.exec()) {
        qDebug() << "Error inserting data:" << insertQuery.lastError().text();
    } else {
        qDebug() << "Data inserted successfully";
        QDialog* dialog = qobject_cast<QDialog*>(sender()->parent());
        if (dialog)
            dialog->accept();
        populateTableWithMat();
        QMessageBox::information(this, "Success", "Matiere added successfully");
    }
}

void MainWindow::searchMat(const QString &text)
{
    QSqlQuery query;
    QString queryString = "select m.idmat , m.nom , m.coef, e.cnss , e.prenom , e.nom from Matiere m , Enseignant e where m.teacher=e.cnss AND m.idmat LIKE :search OR m.nom LIKE :search OR m.coef LIKE :search OR e.cnss LIKE :search OR e.nom LIKE :search OR e.prenom LIKE :search;";
    query.prepare(queryString);
    query.bindValue(":search", "%" + text + "%");

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return;
    }

    // QSqlQuery queryEns("SELECT * FROM Enseignant where cnss = :cnss");
    // int cnss =query.value(3).toInt();
    // queryEns.bindValue(":cnss", cnss);
    // if (!queryEns.exec()) {
    //     qDebug() << "Error executing query:" << query.lastError().text();
    //     return;
    // }
    // QSqlQueryModel *model = new QSqlQueryModel();
    // model->setQuery(query);

    // ui->tableViewMat->setModel(model);
    // customizeTableViewMat();

}

void MainWindow::on_searchBarMat_textChanged(const QString &arg1)
{
    searchMat(arg1);
}

void MainWindow::customizeTableViewUpdateMat() {
    modifyMatUi.tableViewUpdateMat->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    modifyMatUi.tableViewUpdateMat->horizontalHeader()->resizeSection(0, 60);

    modifyMatUi.tableViewUpdateMat->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    modifyMatUi.tableViewUpdateMat->horizontalHeader()->resizeSection(1, 70);

    modifyMatUi.tableViewUpdateMat->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    modifyMatUi.tableViewUpdateMat->horizontalHeader()->resizeSection(2, 70);

    modifyMatUi.tableViewUpdateMat->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Fixed);
    modifyMatUi.tableViewUpdateMat->horizontalHeader()->resizeSection(3, 70);

    modifyMatUi.tableViewUpdateMat->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Fixed);
    modifyMatUi.tableViewUpdateMat->horizontalHeader()->resizeSection(4, 70);

    modifyMatUi.tableViewUpdateMat->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Fixed);
    modifyMatUi.tableViewUpdateMat->horizontalHeader()->resizeSection(5, 68);

}

void MainWindow::populateTableUpdateMat() {
    //tableViewUpdateTeacher
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select m.idmat , m.nom , m.coef, e.cnss , e.prenom , e.nom from Matiere m , Enseignant e where m.teacher=e.cnss;");

    modifyMatUi.tableViewUpdateMat->setModel(model);
    customizeTableViewUpdateMat();
}

void MainWindow::on_modifyMat_clicked()
{
    QDialog dialog2;
    modifyMatUi.setupUi(&dialog2);
    populateTableUpdateMat();
    dialog2.setWindowTitle("Grade managment");
    dialog2.setWindowIcon(QIcon("D:/Pi/CPP/qt/logopi.jpg"));
    connect(modifyMatUi.updateMatButton, &QPushButton::clicked, this, &MainWindow::on_updateMatButton_clicked);
    connect(modifyMatUi.deleteMatButton, &QPushButton::clicked, this, &MainWindow::on_deleteMatButton_clicked);
    connect(modifyMatUi.clearMatButton, &QPushButton::clicked, this, &MainWindow::on_clearMatButton_clicked);
    connect(modifyMatUi.cancelMatButton, &QPushButton::clicked, &dialog2, &QDialog::reject);
    connect(modifyMatUi.tableViewUpdateMat, &QTableView::clicked, this, &MainWindow::displaySelectedMat);
    modifyMatUi.updateMatButton->hide();
    modifyMatUi.deleteMatButton->hide();
    modifyMatUi.clearMatButton->hide();
    if (dialog2.exec() == QDialog::Accepted) {

    } else {
        // Handle the rejected action or do nothing
        // This block of code will be executed if the user closes the dialog without accepting it
    }
}

void MainWindow::displaySelectedMat(const QModelIndex &index) {
    int row = index.row();
    // ui->clear_pushButton->show();

    // Retrieve the data of the selected matiere
    QSqlQueryModel *model = qobject_cast<QSqlQueryModel*>(modifyMatUi.tableViewUpdateMat->model());
    QString idMat = model->data(model->index(row, 0)).toString(); // Assuming the first column contains IdMat
    QString nomMat = model->data(model->index(row, 1)).toString(); // Assuming the second column contains NomMat
    double coef = model->data(model->index(row, 2)).toDouble(); // Assuming the third column contains Coef
    int enseignantId = model->data(model->index(row, 3)).toInt(); // Assuming the fourth column contains Ens
    QString enseignantNom = model->data(model->index(row, 4)).toString();
    QString enseignantPrenom = model->data(model->index(row, 5)).toString();

    // Populate line edits with the selected matiere's information
    modifyMatUi.idMat->setText(idMat);
    modifyMatUi.name->setText(nomMat);
    modifyMatUi.coef->setValue(coef);

    QSqlQueryModel *mod = new QSqlQueryModel();
    mod->setQuery("SELECT cnss, nom, prenom FROM Enseignant");

    modifyMatUi.teacher->clear();

    modifyMatUi.teacher->addItem(QString("%1 - %2 %3").arg(enseignantId).arg(enseignantNom).arg(enseignantPrenom));

    int rowCount = model->rowCount();
    for (int i = 0; i < rowCount; ++i) {
        int teacherId = mod->record(i).value("cnss").toInt();
        QString teacherName = mod->record(i).value("nom").toString();
        QString teacherLastName = mod->record(i).value("prenom").toString();
        if(enseignantId!=teacherId){
            modifyMatUi.teacher->addItem(QString("%1 - %2 %3").arg(teacherId).arg(teacherName).arg(teacherLastName));
        }
    }
    modifyMatUi.deleteMatButton->setIcon(QIcon("D:/Pi/CPP/qt/delete.svg"));
    modifyMatUi.deleteMatButton->setStyleSheet("QPushButton:hover { color: black; background-color: red; }");
    modifyMatUi.updateMatButton->setIcon(QIcon("D:/Pi/CPP/qt/edit.svg"));
    modifyMatUi.clearMatButton->setIcon(QIcon("D:/Pi/CPP/qt/clear.svg"));
    modifyMatUi.updateMatButton->show();
    modifyMatUi.deleteMatButton->show();
    modifyMatUi.clearMatButton->show();
}

void MainWindow::clearLineEditsMat() {
    modifyMatUi.idMat->clear();
    modifyMatUi.name->clear();
    modifyMatUi.coef->clear();
    modifyMatUi.teacher->clear();
}

void MainWindow::on_clearMatButton_clicked()
{
    clearLineEditsMat();
    modifyMatUi.updateMatButton->hide();
    modifyMatUi.deleteMatButton->hide();
    modifyMatUi.clearMatButton->hide();
}


void MainWindow::deleteMat() {
    QString idMat = modifyMatUi.idMat->text();

    QMessageBox::StandardButton reply = QMessageBox::critical(this, "Delete Matiere",
                                                              "Are you sure you want to delete this Matiere?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No){
        return;
    }

    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM Matiere WHERE idmat = :idmat");
    deleteQuery.bindValue(":idmat", idMat);

    if (!deleteQuery.exec()) {
        qDebug() << "Error deleting data:" << deleteQuery.lastError().text();
    } else {
        qDebug() << "Data deleted successfully";
        populateTableUpdateMat();
        clearLineEditsMat();
    }
}

void MainWindow::on_deleteMatButton_clicked()
{
    deleteMat();
    clearLineEditsMat();
    populateTableWithMat();
    modifyMatUi.updateMatButton->hide();
    modifyMatUi.deleteMatButton->hide();
    modifyMatUi.clearMatButton->hide();
}

void MainWindow::UpdateMat() {
    QString idMat = modifyMatUi.idMat->text();
    QString name = modifyMatUi.name->text();
    float coef = modifyMatUi.coef->text().toFloat();
    QString selectedText = modifyMatUi.teacher->currentText();
    int teacher = selectedText.section(" - ", 0, 0).toInt();

    if (idMat.isEmpty()) {
        QMessageBox::critical(this, "Error", "Id matiere cannot be empty");
        return;
    }

    if (name.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please fill name field");
        return;
    }

    // if (selectedText=="Select Teacher") {
    //     QMessageBox::critical(this, "Error", "Please select a teacher");
    //     return;
    // }

    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE Matiere SET nom = :nom, coef = :coef, teacher = :teacher WHERE idmat = :idmat");
    updateQuery.bindValue(":idmat", idMat);
    updateQuery.bindValue(":nom", name);
    updateQuery.bindValue(":coef", coef);
    updateQuery.bindValue(":teacher", teacher);

    if (!updateQuery.exec()) {
        qDebug() << "Error updating data:" << updateQuery.lastError().text();
    } else {
        qDebug() << "Data updated successfully";
        populateTableUpdateMat();
        clearLineEditsMat();
    }
}

void MainWindow::on_updateMatButton_clicked()
{
    UpdateMat();
    populateTableWithMat();
    modifyMatUi.updateMatButton->hide();
    modifyMatUi.deleteMatButton->hide();
    modifyMatUi.clearMatButton->hide();
}

//********************************* Groupe Module *************************************************
void MainWindow::on_returnBackGM_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::customizeTableViewGM()
{
    ui->tableViewGM->setColumnWidth(0, 260);
    ui->tableViewGM->setColumnWidth(1, 260);
    ui->tableViewGM->setColumnWidth(2, 260);
}

void MainWindow::populateTableWithGM()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * FROM GroupeModule;");

    ui->tableViewGM->setModel(model);
    customizeTableViewGM();
}
void MainWindow::on_addGM_clicked()
{
    QDialog dialog;
    addGmUi.setupUi(&dialog);
    dialog.setWindowTitle("Grade managment");
    dialog.setWindowIcon(QIcon("D:/Pi/CPP/qt/logopi.jpg"));
    // connect(addGmUi.addGMButton, &QPushButton::clicked, this, &MainWindow::on_addMatButton_clicked);
    connect(addGmUi.addMatGM, &QPushButton::clicked, this, &MainWindow::on_addMatGM_clicked);
    connect(addGmUi.cancelGMButton, &QPushButton::clicked, &dialog, &QDialog::reject);
    populateTableWithGM();
    if (dialog.exec() == QDialog::Accepted) {

    } else {
        // Handle the rejected action or do nothing
        // This block of code will be executed if the user closes the dialog without accepting it
    }
}


void MainWindow::on_addMatGM_clicked()
{
    QDialog dialog;
    addMatGMUi.setupUi(&dialog);
    dialog.setWindowTitle("Add Matiere to GM");
    dialog.setWindowIcon(QIcon("D:/Pi/CPP/qt/logopi.jpg"));
    connect(addMatGMUi.tableViewMatGM, &QTableView::doubleClicked, this, &MainWindow::displayselectedmat);
    connect(addMatGMUi.tableViewMatGM, &QTableView::doubleClicked, this, &MainWindow::ajoutGM);
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * FROM Matiere;");

    addMatGMUi.tableViewMatGM->setModel(model);
    if (dialog.exec() == QDialog::Accepted) {

    } else {
        // Handle the rejected action or do nothing
        // This block of code will be executed if the user closes the dialog without accepting it
    }
}

void MainWindow::displayselectedmat(const QModelIndex &index){
    // Retrieve the data of the selected matiere
    int row = index.row();
    QSqlQueryModel *model = qobject_cast<QSqlQueryModel*>(addMatGMUi.tableViewMatGM->model());
    QString idMat = model->data(model->index(row, 0)).toString(); // Assuming the first column contains IdMat

    qDebug() << "Selected Matiere ID:" << idMat;

    addMatGMUi.lineEdit->setText(idMat);
}

void MainWindow::ajoutGM()
{
    QSqlQuery createGMQuery;
    if (!createGMQuery.exec("CREATE TABLE IF NOT EXISTS GroupeModule ("
                            "IdGm TEXT PRIMARY KEY,"
                            "NomGm TEXT NOT NULL,"
                            "CoefGm REAL)")) { // Added closing parenthesis for the CREATE TABLE statement
        qDebug() << "Error creating table:" << createGMQuery.lastError().text();
        return;
    } else {
        qDebug() << "Table Groupe Module created successfully";
    }

    QSqlQuery createLMQuery;
    if (!createLMQuery.exec("CREATE TABLE IF NOT EXISTS Liste_Matiere ("
                            "IdGm TEXT,"
                            "IdMat INTEGER,"
                            "PRIMARY KEY (IdGm, IdMat),"
                            "FOREIGN KEY (IdGm) REFERENCES GroupeModule(IdGm),"
                            "FOREIGN KEY (IdMat) REFERENCES Matiere(idmat))")) { // Added closing parenthesis for the CREATE TABLE statement
        qDebug() << "Error creating table LISTEMAT:" << createLMQuery.lastError().text();
        return;
    } else {
        qDebug() << "Table Liste Matiere created successfully";
    }


    QString idGm = addGmUi.idgm->text();
    QString nomGm = addGmUi.name->text();
    double coefGm = addGmUi.coef->value();

    if (idGm.isEmpty()) {
        QMessageBox::critical(this, "Error", "Groupe Module id cannot be empty");
        return;
    }

    if (nomGm.isEmpty()) {
        QMessageBox::critical(this, "Error", "Groupe Module name cannot be empty");
        return;
    }

    if (coefGm==0) {
        QMessageBox::critical(this, "Error", "Matiere coefGm number cannot 0");
        return;
    }


    // Insert data into the database
    QSqlQuery insertGMQuery;
    insertGMQuery.prepare("INSERT INTO GroupeModule VALUES (:IdGm,:nomMat, :coefGm)");
    insertGMQuery.bindValue(":IdGm", idGm);
    insertGMQuery.bindValue(":nomMat", nomGm);
    insertGMQuery.bindValue(":coefGm", coefGm);

    if (!insertGMQuery.exec()) {
        qDebug() << "Error inserting data:" << insertGMQuery.lastError().text();
    } else {
        qDebug() << "Data inserted in groupe module successfully";
        // clearLineEdits();
        // Optionally, you can update your UI or perform any other action here
    }
    // PopulateMatiere();



    QString id = addMatGMUi.lineEdit->text();

    if (id.isEmpty()) {
        QMessageBox::critical(this, "Error", "Select Matiere !!!");
        return;
    }

    // Insert data into the database
    QSqlQuery insertLMQuery;
    insertLMQuery.prepare("INSERT INTO Liste_Matiere (IdGm, IdMat) VALUES (:IdGm, :IdMat)");
    insertLMQuery.bindValue(":IdGm", idGm);
    insertLMQuery.bindValue(":IdMat", id);

    if (!insertLMQuery.exec()) {
        qDebug() << "Error inserting data:" << insertLMQuery.lastError().text();
        QMessageBox::critical(this, "Error", "UNIQUE constraint failed: Liste_Matiere.IdGm, Liste_Matiere.IdMat Unable to fetch row");
    } else {
        qDebug() << "Data inserted successfully";
        addMatGMUi.lineEdit->clear();
        // clearLineEdits();
        // Optionally, you can update your UI or perform any other action here
    }
    populateTableWithGM();
}

void MainWindow::ToListeMat(const QModelIndex &index) {

    int row = index.row();

    // Get the model from the table view
    QSqlQueryModel *model = qobject_cast<QSqlQueryModel*>(ui->tableViewGM->model());

    // Get the IdGm value from the selected row
    QString idGm = model->data(model->index(row, 0)).toString();

    qDebug() << "Selected IdGm:" << idGm; // Debug output to check the selected IdGm value

    // Prepare SQL query to retrieve material data associated with the selected GroupeModule
    QSqlQuery query;
    query.prepare("SELECT m.idmat, m.nom, m.coef "
                  "FROM Matiere AS m "
                  "INNER JOIN Liste_Matiere AS lm ON m.idmat = lm.IdMat "
                  "WHERE lm.IdGm = :idGm");
    query.bindValue(":idGm", idGm);

    // Execute the SQL query
    if (!query.exec()) {
        // If an error occurs while executing the query, print an error message
        qDebug() << "Error executing query:" << query.lastError().text();
        return;
    }

    QDialog dialog;
    listeMatUi.setupUi(&dialog);
    dialog.setWindowTitle("Matieres From GM");
    dialog.setWindowIcon(QIcon("D:/Pi/CPP/qt/logopi.jpg"));
    // connect(addMatGMUi.tableViewMatGM, &QTableView::doubleClicked, this, &MainWindow::displayselectedmat);
    // connect(addMatGMUi.tableViewMatGM, &QTableView::doubleClicked, this, &MainWindow::ajoutGM);
    QSqlQueryModel *mod = new QSqlQueryModel();
    mod->setQuery(std::move(query));

    listeMatUi.tableViewlisteMat->setModel(mod);
    connect(listeMatUi.deleteMatGM, &QPushButton::clicked, this, [=]() {
        // Get the currently selected row index from the tableView
        int selectedRow = listeMatUi.tableViewlisteMat->currentIndex().row();

        // Check if a row is selected
        if (selectedRow >= 0) {
            // Get the IdMat value from the selected row
            QString idMat = mod->data(mod->index(selectedRow, 0)).toString();
            qDebug() << "Selected Matiere ID:" << idMat;

            // Prepare SQL query to delete the selected row from Liste_Matiere
            QSqlQuery deleteQuery;
            deleteQuery.prepare("DELETE FROM Liste_Matiere WHERE IdGm = :idGm AND IdMat = :idMat");
            deleteQuery.bindValue(":idGm", idGm);
            deleteQuery.bindValue(":idMat", idMat);

            // Execute the delete query
            if (!deleteQuery.exec()) {
                // If an error occurs while executing the query, print an error message
                qDebug() << "Error deleting row from Liste_Matiere:" << deleteQuery.lastError().text();
                return;
            }

            // Remove the row from the table view
            mod->removeRow(selectedRow);


            // Prepare the SQL query
            QSqlQuery query;
            query.prepare("SELECT m.idmat, m.nom, m.coef "
                          "FROM Matiere AS m "
                          "INNER JOIN Liste_Matiere AS lm ON m.idmat = lm.IdMat "
                          "WHERE lm.IdGm = :idGm");

            // Bind the value of idGm to the placeholder
            query.bindValue(":idGm", idGm);

            // Execute the query
            if (!query.exec()) {
                // If an error occurs while executing the query, print an error message
                qDebug() << "Error executing query:" << query.lastError().text();
                return;
            }

            // Set the query model for the table view
            QSqlQueryModel *mod = new QSqlQueryModel();
            mod->setQuery(std::move(query));
            listeMatUi.tableViewlisteMat->setModel(mod);
        } else {
            qDebug() << "No rows selected"; // Debug output to indicate that no rows are selected
        }

    });
    if (dialog.exec() == QDialog::Accepted) {

    } else {
        // Handle the rejected action or do nothing
        // This block of code will be executed if the user closes the dialog without accepting it
    }
}

void MainWindow::displayselectedgm(const QModelIndex &index){
    // Retrieve the data of the selected matiere
    int row = index.row();
    QSqlQueryModel *model = qobject_cast<QSqlQueryModel*>(ui->tableViewGM->model());
    QString idGm = model->data(model->index(row, 0)).toString(); // Assuming the first column contains IdMat

    qDebug() << "Selected Matiere ID:" << idGm;

    ui->lineEdit->setText(idGm);
}


void MainWindow::deleteGm() {
    QString idGm = ui->lineEdit->text();
    QMessageBox::StandardButton reply = QMessageBox::critical(this, "Delete GM",
                                                              "Are you sure you want to delete this GroupeModule?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No)
        return;

    // Delete student information from the database
    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM GroupeModule WHERE IdGm = :idGm");
    deleteQuery.bindValue(":idGm", idGm);

    if (!deleteQuery.exec()) {
        qDebug() << "Error deleting data:" << deleteQuery.lastError().text();
    } else {
        qDebug() << "Data deleted successfully";
        ui->lineEdit->clear();
            // Refresh the table view to reflect changes
        // clearLineEdits(); // Optionally clear the line edits after deletion
    }


    QSqlQuery deleteLMQuery;
    deleteLMQuery.prepare("DELETE FROM Liste_Matiere WHERE IdGm = :idGm");
    deleteLMQuery.bindValue(":idGm", idGm);
    if (!deleteLMQuery.exec()) {
        qDebug() << "Error deleting row from Liste_Matiere:" << deleteLMQuery.lastError().text();
        return;
    }
    populateTableWithGM();
}
