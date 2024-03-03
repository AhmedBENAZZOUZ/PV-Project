#pragma once
#include <iostream>
#include <string>
#include <QtSql>

using namespace std;

class Personne
{
protected:
    int Id;
    string Nom;
    string Prenom;
    string Mail;

public:
    Personne();
    Personne(int, string, string, string);
    ~Personne();
    friend ostream& operator <<(ostream&, const Personne&);
};
