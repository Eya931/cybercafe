#include "Session.h"

Session::Session()
{ 
    //***************************************************
    //no default constructor exists for class "Client"
    //***************************************************
}
Session::~Session()
{
}
ostream &operator<<(ostream &out, Session &s)
{
    out << s.client_sess << endl;
    out << "Date debut session: " << s.date_debut << endl;
    out << "Date fin session: " << s.date_fin << endl;
    out << s.ordinateur_sess << endl;
    return out;
}
istream &operator>>(istream &in, Session &s)
{
    in >> s.client_sess;
    cout << "Saisir date debut session: " << endl;
    in >> s.date_debut;
    cout << "Saisir date fin session: " << endl;
    in >> s.date_fin;
    in >> s.ordinateur_sess;
    return in;
}
float Session::calcul_temps_utilisation()
{
    float t1, t2, t;
    cout << "Le temps d'utilisation de ce client est :" << endl;

    t1 = stoi(date_fin.substr(0, 2)) * 60 + stoi(date_fin.substr(3, 2)) + stoi(date_fin.substr(6)) / 60;
    t2 = stoi(date_debut.substr(0, 2)) * 60 + stoi(date_debut.substr(3, 2)) + stoi(date_debut.substr(6)) / 60;
    t = t1 - t2;
    return t;
}
