#include "mylib.h"
const int paz_sk = 5;

struct studentas{
string vardas="", pavarde="";
vector<int>paz;
int  egz=0;
double vidurkis = 0;
double mediana = 0;
};

void pild(studentas &temp);
void spausd(vector <studentas> temp, int k);
double vidurkis(studentas &temp);
double mediana(studentas &temp);
void pildymas(studentas &temp);
void random(studentas &temp);
bool tikrinimas(string ats);
int main()
{
char uzkl;
int kiekstudentu = 0;
 vector<studentas> grupe;
 studentas laikinas;
 cout<<"Iveskite studentu duomenis: \n";
do{

pild(laikinas);
kiekstudentu++;
laikinas.vidurkis = vidurkis(laikinas);
laikinas.mediana = mediana(laikinas);
grupe.push_back(laikinas);
laikinas.paz.clear();
 cout<<"Pabaigai spauskite n, kitaip veskite kito studento duomenis po bet kokio klaviso paspaudimo: "<<endl;
 cin>>uzkl;

}while(uzkl!='n'&&uzkl!='N');
 
 
    spausd(grupe, kiekstudentu);
 
 grupe.clear();
}

void pild(studentas &temp){
char pa;
string egz;
cout<<"Iveskite varda ir pavarde: ";
cin>>temp.vardas>>temp.pavarde;
while(pa!='p'&&pa!='a')
{
    cout<<"Iveskite p jeigu norite pazymius vesti pats, arba a, jeigu norite sugeneruotu pazymiu "<<endl;
    cin>>pa;
}
if(pa == 'p')
{
    pildymas(temp);
}
else if(pa == 'a')
{
    random(temp);
}
pa = 0;
std::cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
cout<<"Iveskite egzamino rez(sk nuo 1 iki 10): ";
cin>>egz;
while(!tikrinimas(egz)||stoi(egz)<0||stoi(egz)>11)
{
    cout<<"Iveskite skaiciu nuo 1 iki 10"<<endl;
    cin>>egz;
}
temp.egz = stoi(egz);
cout<<"Duomenys irasyti"<<endl;
}

void spausd(vector <studentas> temp, int k){
 cout<<"Vardas        Pavarde          Galutinis(vid.)/Galutinis(med.)"<<endl;
 cout<<"--------------------------------------------------------------"<<endl;
for(int i=0; i<k; i++)
{
      
         cout<<left;
         cout<<setw(13)<<temp[i].vardas<<setw(28)<<temp[i].pavarde;
         cout<<std::setprecision(3)<<setw(5)<<temp[i].vidurkis<<" "<<std::setprecision(3)<<temp[i].mediana<<endl;
}
}
double vidurkis(studentas &temp)
{
    int s=0;
    double vid=0, galutinis=0;
    for(int i=0; i< temp.paz.size(); i++)
    {
        s = s + temp.paz[i];
    }
    vid = (double)s/temp.paz.size();
    galutinis = 0.4 * vid + 0.6 * temp.egz;
    return galutinis;
}
double mediana(studentas &temp)
{
   sort(temp.paz.begin(), temp.paz.end());
   if(temp.paz.size()%2 !=0)
   {
    return 0.4*(double(temp.paz[(temp.paz.size() -1)/2]))+0.6*temp.egz;
   }
   else 
   {
    return 0.4*((double(temp.paz[(temp.paz.size()/2)-1]) + double(temp.paz[temp.paz.size()/2]))/2)+0.6*temp.egz;
   }

}
void pildymas(studentas &temp)
{
  int p;
  cout<<"iveskite paz nuo 1 iki 10, kai ivesite visus paz spauskite '11': ";
  while(cin>>p && p<=0||p>11)
  {
    cout<<"Iveskite skaiciu nuo 1 iki 10"<<endl;
    cin>>p;
  }
  while(cin>>p && p!=11){temp.paz.push_back(p);}
  cin.clear();

}
void random(studentas &temp)
{
    string skaicius;
    int p;
    cout<<"Kiek pazymiu sugeneruoti? Teigiamas skaicius"<<endl;
    cin>>skaicius;
    while(!tikrinimas(skaicius)||stoi(skaicius)<=0)
    {
        cout<<"Iveskite teigiama skaiciu"<<endl;
        cin>>skaicius;
    }
    srand(time(NULL));
    for(int i=0; i<stoi(skaicius); i++)
    {
       p= 1+rand()%10;
       temp.paz.push_back(p);
    }

}
bool tikrinimas(string ats)
{
for(int i=0; i<ats.length();i++)
{
if(isdigit(ats[i]))
{
  return 1;
}
else
{
  return 0;
}
}
}