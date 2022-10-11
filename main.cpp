#include "employe.h"
#include <iostream>
using namespace std;

int main()
{
    int i;
    employe em1(0,0,0);

    while (i != 5)
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout << "|  1. Ajouter un employe                               |"<<endl;
        cout << "|  2. Modifier les donnees d un employe                |"<<endl;
        cout << "|  3. Afficher les donnees d un employe                |"<<endl;
        cout << "|  4. Afficher les donnees des employes enregistres    |"<<endl;
        cout << "|  5. Quitter le menu                                  |"<<endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
        cout << "Que voulez-vous faire ?"<<endl;
        cin >> i;
        cout << "\n"<<endl;

        if ( i == 1)
        {
            em1.ajouter();
        
        }
        else if ( i == 2)
        {
            em1.modifier();
        }
        else if ( i == 3)
        {
            em1.afficher_user();
        }
        else if ( i == 4)
        {
            em1.afficher();

        } 
    }

    return 0;

}