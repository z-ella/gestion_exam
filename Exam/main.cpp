#include <iostream>
#include <string>
#include"administrateur.h"
#include"eleve.h"
#include"parent.h"
#include"examen.h"
#include "enseignant.h"
#include"examEleve.h"
#include"comantaire.h"
#include"raport.h"

using namespace std;
examanEleve exel[300];
eleve student[100];
administrateur admin[5];
parent par[100];
examen exam[20];
enseignant ens[20];
me m;
raport rapo[100];
comantaire com[300];

        int i,j,z;
int main() {
    string nomel,prenomel,nompa,prenomepa;
    int idel,idpa;
    int cte;
    int choix,choix1,choix2,choix3,choix4,id,numclass,ad,idExam,choi,idex;
    string nom,prenom,password,matier,date,nameExamm,dateExam,nomMatier;
s110:
s26:
s36:
s44:
f1:
    
    cout << "-------------------------------------------------------------------" << endl;
    cout << "|                                                                 |" << endl;
    cout << "|     *******************************************************     |" << endl;
    cout << "|    * Bienvenue dans votre application de gestion d'examens *    |" << endl;
    cout << "|     *******************************************************     |" << endl;
    cout << "|                                                                 |" << endl;
    cout << "|           Appuyez sur (1)            Administrateur             |" << endl;
    cout << "|           Appuyez sur (2)              Etudiants                |" << endl;
    cout << "|           Appuyez sur (3)               Parents                 |" << endl;
    cout << "|           Appuyez sur (4)             Enseignants               |" << endl;
    cout << "|           Appuyez sur (5)          Exit la plication            |" << endl;
    cout << "|                                                                 |" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    
    do {
        cout << "Enter votre choice: ";
        cin >> choix;
        
        
    } while (choix != 1 && choix != 2 && choix != 3 && choix != 4 && choix != 5);
    
    
    switch (choix) {
        case 1:
            cout<<"entrer votre nom: "<<endl;
            cin>>nom;
            cout<<"entrer votre prenom: "<<endl;
            cin>>prenom;
            cout<<"entrer votre password: "<<endl;
            cin>>password;
            ad = 0;
            for(i=0;i<5;i++){
                if((admin[i].getName()==nom&&admin[i].getPrenom()==prenom&&admin[i].getPassword()==password)||(m.getName()==nom&&m.getPrenom()==prenom&&m.getPassword()==password)
                   ){
                    ad = 1;
                }
            }
            if(ad==0){
                cout<<"les donner sont faut"<<endl;
                goto f1;
            }
            
            
            s111: s112:  s113:  s114: s121: s122:  s123:  s124: s131: s132:  s133:  s134: s12:  s13:  s14: s15:  s16: s17:  s18: s19:
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "|                                                              |" << endl;
            cout << "|     *************************************************        |" << endl;
            cout << "|     *           Ceci est la page Administrateur      *       |" << endl;
            cout << "|     *************************************************        |" << endl;
            cout << "|                                                              |" << endl;
            cout << "|               Appuyez sur (1)  Ajouter Utilisateur           |" << endl;
            cout << "|               Appuyez sur (2)  Mettre a jour Utilisateur     |" << endl;
            cout << "|               Appuyez sur (3)  Supprimer Utilisateur         |" << endl;
            cout << "|               Appuyez sur (4)  Planifier un Examen           |" << endl;
            cout << "|               Appuyez sur (5)  Affecter Eleve a Examen       |" << endl;
            cout << "|               Appuyez sur (6)  Modifier Salle d'Examen       |" << endl;
            cout << "|               Appuyez sur (7)  Rapport Performance Eleve     |" << endl;
            cout << "|               Appuyez sur (8)  Entrer Les Notes d'Examens    |" << endl;
            cout << "|               Appuyez sur (9)  Modifier les notes d'eleve    |" << endl;
            cout << "|               Appuyez sur (10) Revenir en arriere            |" << endl;
            cout << "|                                                              |" << endl;
            cout << "----------------------------------------------------------------" << endl;
            do {
                cout << "Enter votre choice: ";
                cin >> choix1;
                
                
            } while (choix1 != 1 && choix1 != 2 && choix1 != 3 && choix1 != 4 && choix1 != 5 && choix1 != 6 && choix1 != 7 && choix1 != 8 && choix1 != 9 && choix1 != 10);
            switch (choix1) {
                case 1:
                    int choisUt;
                    do{
                        cout<<"choisie la nature d'utulisateure que vous vouller ajouter "<<endl;
                        cout<<"eleve(1) parent(2) enseignant(3) administrateur(4): "<<endl;
                        cin>>choisUt;
                    }while(choisUt!=1 &&choisUt!=2 &&choisUt!=3 &&choisUt!=4);
                    if(choisUt==1){
                        cte=0;
                        for(i=0;i<100;i++){
                            if(student[i].getId()!=0){
                                cte++;
                            }
                            else{
                                break;
                            }
                        }
                        student[cte].ajouterEleve();
                        goto s111;
                    }
                    
                    if(choisUt==2){
                        cte=0;
                        for(i=0;i<100;i++){
                            if(par[i].getId()!=0){
                                cte++;
                            }
                            else{
                                break;
                            }
                        }
                        par[cte].ajouterParent();
                        goto s112;
                    }
                    
                    if(choisUt==3){
                        cte=0;
                        for(i=0;i<20;i++){
                            if(ens[i].getId()!=0){
                                cte++;
                            }
                            else{
                                break;
                            }
                        }
                        
                        ens[cte].ajouterEnseignant();
                        goto s113;
                    }
                    if(choisUt==4){
                        cte=0;
                        for(i=0;i<5;i++){
                            if(admin[i].getId()!=0){
                                cte++;
                            }
                            else{
                                break;
                            }
                        }
                        admin[cte].ajouterAdministrateur();
                        goto s114;
                    }
                    
                    break;
                case 2:
                    int choisMo;
                    do{
                        cout<<"choisie la nature d'utulisateure que vous vouller modifier "<<endl;
                        cout<<"eleve(1) parent(2) enseignant(3) administrateur(4): "<<endl;
                        cin>>choisMo;
                    }while(choisMo!=1 &&choisMo!=2 &&choisMo!=3 &&choisMo!=4);
                    if(choisMo==1){
                        cout<<"entrer le nom d'eleve"<<endl;
                        cin>>nom;
                        cout<<"entrer le prenom d'eleve"<<endl;
                        cin>>prenom;
                        cout<<"entrer l' id d'eleve"<<endl;
                        cin>>id;
                        ad = 0;
                        for(i=0;i<100;i++){
                            
                            if(student[i].getId()==id && student[i].getName()==nom && student[i].getPrenom()==prenom){
                                
                                student[i].modifierEleve();
                                ad = 1;
                            }
                        }
                        if(ad == 0){
                            cout<<"cet eleve n'existe pas"<<endl;
                        }
                        goto s121;
                    }
                    
                    if(choisMo==2){
                        cout<<"entrer le nom d'parent: "<<endl;
                        cin>>nom;
                        cout<<"entrer le prenom d'parent: "<<endl;
                        cin>>prenom;
                        cout<<"entrer l' id d'parent: "<<endl;
                        cin>>id;
                        ad = 0;
                        for(i=0;i<100;i++){
                            if(par[i].getId()==id&&par[i].getName()==nom&&par[i].getPrenom()==prenom){
                                ad = 1;
                                par[i].modifierParent();
                            }
                        }
                        if(ad == 0){
                            cout<<"ce parent n'existe pas: "<<endl;
                        }
                        goto s122;
                    }
                    if(choisMo==3){
                        cout<<"entrer le nom d'enseignant: "<<endl;
                        cin>>nom;
                        cout<<"entrer le prenom d'enseignant: "<<endl;
                        cin>>prenom;
                        cout<<"entrer l' id d'enseignant: "<<endl;
                        cin>>id;
                        cout<<"entrer la matier d'enseignant: "<<endl;
                        cin>>matier;
                        ad = 0;
                        for(i=0;i<20;i++){
                            if(ens[i].getId()==id&&ens[i].getName()==nom&&ens[i].getPrenom()==prenom&&ens[i].getMatier()==matier){
                                ad = 1;
                                ens[i].modifierEnseignant();
                            }
                        }
                        if(ad == 0){
                            cout<<"ce  enseignant n'existe pas: "<<endl;
                        }
                        goto s123;
                    }
                    if(choisMo==4){
                        
                        cout<<"entrer le nom d'administrateur: "<<endl;
                        cin>>nom;
                        cout<<"entrer le prenom d'administrateur: "<<endl;
                        cin>>prenom;
                        cout<<"entrer l' id d'enseignant: "<<endl;
                        cin>>id;
                        cout<<"entrer la password d'administrateur: "<<endl;
                        cin>>password;
                        ad = 0;
                        for(i=0;i<5;i++){
                            if(admin[i].getId()==id&&admin[i].getName()==nom&&admin[i].getPrenom()==prenom&&admin[i].getPassword()==password){
                                ad = 1;
                                admin[i].modifierAdministrateur();
                            }
                        }
                        if(ad == 0){
                            cout<<"ce administrateur n'existe pas"<<endl;
                        }
                        
                    }
                    goto s124;
                    break;
                case 3:
                    
                    int choissu;
                    do{
                        cout<<"choisie la nature d'utulisateure que vous vouller suprimer "<<endl;
                        cout<<"eleve(1) parent(2) enseignant(3) administrateur(4): "<<endl;
                        cin>>choissu;
                    }while(choissu!=1 && choissu!=2 && choissu!=3 && choissu!=4);
                    if(choissu==1){
                        cout<<"entrer le nom d'eleve: "<<endl;
                        cin>>nom;
                        cout<<"entrer le prenom d'eleve: "<<endl;
                        cin>>prenom;
                        cout<<"entrer l' id d'eleve: "<<endl;
                        cin>>id;
                        ad = 0;
                        for(i=0;i<100;i++){
                            if(student[i].getId()==id && student[i].getName()==nom && student[i].getPrenom()==prenom){
                                ad = 1;
                                student[i].suprimerEleve();
                            }
                            
                        }
                        if(ad == 0){
                            cout<<"ce eleve n'existe pas"<<endl;
                        }
                        
                        goto s131;
                    }
                    
                    if(choissu==2){
                        cout<<"entrer le nom d'parent: "<<endl;
                        cin>>nom;
                        cout<<"entrer le prenom d'parent: "<<endl;
                        cin>>prenom;
                        cout<<"entrer l' id d'parent: "<<endl;
                        cin>>id;
                        ad = 0;
                        for(i=0;i<100;i++){
                            if(par[i].getId()==id&&par[i].getName()==nom&&par[i].getPrenom()==prenom){
                                ad = 1;
                                par[i].suprimerParent();
                            }
                        }
                        if(ad == 0){
                            cout<<"ce parent n'existe pas: "<<endl;
                        }
                        
                        goto s132;
                        
                    }
                    if(choissu==3){
                        cout<<"entrer le nom d'enseignant: "<<endl;
                        cin>>nom;
                        cout<<"entrer le prenom d'enseignant: "<<endl;
                        cin>>prenom;
                        cout<<"entrer l' id d'enseignant: "<<endl;
                        cin>>id;
                        cout<<"entrer la matier d'enseignant: "<<endl;
                        cin>>matier;
                        ad = 0;
                        for(i=0;i<20;i++){
                            if(ens[i].getId()==id&&ens[i].getName()==nom&&ens[i].getPrenom()==prenom&&ens[i].getMatier()==matier){
                                ens[i].suprimerEnseignant();
                                ad = 1;
                            }
                        }
                        if(ad == 0){
                            cout<<"ce enseignat n'existe pas: "<<endl;
                        }
                        goto s133;
                    }
                    if(choissu==4){
                        
                        cout<<"entrer le nom d'administrateur: "<<endl;
                        cin>>nom;
                        cout<<"entrer le prenom d'administrateur: "<<endl;
                        cin>>prenom;
                        cout<<"entrer l' id d'enseignant: "<<endl;
                        cin>>id;
                        cout<<"entrer la password d'administrateur: "<<endl;
                        cin>>password;
                        ad = 0;
                        for(i=0;i<5;i++){
                            if(admin[i].getId()==id&&admin[i].getName()==nom&&admin[i].getPrenom()==prenom&&admin[i].getPassword()==password){
                                admin[i].suprimerAdministrateur();
                                ad = 1;
                            }
                        }
                        if(ad == 0){
                            cout<<"ce administrateur n'existe pas"<<endl;
                        }
                        goto s134;
                    }
                    break;
                case 4:
                    
                    for(i=0;i<20;i++){
                        if(exam[i].getId()==0){
                            exam[i].planifierExamen();
                            break;
                        }
                    }
                    goto s14;
                    break;
                case 5:
                    cout<<"entrer l'id eleve: "<<endl;
                    cin>>id;
                    cout<<"entrer le nom d'eleve: "<<endl;
                    cin>>nom;
                    cout<<"entrer le prenom d'eleve: "<<endl;
                    cin>>prenom;
                    ad = 0;
                    for(i=0;i<100;i++){
                        if(student[i].getId()==id && student[i].getName()==nom && student[i].getPrenom()==prenom){
                            cout<<"entrer id d'examen: "<<endl;
                            cin>>idExam;
                            cout<<"entrer le nom d'examen: "<<endl;
                            cin>>nameExamm;
                            cout<<"entrer le numero de class: "<<endl;
                            cin>>numclass;
                            cout<<"entrer la date d'examen: "<<endl;
                            cin>>dateExam;
                            ad = 2;
                            for(j=0;j<20;j++){
                                if(exam[j].getId()==idExam && exam[j].getName()==nameExamm && exam[j].getnumClassExam()==numclass && exam[j].getDate()==dateExam){
                                    ad = 1;
                                    for(z=0;z<300;z++){
                                        if(exel[z].getidExEl()!=0){
                                        }
                                        else{
                                            break;
                                        }
                                        
                                    }
                                    exel[z].examenDeEleve(exam[j].getId(),exam[j].getName(), exam[j].getnumClassExam(), exam[j].getDate(),student[i].getId(), student[i].getName(), student[i].getPrenom());
                                }
                                
                            }
                            
                        }
                    }
                    if(ad == 0){
                        cout<<"ce eleve n'existe pas"<<endl;
                    }
                    if(ad == 2){
                        
                        cout<<"ce eleve existe et l' exam n'existe pas"<<endl;
                    }
                    
                    goto s15;
                    break;
                case 6:
                    cout<<"entrer id exaemn: "<<endl;
                    cin>>id;
                    cout<<"entrer nom examen: "<<endl;
                    cin>>nom;
                    cout<<"entrer la date examen: "<<endl;
                    cin>>date;
                    cout<<"entrer numuro de class examen: "<<endl;
                    cin>>numclass;
                    for(i=0;i<20;i++){
                        if(exam[i].getId()==id&&exam[i].getName()==nom&&exam[i].getDate()==date&&exam[i].getnumClassExam()==numclass){
                            exam[i].modifierSalleExamen();
                        }
                    }
                    goto s16;
                    break;
                case 7:
                    cout<<"entrer le nom d'eleve"<<endl;
                    cin>>nom;
                    cout<<"entrer le prenom d'eleve"<<endl;
                    cin>>prenom;
                    cout<<"entrer l' id d'eleve"<<endl;
                    cin>>id;
                    ad = 0;
                    
                    for(i=0;i<100;i++){
                        if(student[i].getId()==id && student[i].getName()==nom && student[i].getPrenom()==prenom){
                            for(j=0;j<100;j++){
                                
                                if(rapo[j].getidRaport()==0){
                                    rapo[j].raportPerformonce(id, nom, prenom);
                                    ad = 1;
                                    break;
                                }
                            }
                            
                        }
                    }
                    if(ad == 0){
                        cout<<"ce eleve n'existe pas"<<endl;
                    }
                    goto s17;
                    break;
                case 8:
                    do{
                        cout<<"vous voulez entrer touts les notes (1) ou une seul note (2)"<<endl;
                        cin>>choi;
                    }while(choi!=1&&choi!=2);
                    if(choi == 1){
                        cout<<"entrer la matier que vous vouller entrer les notes"<<endl;
                        cin>>matier;
                        
                        for(i=0;i<300;i++){
                            if(exel[i].getidExEl()!=0 && exel[i].getName()==matier){
                                exel[i].noteEleve();
                            }
                        }
                    }
                    if(choi == 2){
                        cout<<"entrer le nom d'eleve: "<<endl;
                        cin>>nom;
                        cout<<"entrer le prenom d'eleve: "<<endl;
                        cin>>prenom;
                        cout<<"entrer le id d'eleve: "<<endl;
                        cin>>id;
                        cout<<"entrer le matier: "<<endl;
                        cin>>nomMatier;
                        cout<<"entrer la class d examen: "<<endl;
                        cin>>numclass;
                        cout<<"entrer la date examen: "<<endl;
                        cin>>date;
                        cout<<"entrer l'id examen: "<<endl;
                        cin>>idex;
                        ad=0;
                        for(i=0;i<300;i++){
                            ad=1;
                            if(exel[i].getNameE()==nom&&exel[i].getPrenomE()==prenom&&exel[i].getIdE()==id&&exel[i].getName()==nomMatier&&exel[i].getnumClassExam()==numclass&&exel[i].getDate()==date&&exel[i].getId()==idex){
                                exel[i].noteEleve();
                            }
                        }
                        if(ad==0){
                            cout<<"les donndr sont faut"<<endl;
                        }
                    }
                    goto s18;
                    break;
                case 9:
                    cout<<"entrer le nom d'eleve: "<<endl;
                    cin>>nom;
                    cout<<"entrer le prenom d'eleve: "<<endl;
                    cin>>prenom;
                    cout<<"entrer le id d'eleve: "<<endl;
                    cin>>id;
                    cout<<"entrer le matier: "<<endl;
                    cin>>nomMatier;
                    cout<<"entrer la class d examen: "<<endl;
                    cin>>numclass;
                    cout<<"entrer la date examen: "<<endl;
                    cin>>date;
                    cout<<"entrer l'id examen: "<<endl;
                    cin>>idex;
                    ad=0;
                    for(i=0;i<300;i++){
                        ad=1;
                        if(exel[i].getNameE()==nom&&exel[i].getPrenomE()==prenom&&exel[i].getIdE()==id&&exel[i].getName()==nomMatier&&exel[i].getnumClassExam()==numclass&&exel[i].getDate()==date&&exel[i].getId()==idex){
                            exel[i].modifierNote();
                        }
                    }
                    if(ad==0){
                        cout<<"les donndr sont faut"<<endl;
                    }
                    goto s19;
                    break;
                case 10:
                    
                    goto s110;
                    break;
                    
            }
            
            
            
        case 2:
            
            cout<<"entrer votre nom: "<<endl;
            cin>>nomel;
            cout<<"entrer votre prenom: "<<endl;
            cin>>prenomel;
            cout<<"entrer votre id: "<<endl;
            cin>>idel;
            ad = 0;
            for(i=0;i<100;i++){
                if(student[i].getId()==idel&&student[i].getName()==nomel&&student[i].getPrenom()==prenomel){
                    ad = 1;
                }
            }
            if(ad==0){
                cout<<"les donner sont faut"<<endl;
                goto f1;
            }
            
            s21: s22: s23: s24: s25:
            cout << "----------------------------------------------------------------" << endl;
            cout << "|                                                              |" << endl;
            cout << "|     *************************************************        |" << endl;
            cout << "|     *             Ceci est la page Eleve             *       |" << endl;
            cout << "|     *************************************************        |" << endl;
            cout << "|                                                              |" << endl;
            cout << "|               Appuyez sur (1)  Les examens disponibles       |" << endl;
            cout << "|               Appuyez sur (2)  Votre Examen                  |" << endl;
            cout << "|               Appuyez sur (3)  Vos Notes d'Examen            |" << endl;
            cout << "|               Appuyez sur (4)  Commentaires Enseignants      |" << endl;
            cout << "|               Appuyez sur (5)  Rapport de votre performance  |" << endl;
            cout << "|               Appuyez sur (6)  Revenir en arriere            |" << endl;
            cout << "|                                                              |" << endl;
            cout << "----------------------------------------------------------------" << endl;
            do {
                cout << "Enter votr choice: "<<endl;
                cin >> choix2;
                

            } while (choix2 != 1 && choix2 != 2 && choix2 != 3 && choix2 != 4 && choix2 != 5 && choix2 != 6);
            switch (choix2) {
                case 1:
                    
                    for(i=0;i<20;i++){
                        if(exam[i].getId()!=0){
                            exam[i].afficherExam();
                        }
                    }
                    goto s21;
                    break;
                case 2:
                    for(i=0;i<300;i++){
                        if(exel[i].getIdE()==idel&&exel[i].getNameE()==nomel&&exel[i].getPrenomE()==prenomel){
                            exel[i].afficheExamen();
                        }
                    }
                    goto s22;
                    break;
                case 3:
                    for(i=0;i<300;i++){
                        if(exel[i].getIdE()==idel&&exel[i].getNameE()==nomel&&exel[i].getPrenomE()==prenomel){
                            exel[i].affichernote();
                        }
                    }
                    goto s23;
                    break;
                case 4:
                    for(i=0;i<300;i++){
                        if(com[i].getidEleve()==idel&&com[i].getnameEleve()==nomel&&com[i].getprenomEleve()==prenomel){
                            com[i].affiherComentaire(i);
                        }
                    }
                    goto s24;
                    break;
                case 5:
                    for(i=0;i<100;i++){
                        if(rapo[i].getidEleve()==idel&&rapo[i].getnamEleve()==nomel&&rapo[i].getprenomEleve()==prenomel){
                            rapo[i].afficherRaport(i);
                        }
                    }
                    goto s25;
                    break;
                case 6:
                    goto s26;
                    break;
            }
        case 3:
            
            cout<<"entrer votre nom: "<<endl;
            cin>>nompa;
            cout<<"entrer votre prenom: "<<endl;
            cin>>prenomepa;
            cout<<"entrer votre id: "<<endl;
            cin>>idpa;
            ad=0;
            for(i=0;i<100;i++){
                ad=1;
                if(par[i].getId()==idpa&&par[i].getName()==nompa&&par[i].getPrenom()==prenomepa){
                }
            }
            if(ad==0){
                cout<<"les donner de parent sont faut"<<endl;
                goto f1;
            }
            cout<<"entrer le nom de votre enfant: "<<endl;
            cin>>nomel;
            cout<<"entrer le prenom de votre enfant: "<<endl;
            cin>>prenomel;
            cout<<"entrer id de votre enfant: "<<endl;
            cin>>idel;
            ad=0;
            for(i=0;i<100;i++){
                if(student[i].getId()==idel&&student[i].getName()==nomel&&student[i].getPrenom()==prenomel){
                    ad = 1;
                }
            }
            if(ad==0){
                cout<<"les donner sont faut"<<endl;
                goto f1;
            }
            
            s31: s32: s33: s34: s35:
            cout << "--------------------------------------------------------------------------- " << endl;
            cout << "|                                                                         |" << endl;
            cout << "|              *************************************************          |" << endl;
            cout << "|             *             Ceci est la page Parent             *         |" << endl;
            cout << "|              *************************************************          |" << endl;
            cout << "|                                                                         |" << endl;
            cout << "|               Appuyez sur (1)  Les examens disponibles                  |" << endl;
            cout << "|               Appuyez sur (2)  Examens de votre enfant                  |" << endl;
            cout << "|               Appuyez sur (3)  Notes d'examen de votre enfant           |" << endl;
            cout << "|               Appuyez sur (4)  Commentaires enseignants                 |" << endl;
            cout << "|               Appuyez sur (5)  Rapport de performance de votre  enfant  |" << endl;
            cout << "|               Appuyez sur (6)  Revenir en arrière                       |" << endl;
            cout << "|                                                                         |" << endl;
            cout << "---------------------------------------------------------------------------" << endl;
            do {
                cout << "Enter votr choice: ";
                cin >> choix3;
            } while (choix3 != 1 && choix3 != 2 && choix3 != 3 && choix3 != 4 && choix3 != 5 && choix3 != 6);
            
            
            
            
            
            switch (choix3) {
                case 1:
                    
                    for(i=0;i<20;i++){
                        if(exam[i].getId()!=0){
                            exam[i].afficherExam();
                        }
                    }
                    goto s31;
                    break;
                case 2:
                    for(i=0;i<300;i++){
                        if(exel[i].getIdE()==idel&&exel[i].getNameE()==nomel&&exel[i].getPrenomE()==prenomel){
                            exel[i].afficheExamen();
                        }
                    }
                    goto s32;
                    break;
                case 3:
                    for(i=0;i<300;i++){
                        if(exel[i].getIdE()==idel&&exel[i].getNameE()==nomel&&exel[i].getPrenomE()==prenomel){
                            exel[i].affichernote();
                        }
                    }
                    goto s33;
                    break;
                case 4:
                    for(i=0;i<300;i++){
                        if(com[i].getidEleve()==idel&&com[i].getnameEleve()==nomel&&com[i].getprenomEleve()==prenomel){
                            com[i].affiherComentaire(i);
                        }
                    }
                    goto s34;
                    break;
                case 5:
                    for(i=0;i<100;i++){
                        if(rapo[i].getidEleve()==idel&&rapo[i].getnamEleve()==nomel&&rapo[i].getprenomEleve()==prenomel){
                            rapo[i].afficherRaport(i);
                        }
                    }
                    goto s35;
                    break;
                case 6:
                    goto s36;
                    break;
                    
            }
            
        case 4:
            
            cout<<"entrer votre nom: "<<endl;
            cin>>nomel;
            cout<<"entrer votre prenom: "<<endl;
            cin>>prenomel;
            cout<<"entrer votre id: "<<endl;
            cin>>idel;
            cout<<"entrer votre matier: "<<endl;
            cin>>matier;
            ad = 0;
            for(i=0;i<20;i++){
                if(ens[i].getId()==idel&&ens[i].getName()==nomel&&ens[i].getPrenom()==prenomel&&ens[i].getMatier()==matier){
                    ad = 1;
                }
            }
            if(ad==0){
                cout<<"les donner sont faut"<<endl;
                goto f1;
            }
            
            s41: s42: s43:
            cout << "----------------------------------------------------------------" << endl;
            cout << "|                                                              |" << endl;
            cout << "|     *************************************************        |" << endl;
            cout << "|     *             Ceci est la page Enseignant        *       |" << endl;
            cout << "|     *************************************************        |" << endl;
            cout << "|                                                              |" << endl;
            cout << "|               Appuyez sur (1)      Emploi des Examens        |" << endl;
            cout << "|               Appuyez sur (2)      Saisir les resultats      |" << endl;
            cout << "|               Appuyez sur (3)      Commentaire sur un eleve  |" << endl;
            cout << "|               Appuyez sur (4)      Revenir en arriere        |" << endl;
            cout << "|                                                              |" << endl;
            cout << "----------------------------------------------------------------" << endl;
            
            do {
                cout << "Enter votr choice: ";
                cin >> choix4;
                
                
            } while (choix4 != 1 && choix4 != 2 && choix4 != 3 && choix4 != 4);
            switch (choix4) {
                case 1:
                    for(i=0;i<20;i++){
                        if(exam[i].getId()!=0){
                            exam[i].afficherExam();
                        }
                    }
                    goto s41;
                    break;
                case 2:
                    for(i=0;i<300;i++){
                        if(exel[i].getidExEl()!=0 && exel[i].getName()==matier){
                            exel[i].noteEleve();
                        }
                    }
                    goto s42;
                    break;
                case 3:
                    cout<<"entrer l'id eleve: "<<endl;
                    cin>>id;
                    cout<<"entrer le nom d'eleve: "<<endl;
                    cin>>nom;
                    cout<<"entrer le prenom d'eleve: "<<endl;
                    cin>>prenom;
                    for(i=0;i<100;i++){
                        if(student[i].getId()==id && student[i].getName()==nom && student[i].getPrenom()==prenom){
                            for(j=0;j<300;j++){
                                if(com[j].getidComentaire()==0){
                                    com[j].addComentaire(matier, prenomel, id, nom, prenom);
                                    break;
                                }
                            }
                        }
                    }
                        goto s43;
                        break;
                    case 4:
                        goto s44;
                    }
                    break;
                case 5:
                    exit(0);
            }
    }
