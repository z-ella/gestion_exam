#include<iostream>
#include<string>
#include"comantaire.h"
using namespace std;

int comantaire::getidComentaire(){
    return this->idComentaire;
}
void comantaire::setidComentaire(int idComentaire){
    this->idComentaire = idComentaire;
}
string comantaire::getcomantaire(){
    return this->comantaire;
}
void comantaire::setcomantaire(string comantaire){
    this->comantaire = comantaire;
}
string comantaire::getmatier(){
    return this->matier;
}
void comantaire::setmatier(string matier){
    this->comantaire = matier;
}
string comantaire::getnomProfesseur(){
    return this->nomProfesseur;
}
void comantaire::setnomProfesseur(string nomProfesseur){
    this->nomProfesseur = nomProfesseur;
}
int comantaire::getidEleve(){
    return this->idEleve;
}
void comantaire::setidEleve(int idEleve){
    this->idEleve = idEleve;
}
string comantaire::getnameEleve(){
    return this->nameEleve;
}
void comantaire::setnameEleve(string nameEleve){
    this->nameEleve = nameEleve;
}
string comantaire::getprenomEleve(){
    return this->prenomEleve;
}
void comantaire::setprenomEleve(string prenomEleve){
    this->prenomEleve = prenomEleve;
}
void comantaire::addComentaire(string matier,string nomProfesseur,int idEleve,string nameEleve,string prenomEleve){
  
    this->matier = matier;
    this->nomProfesseur = nomProfesseur;
    this->idEleve = idEleve;
    this->nameEleve = nameEleve;
    this->prenomEleve = prenomEleve;
    cout<<"entrer votre comnter"<<endl;
    cin>>this->comantaire;
    this->idComentaire = 1;
}
void comantaire::affiherComentaire(int i){
    
    cout<<"le comentaire "<<i<<"de professeur "<<this->nomProfesseur<<" du matier "<<this->matier<<" : "<<endl;
    cout<<this->comantaire<<endl;
}

