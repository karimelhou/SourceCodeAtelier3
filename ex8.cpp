#include<iostream>
#include<string>
using namespace std;

class Media {
    public:
    // les Fonctions virtuelles
    virtual void imprime() = 0;
    virtual char *id();
    protected: 
    //les attributs
    string titre;  
};
// Sous-classe Livre
class Livre:public Media{
   public:
    Livre(){};
    void imprime(){
        Media::imprime();}
   private:
   //les attributs
   string auteur, code , releaseDate;
};

class Audio:public Media{
    // Sous-classe Audio
    public:
    Audio(){};
    void imprime(){
        Media::imprime();}
    private:
       //les attributs

    string nom, type;
};
class CD:public Audio{
    // Sous-classe CD
    public:
    CD(){};
    void imprime(){
        Audio::imprime();}
    private:
       //les attributs
    string format;
};
class Cassette:public Audio{
    // Sous-classe Cassette
    public:
    Cassette(){};
    void imprime(){
        Audio::imprime();}
    private:
       //les attributs
    string format;
};
class Disque:public Audio{
    // Sous-classe Disque
    public:
    Disque(){};
    void imprime(){
        Audio::imprime();}
    private:
    //les attributs
    string format;
};
//presse
class Presse:public Media{
    // Sous-classe Presse
    public:
    Presse(){};
    void imprime(){
        Media::imprime();}
    private:
    //les attributs
    string nom, code;
};

class Magazine:public Presse{
    // Sous-classe Magazine
    public:
    Magazine(){};
    void imprime(){
        Presse::imprime();}
    private:
    //les attributs
    string titre;
};
class Journal:public Presse{
    // Sous-classe Journal
    public:
    Journal(){};
    void imprime(){
        Presse::imprime();}
    private:
    //les attributs
    string titre;
};
class Revue:public Presse{
    // Sous-classe Revue
    public:
    Revue(){};
    void imprime(){
        Presse::imprime();}
    private:
    //les attributs
    string news;
};


int main(){
    //déclaration des objets 
    //calling the functions 
    Media *media;
    media->id();
    media->imprime();

    Audio audio;
    audio.id();
    audio.imprime();

    Livre livre;
    livre.id();
    livre.imprime();

    Presse presse;
    presse.id();
    presse.imprime();

    CD cd;
    cd.id();
    cd.imprime();

    Cassette cassette;
    cassette.id();
    cassette.imprime();

    return 0;
}

//Karim Elhoumaini 