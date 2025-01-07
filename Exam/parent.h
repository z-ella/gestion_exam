
#include<iostream>
#include<string>
using namespace std;


class parent{
private:
    int idParent=0;
    string nameParent;
    string prenomParent;
public:
    
    int getId();
    void setId(int idParent);
    string getName();
    void setName(string prenomParent);
    string getPrenom();
    void setPrenom(string prenomParent);
    void ajouterParent();
    void modifierParent();
    void suprimerParent();
};
