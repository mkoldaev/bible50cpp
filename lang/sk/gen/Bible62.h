#include <map>
#include <string>
class Bible62
{
	struct sk1	{ int val; const char *msg; };
	struct sk2	{ int val; const char *msg; };
	struct sk3	{ int val; const char *msg; };
	struct sk4	{ int val; const char *msg; };
	struct sk5	{ int val; const char *msg; };
public:
static void view1() {
struct sk1 poems[] = {
	{1, "1 Čo bolo od počiatku, čo sme počuli, čo sme na vlastné oči videli, na čo sme hľadeli a čoho sa naše ruky dotýkali, to zvestujeme: Slovo života."},
	{2, "2 - Lebo zjavil sa život a my sme videli, dosvedčujeme a zvestujeme vám večný život, ktorý bol u Otca a zjavil sa nám."},
	{3, "3 Čo sme videli a počuli, zvestujeme aj vám, aby ste aj vy mali spoločenstvo s nami. Veď my máme spoločenstvo s Otcom a s jeho Synom Ježišom Kristom."},
	{4, "4 A toto píšeme, aby naša radosť bola úplná."},
	{5, "5 A toto je zvesť, ktorú sme od neho počuli a vám zvestujeme: Boh je svetlo a niet v ňom nijakej tmy."},
	{6, "6 Ak hovoríme, že máme s ním spoločenstvo, ale chodíme vo tme, luháme a nekonáme pravdu."},
	{7, "7 Ale ak chodíme vo svetle, ako je on vo svetle, máme spoločenstvo medzi sebou a krv Ježiša, jeho Syna, nás očisťuje od každého hriechu."},
	{8, "8 Ak hovoríme, že nemáme hriech, klameme sami seba a nie je v nás pravda."},
	{9, "9 Ale ak vyznávame svoje hriechy, on je verný a spravodlivý: odpustí nám hriechy a očistí nás od každej neprávosti."},
	{10, "10 Ak hovoríme, že sme nezhrešili, jeho robíme luhárom a nie je v nás jeho slovo."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sk2 poems[] = {
	{1, "1 Deti moje, toto vám píšem, aby ste nehrešili. Ale keby niekto zhrešil, máme u Otca zástancu: Ježiša Krista, spravodlivého."},
	{2, "2 On je zmiernou obetou za naše hriechy; a nielen za naše, ale aj za hriechy celého sveta."},
	{3, "3 Podľa toho vieme, že sme ho poznali, ak zachovávame jeho prikázania."},
	{4, "4 Kto hovorí: „Poznám ho,“ a nezachováva jeho prikázania, je luhár a niet v ňom pravdy."},
	{5, "5 Kto však zachováva jeho slovo, v tom je Božia láska naozaj dokonalá. A podľa toho vieme, že sme v ňom."},
	{6, "6 Kto hovorí, že ostáva v ňom, má aj sám žiť, ako žil on."},
	{7, "7 Milovaní, nepíšem vám nové prikázanie, ale staré prikázanie, ktoré ste mali od začiatku: staré prikázanie je slovo, ktoré ste počuli."},
	{8, "8 A predsa vám píšem nové prikázanie, ktoré je pravdivé v ňom aj vo vás, lebo tma odchádza a už svieti pravé svetlo."},
	{9, "9 Kto hovorí, že je vo svetle, a nenávidí svojho brata, je ešte stále vo tme."},
	{10, "10 Kto miluje svojho brata, ostáva vo svetle a nie je preň pohoršením."},
	{11, "11 Ale kto nenávidí svojho brata, je vo tme a chodí vo tme a nevie, kam ide, lebo tma mu zaslepila oči."},
	{12, "12 Píšem vám, deti: Pre jeho meno máte odpustené hriechy."},
	{13, "13 Otcovia, vám píšem: Poznali ste toho, ktorý je od počiatku. Mládenci, vám píšem: Premohli ste Zlého."},
	{14, "14 Napísal som vám, deti: Poznali ste Otca. Napísal som vám, otcovia: Poznali ste toho, ktorý je od počiatku. Napísal som vám, mládenci: Ste silní, Božie slovo ostáva vo vás a premohli ste Zlého."},
	{15, "15 Nemilujte svet, ani to, čo je vo svete. Ak niekto miluje svet, nie je v ňom Otcova láska."},
	{16, "16 Veď nič z toho, čo je vo svete, ani žiadostivosť tela, ani žiadostivosť očí, ani honosenie sa bohatstvom nie je z Otca, ale zo sveta."},
	{17, "17 A svet sa pominie, aj jeho žiadostivosť. Kto však plní Božiu vôľu, ostáva naveky."},
	{18, "18 Deti moje, je posledná hodina. A ako ste počuli, že príde antikrist, tak teraz vystúpilo mnoho antikristov. Z toho poznávame, že je tu posledná hodina."},
	{19, "19 Spomedzi nás vyšli, ale neboli z nás. Lebo keby boli z nás, boli by zostali s nami. No malo sa ukázať, že tí všetci nie sú z nás."},
	{20, "20 Ale vy máte pomazanie od Svätého a viete to všetci."},
	{21, "21 Nenapísal som vám, akoby ste nepoznali pravdu, ale že ju poznáte, a preto, že nijaká lož nie je z pravdy."},
	{22, "22 Kto je luhár, ak nie ten, kto popiera, že Ježiš je Kristus!? To je antikrist, kto popiera Otca i Syna."},
	{23, "23 Kto popiera Syna, nemá ani Otca. Kto vyznáva Syna, má aj Otca."},
	{24, "24 Nech zostáva vo vás, čo ste počuli od začiatku. Ak vo vás zostane to, čo ste počuli od začiatku, aj vy ostanete v Synovi aj v Otcovi."},
	{25, "25 A prisľúbenie, ktoré nám dal on, je večný život."},
	{26, "26 Toto som vám napísal o tých, čo vás zvádzajú."},
	{27, "27 A pomazanie, ktoré ste od neho dostali, ostáva vo vás a nepotrebujete, aby vás niekto poúčal. Ale ako jeho pomazanie vás poúča o všetkom - a je pravdivé, nie je lžou - teda ako vás poučilo, ostávate v ňom."},
	{28, "28 A teraz, deti moje, ostávajte v ňom, aby sme mali dôveru, keď sa zjaví, a aby sme pri jeho príchode neboli ním zahanbení."},
	{29, "29 Ak viete, že je spravodlivý, vedzte, že každý, kto koná spravodlivo, z neho sa narodil."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sk3 poems[] = {
	{1, "1 Pozrite, akú veľkú lásku nám daroval Otec: voláme sa Božími deťmi a nimi aj sme. Preto nás svet nepozná, že nepoznal jeho."},
	{2, "2 Milovaní, teraz sme Božími deťmi, a ešte sa neukázalo, čím budeme. Vieme však, že keď sa on zjaví, budeme mu podobní, lebo ho budeme vidieť takého, aký je."},
	{3, "3 Každý, kto má túto nádej v neho, usiluje sa byť čistý, ako je on čistý."},
	{4, "4 Každý, kto pácha hriech, pácha aj bezprávie, lebo hriech je bezprávie."},
	{5, "5 A viete, že on sa zjavil, aby sňal hriechy, a v ňom hriechu niet."},
	{6, "6 Kto ostáva v ňom, nehreší; kto hreší, ten ho nevidel, ani nepoznal."},
	{7, "7 Deti moje, nech vás nik nezvedie. Kto koná spravodlivo, je spravodlivý, ako je on spravodlivý."},
	{8, "8 Kto pácha hriech, je z diabla, pretože diabol hreší od počiatku. A Boží Syn sa zjavil preto, aby zmaril diablove skutky."},
	{9, "9 Kto sa narodil z Boha, nepácha hriech, lebo v ňom ostáva jeho semeno; a nemôže hrešiť, pretože sa narodil z Boha."},
	{10, "10 Podľa tohto sa dajú rozoznať Božie deti od diablových detí: kto nekoná spravodlivo, nie je z Boha; ani ten, kto nemiluje svojho brata."},
	{11, "11 Lebo toto je zvesť, ktorú ste počuli od začiatku: aby sme jeden druhého milovali."},
	{12, "12 Nie ako Kain; on bol zo Zlého a zabil svojho brata. A prečo ho zabil? Preto, že jeho skutky boli zlé a bratove spravodlivé."},
	{13, "13 Bratia, nedivte sa, ak vás svet nenávidí."},
	{14, "14 My vieme, že sme prešli zo smrti do života, lebo milujeme bratov. Kto nemiluje, ostáva v smrti."},
	{15, "15 Každý, kto nenávidí svojho brata, je vrah. A viete, že ani jeden vrah nemá v sebe večný život."},
	{16, "16 Čo je láska, poznali sme z toho, že on položil za nás svoj život. Aj my sme povinní dávať život za bratov."},
	{17, "17 Ak má niekto pozemský majetok a vidí brata v núdzi, a srdce si pred ním zatvorí, ako v ňom môže ostávať Božia láska?"},
	{18, "18 Deti moje, nemilujme len slovom a jazykom, ale skutkom a pravdou."},
	{19, "19 Podľa toho poznáme, že sme z pravdy, a upokojíme si pred ním srdce."},
	{20, "20 Lebo keby nám srdce niečo vyčítalo, Boh je väčší ako naše srdce a vie všetko."},
	{21, "21 Milovaní, ak nám srdce nič nevyčíta, máme dôveru k Bohu"},
	{22, "22 a dostaneme od neho všetko, o čo len budeme prosiť, lebo zachovávame jeho prikázania a robíme, čo sa jemu páči."},
	{23, "23 A toto je jeho prikázanie: aby sme verili v meno jeho Syna Ježiša Krista a milovali jeden druhého, ako nám prikázal."},
	{24, "24 Kto zachováva jeho prikázania, ostáva v Bohu a Boh v ňom. A že v nás ostáva, poznáme z Ducha, ktorého nám dal."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sk4 poems[] = {
	{1, "1 Milovaní, neverte každému duchu, ale skúmajte duchov, či sú z Boha; lebo do sveta vyšlo mnoho falošných prorokov."},
	{2, "2 Božieho Ducha poznáte podľa tohto: Každý duch, ktorý vyznáva, že Ježiš Kristus prišiel v tele, je z Boha."},
	{3, "3 Duch, ktorý nevyznáva Ježiša, nie je z Boha. To je duch antikrista, o ktorom ste počuli, že príde, a už teraz je na svete."},
	{4, "4 Vy, deti moje, ste z Boha a zvíťazili ste nad nimi, lebo ten, ktorý je vo vás, je väčší než ten, čo je vo svete."},
	{5, "5 Oni sú zo sveta, preto hovoria podľa sveta a svet ich počúva."},
	{6, "6 My sme z Boha. Kto pozná Boha, počúva nás. Kto nie je z Boha, ten nás nepočúva. Podľa toho poznávame Ducha pravdy a ducha bludu."},
	{7, "7 Milovaní, milujme sa navzájom, lebo láska je z Boha a každý, kto miluje, narodil sa z Boha a pozná Boha."},
	{8, "8 Kto nemiluje, nepoznal Boha, lebo Boh je láska."},
	{9, "9 A Božia láska k nám sa prejavila v tom, že Boh poslal svojho jednorodeného Syna na svet, aby sme skrze neho mali život."},
	{10, "10 Láska je v tom, že nie my sme milovali Boha, ale že on miloval nás a poslal svojho Syna ako zmiernu obetu za naše hriechy."},
	{11, "11 Milovaní, keď nás Boh tak miluje, aj my sme povinní milovať jeden druhého."},
	{12, "12 Boha nikto nikdy nevidel; ale keď sa milujeme navzájom, Boh ostáva v nás a jeho láska v nás je dokonalá."},
	{13, "13 A že ostávame v ňom a on v nás, poznávame podľa toho, že nám dal zo svojho Ducha."},
	{14, "14 A my sme videli a svedčíme, že Otec poslal Syna za Spasiteľa sveta."},
	{15, "15 Kto vyzná: „Ježiš je Boží Syn,“ ostáva v ňom Boh a on v Bohu."},
	{16, "16 A my, čo sme uverili, spoznali sme lásku, akú má Boh k nám. Boh je láska; a kto ostáva v láske, ostáva v Bohu a Boh ostáva v ňom."},
	{17, "17 Láska v nás je dokonalá v tom, že máme dôveru v deň súdu, lebo ako je on, tak sme aj my na tomto svete."},
	{18, "18 V láske niet strachu, a dokonalá láska vyháňa strach, lebo strach má v sebe trest, a kto sa bojí, nie je dokonalý v láske."},
	{19, "19 My milujeme, pretože on prvý miloval nás."},
	{20, "20 Ak niekto povie: „Milujem Boha,“ a nenávidí svojho brata, je luhár. Veď kto nemiluje brata, ktorého vidí, nemôže milovať Boha, ktorého nevidí."},
	{21, "21 A toto prikázanie máme od neho: aby ten, kto miluje Boha, miloval aj svojho brata."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct sk5 poems[] = {
	{1, "1 Každý, kto verí, že Ježiš je Kristus, narodil sa z Boha. A každý, kto miluje Boha ako Otca, miluje aj toho, kto sa z neho narodil."},
	{2, "2 Podľa toho poznáme, že milujeme Božie deti, keď milujeme Boha a plníme jeho prikázania."},
	{3, "3 Lebo láska k Bohu spočíva v tom, že zachovávame jeho prikázania. A jeho prikázania nie sú ťažké."},
	{4, "4 Veď všetko, čo sa narodilo z Boha, premáha svet. A tým víťazstvom, ktoré premohlo svet, je naša viera."},
	{5, "5 Veď kto iný premáha svet, ak nie ten, kto verí, že Ježiš je Boží Syn?"},
	{6, "6 On je ten, ktorý prišiel skrze vodu a krv, Ježiš Kristus. Nielen skrze vodu, ale skrze vodu a krv. A Duch to dosvedčuje, pretože Duch je pravda."},
	{7, "7 Lebo traja sú, čo svedčia:"},
	{8, "8 Duch, voda a krv; a títo traja sú zajedno."},
	{9, "9 Ak prijímame svedectvo ľudí, Božie svedectvo je väčšie; pretože Božie svedectvo je to, že svedčil o svojom Synovi."},
	{10, "10 Kto verí v Božieho Syna, má svedectvo v sebe. Kto neverí Bohu, robí ho luhárom, pretože neuveril svedectvu, ktoré vydal Boh o svojom Synovi."},
	{11, "11 A toto svedectvo je, že Boh nám dal večný život a tento život je v jeho Synovi."},
	{12, "12 Kto má Syna, má život; kto nemá Syna, nemá Boží život."},
	{13, "13 Toto som vám napísal, aby ste vedeli, že máte večný život vy, čo veríte v meno Božieho Syna."},
	{14, "14 A toto je dôvera, ktorú máme k nemu, že nás počuje, keď o niečo prosíme podľa jeho vôle."},
	{15, "15 A ak vieme, že nás počuje, nech o čokoľvek prosíme, vieme aj to, že dostaneme, o čo sme ho žiadali."},
	{16, "16 Keď niekto vidí, že jeho brat pácha hriech, ktorý nevedie k smrti, nech prosí a Boh mu dá život, totiž tým, čo páchajú hriech, ktorý nevedie k smrti. Je aj hriech, ktorý vedie k smrti; o takom nehovorím, že sa treba zaň modliť."},
	{17, "17 Každá neprávosť je hriechom, ale je aj hriech, ktorý nevedie k smrti."},
	{18, "18 Vieme, že nik, kto sa narodil z Boha, nehreší, ale chráni ho ten, ktorý sa narodil z Boha, a Zlý sa ho nedotkne."},
	{19, "19 Vieme, že sme z Boha a celý svet je v moci Zlého."},
	{20, "20 A vieme, že prišiel Boží Syn a dal nám schopnosť poznať toho Pravého. A my sme v tom Pravom, v jeho Synovi Ježišovi Kristovi. On je ten Pravý, Boh a večný život."},
	{21, "21 Deti moje, chráňte sa modiel!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};