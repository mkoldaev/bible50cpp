#include <map>
#include <string>
class Bible32
{
	struct sk1	{ int val; const char *msg; };
	struct sk2	{ int val; const char *msg; };
	struct sk3	{ int val; const char *msg; };
	struct sk4	{ int val; const char *msg; };
public:
static void view1() {
struct sk1 poems[] = {
	{1, "1 Pán prehovoril k Jonášovi, synovi Amatiho, takto:"},
	{2, "2 „Vstaň, choď do veľkého mesta Ninive a zvestuj mu, že ich zloba vystúpila predo mňa.“"},
	{3, "3 Ale Jonáš vstal a chcel utiecť spred Pána do Taršišu; išiel do Joppe, kde našiel loď, ktorá išla do Taršišu, dal jej svoje plavné a nastúpil do nej, aby šiel s nimi do Taršišu spred Pána."},
	{4, "4 Ale Pán zoslal na more veľký vietor, takže sa na mori strhla veľká búrka a lodi hrozilo stroskotanie."},
	{5, "5 Námorníci sa báli a každý volal k svojmu bohu; náradie, ktoré bolo na lodi, pohádzali do mora, aby ju od neho odbremenili. Jonáš však zišiel do vnútra lode, ľahol si a spal."},
	{6, "6 Tu pristúpil k nemu veliteľ lode a povedal mu: „Čože, ty spíš? Vstaň, volaj k svojmu Bohu, azda si Boh spomenie na nás a nezahynieme.“"},
	{7, "7 I vraveli si druh druhovi: „Nože, hoďme žreb a dozvieme sa, pre koho nás stihlo toto nešťastie.“ Hodili teda žreb a žreb padol na Jonáša."},
	{8, "8 I spytovali sa ho: „Povedzže nám, prečo nás stihlo toto nešťastie? Čo máš za poslanie a odkiaľ ideš? Ktorá je tvoja vlasť a z ktorého si národa?“"},
	{9, "9 Odpovedal im: „Hebrej som a som ctiteľ Pána, Boha nebies, ktorý učinil more a suchú zem.“"},
	{10, "10 Mužov pojal veľký strach a hovorili mu: „Čo si to urobil?“ Chlapi totiž vedeli, že uteká spred Pána, lebo im to povedal."},
	{11, "11 Pýtali sa ho: „Čo máme s tebou urobiť, aby sa more pod nami utíšilo?“ More sa totiž búrilo čoraz väčšmi."},
	{12, "12 Povedal im: „Chyťte ma a hoďte do mora, potom sa more pod vami utíši. Veď ja viem, že vás pre mňa zastihla táto veľká búrka.“"},
	{13, "13 Ale mužovia veslovali, aby sa priplavili naspäť k suchej zemi, no nemohli, pretože sa more pod nimi čoraz viac búrilo."},
	{14, "14 Preto volali k Pánovi: „Ach, Pane, nech nezahynieme pre život tohto človeka a neuvaľ na nás nevinnú krv! Veď ty si Pán a urobil si, ako sa ti páčilo.“"},
	{15, "15 I chytili Jonáša a hodili ho do mora, načo more prestalo zúriť."},
	{16, "16 Tu pojal mužov veľký strach pred Pánom a obetovali Pánovi obetu a zaviazali sa sľubmi."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sk2 poems[] = {
	{1, "1 Pán priviedol veľkú rybu, aby pohltila Jonáša; a Jonáš bol vo vnútri ryby tri dni a tri noci."},
	{2, "2 Jonáš sa modlil z vnútra ryby k Pánovi, svojmu Bohu,"},
	{3, "3 a hovoril: „Volal som zo svojej úzkosti k Pánovi a vyslyšal ma, z lona podsvetia som kričal, počul si môj hlas."},
	{4, "4 Hodil si ma do priepasti, do hlbín mora a obkľúčil ma príval. Tvoje vlnobitia a tvoje vlny valili sa ponad mňa."},
	{5, "5 A povedal som: Odvrhnutý som spred tvojich očí, ale ešte uzriem tvoj svätý chrám."},
	{6, "6 Vody ma obklopili až po hrdlo, priepasť ma objala, trsť mi obopäla hlavu."},
	{7, "7 Až k úpätiam vrchov som zostúpil a závory zeme boli navždy za mnou, lež vyzdvihol si z hĺbky môj život, Pane, Bože môj."},
	{8, "8 Keď vo mne klesla moja duša, rozpamätal som sa na Pána a moja modlitba došla k tebe do tvojho svätého chrámu."},
	{9, "9 Tí, čo si ctia lživé tiene, opúšťajú svoje milosrdenstvo."},
	{10, "10 Ja ti však budem s hlasnou vďakou obetovať a splním, čo som sľúbil; u Pána je spása.“"},
	{11, "11 I prikázal Pán rybe a vydala Jonáša na suchú zem."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sk3 poems[] = {
	{1, "1 Pán druhý raz prehovoril k Jonášovi takto:"},
	{2, "2 „Vstaň, choď do veľkého mesta Ninive a zvestuj mu zvesť, ktorú ti ja poviem!“"},
	{3, "3 Jonáš vstal a šiel podľa Pánovho rozkazu do Ninive. Ninive bolo veľké mesto pred Bohom, bolo treba tri dni, aby sa prešlo cezeň."},
	{4, "4 Jonáš začal vstupovať do mesta - prvý deň cesty - a volal: „Ešte štyridsať dní a Ninive bude rozvrátené!“"},
	{5, "5 Mužovia z Ninive uverili Bohu, vyhlásili pôst a obliekli sa do vrecovín od najväčších po najmenších."},
	{6, "6 Vec došla až k ninivskému kráľovi; i vstal zo svojho trónu, zhodil zo seba plášť, obliekol si vrecovinu a posadil sa do popola."},
	{7, "7 A takto volal v Ninive: „Nariadenie kráľa a jeho veľmožov je toto: Ľudia a zvieratá, statok a ovce nech nič neokúsia; nech sa nepasú a vodu nech nepijú!"},
	{8, "8 Ľudia i zvieratá nech sa poobliekajú do vrecovín, nech hlasno volajú k Bohu a nech sa každý odvráti od svojej zlej cesty a od násilia, ktoré má v rukách."},
	{9, "9 Ktovie, azda sa Boh odvráti a zmiluje sa; odvráti sa od svojho hnevu a nezahynieme.“"},
	{10, "10 Boh videl ich skutky, že sa odvrátili od svojich zlých ciest, a Boh sa zmiloval a nepostihol ich nešťastím, ktorým ich zamýšľal postihnúť."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sk4 poems[] = {
	{1, "1 Jonášovi sa to veľmi nepáčilo a nahneval sa."},
	{2, "2 I modlil sa k Pánovi: „Ach, Pane, či som to nepovedal, kým som bol vo svojej krajine? Preto som chcel najprv utiecť do Taršišu, veď som vedel, že si láskavý a milosrdný Boh, trpezlivý a veľký v zľutovaní a zmilúvaš sa nad nešťastím."},
	{3, "3 Teraz však, Pane, odním odo mňa moju dušu, lebo mi je lepšie zomrieť, než žiť.“"},
	{4, "4 Pán povedal: „Azda sa právom hneváš?“"},
	{5, "5 Nato vyšiel Jonáš z mesta a býval východne od mesta; urobil si tam striešku a sedel pod ňou v tôni, chcel vidieť, čo sa stane v meste."},
	{6, "6 Vtedy Pán, Boh, rozkázal ricínovému kru, ktorý vyrástol nad Jonášom a robil mu nad hlavou tieň, aby ho oslobodil od nepríjemnosti. Jonáš sa ricínovému kru veľmi zaradoval."},
	{7, "7 Keď na druhý deň vychádzala ranná zora, rozkázal Boh červíku a on zranil ricínus, takže vyschol."},
	{8, "8 A keď vyšlo slnko, rozkázal Boh horúcemu východnému vetru a slnce pražilo Jonášovi na hlavu, že omdlieval a duša si mu žiadala umrieť. I povedal: „Lepšie mi je zomrieť, ako žiť.“"},
	{9, "9 Vtedy povedal Boh Jonášovi: „Azda sa právom hneváš na ricínus?“ Odpovedal: „Právom sa hnevám až na smrť.“"},
	{10, "10 Pán povedal: „Ty ľutuješ ricínus, na ktorom si nerobil a nevypestoval si ho; ktorý za noc vznikol a za noc zanikol."},
	{11, "11 A ja sa nemám zľutovať nad veľkým mestom Ninive, v ktorom je viac než sto dvadsaťtisíc ľudí, ktorí nevedia rozlišovať medzi pravicou a ľavicou? K tomu množstvo zvierat.“"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};