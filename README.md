# Laboratorinis_1
Yra dvi programos versijos, vienoje naudojami masyvai, kitoje naudojami vektoriai.<br>
**Versija su masyvais:**
<ol>
<li>Vartotojas iš anksto pasirenka kiek studentų norės aprašyti.(Tikrinama ar įvesti duomenys atitinka reikalavimus)</li>
<li>Vartotojas įveda studento vardą ir pavardę.</li>
<li>Vartotojui duodamas pasirinkimas paspausti 'y' jei nori pažymius suvesti pats, arba 'n' jeigu nori atsitiktinai sugeneruotų pažymių.(Tikrinama ar vartotojas įvedė 'y' arba 'n')</li>
<li>Paspaudus 'y' vartotojas įveda kiek daugiausiai pažymių planuoja įvesti. Tuomet pradeda įvedinėti pažymius, jeigu nori baigti vesti pažymius anksčiau, paspaudžia '0' ir likusios vietos pažymiui užpildomos nuliais. Pažymiai saugomi į pažymių masyvą studento struktūroje.(Tikrinama ar duomenys atitinka reikalavimus)</li>
<li>Paspaudus 'n' vartotojas įrašo kiek pažymių reikia sugeneruoti. Pažymiai atsitiktinai generuojami naudojant 1+rand()%10 funkciją.</li>
<li>Įvedamas egzamino rezultatas(tikrinama ar atitinka reikalavimus)</li>
<li>Funkcija apskaičiuojamas pažymių vidurkis ir gražinamas galutinis rezultatas 0.4 * vidurkis + 0.6 * egzaminas.</li>
<li>Funkcija apskaičiuojama pažymių mediana ir gražinamas galutinis rezultatas 0.4 * mediana + 0.6 * egzaminas.</li>
<li> Išvedami studentų vardai, pavardės ir jų galutiniai rezultatai naudojant vidurkį ir medianą.</li><br>
</ol>
<strong>Versija su vektoriais:</strong>
<ol>
<li> Vartotojas veda studentų duomenis iki tol kol paspaudžia 'n'. Duomenys saugomi studento struktūros duomenų tipo vektoriuje.</li>
<li>Vartotojas įveda studento vardą ir pavardę.</li>
<li>Vartotojas įveda 'p' jeigu nori pažymius įvesti pats, arba 'a' jeigu nori automatiškai sugeneruotų pažymių. (Tikrinama ar vartotojas įvedė 'p' arba 'a')</li>
<li> Paspaudus 'p' vartotojas veda pažymius, kurie saugomi pažymių vektoriuje. Norėdamas baigti pažymių įvedimą vartotojas paspaudžia '11'.(Tikrinama ar įvesti duomenys atitinka reikalavimus)</li>
<li>Paspaudus 'a' vartotojas įveda kiek pažymių generuoti ir pažymių vektorius užpildomas naudojant 1+rand()%10 funkciją.</li>
<li>Vartotojas įveda egzamino rezultatą. (Tikrinama ar duomenys atitinka reikalavimus)</li>
<li>Vidurkis ir mediana apskaičiuojami tokiu pačiu principu kaip ir versijoje su masyvais tik vietoj atskiro elemento saugančio pažymių kiekį yra naudojama .size(), kuris parodo vektoriaus elementų kiekį.</li>
</ol>
