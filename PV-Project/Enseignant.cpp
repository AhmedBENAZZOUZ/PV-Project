#include "Enseignant.h"

Enseignant::Enseignant() : Personne(), CNSS(-1) {};

Enseignant::Enseignant(const int& _id, const string& _nom, const string& _prenom, const string& _mail, const int& _cnss)
    : Personne(_id, _nom, _prenom, _mail), CNSS(_cnss) {};

Enseignant::~Enseignant() {};

ostream& operator <<(ostream& os, const Enseignant& obj) {
    os << "Enseignant(" << "Id: " << obj.Id << ", Nom: " << obj.Nom << ", Prenom: " << obj.Prenom << ", Mail: " << obj.Mail << ", CNSS: " << obj.CNSS << ")";
    return os;
}

void PopulateTeacher(Ui::addMat* ui) {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT nom FROM Enseignant");

    ui->teacher->clear();

    ui->teacher->addItem("Select Teacher");

    int rowCount = model->rowCount();
    for (int i = 0; i < rowCount; ++i) {
        QString teacherName = model->record(i).value("nom").toString();
        ui->teacher->addItem(teacherName);
    }
    delete model;
}
