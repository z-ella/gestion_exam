#include<iostream>
#include<string>
using namespace std;

class examanEleve{
private:
    int idExEl = 0;
    int idExam;
    string nameExam;
    int numClassExam;
    string dateExam;
    int idEleve;
    string nameEleve;
    string prenomEleve;
    float noteExam;
    
public:
    int getidExEl();
    void setidExEl(int idExEl);
    int getIdE();
    void setIdE(int idEleve);
    string getNameE();
    void setNameE(string nameEleve);
    string getPrenomE();
    void setPrenomE(string prenomEleve);
    int getId();
    void setId(int idExam);
    string getName();
    void setName(string nameExam);
    string getDate();
    void setDate(string dateExam);
    int getnumClassExam();
    void setnumClassExam(int numClassExam);
    float getNoteExamen();
    void setNoteExamen(int noteExam);
    void examenDeEleve(int idExam , string nameExam ,int numClassExam , string dateExam , int idEleve , string nameEleve , string prenomEleve );
    void noteEleve();
    void modifierNote();
    void afficheExamen();
    void affichernote();
   
};
