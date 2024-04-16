#include "Personne.h"

Personne::Personne(string n, string pren, string add): nom(n), prenom(pren), adresse_mail(add)
{
   char rep;
   Session* s;
   do
   { s= new Session;
     s->saisir();
     session_pers.push_back(s);
     cout<<"voulez vous rajouter une session ?"<<endl;
     cin>>rep;
  }while (rep=='0'|| rep=='o');
}
Personne::~Personne()
{
     for(int i=0;i<session_pers.size();i++)
       delete session_pers[i];
    session_pers.clear();
}
ostream& operator<<(ostream& out, Personne& p)
{
    out<<"Nom : "<<p.nom<<endl;
    out<<"Prenom : "<<p.prenom<<endl;
    for(int i=0;i<p.session_pers.size();i++)
        out<<p.session_pers[i];
    return out;
}
istream& operator>>(istream& in, Personne& p)
{
    cout<<"Saisir nom : "<<endl;
    in>>p.nom;
    cout<<"Saisir prenom : "<<endl;
    in>>p.prenom;
    cout<<"Saisir une session : "<<endl;
    for(int i=0;i<p.session_pers.size();i++)
        in>>p.session_pers[i];
    return in;
}
Personne Personne::operator=(Personne& p)
{
    if (this!=&p)
    {
    nom=p.nom;
    prenom=p.prenom;
    delete[]session_pers;
    session_pers=new Session;
    for (int i=0;i<p.session_pers.size();i++)
       session_pers[i]=p.session_pers[i];
    }
    return *this;
}
void Personne::affichePersonne()
{
}
/*bool Personne::verifier_dispo()
{
  for (int i=0;i<session_pers.size();i++)
    if (session_pers[i].date_fin=0)
    session_pers[i].Ordinateur_sess.dispo==true;
}/*
