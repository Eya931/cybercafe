#include "Facture.h"
int Facture::id_fact=0;

Facture::Facture()
{
    id_fact++;
    date_fact=(20,3,2024);
    montant=0.0;
    /*char rep;
    this->nom=nom;
    do
    {
        Ligne *l=new Ligne();
        l->saisir_ligne();
        tab.push_back(l);
        cout<<"voulez vous rajouter ?o/n"<<endl;
        cin>>rep;
    }while (rep=='0'|| rep=='o');*/
}
Facture::~Facture()
{
}
Facture::Facture(const Facture& f)
{
    date_fact=f.date_fact;
    matricule=b.matricule;
    Article*e;
    for(int i=0;i<b.tab.size();i++)
    {
        if(typeid(*b.tab[i])==typeid(ArticleEnSolde))
            e=new ArticleEnSolde(static_cast<const ArticleEnSolde&>(*b.tab[i]));
        else if(typeid(*b.tab[i])==typeid(Article))
            e=new Article(static_cast<const Article&>(*b.tab[i]));
        tab.push_back(e);
    }
}
ostream& operator<<(ostream& out, Facture& f)
{
    out<<"Num Facture: "<<f.id_fact<<endl;
    out<<"Date : "<<f.date_fact<<endl;
    out<<"Duree : "<<f.duree_f<<endl;
    out<<"Client : "<<f.client_f<<endl;
    out<<"Service : "<<f.service_f<<endl;
    out<<"--------------------"<<endl;
    out<<"Montant :     "<<f.montant<<endl;
    return out;

}
istream& operator>>(istream& in, Facture& f)
{
    cout<<"Saisir n° Facture: "<<endl;
    in>>f.id_fact;
    cout<<"Saisir date : "<<endl;
    in>>f.date_fact;
    cout<<"Saisir duree : "<<endl;
//    in>>f.duree_f;
    cout<<"Saisir client : "<<endl;
  //  in>>f.client_f;
    cout<<"Saisir service : "<<endl;
 //   in>>f.service_f;
    cout<<"-----------------------------"<<endl;
    cout<<"Saisir montant : "<<endl;
    in>>f.montant;
    return in;
}
/*float Facture::calcul_montant_tot()
{
    Session s;
    float j=s.calcul_temps_utilisation();
    Service serv;

}*/

/*
void Facture::ajouter(Ligne l,int ind)
{
   Ligne*l1=new Ligne(l);
   tab.insert(tab.begin()+ind,l1);
}
float Facture::TotalFacture()
{
   float total=0.0;
   for(int i=0;i<tab.size();i++)
   {
       float tt=tab[i]->total_ligne();
       total+=tt;
   }
  return total;
}
void Facture::afficherFacture()
{
   cout<<"Le nom de facture est "<<nom<<endl;
   cout<<"Les lignes de commande "<<endl;
   for(int i=0;i<tab.size();i++)
    tab[i]->afficher_ligne();
}
*/
