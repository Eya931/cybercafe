#pragma once
#include<string>
#include<iostream>
#include "Client.h"
#include "Ordinateur.h"

using namespace std;

class Session
{
    Client client_sess;
    string date_debut;
    string date_fin;
    Ordinateur ordinateur_sess;
public:
    Session();
    ~Session();
    friend ostream& operator<<(ostream&, Session&);
    friend istream& operator>>(istream&, Session&);
    float calcul_temps_utilisation();
};

