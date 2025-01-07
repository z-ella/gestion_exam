#include<iostream>
#include<string>
using namespace std;

#include "examen.h"

int examen::getId(){
    return this->idExam;
}
void examen::setId(int idExam){
    this->idExam = idExam;
}
string examen::getName(){
    return this->nameExam;
}
void examen::setName(string nameExam){
    this->nameExam = nameExam;
}
string examen::getDate(){
    return this->dateExam;
}
void examen::setDate(string dateExam){
    this->dateExam = dateExam;
}

int examen::getnumClassExam(){
    return this->numClassExam;
}
void examen::setnumClassExam(int numClassExam){
    this->numClassExam = numClassExam;
}


void examen::planifierExamen(){
    
    do{
        cout<<"entrer id d'examen different de 0"<<endl;
        cin>>this->idExam;
    }while(this->idExam==0);
    cout<<"entrer nom d'examen "<<endl;
    cin>>this->nameExam;
    cout<<"entrer d'ate examen "<<endl;
    cin>>this->dateExam;
    cout<<"entrer numero de class d'examen "<<endl;
    cin>>this->numClassExam;
}

void examen::modifierSalleExamen(){
 
    cout<<"entrer la nouvelle salle d'examen "<<endl;
    cin>>this->numClassExam;
   
}
void examen::afficherExam(){
    cout<<"la matier d'examen: "<<this->nameExam<<endl;
    cout<<"la date d'examen: "<<this->dateExam<<endl;
    cout<<"le numero classe d'examen: "<<this->numClassExam<<endl;
}
