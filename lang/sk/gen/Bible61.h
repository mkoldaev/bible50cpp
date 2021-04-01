#include <map>
#include <string>
class Bible61
{
	struct sk1	{ int val; const char *msg; };
	struct sk2	{ int val; const char *msg; };
	struct sk3	{ int val; const char *msg; };
public:
static void view1() {
struct sk1 poems[] = {
	{1, "1 Šimon Peter, služobník a apoštol Ježiša Krista, tým, čo dostali tú istú vzácnu vieru ako my v spravodlivosti nášho Boha a Spasiteľa Ježiša Krista:"},
	{2, "2 Milosť vám a pokoj v hojnosti v poznaní Boha a Ježiša, nášho Pána."},
	{3, "3 Jeho božská moc nám darovala všetko, čo treba pre život a nábožnosť poznaním toho, ktorý nás povolal vlastnou slávou a mocou."},
	{4, "4 Tým nám daroval vzácne a veľmi veľké prisľúbenia, aby ste sa skrze ne stali účastnými na Božej prirodzenosti a unikli porušeniu, ktoré je vo svete pre žiadostivosť."},
	{5, "5 A práve preto vynaložte všetko úsilie na to, aby ste k svojej viere pripojili čnosť, k čnosti poznanie,"},
	{6, "6 k poznaniu zdržanlivosť, k zdržanlivosti trpezlivosť, k trpezlivosti nábožnosť,"},
	{7, "7 k nábožnosti bratskú náklonnosť a k bratskej náklonnosti lásku."},
	{8, "8 Ak toto všetko máte a ak sa to rozhojňuje, nebudete nečinnými a neplodnými v poznávaní nášho Pána Ježiša Krista."},
	{9, "9 Kto však toto nemá, je slepý, krátkozraký: zabudol, že bol očistený od svojich starých hriechov."},
	{10, "10 Preto sa, bratia, tým viac usilujte upevňovať svoje povolanie a vyvolenie. Veď ak budete to robiť, nikdy nepadnete."},
	{11, "11 Tak sa vám naširoko otvorí vstup do večného kráľovstva nášho Pána a Spasiteľa Ježiša Krista."},
	{12, "12 Preto vám to budem stále pripomínať, hoci to viete a ste utvrdení v pravde, ktorú teraz máte."},
	{13, "13 Ale považujem za správne prebúdzať vás napomínaním, kým som v tomto stánku."},
	{14, "14 Viem, že čoskoro zložím svoj stánok, ako mi to aj zjavil náš Pán Ježiš Kristus."},
	{15, "15 No postarám sa, aby ste si aj po mojom odchode často pripomínali tieto veci."},
	{16, "16 Veď sme nesledovali vymyslené bájky, keď sme vás oboznámili s mocou a príchodom nášho Pána Ježiša Krista, ale sami sme boli očitými svedkami jeho veleby."},
	{17, "17 On dostal od Boha Otca česť a slávu, keď mu z velebnej slávy zaznel hlas: „Toto je môj Syn, môj milovaný, v ktorom mám zaľúbenie.“"},
	{18, "18 A tento hlas sme my počuli; zaznel z neba, keď sme boli s ním na svätom vrchu."},
	{19, "19 Tým je aj prorocké slovo pre nás pevnejšie. A vy dobre robíte, že hľadíte naň ako na lampu, ktorá svieti v temnom mieste, kým nesvitne deň a nevzíde vo vašich srdciach zornica."},
	{20, "20 Predovšetkým však vedzte, že nijaké proroctvo v Písme nepripúšťa súkromný výklad."},
	{21, "21 Lebo proroctvo nikdy nevzišlo z ľudskej vôle, ale pod vedením Ducha Svätého prehovorili ľudia poslaní od Boha."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sk2 poems[] = {
	{1, "1 V ľude však boli aj falošní proroci; tak budú medzi vami falošní učitelia, ktorí budú vnášať zhubné rozkoly; budú zapierať Pána, ktorý ich vykúpil, a tým privedú na seba náhlu záhubu."},
	{2, "2 Mnohí budú nasledovať ich výstrednosti a pre nich budú potupovať cestu pravdy."},
	{3, "3 Vo svojom lakomstve budú vás vykorisťovať falošnými rečami. Ich odsúdenie sa pripravuje už oddávna a ich záhuba nedrieme."},
	{4, "4 Veď Boh neušetril ani anjelov, keď zhrešili, ale zvrhol ich do tmavých priepastí podsvetia a dal ich strážiť až do súdu."},
	{5, "5 Ani starý svet neušetril, ale zachránil Noema, hlásateľa spravodlivosti, ako ôsmeho, keď priviedol potopu na svet bezbožných."},
	{6, "6 Aj mestá Sodomu a Gomoru odsúdil na zánik a obrátil ich na popol, a tak dal príklad, čo čaká bezbožných."},
	{7, "7 Vyslobodil však spravodlivého Lota, ktorého trápil výstredný život nemravníkov."},
	{8, "8 Kým tento spravodlivý býval medzi nimi, trápilo jeho spravodlivú dušu, že musel deň čo deň počuť a vidieť ich nemravné skutky."},
	{9, "9 Pán však vie vytrhnúť nábožných zo skúšky a nespravodlivých ponechať na deň súdu na potrestanie;"},
	{10, "10 a to predovšetkým tých, ktorí sa ženú za nečistými žiadosťami tela a pohŕdajú Pánom. Bezočiví opovážlivci, neboja sa rúhať duchovným bytostiam,"},
	{11, "11 kým ani anjeli, hoci sú väčší čo do sily a moci, nevynášajú proti nim rúhavý výrok pred Pánom."},
	{12, "12 Títo však ako nerozumné zvieratá, od prírody určené na to, aby ich lovili a ničili, rúhajú sa tomu, čo nepoznajú. Zahynú vo svojej skazenosti"},
	{13, "13 a proti svojej vôli dostanú odplatu za svoju neprávosť tí, čo za rozkoš pokladajú denné hýrenie; sú samá špina a škvrna a hýria roztopašne, keď v rozkošiach s vami hodujú."},
	{14, "14 Oči majú plné cudzoložstva a sú nenásytní po hriechu; zvádzajú nepevné duše a srdce majú vycvičené v lakomstve; sú to synovia kliatby."},
	{15, "15 Opustili priamu cestu a zablúdili, nasledovali cestu Balaama z Bosoru, ktorý si obľúbil odplatu za neprávosť."},
	{16, "16 Bol však pokarhaný za svoj priestupok. Nemé ťažné zviera sa ozvalo ľudským hlasom a zabránilo prorokovmu šialenstvu."},
	{17, "17 Tí ľudia sú pramene bez vody a mračná hnané víchricou; je im pripravená pošmúrna temnota."},
	{18, "18 Lebo reči majú pyšné a prázdne a zvádzajú žiadosťami tela a výstrednosťami tých, čo sotva unikli tým, čo žijú v blude."},
	{19, "19 Sľubujú im slobodu, ale sami sú otrokmi skazy; veď každý je otrokom toho, kto sa ho zmocnil."},
	{20, "20 Ak sa teda tí, čo poznaním nášho Pána a Spasiteľa Ježiša Krista unikli poškvrnám sveta, znova do nich zapletú a dajú sa premôcť, ich koniec je horší, ako bol začiatok."},
	{21, "21 Bolo by pre nich lepšie, keby neboli vôbec poznali cestu spravodlivosti, ako ju poznať a odvrátiť sa od svätého prikázania, ktoré sa im zverilo."},
	{22, "22 Prihodilo sa im to, čo hovorí pravdivé príslovie: „Pes sa k tomu vrátil, čo vyvrátil, a umyté prasa váľa sa v blate zasa.“"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sk3 poems[] = {
	{1, "1 Milovaní, toto je už druhý list, ktorý vám píšem, a v obidvoch vás napomínam, lebo chcem prebudiť vašu čistú myseľ,"},
	{2, "2 aby ste pamätali na to, čo predpovedali svätí proroci, i na to, čo prikázal Pán a Spasiteľ a čo vám odovzdali apoštoli."},
	{3, "3 Predovšetkým vedzte, že v posledných dňoch prídu s posmechom posmievači, žijúci podľa svojich žiadostí,"},
	{4, "4 a budú hovoriť: „Kde je ten jeho prisľúbený príchod?“ Veď odvtedy, ako zosnuli otcovia, všetko ostáva tak, ako to bolo od počiatku stvorenia."},
	{5, "5 Skryté je im totiž - a oni to chcú -, že nebo je oddávna a že zem povstala Božím slovom z vody a skrze vodu"},
	{6, "6 a že skrze ne zahynul aj vtedajší svet, zatopený vodou."},
	{7, "7 A to isté slovo udržiava terajšie nebo i zem a zachováva pre oheň, keď príde deň súdu a záhuby bezbožných ľudí."},
	{8, "8 Toto jedno nech vám je, milovaní, zjavné: že u Pána je jeden deň ako tisíc rokov a tisíc rokov ako jeden deň."},
	{9, "9 Pán nemešká s prisľúbením, ako sa niektorí nazdávajú, že mešká; on je len trpezlivý s vami a nechce, aby niekto zahynul, ale aby sa všetci dali na pokánie."},
	{10, "10 Pánov deň príde ako zlodej. A vtedy sa nebesia s rachotom pominú, živly sa páľavou rozplynú, aj zem i diela, ktoré sú na nej."},
	{11, "11 A keď sa toto všetko má tak rozplynúť, ako sväto a nábožne musíte žiť vy,"},
	{12, "12 čo očakávate túžobne príchod Božieho dňa, pre ktorý sa nebesia páľavou rozplynú a živly sa v ohni roztopia!"},
	{13, "13 Podľa jeho prísľubu očakávame nové nebo a novú zem, na ktorých prebýva spravodlivosť."},
	{14, "14 Preto, milovaní, keď toto očakávate, usilujte sa, aby vás našiel nepoškvrnených a bez úhony, v pokoji."},
	{15, "15 A zhovievavosť nášho Pána pokladajte za spásu, ako vám napísal aj náš milovaný brat Pavol podľa múdrosti, ktorá mu bola daná,"},
	{16, "16 tak ako vo všetkých listoch, keď v nich o tomto hovorí. Niektoré miesta v nich sú ťažko zrozumiteľné a neučení a neutvrdení ľudia ich prekrúcajú, ako aj ostatné Písma, na svoju vlastnú záhubu."},
	{17, "17 Ale vy, milovaní bratia, ktorí to už viete, chráňte sa, aby ste sa nedali zviesť bludom ničomníkov a aby ste neodpadli od svojho pevného základu."},
	{18, "18 Vzrastajte v milosti a poznaní nášho Pána a Spasiteľa Ježiša Krista. Jemu sláva i teraz a až do dňa večnosti. Amen."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};