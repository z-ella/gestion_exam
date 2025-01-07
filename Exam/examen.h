
#ifndef EXAM_H
#define EXAM_H
#include<iostream>
#include<string>
using namespace std;

class examen{
private:
    int idExam=0;
    string nameExam;
    int numClassExam;
    string dateExam;
public:
    void afficherExam();
    void planifierExamen();
    void modifierSalleExamen();
    int getId();
    void setId(int idExam);
    string getName();
    void setName(string nameExam);
    string getDate();
    void setDate(string dateExam);
    int getnumClassExam();
    void setnumClassExam(int numClassExam);
};
#endif
