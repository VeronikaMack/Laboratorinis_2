#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "funkcijos.h"
#include "mylib.h"


TEST_CASE("move assignment operator"){
studentas stud1, stud2;
stud1.Vardas("Veronika");
stud1.Pavarde("Mackeviciute");
stud1.Egz(9);
stud1.Paz({3, 4, 5, 6});
stud1.Vid(4.5);
stud1.Med(4.5);

stud2=std::move(stud1);
REQUIRE(stud1.getpaz().empty());
REQUIRE(stud1.getvardas().empty());
REQUIRE(stud1.getpavarde().empty());
REQUIRE(stud1.getegz() == 0.0);
REQUIRE(stud1.getvidurkis() == 0.0);
REQUIRE(stud1.getmediana() == 0.0);
REQUIRE(stud2.getvardas() == "Veronika");
REQUIRE(stud2.getpavarde() == "Mackeviciute");
REQUIRE(stud2.getegz() == 9);
REQUIRE(stud2.getmediana() == 4.5);
REQUIRE(stud2.getvidurkis() == 4.5);

}

TEST_CASE("Vidurkis")
{
    studentas stud3;
    stud3.Vardas("Veronika");
    stud3.Pavarde("Mackeviciute");
    stud3.Egz(2);
    stud3.Paz({2, 2, 2, 2});
    stud3.Vid(vidurkis(stud3));
    REQUIRE(stud3.getvidurkis() == 2.0);
}

TEST_CASE("Failo generavimas")
{
int num = 10000, paz = 10;
generavimas(num, paz);
std:: ifstream file;
file.open("kursiokai.txt");
string line;
int linesk = 0;
while(getline(file, line))
{
    linesk++;
}
REQUIRE(file.is_open());
file.close();

REQUIRE(linesk == 10001);



}