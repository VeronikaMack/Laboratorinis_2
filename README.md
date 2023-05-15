# Laboratorinis_2 V2.0
<strong> Visų versijų aprašymai:</strong><br>
<strong>V0.1</strong>
<ul>
<li> Vartotojas veda studentų duomenis iki tol kol paspaudžia 'n'. Duomenys saugomi studento struktūros duomenų tipo vektoriuje.</li>
<li>Vartotojas įveda studento vardą ir pavardę.</li>
<li>Vartotojas įveda 'p' jeigu nori pažymius įvesti pats, arba 'a' jeigu nori automatiškai sugeneruotų pažymių. (Tikrinama ar vartotojas įvedė 'p' arba 'a')</li>
<li> Paspaudus 'p' vartotojas veda pažymius, kurie saugomi pažymių vektoriuje. Norėdamas baigti pažymių įvedimą vartotojas paspaudžia '11'.(Tikrinama ar įvesti duomenys atitinka reikalavimus)</li>
<li>Paspaudus 'a' vartotojas įveda kiek pažymių generuoti ir pažymių vektorius užpildomas naudojant 1+rand()%10 funkciją.</li>
<li>Vartotojas įveda egzamino rezultatą. (Tikrinama ar duomenys atitinka reikalavimus)</li>
<li>Funkcija apskaičiuojamas pažymių vidurkis ir gražinamas galutinis rezultatas 0.4 * vidurkis + 0.6 * egzaminas.</li>
<li>Funkcija apskaičiuojama pažymių mediana ir gražinamas galutinis rezultatas 0.4 * mediana + 0.6 * egzaminas.</li>
</ul>
<br>
<strong>V0.2</strong>
<ul>
<li>Vartotojas pasirenka ar duomenis planuoja įrašyti pats, ar nori, kad jie būtų skaitomi iš failo.</li>
  <strong>Jeigu pasirenka vesti pats</strong>
<li>Vartotojas veda studentų duomenis iki tol kol paspaudžia 'n'. Duomenys saugomi studento struktūros duomenų tipo vektoriuje.</li>
<li>Vartotojas įveda studento vardą ir pavardę.</li>
<li>Vartotojas įveda 'p' jeigu nori pažymius įvesti pats, arba 'a' jeigu nori automatiškai sugeneruotų pažymių. (Tikrinama ar vartotojas įvedė 'p' arba 'a')</li>
<li> Paspaudus 'p' vartotojas veda pažymius, kurie saugomi pažymių vektoriuje. Norėdamas baigti pažymių įvedimą vartotojas paspaudžia '11'.(Tikrinama ar įvesti duomenys atitinka reikalavimus)</li>
<li>Paspaudus 'a' vartotojas įveda kiek pažymių generuoti ir pažymių vektorius užpildomas naudojant <strong>random</strong> biblioteką</li>
<li>Vartotojas įveda egzamino rezultatą. (Tikrinama ar duomenys atitinka reikalavimus)</li>
<li>Apskaičiuojamas vidurkis ir mediana, su jais išvedami du galimi galutiniai įvertinimai</li>
  <strong>Jeigu pasirenka duomenų skaitymą iš failo:</strong>
<li>Atidaromas failas (Jeigu tokio failo nėra, apie tai pranešama vartotojui ir programa nutraukiama)
<li>Į atskirą vektorių yra nuskaitoma pirma eilutė, siekiant sužinoti kiek elementų apibūdina vieną studentą.
<li>Failas skaitomas.
<li>Apskaičiuojamas vidurkis ir mediana, su jais išvedami galutiniai įvertinimai</li>
</ul>
<br>
<strong>V0.3</strong>
<br>
<strong>Pakeitimai nuo V0.2:</strong>
<ul>
<strong>Jeigu pasirenka duomenų skaitymą iš failo:</strong>
<li>Atidaromas failas (Jeigu tokio failo nėra, naudojamas išimčių valdymas, apie tai pranešama vartotojui ir programa nutraukiama)</li>
<li> Versiją sudaro .cpp failas su main funkcija, .cpp failas su kitomis funkcijomis, .h failas bibliotekoms ir .h failas struktūrai ir funkcijų antraštėms.</li>
</ul>
<br>
<strong>V0.4</strong>
<br>
<strong>Pakeitimai nuo V0.3:</strong>
<br>
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
 <br>
