#include "mylib.h"
#include <ctype.h>

struct studentas
{
    string vardas, pavarde;
    int *paz;
    int egz;
    double galutinis;
    double mediana;
    int paz_kiekis;

};
void spausd(studentas temp[], int k);
bool tikrinimas(string ats);
double vidurkis(studentas &temp);
void pildymas(studentas &temp);
void random(studentas &temp);
double mediana(studentas &temp);
int main()
{
 int sk;
 char yn, vm;
 string k = "";
 cout<<"kiek bus studentu? Iveskite teigiama skaiciu"<<endl;
 cin>>k;
 while(stoi(k)<=0||!tikrinimas(k))
 {
    cout<<"Iveskite teigiama skaiciu"<<endl;
    cin>>k;
 }
 sk = stoi(k);
 studentas stud[sk];
 for(int i=0; i<sk; i++)
 {
    cout<<"Iveskite studento varda"<<endl;
    cin>>stud[i].vardas;
    cout<<"Iveskite studento pavarde"<<endl;
    cin>>stud[i].pavarde;
    while(yn!='y'&&yn!='n'&&yn!='Y'&&yn!='N')
    {
        cout<<"Spauskite y, jeigu norite suvesti pazymius ir egzamino rezultata patys\n spauskite n jeigu norite atsitiktinai sugeneruotu rezultatu"<<endl;
        cin>>yn;
    }
    if(yn == 'y'||yn=='Y'){
       pildymas(stud[i]);
    }
    else if(yn == 'n'||yn=='N')
    {
        random(stud[i]);
    }
    

    yn = 0;
    
    
    stud[i].galutinis = vidurkis(stud[i]);
    stud[i].mediana = mediana(stud[i]);
 }
    
 
    spausd(stud, sk);
 

}
void spausd(studentas temp[], int k)
{
    
    
       cout<<"Vardas        Pavarde          Galutinis(vid.)/Galutinis(med.)"<<endl;
       cout<<"--------------------------------------------------------------"<<endl;
       for(int i=0; i<k; i++)
       {
         cout<<left;
         cout<<setw(13)<<temp[i].vardas<<setw(28)<<temp[i].pavarde;
         cout<<std::setprecision(3)<<setw(5)<<temp[i].galutinis<<" "<<std::setprecision(3)<<temp[i].mediana<<endl;
       }
   
       
}

double vidurkis(studentas &temp)
{
    int s=0;
    double vid=0, galutinis=0;
    for(int i=0; i<temp.paz_kiekis; i++)
    {
        s = s + temp.paz[i];
    }
    vid = (double)s/temp.paz_kiekis;
    galutinis = 0.4 * vid + 0.6 * temp.egz;
    return galutinis;
}
double mediana(studentas &temp)
{
   std::sort(temp.paz, temp.paz+temp.paz_kiekis);
   if(temp.paz_kiekis%2 !=0)
   {
    return 0.4*(double(temp.paz[(temp.paz_kiekis -1)/2]))+0.6*temp.egz;
   }
   else 
   {
    return 0.4*((double(temp.paz[(temp.paz_kiekis/2)-1]) + double(temp.paz[temp.paz_kiekis/2]))/2)+0.6*temp.egz;
   }

}
void pildymas(studentas &temp)
{
    string t = "", temp_egz = "";
    int skaicius;
    cout<<"Kiek daugiausiai pazymiu planuojate ivesti? Teigiamas skaicius"<<endl;
    cin>>skaicius;
    temp.paz_kiekis = skaicius;
    
    temp.paz = new int[skaicius];
    for(int i = 0; i<skaicius; i++)
    {
        cout<<"Iveskite pazymius nuo 1 iki 10, kai baigsite vesti pazymius spauskite 0 "<<endl;
        cin>>t;
        while(!tikrinimas(t))
        {
            cout<<"Iveskite skaiciu nuo 1 iki 10"<<endl;
            cin>>t;
        }
        int temp_sk = stoi(t);
        if(temp_sk>0&&temp_sk<11)
        {
            temp.paz[i] = temp_sk;
        }
        else if(temp_sk==0)
        {
           for(int j = i; j<skaicius; j++)
           {
            temp.paz[i] = temp_sk;
            
           }
           i = skaicius;
        }
        else{
            cout<<"Iveskite skaiciu nuo 1 iki 10"<<endl;
            i--;
        
        }

    }

    cout<<"Iveskite egzamino rezultata"<<endl;
    cin>>temp_egz;
    while(!tikrinimas(temp_egz)||stoi(temp_egz)<=0)
    {
        cout<<"Iveskite teigiama skaiciu"<<endl;
        cin>>temp_egz;
    }
    temp.egz = stoi(temp_egz);

}
void random(studentas &temp)
{
    int skaicius;
    cout<<"Kiek pazymiu sugeneruoti? Teigiamas skaicius"<<endl;
    cin>>skaicius;
    temp.paz_kiekis = skaicius;
    srand(time(NULL));
    for(int i=0; i<skaicius; i++)
    {
       temp.paz[i] = 1+rand()%10;
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