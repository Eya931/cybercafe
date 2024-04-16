#include "Tarif.h"

Tarif::Tarif(Service s,float p ,Session sess):nom_Service(s), prix_unitaire(p), session_t(sess)
{
  char rep;
  Service* ss;
  do{
        ss=new Service;
     //a->saisir();
     cin>>*ss;
    service_t.push_back(ss);
    cout<<"voulez vous rajouter ?"<<endl;
    cin>>rep;
  }while (rep=='0'|| rep=='o');
}
Tarif::~Tarif()
{
    for(int i=0;i<service_t.size(;i++)
       delete service_t[i];
    service_t.clear();
}
Tarif::Tarif(const Tarif& t)
{
    nom_Service=t.nom_Service;
    prix_unitaire=t.prix_unitaire;
    Service*s;
    for(int i=0;i<t.service_t.size();i++)
    {
        s=new Service(*t.service_t[i]);
        service_t.push_back(s);
    }
}
Service nom_Service;
    float prix_unitaire;
    vector <Service*> service_t; //moch mo9tan3a beha
    Session session_t;
ostream& operator<<(ostream& out, Tarif& t)
{
    out<<t.nom_Service<<endl;
    out<<"Prix unitaire: "<<t.prix_unitaire<<endl;
    out<<session_t<<endl;
    for(int i=0;i<t.service_t.size();i++)
        out<<t.service_t[i];
    return out;
}
istream& operator>>(istream& in, Tarif& t)
{
    in>>t.nom_Service;
    cout<<"Saisir prix unitaire: "<<endl;
    in>>t.prix_unitaire;
    in>>session_t;
    for(int i=0;i<t.service_t.size();i++)
        in>>t.service_t[i];
    return in;
}
Tarif Tarif::operator=(const Tarif& t)
{
    if (this!=&t)
    {
    nom_Service=t.nom_Service;
    prix_unitair=t.prix_unitair;
    session_t=t.session_t;
    delete[] service_t;
    service_t=new Service;
    for (int i=0;i<t.service_t.size();i++)
       service_t[i]=t.service_t[i];
    }
    return *this;

}
/*float Tarif::modifier_prix_unitaire(float p)
{

}
float Tarif::calculer_montant()
{

}*/

