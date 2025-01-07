#include<iostream>
#include<string>
#include"raport.h"
using namespace std;

int raport::getidRaport(){
    return this->idRaport;
}
void raport::setidRaport(int idRaport){
   this->idRaport = idRaport;
}
int raport::getidEleve(){
    return this->idEleve;
}
void raport::setidEleve(int idEleve){
    this->idEleve = idEleve;
}
string raport::getnomRaprt(){
    return this->nomRaprt;
}
void raport::setnomRaprt(string nomRaprt){
    this->nomRaprt = nomRaprt;
}
string raport::getnamEleve(){
    return this->namEleve;
}
void raport::setprenameEleve(string namEleve){
    this->namEleve = namEleve;
}
string raport::getprenomEleve(){
    return this->prenomEleve;
}
void raport::setprenomEleve(string namEleve){
    this->namEleve = namEleve;
}

void raport::raportPerformonce(int idEleve,string nomEleve,string prenomEleve){
    
    do{
        cout<<"entrer l'id de raport diferent de 0: "<<endl;
        cin>>this->idRaport;
    }while(this->idRaport==0);
    cout<<"entrer nom raport: "<<endl;
    cin>>this->nomRaprt;
    cout<<"entrer le raport :"<<endl;
    cin>>this->raport;
    this->idEleve = idEleve;
    this->namEleve = nomEleve;
    this->prenomEleve = prenomEleve;
    
}

void raport::afficherRaport(int i){
    
    cout<<"le rapport num "<<i<<" :"<<endl;
    cout<<this->raport<<endl;
    
}


