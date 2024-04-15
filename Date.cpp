#include "Date.h"

Date::Date(int j, int m ,int a): jour(j), mois(m), annee(a)
{
}
Date::~Date()
{
}
ostream& operator<<(ostream& out, Date& d)
{
    out<<" "<<d.jour<<"/"<<d.mois<<"/"<<d.annee;
    return out;
}
istream& operator>>(istream& in, Date& d)
{
    cout<<"Saisir jour: "<<endl;
    in>>d.jour;
    cout<<"Saisir mois: "<<endl;
    in>>d.mois;
    cout<<"Saisir annee: "<<endl;
    in>>d.annee;
    return in;
}
