#include "mylib.h"
#include "funkcijos.h"


int main()
{
studentas stud1, stud2, stud3;
stud1.Vardas("Veronika");
stud1.Pavarde("Mackeviciute");
stud1.Egz(9);
stud1.Paz({3, 4, 5, 6});
stud1.Vid(4.5);
stud1.Med(4.5);

//copy assigment constructor
cout<<"Copy assignment operator: "<<endl;
cout<<"stud1 pries: "<<stud1<<endl;
cout<<"stud2 pries: "<<stud2<<endl;
stud2=stud1;
cout<<"stud1 po: "<<stud1<<endl;
cout<<"stud2 po: "<<stud2<<endl;
//move assignment constructor
cout<<"Move assignment operator: "<<endl;
cout<<"stud1 pries: "<<stud1<<endl;
cout<<"stud3 pries: "<<stud3<<endl;
stud3=std::move(stud1);
cout<<"stud1 po: "<<stud1<<endl;
cout<<"stud3 po: "<<stud3<<endl;
//copy constructor
cout<<"Copy constructor: "<<endl;
cout<<"stud2 pries: "<<stud2<<endl;
studentas stud4(stud2);
cout<<"stud2 po: "<<stud2<<endl;
cout<<"stud4 po: "<<stud4<<endl;
//move constructor
cout<<"Move constructor: "<<endl;
cout<<"stud2 pries: "<<stud2<<endl;
studentas stud5(std::move(stud2));
cout<<"stud2 po: "<<stud2<<endl;
cout<<"stud5 po: "<<stud5<<endl;

char uzkl, kont;
int kiekstudentu = 0;
while(kont!='v'&&kont!='V'&&kont!='l'&&kont!='L'&&kont!='d'&&kont!='D')
{
cout<<"Koki konteineri naudosite?(v - vector, l - list, d - deque)"<<endl;
cin>>kont;
}
if(kont=='v'||kont=='V')
{
   vector<studentas> grupe;
   pagr1(grupe);
}
else if(kont=='l'||kont=='L')
{
   list<studentas> grupe;
   pagr2(grupe);
}
else 
{
deque<studentas> grupe;
pagr3(grupe);
}


}