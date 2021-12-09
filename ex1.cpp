#include<iostream>
#include<string>
using namespace std;

class MyClass{
    public:
    MyClass(string c);  //declare constructor
    ~MyClass();  //declare destructor
};
string s;
MyClass::MyClass(string c){
    cout<<c<<endl;
}
MyClass::~MyClass(){
    cin>>s;
    cout<<"destructeur est bien cree "<<s<<endl; //to check if the destrutor is created
}

int main(void){
    MyClass s1("le constructeur defini par l'utilisateur est bien cree"); //to check if the constructor is created
    return 0;
}

/*Écrivez un programme qui définit une classe appelée MyClass avec un constructeur par
défaut et un destructeur définis par l'utilisateur.*/ 

//Karim Elhoumaini 