<strong>V0.5</strong>
<br>
<strong>versiją sudaro trys programos(vector, list ir deque)</strong>
<br>
Vartotojas pasirenka ar duomenis planuoja įrašyti pats, ar nori, kad jie būtų skaitomi iš failo.<br>
  <strong>Jeigu pasirenka vesti pats</strong>
<ul>
<li>Vartotojas veda studentų duomenis iki tol kol paspaudžia 'n'. Duomenys saugomi studento struktūros duomenų tipo vektoriuje/list/deque.</li>
<li>Vartotojas įveda studento vardą ir pavardę.</li>
<li>Vartotojas įveda 'p' jeigu nori pažymius įvesti pats, arba 'a' jeigu nori automatiškai sugeneruotų pažymių. (Tikrinama ar vartotojas įvedė 'p' arba 'a')</li>
<li> Paspaudus 'p' vartotojas veda pažymius, kurie saugomi pažymių vektoriuje. Norėdamas baigti pažymių įvedimą vartotojas paspaudžia '11'.(Tikrinama ar įvesti duomenys atitinka reikalavimus)</li>
<li>Paspaudus 'a' vartotojas įveda kiek pažymių generuoti ir pažymių vektorius užpildomas naudojant <strong>random</strong> biblioteką</li>
<li>Vartotojas įveda egzamino rezultatą. (Tikrinama ar duomenys atitinka reikalavimus)</li>
<li>Apskaičiuojamas vidurkis ir mediana.</li>
<li>Pagal gautus rezultatus studentai skirstomi į šaunuolių vektorių/list/deque (galutinis įvertinimas >=5) ir vargšų vektorių/list/deque (galutinis įvertinimas <5).</li>
<li>Šaunuolių ir vargšu vektoriai/list/deque perduodami spausdinimo funkcijai kur rezultatai išvedami į atskirus vargšų ir šaunuolių txt. failus.</li>
</ul>
   <strong>Jeigu vartotojas pasirenka duomenų skaitymą iš failo:</strong>
