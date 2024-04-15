#pragma once

#include<string>
#include<vector>
#include<iostream>
#include "Session.h"

using namespace std;

class Personne
{
protected :
    string nom;
    string prenom;
    string adresse_mail;
    vector<Session*> session_pers;
public:
    Personne(string="",string="",string="");
    ~Personne();
    friend ostream& operator<<(ostream&, Personne&);
    friend istream& operator>>(istream&, Personne&);
    Personne & operator=(Personne&);
    virtual void affichePersonne()=0;
};
