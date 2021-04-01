#include <map>
#include <string>
class Bible30
{
	struct lt1	{ int val; const char *msg; };
	struct lt2	{ int val; const char *msg; };
	struct lt3	{ int val; const char *msg; };
	struct lt4	{ int val; const char *msg; };
	struct lt5	{ int val; const char *msg; };
	struct lt6	{ int val; const char *msg; };
	struct lt7	{ int val; const char *msg; };
	struct lt8	{ int val; const char *msg; };
	struct lt9	{ int val; const char *msg; };
public:
static void view1() {
struct lt1 poems[] = {
	{1, "1 Amoso, avių ganytojo iš Tekojos, žodžiai. Jis matė regėjimą apie Izraelį Judo karaliaus Uzijo ir Izraelio karaliaus Jeroboamo, Jehoašo sūnaus, dienomis, dveji metai prieš žemės drebėjimą."},
	{2, "2 Jis tarė: “Viešpats suriaumos iš Siono, Jo balsas pasigirs iš Jeruzalės. Piemenų buveinės gedės ir Karmelio viršūnė nudžius”."},
	{3, "3 Taip sako Viešpats: “Dėl trijų ar keturių Damasko nusikaltimų neatšauksiu bausmės, nes jie kūlė Gileadą geležiniais velenais."},
	{4, "4 Aš pasiųsiu ugnį į Hazaelio namus, ir ji sudegins Ben Hadado rūmus."},
	{5, "5 Sulaužysiu Damasko užkaiščius, išnaikinsiu gyventojus Aveno lygumoje bei laikantį skeptrą iš Bet Edeno namų. Sirai pateks Kyro nelaisvėn”."},
	{6, "6 Taip sako Viešpats: “Dėl trijų ar keturių Gazos nusikaltimų neatšauksiu bausmės, nes jie išvedė visus į nelaisvę ir juos atidavė Edomui."},
	{7, "7 Aš pasiųsiu ugnį į Gazos sienas, ir ji sudegins jos rūmus."},
	{8, "8 Išnaikinsiu gyventojus Ašdode, laikantį skeptrą Aškalone, pakelsiu ranką prieš Ekroną ir pražudysiu filistinų likutį”."},
	{9, "9 Taip sako Viešpats: “Dėl trijų ar keturių Tyro nusikaltimų neatšauksiu bausmės, nes jie atidavė visus belaisvius Edomui ir nesilaikė broliškos sandoros."},
	{10, "10 Aš pasiųsiu ugnį į Tyro sienas, ir ji sudegins jo rūmus”."},
	{11, "11 Taip sako Viešpats: “Dėl trijų ar keturių Edomo nusikaltimų neatšauksiu bausmės, nes jis kardu persekiojo savo brolį, nepasigailėjo jo, žiauriai siautėjo ir nuolat puldinėjo."},
	{12, "12 Aš pasiųsiu ugnį į Temaną, ir ji sudegins Bocros rūmus”."},
	{13, "13 Taip sako Viešpats: “Dėl trijų ar keturių amonitų nusikaltimų neatšauksiu bausmės, nes jie perskrodė Gileado nėščias moteris, norėdami išplėsti savo krašto ribas."},
	{14, "14 Aš uždegsiu ugnį Rabos sienose, ir ji sudegins jos rūmus tarp klyksmų mūšio dieną ir su viesulu audros metu."},
	{15, "15 Jos karalius ir jo kunigaikščiai eis į nelaisvę”."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lt2 poems[] = {
	{1, "1 Taip sako Viešpats: “Dėl trijų ar keturių Moabo nusikaltimų neatšauksiu bausmės, nes jis sudegino Edomo karaliaus kaulus."},
	{2, "2 Aš pasiųsiu ugnį į Moabą, ir ji sudegins Kerijotų rūmus, ir Moabas mirs sąmyšyje, tarp šauksmų, skardenant trimitui."},
	{3, "3 Aš sunaikinsiu jo teisėją ir nužudysiu visus jo kunigaikščius”."},
	{4, "4 Taip sako Viešpats: “Dėl trijų ar keturių Judo nusikaltimų neatšauksiu bausmės, nes jie paniekino Viešpaties įstatymą ir nesilaikė Jo įsakymų. Juos suklaidino jų pačių melai, kuriais sekė jų tėvai."},
	{5, "5 Aš pasiųsiu ugnį į Judą, ir ji sudegins Jeruzalės rūmus”."},
	{6, "6 Taip sako Viešpats: “Dėl trijų ar keturių Izraelio nusikaltimų neatšauksiu bausmės, nes jie parduoda teisųjį už sidabrą, beturtį už sandalų porą."},
	{7, "7 Jie sutrypia silpnuosius ir iškreipia romiųjų kelią. Tėvas ir sūnus eina pas tą pačią moterį ir suteršia mano šventą vardą."},
	{8, "8 Jie išsitiesia ant rūbų, paimtų už užstatą prie kiekvieno aukuro, geria pasmerktųjų vyną savo dievo namuose."},
	{9, "9 Juk Aš išnaikinau dėl jūsų amoritus, nors jie buvo aukšti kaip kedrai ir stiprūs kaip ąžuolai. Aš sunaikinau jų vaisius virš žemės ir šaknis žemėje."},
	{10, "10 Aš jus išvedžiau iš Egipto krašto, vedžiojau dykumoje keturiasdešimt metų ir leidau užimti amoritų kraštą."},
	{11, "11 Iš jūsų sūnų Aš prikėliau pranašų ir iš jūsų jaunikaičių­nazarėnų. Ar ne taip, Izraelio vaikai?­ sako Viešpats.­"},
	{12, "12 Bet jūs girdėte nazarėnus vynu ir pranašams įsakėte: ‘Nepranašaukite!’"},
	{13, "13 Aš prislėgsiu jus, kaip slegiamas vežimas, kai būna pilnas javų."},
	{14, "14 Tada greitasis nepaspruks, stipriajam nepadės jo jėga, karžygys neišsigelbės,"},
	{15, "15 lankininkas neišsilaikys, greitakojis neišbėgs ir raitelis neišsigelbės."},
	{16, "16 Net drąsiausias karžygys bėgs, viską palikęs, tą dieną,­sako Viešpats”."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lt3 poems[] = {
	{1, "1 Izraelitai, klausykite šito žodžio, kurį Viešpats kalbėjo prieš jus: “Klausyk, visa gimine, kurią išvedžiau iš Egipto krašto."},
	{2, "2 Tik jus Aš išsirinkau iš visų žemės giminių. Todėl bausiu jus už visus jūsų nusikaltimus”."},
	{3, "3 Argi gali dviese eiti kartu, jei nėra susitarę?"},
	{4, "4 Argi liūtas riaumoja tankumyne, neturėdamas grobio? Argi jauniklis liūtas urzgia savo guolyje, nieko nesugavęs?"},
	{5, "5 Argi paukštis įkliūna į spąstus, jei juose nėra masalo? Argi spąstai pašoka, nieko nepagavę?"},
	{6, "6 Argi, išgirdę trimitą mieste, žmonės nenusigąsta? Argi įvyksta nelaimė mieste, Viešpačiui jos neleidus?"},
	{7, "7 Tikrai Viešpats Dievas nieko nedaro, neapreiškęs savo paslapties savo tarnams, pranašams."},
	{8, "8 Liūtui riaumojant, kas nebijotų? Viešpačiui Dievui kalbant, kas nepranašautų?"},
	{9, "9 Skelbkite Ašdodo rūmuose ir Egipto krašto rūmuose, sakydami: “Susirinkite ant Samarijos kalnų, stebėkite didelius sąmyšius ir priespaudą joje."},
	{10, "10 Jie nežino, kaip teisingai elgtis,­sako Viešpats,­jie kaupia smurtą ir skriaudą savo rūmuose”."},
	{11, "11 Todėl Viešpats Dievas sako: “Priešas aplink tavo šalį, jis sutryps tavo galybę ir apiplėš rūmus”."},
	{12, "12 Taip sako Viešpats: “Kaip piemuo išplėšia iš liūto nasrų porą kojų ar ausies gabalą, taip bus išgelbėti izraelitai, kurie sėdi Samarijoje, guolio kampe, ir guli Damasko pataluose."},
	{13, "13 Klausykite ir paliudykite tai Jokūbo namuose,­sako Viešpats Dievas, kareivijų Dievas.­"},
	{14, "14 Tą dieną aplankysiu Izraelį dėl jo nusikaltimų, sunaikinsiu Betelio aukurus; aukuro ragai bus nudaužyti ir nukris ant žemės."},
	{15, "15 Taip pat sunaikinsiu žiemos namus ir vasaros namus, pranyks dramblio kaulo rūmai ir didžiųjų pastatų neliks”."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lt4 poems[] = {
	{1, "1 Išgirskite šitą žodį, Bašano karvės, esančios Samarijos kalnyne, kurios spaudžiate vargšus, skriaudžiate neturtėlius ir sakote savo valdovams: “Atneškite, ir mes gersime!”"},
	{2, "2 Viešpats Dievas prisiekė savo šventumu: “Štai ateis jums dienos, kai jus ištrauks kabliais ir jūsų palikuonis kaip žuvis ant kabliuko."},
	{3, "3 Jūs išeisite pro spragas, kiekviena tiesiausiu keliu, ir būsite išmestos Harmone,­sako Viešpats”."},
	{4, "4 “Eikite į Betelį ir į Gilgalą ir ten nusikalskite! Aukokite rytais aukas, kas trečią dieną neškite dešimtines."},
	{5, "5 Aukokite raugintos duonos padėkos auką, skelbkite laisvos valios aukas! Juk tai jums patinka, izraelitai”,­sako Viešpats Dievas."},
	{6, "6 “Aš daviau jums švarius dantis visuose jūsų miestuose ir duonos stoką visose vietovėse. Tačiau jūs nesugrįžote pas mane”,­sako Viešpats."},
	{7, "7 “Aš nedaviau jums lietaus likus trims mėnesiams iki pjūties. Aš leidau lyti viename mieste, o kitame sulaikiau lietų. Vietomis palijo, o ten kur nelijo, viskas išdžiūvo."},
	{8, "8 Du ar trys miestai ėjo į vieną miestą atsigerti vandens, bet troškulio nenumalšino. Tačiau jūs nesugrįžote pas mane”,­sako Viešpats."},
	{9, "9 “Aš naikinau sausra ir pelėsiais jūsų laukų derlių, išdžiovinau sodus ir vynuogynus, figmedžius ir alyvmedžius nuėdė skėriai. Tačiau jūs nesugrįžote pas mane”,­sako Viešpats."},
	{10, "10 “Aš siunčiau jums marą kaip Egipte, išžudžiau kardu jūsų jaunuolius, žirgus atidaviau kaip grobį. Jūsų stovyklų smarvė pasiekė jūsų nosis, tačiau jūs nesugrįžote pas mane”,­sako Viešpats."},
	{11, "11 “Aš naikinau jus kaip Sodomą ir Gomorą, ir jūs tapote kaip nuodėgulis, ištrauktas iš ugnies. Tačiau jūs nesugrįžote pas mane,­ sako Viešpats.­"},
	{12, "12 Izraeli, Aš taip su tavimi pasielgsiu, todėl pasiruošk sutikti savo Dievą!”"},
	{13, "13 Nes štai Tas, kuris sukūrė kalnus bei sutvėrė vėją, kuris apreiškia žmogui savo mintis. Jis aušrą paverčia tamsa ir kalnų viršūnės yra po Jo kojomis. Viešpats, kareivijų Dievas, yra Jo vardas."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct lt5 poems[] = {
	{1, "1 Izraelio namai, išgirskite žodį, raudą, kuria į jus kreipiuosi:"},
	{2, "2 “Parblokštas nebeatsikelia išrinktasis Izraelis, guli apleistas ant žemės, niekas jo nepakelia”."},
	{3, "3 Taip sako Viešpats Dievas Izraelio namams: “Mieste, kuris išeidavo su tūkstančiu, išliks šimtas, ir kuris išeidavo su šimtu, išliks dešimt”."},
	{4, "4 Taip sako Viešpats Izraelio namams: “Ieškokite manęs, tai gyvensite."},
	{5, "5 Neieškokite Betelio, neikite į Gilgalą, nekeliaukite į Beer Šebą! Gilgala tikrai pateks į nelaisvę ir Betelis pavirs nieku”."},
	{6, "6 Ieškokite Viešpaties, tai gyvensite, kad Jis neužsidegtų kaip ugnis Juozapo namuose ir neprarytų jų. Nebūtų Betelyje kam ją užgesinti."},
	{7, "7 Jūs, kurie teisingumą pakeičiate kartybe ir teisumą sutrypiate kojomis."},
	{8, "8 Ieškokite To, kuris padarė Sietyno bei Oriono žvaigždynus, kuris naktį paverčia rytu ir dieną­tamsia naktimi, kuris pašaukia jūros vandenį ir jį išlieja ant žemės lietumi. Viešpats yra Jo vardas."},
	{9, "9 Jis leidžia sunaikinti stiprųjį ir sugriauti jo tvirtovę."},
	{10, "10 Jie nekenčia to, kuris apkaltina vartuose ir nemėgsta to, kuris kalba tiesą."},
	{11, "11 Jūs mindote silpnąjį ir imate iš jo mokesčius kviečiais. Jūs pasistatėte namus iš tašytų akmenų, tačiau negyvensite juose; užsiveisėte puikių vynuogynų, tačiau negersite jų vyno."},
	{12, "12 Aš žinau, kiek daug yra jūsų nusikaltimų bei nuodėmių. Jūs persekiojate nekaltąjį, imate kyšius, iškraipote vargšo bylą vartuose."},
	{13, "13 Išmintingasis tyli tuo metu, nes tai blogas metas."},
	{14, "14 Ieškokite gera, o ne pikta, kad išliktumėte gyvi. Tada Viešpats, kareivijų Dievas, bus su jumis, kaip jūs sakote."},
	{15, "15 Nekęskite pikta ir mylėkite gera. Įtvirtinkite teisingumą vartuose. Gal tada Viešpats, kareivijų Dievas, bus maloningas Juozapo likučiui?"},
	{16, "16 Taip sako Viešpats, kareivijų Dievas: “Visose aikštėse ir gatvėse dejuos ir sakys: ‘Vargas, vargas!’ Žemdirbius šauks gedėti, o patyrusias raudotojas­dejuoti."},
	{17, "17 Kai praeisiu tarp jūsų, visuose vynuogynuose bus girdima rauda,­sako Viešpats”."},
	{18, "18 Vargas tiems, kurie laukia Viešpaties dienos! Kam ji jums? Viešpaties dieną bus tamsa, o ne šviesa."},
	{19, "19 Kaip žmogus, kuris, bėgdamas nuo liūto, sutiktų lokį arba, įėjęs į namus ir ranka atsirėmęs į sieną, būtų įgeltas gyvatės."},
	{20, "20 Tamsi bus Viešpaties diena­ne šviesi. Labai tamsi, be jokios šviesos."},
	{21, "21 “Aš nekenčiu ir paniekinu jūsų šventes, nemėgstu jūsų iškilmių kvapo."},
	{22, "22 Nors jūs aukojate deginamąsias ir duonos aukas, Aš jų nepriimsiu. Aš nepažvelgsiu į jūsų riebias padėkos aukas."},
	{23, "23 Šalin nuo manęs su savo giesmių triukšmu, nenoriu klausyti jūsų arfų skambinimo."},
	{24, "24 Teisingumas tegu teka kaip vandenys, o teisumas­kaip galinga srovė!"},
	{25, "25 Izraelio namai, ar jūs aukojote atnašas ir aukas dykumoje per keturiasdešimt metų?"},
	{26, "26 Jūs nešiojote Sikuto, savo karaliaus, ir Kijūno, žvaigždžių dievo, atvaizdus."},
	{27, "27 Todėl ištremsiu jus anapus Damasko”,­sako Viešpats, kurio vardas­kareivijų Dievas."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct lt6 poems[] = {
	{1, "1 Vargas tiems, kurie nerūpestingai gyvena Sione ir pasitiki Samarijos kalnu, kurie vadinami tautų pažiba, pas kuriuos susirinko Izraelio namai."},
	{2, "2 Eikite į Kalnę ir pasižiūrėkite; iš ten į didįjį miestą Hamatą, o po to nusileiskite į filistinų Gatą. Ar jūs geresni už šitas karalystes, ar jūsų kraštas didesnis už jų kraštus?"},
	{3, "3 Jūs nenorite galvoti apie nelaimės dieną, tačiau priartinate smurto viešpatavimą!"},
	{4, "4 Jūs gulite dramblio kaulo lovose ir išsitiesiate pataluose, valgote ėriukus iš bandos ir veršius iš gardo."},
	{5, "5 Jūs dainuojate, pritariant arfoms, ir kuriate muzikos kūrinius, lygindamiesi su Dovydu."},
	{6, "6 Jūs geriate vyną iš taurių ir tepatės geriausiu aliejumi, bet nesisielojate dėl Juozapo nelaimių."},
	{7, "7 Todėl jie pirmieji eis į nelaisvę ir pasibaigs tų, kurie gulėjo išsitiesę, lėbavimas."},
	{8, "8 Viešpats Dievas prisiekė savimi: “Aš bjauriuosi Jokūbo puikybe, nekenčiu jo rūmų ir atiduosiu miestą priešams su viskuo, kas jame yra”."},
	{9, "9 Ir jei liks dešimt žmonių vienuose namuose, jie mirs!"},
	{10, "10 Paims juos giminaitis ar tas, kuris degina kūnus, ir išneš lavonus iš namų, ir sakys likusiam namuose: “Ar dar yra gyvų su tavimi?”, tas atsakys: “Nėra!” Ir jis sakys: “Tylėk! Negalima minėti Viešpaties vardo”."},
	{11, "11 Viešpats įsakys paversti didžiuosius namus griuvėsiais, o mažuosius sudaužyti į šipulius."},
	{12, "12 Argi žirgai bėga uolomis? Argi jas aria jaučiais? Tačiau jūs pavertėte teisingumą nuodais ir teisumo vaisių­kartėliu."},
	{13, "13 “Vargas tiems, kurie džiaugiasi niekais ir sako: ‘Ar ne savo jėgomis tapome galingi?’"},
	{14, "14 Izraelio namai, Aš sukelsiu prieš jus tautą, kuri pavergs jus nuo Hamato iki dykumos upelio”,­sako Viešpats, kareivijų Dievas."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct lt7 poems[] = {
	{1, "1 Viešpats Dievas parodė man tokį reginį: karaliaus pievas nušienavus, pradėjus želti vėlyvai žolei, Jis pasiuntė skėrių pulkus."},
	{2, "2 Kai jie visiškai nuėdė žolę krašte, aš sakiau: “Viešpatie Dieve, meldžiu, atleisk! Kaip beištvers Jokūbas? Juk jis toks mažas”."},
	{3, "3 Viešpats gailėjosi dėl to. “Taip neįvyks”,­tarė Viešpats."},
	{4, "4 Viešpats Dievas parodė man tokį reginį: Jis bausmei pašaukė ugnies liepsną, ta prarijo didžiąją gelmę ir buvo bepraryjanti kraštą."},
	{5, "5 Tada tariau: “Viešpatie Dieve, meldžiu, liaukis! Kaip beištvers Jokūbas? Juk jis toks mažas”."},
	{6, "6 Viešpats gailėjosi dėl to. “Taip irgi neįvyks”,­tarė Viešpats Dievas."},
	{7, "7 Viešpats Dievas parodė man tokį reginį: Viešpats stovėjo ant mūrinės sienos ir laikė rankoje svambalą."},
	{8, "8 Viešpats klausė manęs: “Amosai, ką matai?” Aš atsakiau: “Svambalą”. Tada Viešpats tarė: “Aš dedu svambalą prie tavo tautos, Izraelio namų; daugiau nebepasigailėsiu jų."},
	{9, "9 Izaoko aukštumos ir Izraelio šventyklos bus sunaikintos. Aš pakelsiu kardą prieš Jeroboamo namus”."},
	{10, "10 Tada Betelio kunigas Amacija pasiuntė Izraelio karaliui Jeroboamui tokią žinią: “Amosas ruošia prieš tave sąmokslą Izraelyje, kraštas nebegali pakelti jo kalbų,"},
	{11, "11 nes Amosas sako: ‘Jeroboamas mirs nuo kardo, o Izraelis eis į nelaisvę, toli nuo savo krašto’ ”."},
	{12, "12 Po to Amacija tarė Amosui: “Regėtojau, bėk į Judo šalį, valgyk ten duoną ir pranašauk."},
	{13, "13 Bet Betelyje daugiau nebepranašauk, nes čia yra karaliaus šventykla ir karališki namai”."},
	{14, "14 Amosas atsakė Amacijai: “Aš ne pranašas ir ne pranašo sūnus. Aš esu piemuo ir auginu šilkmedžius."},
	{15, "15 Tačiau Viešpats, paėmęs mane nuo bandos, tarė: ‘Eik, pranašauk mano tautai, Izraeliui!’"},
	{16, "16 Dabar klausyk Viešpaties žodžio. Tu sakai: ‘Nepranašauk prieš Izraelį ir nekalbėk prieš Izaoko namus!’"},
	{17, "17 Todėl taip sako Viešpats: ‘Tavo žmona paleistuvaus mieste, sūnūs ir dukterys žus nuo kardo, tavo žemę išdalins, o tu pats mirsi pagonių krašte. Izraelis tikrai bus išvarytas į nelaisvę iš savo krašto’ ”."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct lt8 poems[] = {
	{1, "1 Viešpats Dievas parodė man tokį reginį: štai pintinė prinokusių vaisių."},
	{2, "2 Jis klausė: “Amosai, ką matai?” Aš atsakiau: “Pintinę prinokusių vaisų”. Tada Viešpats tarė man: “Atėjo galas mano tautai, Izraeliui; daugiau jos nebepasigailėsiu."},
	{3, "3 Giesmės šventykloje virs raudojimu,­sako Viešpats Dievas.­Bus gausu lavonų, juos išmes tylėdami”."},
	{4, "4 Klausykite, kurie praryjate beturtį ir pražudote krašto vargšus,"},
	{5, "5 sakydami: “Kada baigsis jaunas mėnulis ir galėsime parduoti javus? Kada baigsis sabatas ir galėsime pasiūlyti kviečius? Kada galėsime sumažinti saiką, padidinti svorį ir apgaudinėti neteisingomis svarstyklėmis?"},
	{6, "6 Mes pirksime vargšą už sidabrą, beturtį už porą sandalų, pelus parduosime kviečių vietoje”."},
	{7, "7 Viešpats prisiekė Jokūbo pasididžiavimu: “Niekados nepamiršiu jų darbų!”"},
	{8, "8 Ar dėl to neturėtų sudrebėti žemė ir liūdėti visi jos gyventojai? Ji pakils, patvins ir vėl atslūgs kaip Egipto upė."},
	{9, "9 Viešpats Dievas sako: “Ir atsitiks tą dieną, kad saulė nusileis vidudienį ir šviesi diena taps naktimi."},
	{10, "10 Aš paversiu jūsų iškilmes į gedulą, giesmes į raudas. Užvilksiu visiems ašutines, plikai nuskusiu galvas, padarysiu jus lyg gedinčius vienintelio sūnaus. Jūsų galas bus karti diena."},
	{11, "11 Ateina dienos,­sako Viešpats,­ kai Aš siųsiu badą šaliai: ne duonos badą ir ne vandens troškulį, bet Viešpaties žodžio."},
	{12, "12 Tada jie klajos nuo jūros iki jūros ir lakstys nuo šiaurės iki rytų, ieškodami Viešpaties žodžio, bet neras."},
	{13, "13 Tą dieną alps iš troškulio gražios mergaitės ir jaunuoliai,"},
	{14, "14 kurie prisiekia Samarijos nuodėme ir sako: ‘Tikrai gyvas dievas Dano mieste ir išgelbėtojas Beer Šeboje!’ Jie kris ir nebeatsikels”."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct lt9 poems[] = {
	{1, "1 Mačiau Viešpatį, stovintį prie aukuro, ir Jis tarė: “Trenk į durų staktas, kad net pamatai drebėtų. Tekrinta tai ant žmonių galvų. Aš likusius nužudysiu kardu­niekas nepabėgs ir neišsigelbės."},
	{2, "2 Jeigu jie nužengtų į mirusiųjų buveinę, iš ten mano ranka juos paimtų. Jeigu jie užkoptų į dangų, iš ten juos išmesčiau."},
	{3, "3 Jeigu jie pasislėptų Karmelio viršūnėje, suieškojęs juos iš ten paimčiau. Jeigu jie pasislėptų nuo mano akių jūros dugne, įsakyčiau gyvatei juos įgelti."},
	{4, "4 Jeigu jie išeitų į nelaisvę priešakyje savo priešų, įsakyčiau kardui juos išžudyti. Aš nukreipsiu į juos savo akis nelaimei, o ne gerovei”."},
	{5, "5 Kai Viešpats, kareivijų Dievas, palies žemę, ji siūbuos ir visi jos gyventojai gedės. Viskas pakils ir atslūgs kaip Egipto upė."},
	{6, "6 Jis pastatė danguje savo sostą, žemė yra jo papėdė. Jis pašaukia jūros vandenis ir juos išlieja ant žemės paviršiaus. Viešpats yra Jo vardas."},
	{7, "7 “Ar jūs, Izraelio vaikai, nesate kaip Etiopijos gyventojai?­sako Viešpats.­Ar neatvedžiau Izraelio iš Egipto, filistinų iš Kaftoro ir sirų iš Kyro?"},
	{8, "8 Viešpaties Dievo akys nukreiptos į nuodėmingą karalystę. Aš ją sunaikinsiu nuo žemės paviršiaus, tačiau Jokūbo namų visiškai nesunaikinsiu”,­sako Viešpats."},
	{9, "9 “Aš įsakysiu išsklaidyti izraelitus tarp visų tautų, kad jie būtų išsijoti kaip rėčiu, tačiau ir mažiausias grūdas nenukris žemėn."},
	{10, "10 Žus nuo kardo visi tautos nusidėjėliai, kurie sako: ‘Nelaimė mūsų neužklups ir nepasieks!’"},
	{11, "11 Tada atstatysiu sugriuvusią Dovydo palapinę ir užtaisysiu jos plyšius. Pakelsiu jos griuvėsius kaip ir seniau."},
	{12, "12 Jie paveldės Edomo likutį ir visas tautas, kurios mano vardu vadinamos”,­sako Viešpats, kuris tai įvykdys."},
	{13, "13 “Ateis diena,­sako Viešpats,­ kai artojas pasivys pjovėją ir vynuogių mynėjas­sėjėją. Kalnai lašės saldžiu vynu, visose kalvose jis tekės."},
	{14, "14 Aš parvesiu savo tautos Izraelio ištremtuosius; jie atstatys sugriautus miestus ir gyvens juose, augins vynuogynus ir gers jų vyną, sodins sodus ir valgys jų vaisių."},
	{15, "15 Aš įsodinsiu juos jų žemėje, ir niekas nebeišraus jų iš krašto, kurį jiems daviau”,­sako Viešpats, tavo Dievas."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};