<ul> 
<li>Vartotojas pasirenka ar nori generuoti naują failą ar atidaryti jau turimą failą</li>
<strong>Jeigu vartotojas pasirenka atidaryti jau turimą failą: </strong>
<li>Vartotojas įrašo failo pavadinimą</li>
<li>Atidaromas failas (Jeigu tokio failo nėra, naudojamas išimčių valdymas, apie tai pranešama vartotojui ir programa nutraukiama)</li>
<li>Į atskirą vektorių/list/deque yra nuskaitoma pirma eilutė, siekiant sužinoti kiek elementų apibūdina vieną studentą.</li>
<li>Failas skaitomas.</li>
<li>Apskaičiuojamas vidurkis ir mediana.</li>
<li>Pagal gautus rezultatus studentai skirstomi į šaunuolių vektorių/list/deque (galutinis įvertinimas >=5) ir vargšų vektorių/list/deque (galutinis įvertinimas <5).</li>
<li>Šaunuolių ir vargšu vektoriai/list/deque perduodami spausdinimo funkcijai kur rezultatai išvedami į atskirus vargšų ir šaunuolių txt. failus.</li>
</ul>
<strong>Jeigu vartotojas pasirenka generuoti naują failą</strong>
<ul>
<li>Vartotojas pasirenka kiek įrašų ir pažymių generuoti faile</li>
<li>Failas generuojamas naudojant <strong>random</strong> biblioteką vardų ir pavardžių indeksų, pažymių ir egzamino rezultato generavimui. Sukuriamas vektorius/list/deque studentų grupei saugoti. Sudarius grupę šie duomenys išvedami į failą pavadinimu "kursiokai.txt".</li>
<li>Atidaromas failas (Jeigu tokio failo nėra, naudojamas išimčių valdymas, apie tai pranešama vartotojui ir programa nutraukiama)</li>
<li>Į atskirą vektorių/list/deque yra nuskaitoma pirma eilutė, siekiant sužinoti kiek elementų apibūdina vieną studentą.</li>
<li>Failas skaitomas.</li>
<li>Apskaičiuojamas vidurkis ir mediana.</li>
<li>Pagal gautus rezultatus studentai skirstomi į šaunuolių vektorių/list/deque (galutinis įvertinimas >=5) ir vargšų vektorių/list/deque (galutinis įvertinimas <5).</li>
<li>Šaunuolių ir vargšu vektoriai/list/deque perduodami spausdinimo funkcijai kur rezultatai išvedami į atskirus vargšų ir šaunuolių txt. failus.</li>
</ul>
<strong>Papildoma informacija</strong>
<ul>
<li> Versijas sudaro .cpp failas su main funkcija, .cpp failas su kitomis funkcijomis, .h failas bibliotekoms ir .h failas struktūrai ir funkcijų antraštėms.</li>
<li> Versijoje taip pat naudojant <strong>chrono</strong> biblioteką skaičiuojami failo generavimo laikas, failo skaitymo, studentų rūšiavimo į šaunuolius ir vargšus, rezultatų išvedimo į du skirtingus failus ir visos programos veikimo laikai.</li>
 </ul>
 <strong>TESTAVIMAS</strong><br>
 Testavimo sistemos parametrai:<br>
 <strong>CPU</strong> - Apple M1 chip: 8-core CPU with 4 performance cores and 4 efficiency cores, 8-core GPU, 16-core Neural Engine.<br>
 <strong>RAM</strong> - 8GB, VS code naudoja max 4GB.<br>
 <strong>SSD</strong> - 256GB.<br>
 <br>
 <strong>TESTAVIMO ATVEJŲ LENTELĖ VECTOR (s)</strong>
 <table>
 <tr>
 <th>žingsnis</th>
 <th>1000</th>
 <th>10000</th>
 <th>100000</th>
 <th>1000000</th>
 <th>10000000</th>
 </tr>
 <tr>
 <td>duomenų nuskaitymas iš failų į atitinkamą konteinerį</th>
 <td>0.009</td>
 <td>0.068</td>
 <td>0.476</td>
 <td>2.483</td>
 <td>22.51</td>
 </tr>
 <tr>
 <td>studentų rūšiavimas didėjimo tvarka konteineryje</th>
 <td>0.005</td>
 <td>0.024</td>
 <td>0.267</td>
 <td>3.506</td>
 <td>41.11</td>
 </tr>
 <tr>
 <td>studentų skirstymas į dvi grupes</th>
 <td>0.006</td>
 <td>0.008</td>
 <td>0.065</td>
 <td>0.644</td>
 <td>6.031</td>
 </tr>
 </table>
  <br>
 <strong>TESTAVIMO ATVEJŲ LENTELĖ LIST (s)</strong>
 <table>
 <tr>
 <th>žingsnis</th>
 <th>1000</th>
 <th>10000</th>
 <th>100000</th>
 <th>1000000</th>
 <th>10000000</th>
 </tr>
 <tr>
 <td>duomenų nuskaitymas iš failų į atitinkamą konteinerį</th>
 <td>0.008</td>
 <td>0.069</td>
 <td>0.450</td>
 <td>2.272</td>
 <td>18.50</td>
 </tr>
 <tr>
 <td>studentų rūšiavimas didėjimo tvarka konteineryje</th>
 <td>0.001</td>
 <td>0.009</td>
 <td>0.089</td>
 <td>2.175</td>
 <td>27.49</td>
 </tr>
 <tr>
 <td>studentų skirstymas į dvi grupes</th>
 <td>0.001</td>
 <td>0.003</td>
 <td>0.025</td>
 <td>0.355</td>
 <td>3.209</td>
 </tr>
 </table>
   <br>
 <strong>TESTAVIMO ATVEJŲ LENTELĖ DEQUE (s)</strong>
 <table>
 <tr>
 <th>žingsnis</th>
 <th>1000</th>
 <th>10000</th>
 <th>100000</th>
 <th>1000000</th>
 <th>10000000</th>
 </tr>
 <tr>
 <td>duomenų nuskaitymas iš failų į atitinkamą konteinerį</th>
 <td>0.007</td>
 <td>0.049</td>
 <td>0.427</td>
 <td>2.149</td>
 <td>18.18</td>
 </tr>
 <tr>
 <td>studentų rūšiavimas didėjimo tvarka konteineryje</th>
 <td>0.005</td>
 <td>0.024</td>
 <td>0.282</td>
 <td>3.707</td>
 <td>43.43</td>
 </tr>
 <tr>
 <td>studentų skirstymas į dvi grupes</th>
 <td>0.001</td>
 <td>0.002</td>
 <td>0.018</td>
 <td>0.180</td>
 <td>2.627</td>
 </tr>
 </table>
 <br>
 <strong>V1.0</strong>
 <br>
 <strong>Pakeitimai nuo V0.5:</strong>
 <br>
 <ul>
 <li>Vietoj 3 programų yra viena, kurioje vartotojas pasirenka kokio tipo konteinerius naudoti programos vykdymui(vector, list, deque)</li>
 <li>Pritaikytos dvi strategijos pagal kurias studentai skirstomi į šaunuolius ir vargšus (kurią naudoti pasirenka vartotojas)</li>
 <li><strong>Pirmoji strategija:</strong> bendro studentų konteinerio (vector, list ir deque tipų) skaidymas (rūšiavimas) į du naujus to paties tipo konteinerius: "vargšų" ir "šaunuoliai". </li>
 <li>Įgyvendinimas toks pats kaip ir V0.5, tik kiekvienam konteineriui sukurta jo tipui pritaikyta funkcija</li>
 <li><strong>Antroji strategija:</strong>bendro studentų konteinerio (vector, list ir deque) skaidymas (rūšiavimas) panaudojant tik vieną naują konteinerį: "vargšai". Tokiu būdu, jei studentas yra vargšas, jį turime įkelti į naująjį "vargšų" konteinerį ir ištrinti iš bendro studentai konteinerio.</li>
 <li>Įgyvendinta naudojant std::partition pradinio konteinerio padalinimui į sąlygą tenkinančią ir netenkinančią dalis ir std::copy naujo konteinerio uzpildymui sąlygą tenkinančiais įrašais algoritmus bei temp.erase sąlygą tenkinančių įrašų panaikinimui iš pradinio konteinerio</li>
 <li>Sukurtas Makefile programos paleidimui. Komandos: Make, ./program, Make clean</li>
 </ul>
 <strong>V1.0 TESTAVIMAS</strong>
 <br>
 <strong>TESTAVIMO ATVEJŲ LENTELĖ VECTOR 2 STRATEGIJA (s)</strong>
 <table>
 <tr>
 <th>žingsnis</th>
 <th>1000</th>
 <th>10000</th>
 <th>100000</th>
 <th>1000000</th>
 <th>10000000</th>
 </tr>
  <tr>
 <td>programos veikimo laikas</td>
 <td>0.021</td>
 <td>0.118</td>
 <td>0.946</td>
 <td>7.673</td>
 <td>81.558</td
 </tr>
 <tr>
 <td>studentų rūšiavimas didėjimo tvarka konteineryje</th>
 <td>0.004</td>
 <td>0.021</td>
 <td>0.233</td>
 <td>2.856</td>
 <td>32.744</td>
 </tr>
 <tr>
 <td>studentų skirstymas į dvi grupes</th>
 <td>0.001</td>
 <td>0.006</td>
 <td>0.048</td>
 <td>0.357</td>
 <td>5.011</td>
 </tr>
 </table>
  <br>
 <strong>TESTAVIMO ATVEJŲ LENTELĖ LIST 2 STRATEGIJA (s)</strong>
 <table>
 <tr>
 <th>žingsnis</th>
 <th>1000</th>
 <th>10000</th>
 <th>100000</th>
 <th>1000000</th>
 <th>10000000</th>
 </tr>
 <tr>
 <td>programos veikimo laikas</th>
 <td>0.043</td>
 <td>0.103</td>
 <td>0.788</td>
 <td>6.582</td>
 <td>70.827</td>
 </tr>
 <tr>
 <td>studentų rūšiavimas didėjimo tvarka konteineryje</th>
 <td>0.002</td>
 <td>0.009</td>
 <td>0.092</td>
 <td>1.818</td>
 <td>22.359</td>
 </tr>
 <tr>
 <td>studentų skirstymas į dvi grupes</th>
 <td>0.001</td>
 <td>0.004</td>
 <td>0.038</td>
 <td>0.315</td>
 <td>3.813</td>
 </tr>
 </table>
   <br>
 <strong>TESTAVIMO ATVEJŲ LENTELĖ DEQUE 2 STRATEGIJA (s)</strong>
 <table>
 <tr>
 <th>žingsnis</th>
 <th>1000</th>
 <th>10000</th>
 <th>100000</th>
 <th>1000000</th>
 <th>10000000</th>
 </tr>
 <tr>
 <td>programos veikimo laikas</th>
 <td>0.045</td>
 <td>0.115</td>
 <td>0.888</td>
 <td>7.363</td>
 <td>76.609</td>
 </tr>
 <tr>
 <td>studentų rūšiavimas didėjimo tvarka konteineryje</th>
 <td>0.004</td>
 <td>0.023</td>
 <td>0.242</td>
 <td>2.992</td>
 <td>34.556</td>
 </tr>
 <tr>
 <td>studentų skirstymas į dvi grupes</th>
 <td>0.001</td>
 <td>0.003</td>
 <td>0.030</td>
 <td>0.261</td>
 <td>3.116</td>
 </tr>
 </table>
 <br>
 <strong>NAUDOJIMOSI ŽINGSNIAI:</strong>
 <br>
 <ol>
 <li>Pasirinkite kokį konteinerį naudosite (v - vector, l - list, d - deque)</li>
  <li>Spauskite 1 - rezultatai bus pateikti failuose, 2 - rezultatai bus pateikti konsolėje</li>
 <li>Spauskite 1 - 1 strategija (kuriamas vargšų konteineris ir įrašai ištrinami iš pagrindinio konteinerio). Spauskite 2 - 2 strategija (kuriami 2 to pačio tipo vargšų ir šaunuolių konteineriai)</li>
 <li>Spauskite 'p' - studentus aprašote patys arba 'a' - skaitoma iš failo</li>
    <ol>
    <li>Jeigu pasirinkote 'p'</li>
        <ol>
         <li>Įveskite studento vardą ir pavardę</li>
         <li>Įveskite 'p' jeigu norite pažymius vesti pats arba 'a', jeigu norite sugeneruotų        pažymių</li>
              <ol>
              <li>Jeigu pasirinkote p - veskite pažymius 1-10 ir kai baigsite vesti spauskite 11</li>
              <li>Jeigu pasirinkote 'a' - įveskite teigiamą skaičių kiek pažymių generuoti</li>
              </ol>
         <li>Įveskite egzamino rezultatą (1-10)</li>
         </ol>
     <li>Jeigu pasirinkote 'a'</li>
        <ol>
        <li>Norėdami generuoti naują failą spauskite 'n', norėdami naudoti jau turimą failą spauskite 't'</li>
             <ol>
             <li>Jeigu pasirinkote 'n'.</li>
                  <ol>
                  <li>Pasirinkite kiek įrašų generuoti faile (1000, 10000, 100000, 1000000, 10000000)</li>
                  <li>Pasirinkite kiek pažymių generuoti</li>
                  </ol>
              <li>Jeigu pasirinkote 't'</li>
                 <ol> 
                 <li>Įveskite failo pavadinimą iš direktorijos</li>
                 </ol>
              </ol>
         </ol>
 </ol>
 <br>
  <strong>V1.1</strong>
  <br>
  <strong>Struktūros ir klasės palyginimas(s)(vector, 2 strategija):</strong>
  <table>
 <tr>
 <th>Struktūra</th>
 <th>100000</th>
 <th>1000000</th>
 </tr>
  <tr>
 <td>programos veikimo laikas</td>
 <td>0.946</td>
 <td>7.673</td>
 </tr>
 <tr>
 <td>studentų rūšiavimas didėjimo tvarka konteineryje</th>
 <td>0.233</td>
 <td>2.856</td>
 </tr>
 <tr>
 <td>studentų skirstymas į dvi grupes</th>
 <td>0.048</td>
 <td>0.357</td>
 </tr>
 </table>
  <br>
   <table>
 <tr>
 <th>Klasė</th>
 <th>100000</th>
 <th>1000000</th>
 </tr>
  <tr>
 <td>programos veikimo laikas</td>
 <td>3.068</td>
 <td>21.797</td>
 </tr>
 <tr>
 <td>studentų rūšiavimas didėjimo tvarka konteineryje</th>
 <td>0.571</td>
 <td>6.689</td>
 </tr>
 <tr>
 <td>studentų skirstymas į dvi grupes</th>
 <td>0.051</td>
 <td>0.743</td>
 </tr>
 </table>
  <br>
  <strong>V1.1 sparta naudojant flag'us(s)(vector, class, 1000000):</strong>
   <table>
 <tr>
   <th>Žingsniai</th>
   <th>be flag</th>
 <th>01</th>
 <th>02</th>
 <th>03</th>
 </tr>
  <tr>
 <td>programos veikimo laikas</td>
