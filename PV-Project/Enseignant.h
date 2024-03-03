#pragma once
#include "Personne.h"
#include "ui_addMat.h"

class Enseignant : public Personne
{
    int CNSS;
    Ui::addMat amUi;
public:
    Enseignant();
    Enseignant(const int&, const string&, const string&, const string&, const int&);
    ~Enseignant();
    friend ostream& operator <<(ostream&, const Enseignant&);
    void PopulateTeacher();
};
