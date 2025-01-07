#include<iostream>
#include<string>
#include"eleve.h"
using namespace std;

int eleve::getId(){
    return this->idEleve;
}
void eleve::setId(int idEleve){
    this->idEleve = idEleve;
}
string eleve::getName(){
    return this->nameEleve;
}
void eleve::setName(string nameEleve){
    this->nameEleve = nameEleve;
}
string eleve::getPrenom(){
    return this->prenomEleve;
}
void eleve::setPrenom(string prenomEleve){
    this->prenomEleve = prenomEleve;
}

void eleve::ajouterEleve(){
    
  
    cout<<"entrer le nom d'eleve"<<endl;
    cin>>this->nameEleve;
    cout<<"entrer le prenom d'eleve"<<endl;
    cin>>this->prenomEleve;
    do{
        cout<<"entrer l'id d'eleve diferent de 0"<<endl;
        cin>>this->idEleve;
    }while(this->idEleve==0);
}
    
void eleve::modifierEleve(){
    
   
    cout<<"entrer le nouveau nom d'eleve"<<endl;
    cin>>this->nameEleve;
    cout<<"entrer le nouveau prenom d'eleve"<<endl;
    cin>>this->prenomEleve;
    do{
        cout<<"entrer le nouveau id d'eleve diferent de 0"<<endl;
        cin>>this->idEleve;
    }while(this->idEleve==0);
    
}

void eleve::suprimerEleve(){
    
    string nomEl,prenomEl;
    int idEl=0;
    this->setId(idEl);
    this->setName(nomEl);
    this->setPrenom(prenomEl);
}