<td>21.797</td>
    <td>14.809</td>
 <td>9.881</td>
  <td>8.802</td>
 </tr>
 <tr>
 <td>studentų rūšiavimas didėjimo tvarka konteineryje</th>
   <td>6.689</td>
 <td>4.105</td>
 <td>1.877</td>
  <td>1.180</td>
 </tr>
 <tr>
 <td>studentų skirstymas į dvi grupes</th>
  <td>0.743</td>
 <td>0.415</td>
 <td>0.557</td>
 <td>0.557</td>
 </tr>
 </table>
  <br>
  <strong>V1.2</strong>
  <br>
  <ul>
  <li>Klasė papildyta "Rule of five" realizacija.</li>
  </ul>
  <br>
  <strong> V1.5 </strong>
 <br>
 <ul>
 <li> Šioje versijoje studentų klasę pakeičia <strong> base </strong> klasė "zmogus" ir <strong>derived</strong> klasė "studentas".</li> 
  <li> Base klasė aprašo žmogų(vardas, pavarde).</li>
  <li>Derived klasė paveldi žmogaus klasės kintamuosius</li>
  </ul>
<strong>V2.0</strong>
<br>
<strong>ĮDIEGIMO INSTRUKCIJA</strong>
<ul>
  <li>Atsisiųskite Paleidimas.dmg failą</li>
<li>Jį atidarius, jūsų darbalaukyje šalia Paleidimas.dmg failo atsiras Disk Image "Paleidimas"</li>
<li>Atidarykite Disk Image</li>
<li>Atidarykite failą "Program" ir programa pasileis</li>
  </ul>
