#pragma once
#include<string>
#include<iostream>
#include "Session.h"
#include "Tarif.h"

using namespace std;

class Service
{
    string type;
    Client client_s;
    Tarif tarif_s;
public:
    Service();
    ~Service();
    friend ostream& operator<<(ostream&, Service&);
    friend istream& operator>>(istream&, Service&);

};
