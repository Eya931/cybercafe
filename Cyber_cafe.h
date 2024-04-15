#pragma once
#include<string>
#include<vector>
#include<iostream>
#include "Ordinateur.h"
#include "Personne.h"
#include "Facture.h"
#include "Service.h"
#include "Session.h"
#include "Tarif.h"
#include "Date.h"

using namespace std;

class Cyber_cafe
{
private:
   string nom;
   string adresse;
   bool etat;
   vector<Personne*> Cyber_cafe_pers;
   vector<Session*> Cyber_cafe_sess;
   vector<Tarif*> Cyber_cafe_tarif;
   vector<Ordinateur*> Cyber_cafe_ord;
   vector<Service*> Cyber_cafe_serv;
   vector<Date*> Cyber_cafe_date;
   vector<Facture*> Cyber_cafe_fact;
public:
    Cyber_cafe();
    virtual ~Cyber_cafe();
    Cyber_cafe(const Cyber_cafe&);
    Cyber_cafe& operator= (const Cyber_cafe&);
    friend ostream& operator<<(ostream&, Cyber_cafe&);
    friend istream& operator>>(istream&, Cyber_cafe&);
    float calcul_revenu();

};
