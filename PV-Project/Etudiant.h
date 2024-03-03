#pragma once
#include "Personne.h"
#include <QTabWidget>

class Etudiant : public Personne
{
    int Num_insc;

public:
    Etudiant();
    Etudiant(int id, string nom, string prenom, string mail, int numInsc);
    ~Etudiant();
    friend ostream& operator <<(ostream&, const Etudiant&);
    void ajouterEtudiant();
    void populateTableWidget() ;
    //float CalculerMoyMat(const Matiere&);
};
