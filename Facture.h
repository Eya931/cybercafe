#pragma once
#include<string>
#include<iostream>
#include "Client.h"
#include "Service.h"
#include "Session.h"
#include "Date.h"

using namespace std;

class Facture
{
private:
    static int id_fact;
    Date date_fact;
    //Session duree_f;
    //Client client_f;
    //Service service_f;
    float montant;
public:
    Facture();
    ~Facture();
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
