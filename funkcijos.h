#include "mylib.h"
struct studentas{
string vardas="", pavarde="";
vector<int>paz;
int  egz=0;
double vidurkis = 0;
double mediana = 0;
};
void pild(studentas &temp);
void spausd(vector <studentas> saunuolis,vector<studentas> vargsas);
double vidurkis(studentas &temp);
double mediana(studentas &temp);
void pildymas(studentas &temp);
void random(studentas &temp);
bool tikrinimas(string ats);
void skaitymas(vector <studentas> temp);
bool rusiavimas(studentas &a, studentas &b);
void generavimas(int num, int paz);
void skirstymas(vector <studentas> temp);

