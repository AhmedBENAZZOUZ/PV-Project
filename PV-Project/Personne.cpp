#include "Personne.h"

#include "Personne.h"

Personne::Personne() : Id(-1), Nom(""), Prenom(""), Mail("") {};

Personne::Personne(int id, string nom, string prenom, string mail)
    : Id(id), Nom(nom), Prenom(prenom), Mail(mail) {}

Personne::~Personne() {}

ostream& operator <<(ostream& os, const Personne& obj) {
    os << "Personne(" << "Id: " << obj.Id << ", Nom: " << obj.Nom << ", Prenom: " << obj.Prenom << ", Mail: " << obj.Mail << ")";
    return os;
}
