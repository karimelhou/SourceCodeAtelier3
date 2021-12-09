#include<iostream>
#include<cmath>
using namespace std;

class vecteur3d {
    private:
    float x, y, z;
   
    public:
    //constructeur avec des valeur 0 
    vecteur3d(float a=0, float b=0, float c=0):x(a),y(b),z(c){}

    //l'affichage d'un vercteur
    void afficher(){
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
    //la somme de deux vecteurs
    vecteur3d somme(vecteur3d v2){
        vecteur3d v3 ;
        v3.x = this->x+v2.x;
        v3.y = this->y+v2.y;
        v3.z = this->z+v2.z;
        return v3;
    }
    //Le produit scalaire de deux vecteurs
    vecteur3d produit(vecteur3d v2){
        vecteur3d v4;
        v4.x = this->x*v2.x;
        v4.y = this->y*v2.y;
        v4.z = this->z*v2.z;
        return v4;
    }

    //tester si les vecteurs sont les memes
    bool coincide(vecteur3d v2){
        return(x == v2.x && y == v2.y && z == v2.z);
    }

    //calculer la norme de vecteur
    float norme(vecteur3d v2){
        float norm = sqrt(x*x + y*y + z*z);
        return norm;
    }

    //Renvoie le vecteur qui la plus grande norme par valeur
    vecteur3d normax(vecteur3d v2){
        if (this->norme(v2) > v2.norme(*this))
        {
            return *this;}
        else {
            return v2;}
    }

    //Renvoie le vecteur qui la plus grande norme par adresse
    vecteur3d * normax(vecteur3d * v2){
        if (this->norme(*v2) > v2->norme(*this)) 
        {
            return  this;}
        else {
            return v2;}
    }

    //Renvoie le vecteur qui la plus grande norme par reference
    vecteur3d & normaxR(vecteur3d &v2){
        if (this->norme(v2) > v2.norme(*this))
        {
            return *this;}
        else {
            return v2;}
    }

};


int main(){
    //declarartion et affichage des deux vecteurs
    vecteur3d v1(2,2,5);
    cout<<"vecteur v1 est : ";
    v1.afficher();
    vecteur3d v2(3,6,10);
    cout<<"vecteur v2 est : ";
    v2.afficher();

    //la somme
    cout << "La somme des vecteurs v1 et v2 est : ";
    vecteur3d v3 = v1.somme(v2);
    v3.afficher();

    //produit scalaire
    cout << "Le Produit scalaire des vecteurs v1 et v2 est : ";
    vecteur3d v4 = v1.produit(v2);
    v4.afficher();

   //test coincide
    if (v1.coincide(v2))
    {
        cout<<"sont les memes"<<endl;}
    else{
        cout<<"sont pas les memes"<<endl;}
    
    //la norme
    cout << "La norme de vecteur v1 est : ";
    cout<<v1.norme(v2)<<endl;
    cout << "La norme de vecteur v2 est : ";
    cout<<v2.norme(v1)<<endl;

    //Renvoie le vecteur qui la plus grande norme par valeur
    cout << "Le vecteur qui a la plus grande norme par valeur est: ";
    (v1.normax(v2)).afficher();

    //Renvoie le vecteur qui la plus grande norme par adresse
    cout << "Le vecteur qui a la plus grande norme par adresse est: ";
    (v1.normax(&v2))->afficher();

    //Renvoie le vecteur qui la plus grande norme par reference
    cout << "Le vecteur qui a la plus grande norme par reference est: ";
    (v1.normaxR(v2)).afficher();

    return 0;
}

//Karim Elhoumaini 