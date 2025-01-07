
#include<iostream>
#include<string>
using namespace std;

class eleve{
    private :
    int idEleve=0;
    string nameEleve;
    string prenomEleve;
public:
    int getId();
    void setId(int idEleve);
    string getName();
    void setName(string nameEleve);
    string getPrenom();
    void setPrenom(string prenomEleve);
    void ajouterEleve();
    void modifierEleve();
    void suprimerEleve();
    
};
