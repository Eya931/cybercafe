#pragma once
#include<string>
#include<iostream>

using namespace std;

class Ordinateur
{
private:
    string config;
    int nb_occup;
    bool dispo;
    static int nb_total;
    int num_poste;
public:
    Ordinateur(string,int, bool, int, int);
    ~Ordinateur();
    friend ostream& operator<<(ostream&, Ordinateur&);
    friend istream& operator>>(istream&, Ordinateur&);
    static void afficher_nb_total();
};
