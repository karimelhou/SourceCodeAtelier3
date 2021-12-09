#include <iostream>
#include <string>
using namespace std;

class Personne
{
    // déclaration des variables privées
private:
    string nom, prenom, date;

public:
    // déclarattion des variables pour les rendres public
    string getnom();
    void setnom(string value);
    string getprenom();
    void setprenom(string value);
    string getdate();
    void setdate(string value);


    Personne(string n, string p, string d);
    virtual void Afficher();
    
};
//La class employé
class Employe : public Personne 
{
private:
    float salaire = 0;

public:
    float getSalaire();
    void setSalaire(float value);

    Employe(const string n, const string p, string dn, float s); 
    // la redéfinition de la méthode Afficher.
    void Afficher() override; 
};

//La class Chef
class Chef : public Employe 
{
private:
    string service;

public:
    string getService();
    void setService(string value);

    Chef(string n, string p, string dn, double s, string ser); 
    // la redéfinition de la méthode Afficher.
    void Afficher() override; 
};

// class Directeur
class Directeur : public Chef 
{
private:
    string societe;

public:
    string getSociete(); 
    void setSociete(string value);

    Directeur(string n, string p, string dn, double s, string ser, string soc);

    void Afficher() override;
};

string Personne::getnom()
{
    return nom;
}

void Personne::setnom(string value)
{
    nom = value;
}

string Personne::getprenom()
{
    return prenom;
}

void Personne::setprenom(string value)
{
    prenom = value;
}

string Personne::getdate()
{
    return date;
}

void Personne::setdate(string value)
{
    date = value;
}

Personne::Personne(string n, string p, string d) // constructeur 
{
    nom = n;
    prenom = p;
    date = d;
}

void Personne::Afficher() // l affichage des variables de class personne 
{
    cout << "Nom: " << nom << " | Prenom: " << prenom << " | Date de naissance: " << date;
}

float Employe::getSalaire()
{
    return salaire;
}

void Employe::setSalaire(float value)
{
    salaire = value;
}

Employe::Employe(string n, string p, string d, float s) : Personne(n, p, d)
{
    salaire = s;
}

void Employe::Afficher()
{
    Personne::Afficher();
    cout<< " | Le Salaire est : " << salaire << endl;
}

string Chef::getService()
{
    return service;
}

void Chef::setService(string value)
{
    service = value;
}

Chef::Chef(string n, string p, string d, double s, string ser) : Employe(n, p, d, s)
{
    service = ser;
}

void Chef::Afficher()
{
    Employe::Afficher(); // constructeur 
    cout << " | Service: " << service;
}

string Directeur::getSociete()
{

    return societe;
}

void Directeur::setSociete(string value)
{
    societe = value;
}

Directeur::Directeur(string n, string p, string d, double s, string ser, string soc) : Chef(n, p, d, s, ser)
{
    societe = soc;
}

void Directeur::Afficher()
{
    Chef::Afficher();
    cout << " | La Societe est : " << societe;
}

int main() {
    Directeur d("Karim", "ElHoumaini", "2001", 150, "Checking", "IlevTech"); // obj 
    d.Afficher(); // l appel de methode afficher ()
    return 0;
}

// Karim Elhoumaini