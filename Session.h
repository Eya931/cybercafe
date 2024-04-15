#pragma once
#include<string>
#include<iostream>
#include "Client.h"
#include "Ordinateur.h"

using namespace std;

class Session
{
private:
    Client client_sess;
    int date_debut;
    int date_fin;
    Ordinateur ordinateur_sess;
public:
    Session();
    ~Session();
    friend ostream& operator<<(ostream&, Session&);
    friend istream& operator>>(istream&, Session&);
    float calcul_temps_utilisation();
};

