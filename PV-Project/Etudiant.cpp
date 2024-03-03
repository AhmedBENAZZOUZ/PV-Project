#include "Etudiant.h"

Etudiant::Etudiant() : Personne(), Num_insc(-1) {};

Etudiant::Etudiant(int id, string nom, string prenom, string mail, int numInsc) : Personne(id, nom, prenom, mail), Num_insc(numInsc) {};

Etudiant::~Etudiant() {};

ostream& operator <<(ostream& os, const Etudiant& obj) {
    os << "Etudiant(" << "Id: " << obj.Id << ", Nom: " << obj.Nom << ", Prenom: " << obj.Prenom << ", Mail: " << obj.Mail << ", Num insc: " << obj.Num_insc << ")";
    return os;
}
