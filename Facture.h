#pragma once
#include<string>
#include<iostream>
#include<vector>
#include "Service.h"
#include "Date.h"

using namespace std;

class Facture
{
private:
    static int id_fact;
    Date date_fact;
    vector<Service*>tab_f;
    float montant ;
public:
    Facture();
    ~Facture();
    Facture(const Facture&);
    friend ostream& operator<<(ostream&, Facture&);
    friend istream& operator>>(istream&, Facture&);
    float calcul_montant_tot();



    /*string nom;
    vector <Ligne*> tab;
 public:
     Facture(string nom="fact-client");
     Facture(const Facture&);
     void ajouter(Ligne,int=0);
     float TotalFacture();
     void afficherFacture();
     int rechercher_ligne(string);
     ~Facture();*/

};
