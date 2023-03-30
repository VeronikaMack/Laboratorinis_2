#include "mylib.h"
#include "funkcijosl.h"


int main()
{
char uzkl;
int kiekstudentu = 0;
 list<studentas> grupe;
 studentas laikinas;
 char PA;
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
skirstymas(grupe);
grupe.clear();
 }
 else if(PA=='A'||PA=='a')
 {
    
    skaitymas(grupe);
    grupe.clear();


 }

}