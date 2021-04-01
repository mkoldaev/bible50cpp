#include <map>
#include <string>
class Bible35
{
	struct sk1	{ int val; const char *msg; };
	struct sk2	{ int val; const char *msg; };
	struct sk3	{ int val; const char *msg; };
public:
static void view1() {
struct sk1 poems[] = {
	{1, "1 Výrok, ktorý dostal vo videní prorok Habakuk."},
	{2, "2 Dokedy mám volať, Pane, a nevyslyšíš? Kričím k tebe: „Násilie!“, a nezachraňuješ?"},
	{3, "3 Prečo mi dáš vidieť hriech a pozeráš na nešťastie? Útlak a násilie je predo mnou, rodí sa spor a vzniká zvada."},
	{4, "4 Preto sa ochromuje zákon a nikdy neprerazí právo, lebo bezbožník obchádza spravodlivého; preto vychádza pokrivené právo."},
	{5, "5 „Pozrite medzi národy a viďte a zhrozíte sa úžasne, lebo vo vašich dňoch vykonám čin, že neuveríte, keď vám ho rozpovedia."},
	{6, "6 Lebo, hľa, ja vzbudím Chaldejcov, hrozný a obratný národ, ktorý sa rozíde po šírej zemi, aby dobyl obydlia, ktoré nie sú jeho."},
	{7, "7 Úžasný je a strašný, jeho právo a pýcha vychádza od neho."},
	{8, "8 Ľahšie než leopardy sú jeho kone, rýchlejšie ako vlky za večera; jeho jazdci sa ženú, jeho jazdci prichádzajú zďaleka, letia sťa orol, keď sa vrhá na korisť."},
	{9, "9 Každý kráča za násilím, všetky ich tváre sú východný vietor, nakopia zajatcov ako piesku."},
	{10, "10 Posmech si robí z kráľov, kniežatá sú mu na výsmech, vysmieva sa každej pevnosti, nakopí piesku a zaujme ju."},
	{11, "11 Nato mu nadmieru ožije duch, prehreší sa, svoju silu pokladá za boha.“"},
	{12, "12 Či nie si ty, Pane, od pradávna? Môj Bože, môj Svätý, nezomrieme! Pane, pre súd si ho ustanovil; Skala, pre karhanie si ho postavil."},
	{13, "13 Máš čisté oči, nechceš vidieť zlo a nemôžeš hľadieť na nešťastie. Prečo hľadíš mlčky na protivníkov, keď zločinci hlcú lepších od seba?"},
	{14, "14 Ľudí robíš podobnými rybám v mori, plazom, ktoré nemajú vládcu."},
	{15, "15 Všetkých vylovil svojou udicou, povyťahoval svojou sieťou a pozbieral ich do svojho čereňa, preto sa raduje a plesá."},
	{16, "16 Za to obetuje svojej sieti, prináša kadidlo svojmu čereňu, veď ich pomocou má tučný podiel a mastný pokrm."},
	{17, "17 Či má preto vyprázdňovať svoju sieť a ustavične bez milosti zabíjať národy?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sk2 poems[] = {
	{1, "1 Postavím sa na svoju stráž, umiestnim sa na hradbe a budem sliediť, aby som zbadal, čo bude ku mne hovoriť a čo odpovie na moju ponosu."},
	{2, "2 Pán mi odpovedal: „Napíš videnie, a to jasne na tabuľu, aby sa dalo plynule čítať."},
	{3, "3 Lebo videnie je ešte na určený čas, no náhli sa ku koncu a nesklame; ak sa oddiali, čakaj naň, veď určite príde a nezmešká."},
	{4, "4 Hľa, nadúva sa, v kom nie je duša priama, spravodlivý však bude žiť pre svoju vernosť.“"},
	{5, "5 A ako je víno klamlivé, nebude mať slávu muž nadutý, ktorý si otvára hrtan ako podsvetie, je ako smrť, nezasýti sa, zhrabal k sebe všetky národy a zhromaždil k sebe všetky kmene."},
	{6, "6 Či títo všetci nespravia porekadlo o ňom, posmešnú hádanku, a nepovedia: „Beda tomu, kto hromadí, čo nie je jeho. Dokedy ešte? A hromadí proti sebe mračno hliny.“?"},
	{7, "7 Či nepovstanú náhle, čo zahryznú do teba, a nezobudia sa, čo tebou otrasú? Potom im budeš korisťou."},
	{8, "8 Preto, že si vyplienil mnohé národy, vyplienia ťa všetky ostatné kmene, pre ľudskú krv, pre násilnosť na zemi, na meste a všetkých jeho občanoch."},
	{9, "9 Beda tomu, kto hromadí korisť na nešťastie svojho domu, chce si položiť hniezdo do výšav, aby unikol ruke nešťastia."},
	{10, "10 Odhodlal si sa, na hanbu svojho domu, povytínať mnohé národy a tvoja duša hreší."},
	{11, "11 Veď kameň z múru bude kričať a hrada z väzby mu odpovie:"},
	{12, "12 Beda tomu, kto krvou stavia mesto a upevňuje osadu zločinom!"},
	{13, "13 Hľa, či to nie je od Pána zástupov, že kmene robia pre oheň a národy sa ustávajú pre nič?"},
	{14, "14 Lebo zem bude plná poznania Pánovej slávy ako vody, ktoré pokrývajú more."},
	{15, "15 Beda tomu, kto napája svojho blížneho, primiešava mu svoju zlosť a opíja ho, aby videl jeho nahotu."},
	{16, "16 Sýtil si sa viac hanbou než cťou, nuž pi aj ty a ukáž svoju neobrezanosť: obráti sa k tebe kalich Pánovej pravice a potupa k tvojej cti."},
	{17, "17 Lebo násilie Libanonu ťa pokryje a trápenie zvierat ťa podesí pre ľudskú krv, pre násilie na zemi, na meste a všetkých jeho obyvateľoch."},
	{18, "18 Čo pomôže socha, že ju urobil rezbár, liatina a lživý učiteľ, že jej dôveroval tvorca, čo ju spravil, keď robil nemých bôžikov?"},
	{19, "19 Beda tomu, kto vraví drevu: „Zobuď sa!“, „Vstaň!“ nemému kameňu; či to on počuje? Hľa, je obtiahnutý zlatom a striebrom, ale života nijakého v ňom niet."},
	{20, "20 Pán však je vo svojom svätom chráme, nech pred ním zamĺkne celá zem!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sk3 poems[] = {
	{1, "1 Modlitba proroka Habakuka. Na spôsob žalospevu."},
	{2, "2 Pane, počul som tvoju správu, bál som sa, oživ, Pane, svoje dielo uprostred rokov, uprostred rokov daj vedieť; v hneve si pripomeň milosrdenstvo!"},
	{3, "3 Boh prichádza z Temanu a Svätý z vrchu Faran; - jeho veleba zakrýva nebesá a zem je plná jeho chvály."},
	{4, "4 A žiari ako svetlo, lúče mu vyrážajú z rúk, tam je schránka jeho sily."},
	{5, "5 Pred jeho tvárou kráča mor a vzápätí mu tiahne plameň."},
	{6, "6 Zastane a premeria zem, pozrie a zatrasie národmi; i rozpoltia sa večné vrchy a sklonia sa kopce odveké; má večné chodníky."},
	{7, "7 V trápení som videl stany Kušanu, trasú sa šiatre madiánskej krajiny."},
	{8, "8 Či sa Pán hnevá na rieky? Či proti riekam nesie sa tvoj hnev? Či proti moru je tvoj zápal, že jazdíš na svojich paripách? Tvoje vozy znamenajú spásu."},
	{9, "9 Tvoja kuša je pripravená podľa prísahy, ktorú si dal kmeňom. Riekami si poprerýval zem,"},
	{10, "10 zazreli ťa, zvíjali sa vrchy, prevalila sa záplava vôd, priepasť vydala svoj hukot, vysoko dvíhala ruky."},
	{11, "11 Slnko a mesiac ostali doma, pred svetlom tvojich šípov ušli, pred žiarou tvojho bleskového oštepu."},
	{12, "12 V zápale pošliapeš zem, v hneve rozmlátiš národy."},
	{13, "13 Vytiahol si zachrániť svoj ľud, zachrániť svojho pomazaného; rozdrvil si hlavu bezbožníkovho domu, obnažil si mu základy až dospodu."},
	{14, "14 Ich vlastnou berlou si prevŕtal hlavu jeho vojvodcov, keď sa rútili rozprášiť ma; ich jasanie znelo, akoby šli zhltnúť v skrýši bedára."},
	{15, "15 Na svojich koňoch cválaš po mori, cez bahno veľkých vôd."},
	{16, "16 Počul som a chvelo sa mi vnútro, pri hrmote triasli sa mi pery, rozklad mi vnikal do kostí a nohy sa mi chveli. Spokojný budem v deň úzkosti, až príde národ, ktorý na nás útočí."},
	{17, "17 Figovník síce nerodí a niet ovocia na viničoch, sklamala úroda olív a pole nedodalo pokrm; stratili sa ovce z košiara a v maštaliach nieto dobytka."},
	{18, "18 Ja však budem plesať v Pánovi, jasať budem v Bohu svojej spásy."},
	{19, "19 Jahve, Pán, je moja sila, dal mi nohy ako jeleniciam a dá mi vykračovať po mojich výšinách. Zbormajstrovi. Na strunový nástroj."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};