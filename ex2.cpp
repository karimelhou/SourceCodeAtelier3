#include<iostream>
using namespace std;

// creation de class base shape
class shape{ 
    protected:
    //les atributs
    float length, breadth;
    public:
    shape(float l, float b){
        length = l;
        breadth = b;
    }
};
// creation de classe rectangle 
class rectangle: public shape{
    public:
    //le constructeur 
    rectangle(float l, float b):shape(l, b){}
    float area(){
        return(length * breadth);
    }
};
// creation de classe triange 
class triangle: public shape{
    public:
    // le construteur
    triangle(float l, float b):shape(l, b){}
    float area(){
        return(length * breadth);
    }
};

int main(){
    //declaration de deux objets r1 et t1 
    rectangle r1(2,3);
    triangle t1(5,6);
    //affichage des résultats 
    cout<<"la surface de rectangle est :"<<r1.area()<<endl;
    cout<<"la surface de triangle est :"<<t1.area()<<endl;
    return 0;
}

//Karim Elhoumaini 