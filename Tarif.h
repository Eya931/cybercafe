#pragma once
#include<string>
#include<vector>
#include<iostream>
#include "Service.h"
#include "Session.h"

using namespace std;

class Tarif
{
private:
    Service nom_service;
    float prix_unitaire;
    vector <Service*> service_t; //moch mo9tan3a beha
    Session session_t;
public:
    Tarif();
    ~Tarif();
    Tarif(const Tarif&);
    friend ostream& operator<<(ostream&, Tarif&);
    friend istream& operator>>(istream&, Tarif&);
    Tarif operator=(const Tarif&);
    float modifier_prix_unitaire(float);
    float calculer_montant();
};
