#ifndef EMPLOYE_H
#define EMPLOYE_H

class employe
{
    private:
    int ID;
    double taux_r;
    double max_H;

    public:
    employe(int identifiant, double to, double maximunH)
    {
        ID = identifiant;
        taux_r = to;
        max_H = maximunH;
    }
    employe(){}

    void ajouter();
    void modifier();
    void afficher();
    void afficher_user();
    
};

#endif


