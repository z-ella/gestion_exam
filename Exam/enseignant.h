#include <iostream>
#include <string>
#include"examen.h"
using namespace std;

class enseignant{
 private:
    int idenseignant=0;
    string name;
    string prenom;
    string matier;
public:
    int getId();
    void setId(int idenseignant);
    string getName();
    void setName(string name);
    string getPrenom();
    void setPrenom(string prenom);
    string getMatier();
    void setMatier(string matier);
    void ajouterEnseignant();
    void modifierEnseignant();
    void suprimerEnseignant();
};
