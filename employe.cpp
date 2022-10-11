#include "employe.h"
#include <iostream>
using namespace std;

int nbr_empl;
employe em[50];


void employe::ajouter()
{
    int a;
    cout << "Combien d'employer voulez-vous ajouter? \n";
    cin >> nbr_empl;

    for ( a = 1; a < nbr_empl+1; a++)
    {
        cout << "Entrer l'identifiant : \n";
        cin >> em[a].ID;
        cout << "Entrer le taux de remuneration : \n";
        cin >> em[a].taux_r;
        cout << "Entrer le maximum d heures que l employe doit travailler chaque semaine : \n";
        cin >> em[a].max_H;
        cout << "\n";
    }
    
}

        //------------------------------------------------------------------------------------------------------------

void employe::modifier()
{
    int i;
    int choixx;
    int choix;

    cout << "Quel utilisateur voulez-vous modifier ? \n";
    cin >> choixx;
    cout << "Quelle donnée voulez-vous modifier ? \n";
    cout << "1. Modifier l'identifiant \n";
    cout << "2. Modifier le taux de remuneration \n";
    cout << "3. Modifier le maximum d’heures que l’employé doit travailler chaque semaine \n";
    cin >> choix;
    cout << "\n";

    for ( i = 0; i < 1; i++)
    {

        if (choix == 1)
        {
            cout << "Entrer le nouvel identifiant : \n";
            cin >> em[i+choixx].ID;
        }
        else if (choix == 2)
        {
            cout << "Entrer le nouveau taux de remuneration : \n";
            cin >> em[i+choixx].taux_r;
        }
        else if (choix == 3)
        {
            cout << "Entrer le nouveau maximum d’heures que l’employé doit travailler chaque semaine : \n";
            cin >> em[i+choixx].max_H;
        }
        cout << "\n";  
    }
}

     //------------------------------------------------------------------------------------------------------------

void employe::afficher()
{
    int i;
    for ( i = 1; i < nbr_empl+1; i++)
    {
        cout << "\nID: " << em[i].ID <<endl;
        cout << "Taux de remuneration: " << em[i].taux_r <<endl;
        cout << "Heures de travail max par semaine: " << em[i].max_H <<endl;
        cout << "\n";
    }
}

     //------------------------------------------------------------------------------------------------------------

void employe::afficher_user()
{
    
    int i;
    int choixx;

    cout << "Quel utilisateur voulez-vous afficher ? \n";
    cin >> choixx;

    for ( i = 0; i < 1; i++)
    {
        cout << "\nID: " << em[i+choixx].ID <<endl;
        cout << "Taux de remuneration: " << em[i+choixx].taux_r <<endl;
        cout << "Heures de travail max par semaine: " << em[i+choixx].max_H <<endl;
        cout << "\n";
    }

}