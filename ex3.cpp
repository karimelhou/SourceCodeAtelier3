#include<iostream>
using namespace std ;

//declaratuon de class 
class complex{
    public:
    //les atributs
    float real;
    float img;
    complex(int r=0,int i=0){
        real = r;
        img = i;
    }
    //fonction pour calculer la somme
    complex add(complex x){
        complex temp;
        temp.real=real + x.real;
        temp.img=img + x.img;

        return temp;
    }
    //fonction pour calculer la difference 
    complex sub(complex x){
        complex temp;
        temp.real=real - x.real;
        temp.img=img - x.img;

        return temp;
    }
    //fonction pour calculer la multiplication
    complex mult(complex x){
        complex temp;
        temp.real=real * x.real;
        temp.img=img * x.img;

        return temp;
    }
    //fonction pour division la somme
    complex div(complex x){
        complex temp;
        temp.real=real / x.real;
        temp.img=img / x.img;

        return temp;
    }
};

int main(){
    //déclaration des objets 
    complex c1,c2,c3;
    cout<<"Entrer la valeur de la partie reel de premier nombre \n";
    cin>>c1.real;
    cout<<"Entrer la valeur de la partie imaginaire de premier nombre \n";
    cin>>c1.img;
    cout<<"Entrer la valeur de la partie reel de deuxieme nombre \n";
    cin>>c2.real;
    cout<<"Entrer la valeur de la partie imaginaire de deuxieme nombre \n";
    cin>>c2.img;
    // ope pour indiquer l'opiration a effuctué 
    char ope;
    cout<<"What Arithmetic Operation do you want:\n";
    cout<<"please choose + or - or / or *"<<endl;
    cin>>ope;
    //fonction switch
    switch (ope)
    {
    case '+':
        c3=c1.add(c2);
        cout<<c3.real<<" + i"<<c3.img<<endl;
        break;
    case '-':
        c3=c1.sub(c2);
        cout<<c3.real<<" + i"<<c3.img<<endl;
        break;

    case '*':
        c3=c1.mult(c2);
        cout<<c3.real<<" + i"<<c3.img<<endl;
        break; 

    case '/':
        c3=c1.div(c2);
        cout<<c3.real<<" + i"<<c3.img<<endl;
        break; 

    default:
     cout<<"operation not seported";
        break;
    }
    

}

//Karim Elhoumaini 