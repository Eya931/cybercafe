#include "Service.h"

Service::Service()
{
    //***************************************************
    //no default constructor exists for class "Client"
    //***************************************************
}
Service::~Service()
{
}
ostream &operator<<(ostream &out, Service &s)
{
}
string type;
Client client_s;
Tarif tarif_s;
istream &operator>>(istream &in, Service &s)
{
    in >> s.client_s ;
    cout << "Saisir tarif: " << endl;
    in >> s.tarif_s;
    return in;
}
bool Service::verifier_dispo()
{
}
