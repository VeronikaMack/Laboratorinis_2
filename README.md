# Laboratorinis_1 V0.4



Vartotojas pasirenka ar duomenis planuoja įrašyti pats, ar nori, kad jie būtų skaitomi iš failo.<br>
  <strong>Jeigu pasirenka vesti pats</strong>
<ul>
<li>Vartotojas veda studentų duomenis iki tol kol paspaudžia 'n'. Duomenys saugomi studento struktūros duomenų tipo vektoriuje.</li>
<li>Vartotojas įveda studento vardą ir pavardę.</li>
<li>Vartotojas įveda 'p' jeigu nori pažymius įvesti pats, arba 'a' jeigu nori automatiškai sugeneruotų pažymių. (Tikrinama ar vartotojas įvedė 'p' arba 'a')</li>
<li> Paspaudus 'p' vartotojas veda pažymius, kurie saugomi pažymių vektoriuje. Norėdamas baigti pažymių įvedimą vartotojas paspaudžia '11'.(Tikrinama ar įvesti duomenys atitinka reikalavimus)</li>
<li>Paspaudus 'a' vartotojas įveda kiek pažymių generuoti ir pažymių vektorius užpildomas naudojant <strong>random</strong> biblioteką</li>
<li>Vartotojas įveda egzamino rezultatą. (Tikrinama ar duomenys atitinka reikalavimus)</li>
<li>Apskaičiuojamas vidurkis ir mediana.</li>
<li>Pagal gautus rezultatus studentai skirstomi į šaunuolių vektorių (galutinis įvertinimas >=5) ir vargšų vektorių (galutinis įvertinimas <5).</li>
<li>Šaunuolių ir vargšu vektoriai perduodami spausdinimo funkcijai kur rezultatai išvedami į atskirus vargšų ir šaunuolių txt. failus.</li>
</ul>
   <strong>Jeigu vartotojas pasirenka duomenų skaitymą iš failo:</strong>
<ul> 
<li>Vartotojas pasirenka ar nori generuoti nauja faila ar atidaryti jau turima faila</li>
<strong>Jeigu vartotojas pasirenka atidaryti jau turima faila: </strong>
<li>Vartotojas iraso failo pavadinima (kursiokai.txt)</li>
<li>Atidaromas failas (Jeigu tokio failo nėra, naudojamas išimčių valdymas, apie tai pranešama vartotojui ir programa nutraukiama)</li>
<li>Į atskirą vektorių yra nuskaitoma pirma eilutė, siekiant sužinoti kiek elementų apibūdina vieną studentą.</li>
<li>Failas skaitomas.</li>
<li>Apskaičiuojamas vidurkis ir mediana.<li>
<li>Pagal gautus rezultatus studentai skirstomi į šaunuolių vektorių (galutinis įvertinimas >=5) ir vargšų vektorių (galutinis įvertinimas <5).</li>
<li>Šaunuolių ir vargšu vektoriai perduodami spausdinimo funkcijai kur rezultatai išvedami į atskirus vargšų ir šaunuolių txt. failus.</li>
</ul>
<strong>Jeigu vartotojas pasirenka generuoti naują failą</strong>
<ul>
<li>Vartotojas pasirenka kiek įrasu ir pažymiu generuoti faile</li>
<li>Failas generuojamas naudojant <strong>random</strong> biblioteką vardų ir pavardžių indeksų, pažymių ir egzamino rezultato generavimui. Sukuriamas vektorius studentų grupei saugoti. Sudarius grupę šie duomenys išvedami į failą pavadinimu "kursiokai.txt".<li>
<li>Atidaromas failas (Jeigu tokio failo nėra, naudojamas išimčių valdymas, apie tai pranešama vartotojui ir programa nutraukiama)</li>
<li>Į atskirą vektorių yra nuskaitoma pirma eilutė, siekiant sužinoti kiek elementų apibūdina vieną studentą.</li>
<li>Failas skaitomas.</li>
<li>Apskaičiuojamas vidurkis ir mediana.</li>
<li>Pagal gautus rezultatus studentai skirstomi į šaunuolių vektorių (galutinis įvertinimas >=5) ir vargšų vektorių (galutinis įvertinimas <5).</li>
<li>Šaunuolių ir vargšu vektoriai perduodami spausdinimo funkcijai kur rezultatai išvedami į atskirus vargšų ir šaunuolių txt. failus.</li>
</ul>
<strong>Papildoma informacija</strong>
<ul>
<li> Versiją sudaro .cpp failas su main funkcija, .cpp failas su kitomis funkcijomis, .h failas bibliotekoms ir .h failas struktūrai ir funkcijų antraštėms.</li>
<li> Versijoje taip pat naudojant <strong>chrono</strong> biblioteką skaičiuojami failo generavimo laikas, failo skaitymo, studentų rūšiavimo į šaunuolius ir vargšus, rezultatų išvedimo į du skirtingus failus ir visos programos veikimo laikai.</li>
 </ul>
