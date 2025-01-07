#include <iostream>
#include <string>
#include "enseignant.h"
using namespace std;


int enseignant::getId(){
    return this->idenseignant;
}
void enseignant::setId(int idenseignant){
    this->idenseignant = idenseignant;
}
string enseignant::getName(){
    return this->name;
}
void enseignant::setName(string name){
    this->name = name;
}
string enseignant::getPrenom(){
    return this->prenom;
}
void enseignant::setPrenom(string prenom){
    this->prenom = prenom;
}
string enseignant::getMatier(){
    return this->matier;
}
void enseignant::setMatier(string matier){
    this->matier = matier;
}

void enseignant::ajouterEnseignant(){
   
    cout<<"entrer le nom de enseignant"<<endl;
    cin>>this->name;

    cout<<"entrer le prenom de enseignant"<<endl;
    cin>>this->prenom;

    do{
        cout<<"entrer l'id enseignant diferen de 0"<<endl;
        cin>>this->idenseignant;

    }while(this->idenseignant==0);
    cout<<"entrer la matier de enseignant"<<endl;
    cin>>this->matier;

}

void enseignant::modifierEnseignant(){
  
    cout<<"entrer le nouveau nom d'enseignant"<<endl;
    cin>>this->name;
    
    cout<<"entrer le nouveau prenom d'enseignant"<<endl;
    cin>>this->prenom;
  
    do{
        cout<<"entrer le nouveau id d'enseignant different de 0"<<endl;
        cin>>this->idenseignant;
       
    }while(this->idenseignant==0);
    cout<<"entrer la nouvell matier de enseignant"<<endl;
    cin>>this->matier;
}

void enseignant::suprimerEnseignant(){
    
    string nomEl,prenomEl,matier;
    int idEl=0;
    this->setId(idEl);
    this->setName(nomEl);
    this->setPrenom(prenomEl);
    this->setMatier(matier);
}
