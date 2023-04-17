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

void spausd (vector<studentas>& saunuolis,vector<studentas>& vargsas){
auto start = high_resolution_clock::now();

sort(saunuolis.begin(), saunuolis.end(), rusiavimas);
sort(vargsas.begin(), vargsas.end(), rusiavimas);
auto end = high_resolution_clock::now();
duration <double> diff = end-start;
cout<<"studentų rūšiavimas didėjimo tvarka konteineriuose uztruko: "<<diff.count()<<" s\n";

if(vargsas.size()>0)
{
std::ofstream bad("vargsai.txt");
 bad<<"Vardas        Pavarde          Galutinis(vid.)/Galutinis(med.)"<<endl;
 bad<<"--------------------------------------------------------------"<<endl;
for(auto &i: vargsas)
{
      
         bad<<left;
         bad<<setw(14)<<i.vardas<<setw(28)<<i.pavarde;
         bad<<std::fixed<<std::setprecision(2)<<setw(5)<<i.vidurkis<<" "<<std::setprecision(2)<<i.mediana<<endl;
}
bad.close();
}
if(saunuolis.size()>0)
{
std::ofstream good("saunuoliai.txt");
good<<"Vardas        Pavarde          Galutinis(vid.)/Galutinis(med.)"<<endl;
good<<"--------------------------------------------------------------"<<endl;
for(auto &j: saunuolis)
{
      
         good<<left;
         good<<setw(14)<<j.vardas<<setw(28)<<j.pavarde;
         good<<std::fixed<<std::setprecision(2)<<setw(5)<<j.vidurkis<<" "<<std::setprecision(2)<<j.mediana<<endl;
}
good.close();
}

cout<<"Rezultatus rasite failuose: 'vargsai.txt' ir 'saunuoliai.txt'"<<endl;



}
void spausd (list<studentas>& saunuolis,list<studentas>& vargsas){
auto start = high_resolution_clock::now();

saunuolis.sort(rusiavimas);
vargsas.sort(rusiavimas);
auto end = high_resolution_clock::now();
duration <double> diff = end-start;
cout<<"studentų rūšiavimas didėjimo tvarka konteineriuose uztruko: "<<diff.count()<<" s\n";

if(vargsas.size()>0)
{
std::ofstream bad("vargsai.txt");
 bad<<"Vardas        Pavarde          Galutinis(vid.)/Galutinis(med.)"<<endl;
 bad<<"--------------------------------------------------------------"<<endl;
for(auto &i: vargsas)
{
      
         bad<<left;
         bad<<setw(14)<<i.vardas<<setw(28)<<i.pavarde;
         bad<<std::fixed<<std::setprecision(2)<<setw(5)<<i.vidurkis<<" "<<std::setprecision(2)<<i.mediana<<endl;
}
bad.close();
}
if(saunuolis.size()>0)
{
std::ofstream good("saunuoliai.txt");
good<<"Vardas        Pavarde          Galutinis(vid.)/Galutinis(med.)"<<endl;
good<<"--------------------------------------------------------------"<<endl;
for(auto &j: saunuolis)
{
      
         good<<left;
         good<<setw(14)<<j.vardas<<setw(28)<<j.pavarde;
         good<<std::fixed<<std::setprecision(2)<<setw(5)<<j.vidurkis<<" "<<std::setprecision(2)<<j.mediana<<endl;
}
good.close();
}

cout<<"Rezultatus rasite failuose: 'vargsai.txt' ir 'saunuoliai.txt'"<<endl;



}
void spausd (deque<studentas>& saunuolis,deque<studentas>& vargsas){
auto start = high_resolution_clock::now();

sort(saunuolis.begin(), saunuolis.end(), rusiavimas);
sort(vargsas.begin(), vargsas.end(), rusiavimas);
auto end = high_resolution_clock::now();
duration <double> diff = end-start;
cout<<"studentų rūšiavimas didėjimo tvarka konteineriuose uztruko: "<<diff.count()<<" s\n";

if(vargsas.size()>0)
{
std::ofstream bad("vargsai.txt");
 bad<<"Vardas        Pavarde          Galutinis(vid.)/Galutinis(med.)"<<endl;
 bad<<"--------------------------------------------------------------"<<endl;
for(auto &i: vargsas)
{
      
         bad<<left;
         bad<<setw(14)<<i.vardas<<setw(28)<<i.pavarde;
         bad<<std::fixed<<std::setprecision(2)<<setw(5)<<i.vidurkis<<" "<<std::setprecision(2)<<i.mediana<<endl;
}
bad.close();
}
if(saunuolis.size()>0)
{
std::ofstream good("saunuoliai.txt");
good<<"Vardas        Pavarde          Galutinis(vid.)/Galutinis(med.)"<<endl;
good<<"--------------------------------------------------------------"<<endl;
for(auto &j: saunuolis)
{
      
         good<<left;
         good<<setw(14)<<j.vardas<<setw(28)<<j.pavarde;
         good<<std::fixed<<std::setprecision(2)<<setw(5)<<j.vidurkis<<" "<<std::setprecision(2)<<j.mediana<<endl;
}
good.close();
}

cout<<"Rezultatus rasite failuose: 'vargsai.txt' ir 'saunuoliai.txt'"<<endl;



}




