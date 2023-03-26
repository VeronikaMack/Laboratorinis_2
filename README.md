# Laboratorinis_1 V0.5

Šią versiją sudaro trys programos (1. naudojant vector 2. naudojant list 3. naudojant deque)

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
 
