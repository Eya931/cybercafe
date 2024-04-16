#pragma once
#include<string>
#include<iostream>
#include "Personne.h"
#include "Service.h"

using namespace std;

class Client : public Personne
{
    Service service_c;
    Session session_c;
    int nb_occur;

public:
    Client();
    Client(string, string, string, Service, Session, int);
    ~Client();
    friend ostream& operator<<(ostream&, Client&);
    friend istream& operator>>(istream&, Client&);
    Client operator=(const Client&);
    void affichePersonne();
    bool verif_membre();
};
