#include "Personne.h"

Personne::Personne(string n, string pren, string add) : nom(n), prenom(pren), adresse_mail(add)
{
    char rep;
    Session *s;
    do
    {
        s = new Session;
        cin >> *s;
        session_pers.push_back(s);
        cout << "voulez vous rajouter une session ?" << endl;
        cin >> rep;
    } while (rep == '0' || rep == 'o');
}
Personne::~Personne()
{
    for (int i = 0; i < session_pers.size(); i++)
        delete session_pers[i];
    session_pers.clear();
}
ostream &operator<<(ostream &out, Personne &p)
{
    out << "Nom : " << p.nom << endl;
    out << "Prenom : " << p.prenom << endl;
    for (int i = 0; i < p.session_pers.size(); i++)
        out << p.session_pers[i];
    return out;
}
istream &operator>>(istream &in, Personne &p)
{
    cout << "Saisir nom : " << endl;
    in >> p.nom;
    cout << "Saisir prenom : " << endl;
    in >> p.prenom;
    cout << "Saisir une session : " << endl;
    for (int i = 0; i < p.session_pers.size(); i++)
        in >> *(p.session_pers[i]);
    return in;
}
Personne &Personne::operator=(Personne &other)
{
    if (this != &other) { // Vérifie si ce n'est pas la même instance
        nom = other.nom;
        prenom = other.prenom;
        adresse_mail = other.adresse_mail;
        
        // Supprime les sessions existantes
        for (Session* session : session_pers) {
            delete session;
        }
        session_pers.clear();
        
        // Copie les sessions de l'autre personne
        for (Session* session : other.session_pers) {
            session_pers.push_back(new Session(*session));
        }
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
}*/
