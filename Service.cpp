#include "Service.h"

Service::Service()
{
}
Service::~Service()
{
}
friend ostream& operator<<(ostream& out , Service& s)
{
    out<<"Service: "<<s.type<<endl;
    out<<s.client_s<<endl;
    out<<s.tarif_s<<endl;
    return out;
}
friend istream& operator>>(istream& in, Service& s)
{
    cout<<"Saisir service: "<<endl;
    in>>s.type<<endl;
    in>>s.client_s;
    in>>s.tarif_s;
    return in;
}

