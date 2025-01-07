#include<iostream>
#include<string>
#include"parent.h"

using namespace std;

int parent::getId(){
    return this->idParent;
}
void parent::setId(int idParent){
    this->idParent = idParent;
}
string parent::getName(){
    return this->nameParent;
}
void parent::setName(string nameParent){
    this->nameParent = nameParent;
}
string parent::getPrenom(){
    return this->prenomParent;
}
void parent::setPrenom(string prenomParent){
    this->prenomParent = prenomParent;
}
void parent::ajouterParent(){

   
    cout<<"entrer le nom de parent"<<endl;
    cin>>this->nameParent;
    cout<<"entrer le prenom de parent"<<endl;
    cin>>this->nameParent;
    do{
        cout<<"entrer l'id Parent diferent de 0";
        cin>>this->idParent;
    }while(this->idParent==0);
}
void parent::modifierParent(){
    
    cout<<"entrer le nouveau nom de parent"<<endl;
    cin>>this->nameParent;
    cout<<"entrer le nouveau prenom de parent"<<endl;
    cin>>this->prenomParent;
    do{
        cout<<"entrer le nouveau id de parent different de 0"<<endl;
        cin>>this->idParent;
    }while(this->idParent==0);
}
void parent::suprimerParent(){
    string nomEl,prenomEl;
    int idEl=0;
    this->setId(idEl);
    this->setName(nomEl);
    this->setPrenom(prenomEl);
}
