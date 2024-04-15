#include "Session.h"

Session::Session()
{

}
Session::~Session()
{
}
ostream& operator<<(ostream& out, Session& s)
{
    out<<s.client_sess<<endl;
    out<<"Date debut session: "<<s.date_debut<<endl;
    out<<"Date fin session: "<<s.date_fin<<endl;
    out<<s.ordinateur_sess<<endl;
    return out;

}
istream& operator>>(istream& in, Session& s)
{
    in>>s.client_sess<<endl;
    cout<<"Saisir date debut session: "<<endl;
    in>>s.date_debut;
    cout<<"Saisir date fin session: "<<endl;
    in>>s.date_fin;
    in>>s.ordinateur_sess<<endl;
    return in;
}
float Session::calcul_temps_utilisation()
{
    float t;
    cout<<"Le temps d'utilisation de ce client est :"<<endl;
    t=date_fin-date_debut;
    return t;
}
