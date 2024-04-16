#include "Service.h"

Service::Service()
{

}
Service::~Service()
{

}
friend ostream& operator<<(ostream& out , Service& s)
{

}
string type;
    Client client_s;
    Tarif tarif_s;
friend istream& operator>>(istream& in, Service& s)
{
    in>>s.client_s<<endl;
    cout<<"Saisir tarif: "<<endl;
    in>>s.tarif_s;
    return in;
}
bool Service::verifier_dispo()
{

}

