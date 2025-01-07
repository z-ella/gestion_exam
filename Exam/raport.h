#include<iostream>
#include<string>
using namespace std;

class raport{
private:
    int idRaport=0;
    int idEleve;
    string raport;
    string nomRaprt;
    string namEleve;
    string prenomEleve;
public:
    int getidRaport();
    void setidRaport(int idRaport);
    int getidEleve();
    void setidEleve(int idEleve);
    string getnomRaprt();
    void setnomRaprt(string nomRaprt);
   string getnamEleve();
    void setprenameEleve(string namEleve);
    string getprenomEleve();
    void setprenomEleve(string prenomEleve);
    void raportPerformonce(int idEleve,string nomEleve,string prenomEleve);
    void afficherRaport(int i);
};
