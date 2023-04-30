#include "mylib.h"

class studentas
{
private:
    std::string vardas;
    std::string pavarde;
    double egz;
    std::vector<int> paz;
    double vidurkis;
    double mediana;
public:
    studentas() : vardas(""), pavarde(""), egz(0), paz(0), vidurkis(0.0), mediana(0.0) {} 
    void Vardas(const string&v){vardas=v;}
    void Pavarde(const string&p){pavarde=p;}
    void Egz(const int&e){egz = e;}
    void Paz(const vector<int>&nd){paz = nd;}
    void failas(std::istream& is, int k);
    void Vid(const double&vid){vidurkis = vid;}
    void Med(const double&med){mediana = med;}
    void clear() {paz.clear(), paz.shrink_to_fit();}
    inline std::string getvardas() const { return vardas; }       
    inline std::string getpavarde() const { return pavarde; }     
    inline double getmediana() const {return mediana;}
    inline double getvidurkis() const {return vidurkis;} 
    inline vector<int> getpaz() const {return paz;}
    inline double getegz()const {return egz;}
    ~studentas() {paz.clear(), paz.shrink_to_fit();}            
};

void pild(studentas &temp);
void spausd(deque<studentas> &saunuolis, deque<studentas> &vargsas);
void spausd(list<studentas> &saunuolis, list<studentas> &vargsas);
void spausd(vector<studentas> &saunuolis, vector<studentas> &vargsas);
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
void skirstymas1(vector<studentas> &temp);
void skirstymas1(list<studentas> &temp);
void skirstymas1(deque<studentas> &temp);
void skirstymas2(vector<studentas> temp);
void skirstymas2(list<studentas> temp);
void skirstymas2(deque<studentas> temp);
void pagr1(vector<studentas> &grupe);
void pagr2(list<studentas> &grupe);
void pagr3(deque<studentas> &grupe);
bool lyginimas(studentas &temp);
