#include "mylib.h"
#include "funkcijos.h"
void pild(studentas &temp){
char pa;
string egz;
cout<<"Iveskite varda ir pavarde: ";
cin>>temp.vardas>>temp.pavarde;
while(pa!='p'&&pa!='a'&&pa!='P'&&pa!='A')
{
    cout<<"Iveskite p jeigu norite pazymius vesti pats, arba a, jeigu norite sugeneruotu pazymiu "<<endl;
    cin>>pa;
}
if(pa == 'p'|| pa == 'P')
{
    pildymas(temp);
}
else if(pa == 'a'|| pa == 'A')
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
sort(temp.begin(), temp.end(), rusiavimas);
 cout<<"Vardas        Pavarde          Galutinis(vid.)/Galutinis(med.)"<<endl;
 cout<<"--------------------------------------------------------------"<<endl;
for(int i=0; i<k; i++)
{
      
         cout<<left;
         cout<<setw(13)<<temp[i].vardas<<setw(28)<<temp[i].pavarde;
         cout<<std::fixed<<std::setprecision(2)<<setw(5)<<temp[i].vidurkis<<" "<<std::setprecision(2)<<temp[i].mediana<<endl;
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
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, 10);
    for(int i=0; i<stoi(skaicius); i++)
    {
       p= dist(mt);
       temp.paz.push_back(p);
       cout<<p<<endl;
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

void skaitymas(vector <studentas> temp)
{
    studentas laikinas;
    string line;
    vector <string> dydis;
    char zinute[] = "Tokio failo nera";
    std:: ifstream file;
    try
    {
    file.open("kursiokai.txt");
    if(!file)
    {
        throw zinute;
    }
    
    
       int sk;
       while(file.peek()!='\n')
       { 
        file>>line;
        dydis.push_back(line);
       }
       while(!file.eof())
       {
        file>>laikinas.vardas>>laikinas.pavarde;
        for(int j=0; j<dydis.size()-3; j++)
        {
            file>>sk;
            laikinas.paz.push_back(sk);
        }
        file>>laikinas.egz;
        laikinas.vidurkis = vidurkis(laikinas);
        laikinas.mediana = mediana(laikinas);
        temp.push_back(laikinas);
        laikinas.paz.clear();
        
       }
       spausd(temp, temp.size());
       
    
    }
    catch(char zin[])
    {
        cout<<zin<<endl;
    }
    
   
    file.close();

}

bool rusiavimas(studentas &a, studentas &b)
{
    if(a.vardas == b.vardas)
    {
        return a.pavarde<b.pavarde;
    }
    else return a.vardas<b.vardas;
}
