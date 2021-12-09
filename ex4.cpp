#include<iostream>
using namespace std;
//déclaration de la classe mere
class mere{
    public:
    //la méthode
    void display(){
        cout<<"je suis la classe mere"<<endl;
    }
};
//déclaration de la classe fille hérité
class fille: public mere{
    public:
    //la méthode
    void display(){
        cout<<"je suis la classe fille"<<endl;
    }
};

int main(){
    //creation des objets
    mere m1; 
    //call display function with the object m1
    m1.display();
    fille m2 ;
    m2.display();  
    return 0;
}

//Karim Elhoumaini 