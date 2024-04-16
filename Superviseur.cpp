#include "Superviseur.h"

Superviseur::Superviseur()
{
}
Superviseur::~Superviseur()
{
}
Superviseur::Superviseur(const Superviseur& s)
{

}
vector<Client*> client_s;
    vector<Facture*> facture_s;
    Service service_s;
ostream& operator<<(ostream out&, Superviseur& s)
{
    out<<s.client_s<<endl;
    out<<"Date debut session: "<<s.date_debut<<endl;
    out<<"Date fin session: "<<s.date_fin<<endl;
    out<<s.service_s<<endl;
    return out;
}
istream& operator>>(istream& in, Superviseur& s)
{

}
Superviseur Superviseur::operator=(const Superviseur& s)
{

}
