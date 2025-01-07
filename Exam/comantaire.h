#include<iostream>
#include<string>
using namespace std;

class comantaire{
private:
    int idComentaire = 0;
    string comantaire;
    string matier;
    string nomProfesseur;
    int idEleve;
    string nameEleve;
    string prenomEleve;
public:
    int getidComentaire();
    void setidComentaire(int idComentaire);
    string getcomantaire();
    void setcomantaire(string comantaire);
    string getmatier();
    void setmatier(string matier);
    string getnomProfesseur();
    void setnomProfesseur(string nomProfesseur);
    int getidEleve();
    void setidEleve(int idEleve);
    string getnameEleve();
    void setnameEleve(string nameEleve);
    string getprenomEleve();
    void setprenomEleve(string prenomEleve);
    void addComentaire(string matier,string nomProfesseur,int idEleve,string nameEleve,string prenomEleve);
    void affiherComentaire(int i);
};

