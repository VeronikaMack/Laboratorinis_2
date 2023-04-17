#include "mylib.h"
struct studentas{
string vardas="", pavarde="";
vector<int>paz;
int  egz=0;
double vidurkis = 0;
double mediana = 0;
};

void pild(studentas &temp);
void spausd(deque<studentas>& saunuolis,deque<studentas>& vargsas);
void spausd(list<studentas>& saunuolis,list<studentas>& vargsas);
void spausd(vector<studentas>& saunuolis,vector<studentas>& vargsas);
double vidurkis(studentas &temp);
double mediana(studentas &temp);
void pildymas(studentas &temp);
void random(studentas &temp);
bool tikrinimas(string ats);
void skaitymas(vector<studentas> &temp, char nr);
void skaitymas(list<studentas> &temp, char nr);
void skaitymas(deque<studentas> &temp, char nr);
bool rusiavimas(studentas &a, studentas &b);
void generavimas(int num, int paz);
void skirstymas1 (vector<studentas> &temp);
void skirstymas1 (list<studentas> &temp);
void skirstymas1 (deque<studentas> &temp);
void skirstymas2 (vector <studentas> temp);
void skirstymas2 (list <studentas> temp);
void skirstymas2 (deque <studentas> temp);
void pagr1(vector <studentas>& grupe);
void pagr2(list <studentas> &grupe);
void pagr3(deque <studentas> &grupe);
bool lyginimas(studentas &temp);

