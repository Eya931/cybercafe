#pragma once
#include<string>
#include<vector>
#include<iostream>
#include "Client.h"
#include "Service.h"
#include "Facture.h"

using namespace std;

class Superviseur : public Personne
{
private:
    vector<Client*> client_s;
    vector<Facture*> facture_s;
    Service service_s;
public:
    Superviseur();
    ~Superviseur();
    Superviseur(const Superviseur&);
    friend ostream& operator<<(ostream&, Superviseur&);
    friend istream& operator>>(istream&, Superviseur&);
    Superviseur* operator=(const Superviseur&);

};
