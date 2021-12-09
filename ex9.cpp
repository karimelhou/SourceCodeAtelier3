#include <iostream>
using namespace std;


//declaration de la classe 
class counter {
public :
    static int count;
    void call(){
        cout<< "la fonction call a ete appelee "<<++count<<" fois"<<endl; }; 
};


int counter ::count=0;

int main(){

    counter obj1 ;//déclaration d' objet de la classe counter
    obj1.call(); //déclaration de la fonction 

    counter obj2 ;//déclaration d' objet de la classe counter
    obj2.call(); //déclaration de la fonction 

    counter obj3 ;//déclaration d' objet de la classe counter
    obj3.call(); //déclaration de la fonction


    return 0 ;
}

//Karim Elhoumaini 