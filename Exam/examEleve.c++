#include<iostream>
#include<string>
#include"examEleve.h"
using namespace std;

int examanEleve::getidExEl(){
    return this->idExEl;
}
void examanEleve::setidExEl(int idExEl){
    this->idExEl = idExEl;
}
int examanEleve::getIdE(){
    return this->idEleve;
}
void examanEleve::setIdE(int idEleve){
    this->idEleve = idEleve;
}
string examanEleve::getNameE(){
    return this->nameEleve;
}
void examanEleve::setNameE(string nameEleve){
    this->nameEleve = nameEleve;
}
string examanEleve::getPrenomE(){
    return this->prenomEleve;
}
void examanEleve::setPrenomE(string prenomEleve){
    this->prenomEleve = prenomEleve;
}
int examanEleve::getId(){
    return this->idExam;
}
void examanEleve::setId(int idExam){
    this->idExam = idExam;
}
string examanEleve::getName(){
    return this->nameExam;
}
void examanEleve::setName(string nameExam){
    this->nameExam = nameExam;
}
string examanEleve::getDate(){
    return this->dateExam;
}
void examanEleve::setDate(string dateExam){
    this->dateExam = dateExam;
}

int examanEleve::getnumClassExam(){
    return this->numClassExam;
}
void examanEleve::setnumClassExam(int numClassExam){
    this->numClassExam = numClassExam;
}
void examanEleve::setNoteExamen(int noteExam){
    this->noteExam = noteExam;
}
float examanEleve::getNoteExamen(){
    
    return this->noteExam;
}

void examanEleve::examenDeEleve(int idExam , string nameExam ,int numClassExam , string dateExam , int idEleve , string nameEleve , string prenomEleve ){
    
    this->idExam = idExam;
    this->nameExam = nameExam;
    this->numClassExam = numClassExam;
    this->dateExam = dateExam;
    this->idEleve = idEleve;
    this->nameEleve = nameEleve;
    this->prenomEleve = prenomEleve;
    this->idExEl = 1;
}
void examanEleve::noteEleve(){
    
    cout<<"entrer la note de "<<this->nameExam<<" pour "<<this->nameEleve<<endl;
    cin>>this->noteExam;
}
void examanEleve::modifierNote(){
    
    cout<<"entrer la nouvelle note de "<<this->nameExam<<" pour "<<this->nameEleve<<endl;
    cin>>this->noteExam;
  
}
void examanEleve::afficheExamen(){
    cout<<"**"<<this->nameExam<<"**"<<endl;
}

void examanEleve::affichernote(){
    cout<<"la note de "<<this->nameExam<<" est: "<<this->noteExam<<endl;
}

