#include<iostream>
#include<string>
using namespace std;

class administrateur{
private:
    int idAdministrateur=0;
    string password;
    string name;
    string prenom;
public:
    int getId();
    void setId(int idAdministrateur);
    string getPassword();
    void setPassword(string password);
    string getName();
    void setName(string name);
    string getPrenom();
    void setPrenom(string name);
    void ajouterAdministrateur();
    void modifierAdministrateur();
    void suprimerAdministrateur();
};

class me{
private:
    string password = "pass1234";
    string name = "abdelkaoui";
    string prenom = "abaoubida";
public:
    string getPassword();
    void setPassword(string password);
    string getName();
    void setName(string name);
    string getPrenom();
    void setPrenom(string name);
};
