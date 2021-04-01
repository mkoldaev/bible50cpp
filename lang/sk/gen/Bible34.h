#include <map>
#include <string>
class Bible34
{
	struct sk1	{ int val; const char *msg; };
	struct sk2	{ int val; const char *msg; };
	struct sk3	{ int val; const char *msg; };
public:
static void view1() {
struct sk1 poems[] = {
	{1, "1 Výrok nad Ninive. Kniha videnia Nahuma z Elkoša."},
	{2, "2 Pán je žiarlivý a pomstivý Boh, Pán je pomstivý a plný hnevu, Pán sa pomstí na svojich protivníkoch a chová hnev proti svojim nepriateľom."},
	{3, "3 Pán je trpezlivý, no veľmi mocný, Pán nenechá nič bez trestu. Vo víchre a búrke je jeho cesta a oblak je prachom jeho nôh."},
	{4, "4 Keď zahriakne more, urobí ho súšou a všetky rieky vysuší. Uvädá Bášan a Karmel a kvet Libanonu vädne."},
	{5, "5 Vrchy sa trasú pred ním a kopce sa rozutekajú; zem sa dvíha pred jeho tvárou, i svet a všetci jeho obyvatelia."},
	{6, "6 Kto obstojí pred jeho hnevom a kto sa zdvihne pred jeho zápalom? Jeho hnev sa rozteká ako oheň a skaly pred ním praskajú."},
	{7, "7 Dobrým útočišťom je v deň úzkosti a pozná tých, čo v neho dúfajú."},
	{8, "8 V prekypujúcej záplave skoncuje so svojimi protivníkmi, jeho nepriateľov stíha tma."},
	{9, "9 Čo zamýšľate proti Pánovi? On urobí koniec, úzkosť sa nezdvihne po druhý raz."},
	{10, "10 Veď sú posplietaní ako tŕnie a sú ako vínom spití; úplne budú pohltení ako suchá pleva."},
	{11, "11 Z teba vyšiel, čo zamýšľal zlo proti Pánovi, čo plánoval ničomnosť."},
	{12, "12 Toto hovorí Pán: „Čo sú aj bezpeční a hocako početní, aj tak ich skosia a zahynú. Pokoril som ťa, viac ťa nepokorím."},
	{13, "13 Teraz však zlomím jeho jarmo nad tebou a tvoje okovy roztrhám.“"},
	{14, "14 Pán dal rozkaz o tebe: „Z tvojho mena nebude viac semena, z domu tvojho boha vynivočím sochy a liatiny, pripravím ti hrob, lebo si bezcenný.“"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sk2 poems[] = {
	{1, "1 Hľa, na vrchoch nohy posla blahozvesti, ktorý oznamuje pokoj! Zasväcuj, Júda, svoje sviatky, spĺňaj svoje sľuby, lebo viac neprejde cez teba ničomník, ten celkom zahynie."},
	{2, "2 Vystupuje pred tebou ničiteľ: stráž hradbu, dozeraj na cestu, upevňuj si bedrá, pozbieraj všetky sily!"},
	{3, "3 Lebo Pán vráti Jakubovu hrdosť ako hrdosť Izraelovu, lebo ju zničili ničitelia a spustošili jej vetvy."},
	{4, "4 Štít jeho hrdinov sa červenie, bojovníci sú v šarláte, vozy sú z ohnivej ocele v deň, keď sa vyzbrojuje, a jazdci sa vzpínajú."},
	{5, "5 Po uliciach sa ženú vozy, letia po námestiach, výzor majú ako fakle, blikajú ako blesky."},
	{6, "6 Spomenie si na svojich hrdinov, rútia sa svojou cestou, ponáhľajú sa k múru a postaví sa záštita."},
	{7, "7 Brány riek sa otvoria a palác sa rozpadá."},
	{8, "8 Panovnicu (?) odvedú do zajatia, jej slúžky nariekajú, ako keď hrkútajú holuby, a udierajú si prsia."},
	{9, "9 Ninive je ako rybník už oddávna. Oni bežia! „Zastaňte! Stojte!“ - no nik sa neobráti."},
	{10, "10 „Rabujte striebro, rabujte zlato,“ veď nemá konca výbava, bohatstvo najskvostnejších nádob."},
	{11, "11 Púšť a pustota a spustošenie! Srdce sa rozteká, kolená sa chvejú, triaška je na každých bedrách, zo všetkých tvárí sa sťahuje červeň."},
	{12, "12 Kde je brloh levov, tá pastva levíčat? Ta chodieval lev, levica, tam bývali levíčatá. A nikto ich neodstrašil."},
	{13, "13 Lev trhal pre svoje mláďatá a hrdúsil pre svoje levice, korisťou si naplnil brlohy a svoje jamy lúpežou."},
	{14, "14 „Hľa, som proti tebe, hovorí Pán zástupov, spálim tvoje vozy na dym, tvoje levíčatá meč pohltí, odstránim tvoju korisť z krajiny, nezazneje viac hlas tvojich poslov.“"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sk3 poems[] = {
	{1, "1 Beda krvavému mestu! Je samé klamstvo, je plné násilia, neprestáva plieniť."},
	{2, "2 Pleskot biča, hlučný rachot kolies, kone cválajú, vozy sa rútia,"},
	{3, "3 jazdci vysedajú, plameň meča, blesk oštepa, množstvo prebodnutých a sila mŕtvych tiel. Niet konca mŕtvolám, potkýnajú sa o telá."},
	{4, "4 Pre množstvo smilstva smilnice očarujúcej krásy, znalej čarov, ktorá za svoje smilstvo predávala národy a pokolenia za svoje čary."},
	{5, "5 „Hľa, som proti tebe, hovorí Pán zástupov, vyhrniem ti vlečky na tvár, ukážem národom tvoju nahotu a kráľovstvám tvoju hanbu."},
	{6, "6 Vrhnem na teba špinu, potupím ťa a divadlom ťa spravím."},
	{7, "7 Potom každý, kto ťa uvidí, ujde od teba a povie: Spustošené je Ninive! Kto by ho ľutoval? Kde by som mal hľadať tešiteľov pre teba?"},
	{8, "8 Si lepšie než No-Amon, ktoré ležalo medzi Nílmi? Obkľučovali ho vody, hradbou mu bolo more, z vody malo múr."},
	{9, "9 Etiópia bola jeho silou a Egypt - bez počtu - Pút a Líbyjci boli medzi jeho pomocníkmi."},
	{10, "10 Aj ono šlo do zajatia, do vyhnanstva, aj jeho nemluvňatá rozbíjali na rohoch všetkých ulíc. O jeho vznešených hádzali žreb a jeho velikášov okovali do želiez."},
	{11, "11 Aj ty budeš opojené, budeš omdleté, aj ty budeš hľadať útočište pred nepriateľom."},
	{12, "12 Všetky tvoje pevnosti sú figovníky s ranými figami, ak ich potrasú, padnú do úst žrúta."},
	{13, "13 Hľa, tvoj ľud: to ženy vprostred teba, otvoria tvojim nepriateľom dokorán brány tvojej krajiny; oheň pohltí tvoje závory."},
	{14, "14 Načieraj si vodu pre obliehanie, opevni svoje hradby, vstúp do blata, šliap hlinu, vezmi formu na tehly."},
	{15, "15 Tam ťa oheň pohltí, vykántri ťa meč, zožerie ťa ako koníky, hoci ťa bolo množstvo ako koníkov, hoci ťa bolo množstvo ako kobyliek."},
	{16, "16 Kupcov si mal viac, než je hviezd na nebi! Koník vyplienil a odletel."},
	{17, "17 Tvoje kniežatá sú ako kobylky, tvoji úradníci ako húf koníkov, ktoré čupia na múroch v deň studený, keď vyjde slnko, odletia a neznáme je ich miesto, kde sú."},
	{18, "18 Tvoji pastieri driemu, kráľ asýrsky, tvoji hrdinovia spia; tvoj ľud je roztratený po vrchoch a nepozbiera ho nik."},
	{19, "19 Niet úľavy na tvoj úder, tvoja rana je smrteľná. Všetci, čo počujú chýr o tebe, budú tlieskať nad tebou rukami, veď komuže neprichádzalo ustavične nešťastie od teba?“"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};