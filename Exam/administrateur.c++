#include<iostream>
#include<string>
#include "administrateur.h"

using namespace std;

string administrateur::getPassword(){
   return this->password;
}
void administrateur::setPassword(string password){
    this->password=password;
}

string administrateur::getPrenom(){
   return this->prenom;
}
void administrateur::setPrenom(string prenom){
    this->prenom=prenom;
}

string administrateur::getName(){
   return this->name;
}
void administrateur::setName(string name){
    this->name=name;
}

int administrateur::getId(){
    return this->idAdministrateur;
}
void administrateur::setId(int id){
    this->idAdministrateur=id;
}

void administrateur::ajouterAdministrateur(){
   
    cout<<"entrer le nom de administrateur"<<endl;
    cin>>this->name;
    cout<<"entrer le prenom de administrateur"<<endl;
    cin>>this->prenom;
    do{
    cout<<"entrer l'id administrateur diferent de 0"<<endl;
    cin>>this->idAdministrateur;
    }while(this->idAdministrateur==0);
    cout<<"entrer password administrateur"<<endl;
    cin>>this->password;
}

void administrateur::modifierAdministrateur(){
    
    cout<<"entrer le nouveau password"<<endl;
    cin>>this->password;
    cout<<"entrer le nouveau nom d'administrateur"<<endl;
    cin>>this->name;
    cout<<"entrer le nouveau prenom d'administrateur"<<endl;
    cin>>this->prenom;
    do{
        cout<<"entrer le nouveau id d'administrateur diferent de 0"<<endl;
        cin>>this->idAdministrateur;
    }while(this->idAdministrateur==0);
}

void administrateur::suprimerAdministrateur(){
  
    string nomEl,prenomEl,password;
    int idEl=0;
    this->setId(idEl);
    this->setName(nomEl);
    this->setPrenom(prenomEl);
    this->setPassword(password);
    
}

string me::getPassword(){
   return this->password;
}
void me::setPassword(string password){
    this->password=password;
}

string me::getPrenom(){
   return this->prenom;
}
void me::setPrenom(string prenom){
    this->prenom=prenom;
}

string me::getName(){
   return this->name;
}
void me::setName(string name){
    this->name=name;
}