double vidurkis(studentas &temp)
{
    int s=0;
    double vid=0, galutinis=0;
    for(auto &i: temp.paz)
    {
        s = s + i;
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
  while(cin>>p&&p<=0||p>11)
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

void skaitymas(vector<studentas>& temp, char nr)
{
    char ats;
    string filename;
    string num, paz;
    while(ats!='n'&&ats!='N'&&ats!='t'&&ats!='T')
    {
    cout<<"Noredami generuoti nauja faila spauskite 'n', noredami naudoti jau turima faila spauskite't'"<<endl;
    cin>>ats;
    }
    if(ats=='n'||ats=='N')
    {
        cout<<"kiek irasu generuoti faile?(1000, 10000, 100000, 1000000, 10000000)"<<endl;
        cin>>num;
while(!tikrinimas(num)||stoi(num)<=0)
    {
        cout<<"Iveskite teigiama skaiciu(1000, 10000, 100000, 1000000, 10000000)"<<endl;
        cin>>num;
    }
       cout<<"kiek pazymiu generuoti?"<<endl;
       cin>>paz;
while(!tikrinimas(paz)||stoi(paz)<=0)
    {
        cout<<"Iveskite teigiama skaiciu"<<endl;
        cin>>paz;
    }
        
        generavimas(stoi(num), stoi(paz));
        filename = "kursiokai.txt";
    
    }
    else if(ats=='t'||ats=='T')
    {
    cout<<"Iveskite failo pavadinima is direktorijos: "<<endl;
    cin>>filename;
    }
   auto pradz = high_resolution_clock::now();
    studentas laikinas;
    string line;
    vector <string> dydis;
    char zinute[] = "Tokio failo nera";
    std:: ifstream file;
    auto start = high_resolution_clock::now();
    try
    {
    file.open(filename);
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
       auto end = high_resolution_clock::now();
       duration <double> diff = end-start;
       cout<<" failo skaitymas uztruko: "<<diff.count()<<" s\n";

       if(nr=='1')skirstymas1(temp);
       else skirstymas2(temp);
       temp.clear();
    
      
    }
    catch(char zin[])
    {
        cout<<zin<<endl;
        
    }
      auto pab = high_resolution_clock::now();
      duration <double> diff = pab-pradz;
      cout<<"Programos veikimo laikas: "<<diff.count()<<endl;
    
   
    file.close();
    

}
void skaitymas(list<studentas>& temp, char nr)
{
    char ats;
    string filename;
    string num, paz;
    while(ats!='n'&&ats!='N'&&ats!='t'&&ats!='T')
    {
    cout<<"Noredami generuoti nauja faila spauskite 'n', noredami naudoti jau turima faila spauskite't'"<<endl;
    cin>>ats;
    }
    if(ats=='n'||ats=='N')
    {
        cout<<"kiek irasu generuoti faile?(1000, 10000, 100000, 1000000, 10000000)"<<endl;
        cin>>num;
while(!tikrinimas(num)||stoi(num)<=0)
    {
        cout<<"Iveskite teigiama skaiciu(1000, 10000, 100000, 1000000, 10000000)"<<endl;
        cin>>num;
    }
       cout<<"kiek pazymiu generuoti?"<<endl;
       cin>>paz;
while(!tikrinimas(paz)||stoi(paz)<=0)
    {
        cout<<"Iveskite teigiama skaiciu"<<endl;
        cin>>paz;
    }
        
        generavimas(stoi(num), stoi(paz));
        filename = "kursiokai.txt";
    
    }
    else if(ats=='t'||ats=='T')
    {
    cout<<"Iveskite failo pavadinima is direktorijos: "<<endl;
    cin>>filename;
    }
   auto pradz = high_resolution_clock::now();
    studentas laikinas;
    string line;
    vector <string> dydis;
    char zinute[] = "Tokio failo nera";
    std:: ifstream file;
    auto start = high_resolution_clock::now();
    try
    {
    file.open(filename);
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
       auto end = high_resolution_clock::now();
       duration <double> diff = end-start;
       cout<<" failo skaitymas uztruko: "<<diff.count()<<" s\n";

       if(nr=='1')skirstymas1(temp);
       else skirstymas2(temp);
       temp.clear();
    
      
    }
    catch(char zin[])
    {
        cout<<zin<<endl;
        
    }
      auto pab = high_resolution_clock::now();
      duration <double> diff = pab-pradz;
      cout<<"Programos veikimo laikas: "<<diff.count()<<endl;
    
   
    file.close();
    

}
void skaitymas(deque<studentas>& temp, char nr)
{
    char ats;
    string filename;
    string num, paz;
    while(ats!='n'&&ats!='N'&&ats!='t'&&ats!='T')
    {
    cout<<"Noredami generuoti nauja faila spauskite 'n', noredami naudoti jau turima faila spauskite't'"<<endl;
    cin>>ats;
    }
    if(ats=='n'||ats=='N')
    {
        cout<<"kiek irasu generuoti faile?(1000, 10000, 100000, 1000000, 10000000)"<<endl;
        cin>>num;
while(!tikrinimas(num)||stoi(num)<=0)
    {
        cout<<"Iveskite teigiama skaiciu(1000, 10000, 100000, 1000000, 10000000)"<<endl;
        cin>>num;
    }
       cout<<"kiek pazymiu generuoti?"<<endl;
       cin>>paz;
while(!tikrinimas(paz)||stoi(paz)<=0)
    {
        cout<<"Iveskite teigiama skaiciu"<<endl;
        cin>>paz;
    }
        
        generavimas(stoi(num), stoi(paz));
        filename = "kursiokai.txt";
    
    }
    else if(ats=='t'||ats=='T')
    {
    cout<<"Iveskite failo pavadinima is direktorijos: "<<endl;
    cin>>filename;
    }
   auto pradz = high_resolution_clock::now();
    studentas laikinas;
    string line;
    vector <string> dydis;
    char zinute[] = "Tokio failo nera";
    std:: ifstream file;
    auto start = high_resolution_clock::now();
    try
    {
    file.open(filename);
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
       auto end = high_resolution_clock::now();
       duration <double> diff = end-start;
       cout<<" failo skaitymas uztruko: "<<diff.count()<<" s\n";

       if(nr=='1')skirstymas1(temp);
       else skirstymas2(temp);
       temp.clear();
    
      
    }
    catch(char zin[])
    {
        cout<<zin<<endl;
        
    }
      auto pab = high_resolution_clock::now();
      duration <double> diff = pab-pradz;
      cout<<"Programos veikimo laikas: "<<diff.count()<<endl;
    
   
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

void generavimas(int num, int paz)
{
string filename;
std::ofstream fr("kursiokai.txt");
fr<<left;
fr<<std::setw(20)<<"Vardas"<<std::setw(20)<<"Pavarde";
for(int j=1; j<=paz; j++)
{
    fr<<"ND"<<j<<"   ";
}
fr<<std::setw(5)<<"egz.\n";

std::random_device rd;
std::mt19937 mt(rd());
std::uniform_int_distribution<int> dist(1, num);
for(int i = 1; i<=num; i++)
{
fr<<std::setw(20)<<"Vardas"+std::to_string(dist(mt))<<std::setw(20)<<"Pavarde"+std::to_string(dist(mt));
std::uniform_int_distribution<int> dist(1, 10);
for(int j=0; j<paz; j++)
{
    fr<<std::setw(6)<<dist(mt);
}

fr<<std::setw(5)<<dist(mt)<<endl;
}
cout<<"failas sukurtas, jo pavadinimas 'kursiokai.txt'"<<endl;

fr.close();


}

void skirstymas1 (vector <studentas> &temp)
{
auto start = high_resolution_clock::now();
vector <studentas> vargsai; 
auto p = std::partition(temp.begin(), temp.end(), lyginimas);
std::copy(temp.begin(), p, std::back_inserter(vargsai));
temp.erase(p, temp.end());
auto end = high_resolution_clock::now();
duration <double> diff = end-start;
cout<<" failo skirstymas i saunuolius ir vargsus uztruko: "<<diff.count()<<" s\n";
    spausd(temp, vargsai);
    vargsai.clear();
     
}
void skirstymas1 (list <studentas> &temp)
{
   
auto start = high_resolution_clock::now();
list<studentas> vargsai; 
auto p = std::partition(temp.begin(), temp.end(), lyginimas);
std::copy(temp.begin(), p, std::back_inserter(vargsai));
temp.erase(p, temp.end());
auto end = high_resolution_clock::now();
duration <double> diff = end-start;
cout<<" failo skirstymas i saunuolius ir vargsus uztruko: "<<diff.count()<<" s\n";
    spausd(temp, vargsai);
    vargsai.clear();
     
}
void skirstymas1 (deque <studentas> &temp)
{
   
auto start = high_resolution_clock::now();
deque <studentas> vargsai; 
auto p = std::partition(temp.begin(), temp.end(), lyginimas);
std::copy(temp.begin(), p, std::back_inserter(vargsai));
temp.erase(p, temp.end());
auto end = high_resolution_clock::now();
duration <double> diff = end-start;
cout<<" failo skirstymas i saunuolius ir vargsus uztruko: "<<diff.count()<<" s\n";
    spausd(temp, vargsai);
    vargsai.clear();
     
}
void skirstymas2 (vector <studentas> temp)
{
auto start = high_resolution_clock::now();
vector <studentas> vargsai;
vector <studentas> saunuoliai;
for(auto &i: temp)
{
    (i.vidurkis>=5)? saunuoliai.push_back(i):vargsai.push_back(i);
}
auto end = high_resolution_clock::now();
duration <double> diff = end-start;
cout<<temp.size()-1<<" failo skirstymas i saunuolius ir vargsus uztruko: "<<diff.count()<<" s\n";
    spausd(saunuoliai, vargsai);
    vargsai.clear();
    saunuoliai.clear();
}
void skirstymas2 (list <studentas> temp)
{
auto start = high_resolution_clock::now();
list <studentas> vargsai;
list <studentas> saunuoliai;
for(auto &i: temp)
{
    (i.vidurkis>=5)? saunuoliai.push_back(i):vargsai.push_back(i);
}
auto end = high_resolution_clock::now();
duration <double> diff = end-start;
cout<<temp.size()-1<<" failo skirstymas i saunuolius ir vargsus uztruko: "<<diff.count()<<" s\n";
    spausd(saunuoliai, vargsai);
    vargsai.clear();
    saunuoliai.clear();
}
void skirstymas2 (deque <studentas> temp)
{
auto start = high_resolution_clock::now();
deque <studentas> vargsai;
deque <studentas> saunuoliai;
for(auto &i: temp)
{
    (i.vidurkis>=5)? saunuoliai.push_back(i):vargsai.push_back(i);
}
auto end = high_resolution_clock::now();
duration <double> diff = end-start;
cout<<temp.size()-1<<" failo skirstymas i saunuolius ir vargsus uztruko: "<<diff.count()<<" s\n";
    spausd(saunuoliai, vargsai);
    vargsai.clear();
    saunuoliai.clear();
}
void pagr1(vector <studentas> &grupe)
{
char uzkl;
 int kiekstudentu = 0;
studentas laikinas;
 char PA, sk;
 while(sk!='1'&&sk!='2')
 {
    cout<<"spauskite 1 jeigu norite naudoti pirmaja strategija arba 2 jeigu norite naudoti antraja strategija"<<endl;
    cin>>sk;
 }
 while(PA!='a'&&PA!='A'&&PA!='p'&&PA!='P')
 {
    cout<<"Spauskite p jeigu norite studentus aprasyti patys arba a jeigu norite, kad butu skaitoma is failo"<<endl;
    cin>>PA;
 }
 if(PA=='p'||PA=='P')
 {
do{

pild(laikinas);
laikinas.vidurkis = vidurkis(laikinas);
laikinas.mediana = mediana(laikinas);
grupe.push_back(laikinas);
laikinas.paz.clear();
 cout<<"Pabaigai spauskite n, kitaip veskite kito studento duomenis po bet kokio klaviso paspaudimo: "<<endl;
 cin>>uzkl;

}while(uzkl!='n'&&uzkl!='N');
if(sk=='1')skirstymas1(grupe);
else skirstymas2(grupe);
grupe.clear();
 }
 else if(PA=='A'||PA=='a')
 {
    
    skaitymas(grupe, sk);
    grupe.clear();
   
}
}
void pagr2(list <studentas> &grupe)
{
char uzkl;
 int kiekstudentu = 0;
studentas laikinas;
 char PA, sk;
 while(sk!='1'&&sk!='2')
 {
    cout<<"spauskite 1 jeigu norite naudoti pirmaja strategija arba 2 jeigu norite naudoti antraja strategija"<<endl;
    cin>>sk;
 }
 while(PA!='a'&&PA!='A'&&PA!='p'&&PA!='P')
 {
    cout<<"Spauskite p jeigu norite studentus aprasyti patys arba a jeigu norite, kad butu skaitoma is failo"<<endl;
    cin>>PA;
 }
 if(PA=='p'||PA=='P')
 {
do{

pild(laikinas);
laikinas.vidurkis = vidurkis(laikinas);
laikinas.mediana = mediana(laikinas);
grupe.push_back(laikinas);
laikinas.paz.clear();
 cout<<"Pabaigai spauskite n, kitaip veskite kito studento duomenis po bet kokio klaviso paspaudimo: "<<endl;
 cin>>uzkl;

}while(uzkl!='n'&&uzkl!='N');
if(sk=='1')skirstymas1(grupe);
else skirstymas2(grupe);
grupe.clear();
 }
 else if(PA=='A'||PA=='a')
 {
    
    skaitymas(grupe, sk);
    grupe.clear();
   
}
}
void pagr3(deque <studentas> &grupe)

{
char uzkl;
 int kiekstudentu = 0;
studentas laikinas;
 char PA, sk;
 while(sk!='1'&&sk!='2')
 {
    cout<<"spauskite 1 jeigu norite naudoti pirmaja strategija arba 2 jeigu norite naudoti antraja strategija"<<endl;
    cin>>sk;
 }
 {
 while(PA!='a'&&PA!='A'&&PA!='p'&&PA!='P')
 {
    cout<<"Spauskite p jeigu norite studentus aprasyti patys arba a jeigu norite, kad butu skaitoma is failo"<<endl;
    cin>>PA;
 }
 if(PA=='p'||PA=='P')
 {
do{

pild(laikinas);
laikinas.vidurkis = vidurkis(laikinas);
laikinas.mediana = mediana(laikinas);
grupe.push_back(laikinas);
laikinas.paz.clear();
 cout<<"Pabaigai spauskite n, kitaip veskite kito studento duomenis po bet kokio klaviso paspaudimo: "<<endl;
 cin>>uzkl;

}while(uzkl!='n'&&uzkl!='N');
if(sk=='1')
{
skirstymas1(grupe);
}
else skirstymas2(grupe);
grupe.clear();
 }
 else if(PA=='A'||PA=='a')
 {
    
    skaitymas(grupe, sk);
    grupe.clear();
   
}
}
}
bool lyginimas(studentas &temp)
{
    if(temp.vidurkis<=5)return 1;
    else return 0;

}

