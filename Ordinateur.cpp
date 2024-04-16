#include "Ordinateur.h"

Ordinateur::Ordinateur(string c,int nb, bool d, int nbt, int num): config(c), nb_occup(nb), dispo(d), nb_total(nbt), num_poste(num)
{
}
Ordinateur::~Ordinateur()
{
}
ostream& operator<<(ostream& out, Ordinateur& o)
{
    out<<"Configuration: "<<o.config<<endl;
    out<<"Nombre des ordinateurs occupees: "<<o.nb_occup<<endl;
    out<<"Disponibilite: "<<o.dispo<<endl;
    out<<"Nombre total des ordinateurs: "<<o.nb_total<<endl;
    out<<"Numero de poste: "<<o.num_poste<<endl;
    return out;
}
istream& operator>>(istream& in, Ordinateur& o)
{
    cout<<"Saisir la configuration: "<<endl;
    in>>o.config;
    cout<<"Saisir le nombre des ordinateurs occupees: "<<endl;
    in>>o.nb_occup;
    cout<<"Saisir disponibilite: "<<endl;
    in>>o.dispo;
    cout<<"Saisir le nombre total des ordinateurs: "<<endl;
    in>>o.nb_total;
    cout<<"Saisir le numero de poste: "<<endl;
    in>>o.num_poste;
    return in;
}
void Ordinateur::afficher_nb_total()
{
}
