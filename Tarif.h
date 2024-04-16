#pragma once
#include<string>
#include<vector>
#include<iostream>
#include "Service.h"
#include "Session.h"

using namespace std;

class Tarif
{
    Service nom_Service;
    float prix_unitaire;
    vector <Service*> service_t; //moch mo9tan3a beha
    Session session_t;
public:
    Tarif(Service, float, Session);
    ~Tarif();
    Tarif(const Tarif&);
    friend ostream& operator<<(ostream&, Tarif&);
    friend istream& operator>>(istream&, Tarif&);
    Tarif operator=(const Tarif&);
    //float modifier_prix_unitaire(float);
    //float calculer_montant();
};
