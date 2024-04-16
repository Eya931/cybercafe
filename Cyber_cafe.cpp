#include "Cyber_cafe.h"

Cyber_cafe::Cyber_cafe()
{
}
Cyber_cafe::~Cyber_cafe()
{
    for(int i=0;i<Cyber_cafe_pers.size();i++)
       delete Cyber_cafe_pers[i];
    Cyber_cafe_pers.clear();
    for(int i=0;i<Cyber_cafe_sess.size();i++)
       delete Cyber_cafe_sess[i];
    Cyber_cafe_sess.clear();
    for(int i=0;i<Cyber_cafe_tarif.size();i++)
       delete Cyber_cafe_tarif[i];
   Cyber_cafe_tarif.clear();
    for(int i=0;i<Cyber_cafe_ord.size();i++)
       delete Cyber_cafe_ord[i];
    Cyber_cafe_ord.clear();
    for(int i=0;i<Cyber_cafe_serv.size();i++)
       delete Cyber_cafe_serv[i];
    Cyber_cafe_serv.clear();
    for(int i=0;i<Cyber_cafe_date.size();i++)
       delete Cyber_cafe_date[i];
    Cyber_cafe_date.clear();
    for(int i=0;i<Cyber_cafe_fact.size();i++)
       delete Cyber_cafe_fact[i];
    Cyber_cafe_fact.clear();
}
/*string nom;
   string adresse;
   bool etat;
   vector<Personne*> Cyber_cafe_pers;
   vector<Session*> Cyber_cafe_sess;
   vector<Tarif*> Cyber_cafe_tarif;
   vector<Ordinateur*> Cyber_cafe_ord;
   vector<Service*> Cyber_cafe_serv;
   vector<Date*> Cyber_cafe_date;
   vector<Facture*> Cyber_cafe_fact;
Cyber_cafe::Cyber_cafe(const Cyber_cafe& c)
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
Cyber_cafe& operator= (const Cyber_cafe& c)
{

}
ostream& operator<<(ostream& out, Cyber_cafe& c)
{

}
istream& operator>>(istream& in, Cyber_cafe& c)
{

}
float Cyber_cafe::calcul_revenu()
{

}*/
