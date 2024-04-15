#pragma once
#include<string>
#include<iostream>

using namespace std;

class Date
{
private:
   int jour;
   int mois;
   int annee;
public:
    Date(int=20,int=3,int=2024);
    ~Date();
    friend ostream& operator<<(ostream&, Date&);
    friend istream& operator>>(istream&, Date&);
};
