#include<iostream>
#include<string>
using namespace std;
//declaration de la classe animal 
class Animal{
    protected:
    //les attributs
    string nom;
    int age;
    public:
    //la fonction set_value() 
    void set_value(int a, string n){
        age = a;
        nom = n;
    }
};
//declaration de la classe zebra  
class Zebra: public Animal{
    public:
    //les attributs
    string origin ;
    //la méthode set_value() 
    void displayZebra(){
        cout<<"Le nom est : "<<nom<<endl;
        cout<<"Il a "<<age<<"ans"<<endl;
        cout<<"Il vient de Saturn "<<endl;
    }
};
//declaration de la classe dolphin 
class Dolphin: public Animal{
    public:
    //les attributs
    string origin ;
    //la méthode set_value() 
    void displayDolphin(){
        cout<<"Le nom est : "<<nom<<endl;
        cout<<"Il a "<<age<<"ans"<<endl;
        cout<<"Il vient de Mars "<<endl;
    }
};

int main(){
    //les objets
    Zebra zebra;
    Dolphin dolphin;
    string name1="myZebra";
    string name2="myDolphin";
    //function declaration 
    zebra.set_value(8,name1);
    dolphin.set_value(13,name2);

    zebra.displayZebra();
    dolphin.displayDolphin();
}

//Karim Elhoumaini 