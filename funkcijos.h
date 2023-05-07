#include "mylib.h"

class studentas
{
    // realizacija
private:
    std::string vardas;
    std::string pavarde;
    double egz;
    std::vector<int> paz;
    double vidurkis;
    double mediana;
    // interfeisas
public:
    studentas() : vardas(""), pavarde(""), egz(0.0), paz(0), vidurkis(0.0), mediana(0.0) {} // konstruktorius
    studentas(const studentas& cop) : vardas(cop.vardas), pavarde(cop.pavarde), egz(cop.egz), 
    paz(cop.paz), vidurkis(cop.vidurkis), mediana(cop.mediana) {} //copy konstruktorius
    studentas& operator=(const studentas& cop)
    {
        if(this!=&cop)
        {
            vardas = cop.vardas;
            pavarde = cop.pavarde;
            egz = cop.egz;
            paz = cop.paz;
            vidurkis = cop.vidurkis;
            mediana = cop.mediana;
        }
        return *this;
    };//copy assignment constructor
    studentas(studentas&& naujas) noexcept
    : vardas(std::move(naujas.vardas)), pavarde(std::move(naujas.pavarde)),
      egz(naujas.egz), paz(std::move(naujas.paz)),
      vidurkis(naujas.vidurkis), mediana(naujas.mediana) {
    naujas.egz = 0.0;
    naujas.vidurkis = 0.0;
    naujas.mediana = 0.0;
} //move constructor
studentas& operator=(studentas&& naujas) noexcept {
    if (this != &naujas) {
        vardas = std::move(naujas.vardas);
        pavarde = std::move(naujas.pavarde);
        egz = naujas.egz;
        paz = std::move(naujas.paz);
        vidurkis = naujas.vidurkis;
        mediana = naujas.mediana;
    }
    return *this;
}//move assignment operator
    void Vardas(const string&v){vardas=v;}//setteris
    void Pavarde(const string&p){pavarde=p;}//seteris
    void Egz(const int&e){egz = e;}//setters
    void Paz(const vector<int>&nd){paz = nd;}//seteris
    void failas(std::istream& is, int k);
    void Vid(const double&vid){vidurkis = vid;}
    void Med(const double&med){mediana = med;}
    friend std::ostream& operator<<(std::ostream& os, const studentas& obj) {
        os<<left;
        os<<setw(14)<<obj.vardas<<setw(28)<<obj.pavarde;
        os<<std::fixed<<std::setprecision(2)<<setw(5)<<obj.vidurkis<<" "<<std::setprecision(2)<<obj.mediana<<endl;
        return os;
    }
    void clear() {paz.clear(), paz.shrink_to_fit();}
    inline std::string getvardas() const { return vardas; }       // get'eriai, inline
    inline std::string getpavarde() const { return pavarde; }     // get'eriai, inline
    inline double getmediana() const {return mediana;}
    inline double getvidurkis() const {return vidurkis;} // get'eriai
    inline vector<int> getpaz() const {return paz;}//geteris
    inline double getegz()const {return egz;}//getteris
    ~studentas() {paz.clear(), paz.shrink_to_fit();} //destruct                
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
void skaitymas(vector<studentas> &temp, char nr,char k);
void skaitymas(list<studentas> &temp, char nr,char k);
void skaitymas(deque<studentas> &temp, char nr,char k);
bool rusiavimas(studentas &a, studentas &b);
void generavimas(int num, int paz);
void skirstymas1(vector<studentas> &temp,char k);
void skirstymas1(list<studentas> &temp,char k);
void skirstymas1(deque<studentas> &temp,char k);
void skirstymas2(vector<studentas> temp,char k);
void skirstymas2(list<studentas> temp,char k);
void skirstymas2(deque<studentas> temp,char k);
void pagr1(vector<studentas> &grupe);
void pagr2(list<studentas> &grupe);
void pagr3(deque<studentas> &grupe);
bool lyginimas(studentas &temp);
void konsole(vector<studentas>& saunuolis, vector<studentas>& vargsas);
void konsole(list<studentas>& saunuolis, list<studentas>& vargsas);
void konsole(deque<studentas> saunuolis, deque<studentas> vargsas);
