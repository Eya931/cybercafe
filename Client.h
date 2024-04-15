#include<string>
#include<iostream>
#include "Personne.h"
#include "Service.h"

#pragma once
using namespace std;

class Client : public Personne
{
private:
    Service service_c;
    Session session_c;
    int nb_occur;

public:
    Client(string, string, string, Service, Session, int);
    ~Client();
    //Client(const Client&); //aalh aamlinou w ahna aanech partie dynamique ?
    friend ostream& operator<<(ostream&, Client&);
    friend istream& operator>>(istream&, Client&);
    //Client operator=(const Client&); //aalh aamlinou ?
    //bool verif_membre();
}
