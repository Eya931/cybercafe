#include "Client.h"

Client::Client(string n,string p,string add, Service serv, Session sess, int nb): Personne(n,p,add) ,service_c(serv) ,session_c(sess), nb_occur(nb)
{
}
Client::~Client()
{
}
Client::Client()
{
}
ostream& operator<<(ostream& out, Client& c)
{
    out<<"Nom : "<<c.nom<<endl;
    out<<"Prenom : "<<c.prenom<<endl;
    for(int i=0;i<c.session_pers.size();i++)
        out<<c.session_pers[i];
    return out;

}
istream& operator>>(istream& in, Client& c)
{
    cout<<"Saisir nom : "<<endl;
    in>>c.nom;
    cout<<"Saisir prenom : "<<endl;
    in>>c.prenom;
    cout<<"Saisir une session : "<<endl;
    for(int i=0;i<c.session_pers.size();i++)
        in>>*(c.session_pers[i]);
    return in;

}
Client Client::operator=(const Client& c)
{
    if (this!=&c)
    {
        service_c=c.service_c;
        session_c=c.session_c;
        nb_occur=c.nb_occur;
    }
  return *this;
}
void Client::affichePersonne()
{
    cout<<"Nom: "<<nom<<endl;
    cout<<"Prenom: "<<prenom<<endl;
    cout<<"Adresse mail: "<<adresse_mail<<endl;
    cout<<"Service: "<<service_c<<endl;
    cout<<"Session: "<<session_c<<endl;
    cout<<"Nombre d'occurences: "<<nb_occur<<endl;
}
bool Client::verif_membre()
{
    if (nb_occur>3) return true;
    else return false ;
}
