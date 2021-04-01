#include <map>
#include <string>
class Bible36
{
	struct sk1	{ int val; const char *msg; };
	struct sk2	{ int val; const char *msg; };
	struct sk3	{ int val; const char *msg; };
public:
static void view1() {
struct sk1 poems[] = {
	{1, "1 Slovo, ktoré Pán prehovoril k Sofoniášovi, synovi Chusiho, syna Godoliáša, syna Amariáša, syna Ezechiáša, v dňoch júdskeho kráľa, Amonovho syna Joziáša."},
	{2, "2 „Dočista zmetiem všetko z povrchu zeme, hovorí Pán."},
	{3, "3 Zmetiem ľudí i zvieratá, zmetiem vtáky neba a ryby mora. Skaza zločincom! - a vykántrim ľudí z povrchu zeme, hovorí Pán."},
	{4, "4 Vystriem ruku proti Júdovi a proti obyvateľom Jeruzalema a vyhubím z tohto miesta zvyšky bálov i mená žrecov a kňazov;"},
	{5, "5 i tých, čo sa na strechách klaňajú nebeskému vojsku; i tých, čo sa klaňajú a prisahajú na Pána, ale prisahajú aj na Melkoma;"},
	{6, "6 i tých, čo sa vzdialili od Pána, nehľadajú Pána a nejdú za ním.“"},
	{7, "7 Ticho pred tvárou Pána, Jahveho! Veď blízko je Pánov deň; áno, Pán usporiadal obetu, zasvätil svojich povolaných."},
	{8, "8 „V deň Pánovej obety navštívim kniežatá a kráľovičov i všetkých, čo sa obliekajú do rúch cudzincov."},
	{9, "9 A navštívim tých, čo preskakujú v ten deň cez prah, čo naplňujú dom svojho Pána klamstvom a lsťou."},
	{10, "10 V ten deň, hovorí Pán, bude hlasný krik od Rybnej brány, jajkanie od druhej a veľká záhuba od kopcov."},
	{11, "11 Jajkajte, obyvatelia Možiara, veď zahynie celý kanaánsky ľud, vyničia všetkých, čo vážia striebro."},
	{12, "12 V ten deň prekutám Jeruzalem lampami a navštívim chlapov, ktorí tučnejú na svojich kvasniciach a hovoria si: Pán neurobí ani dobré, ani zlé."},
	{13, "13 Ich bohatstvo prepadne lúpeži a ich domy spustnutiu; budú stavať domy, no bývať (v nich) nebudú, budú vysadzovať vinohrady, ale víno z nich piť nebudú.“"},
	{14, "14 Blízko je Pánov deň, blízko a je veľmi rýchly. Čuj, Pánov deň, trpko tam kričí silák."},
	{15, "15 Ten deň je deň hnevu, deň úzkosti a zvierania, deň víchra a víchrice, deň tmy a temnoty, deň oblakov a mrákavy."},
	{16, "16 Deň pozauny a lomozu proti opevneným mestám a proti vysokým baštám."},
	{17, "17 Do úzkosti vženiem ľudí, že budú chodiť ako slepí, lebo zhrešili proti Pánovi; ich krv sa bude vylievať ako prach a ich telá ako hnoj."},
	{18, "18 Ani ich striebro, ani ich zlato ich nevládze zachrániť v deň Pánovho hnevu. Oheň jeho žiarlivosti pohltí celú zem, lebo skoncuje, a to hrozne, so všetkými obyvateľmi zeme."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sk2 poems[] = {
	{1, "1 Zhromaždite a pozbierajte sa, vy, nehanebný národ,"},
	{2, "2 skôr než porodí rozhodnutie a odletí deň ako pleva. Skôr než príde na vás blčiaci Pánov hnev, skôr než príde na vás deň Pánovho hnevu."},
	{3, "3 Hľadajte Pána, všetci pokorní zeme, ktorí konáte podľa jeho práva, hľadajte spravodlivosť, hľadajte pokoru, možno, že sa schováte v deň Pánovho hnevu."},
	{4, "4 Lebo Gaza bude opustená a Askalon pustatinou, Azot rozoženú za bieleho dňa a Akaron vyhubia."},
	{5, "5 Beda obyvateľom pomorského pásu, národu Kréťanov! Pánovo slovo je proti vám, Kanaán, krajina Filištíncov: „Vyhubím ťa, že nebudeš mať občanov.“"},
	{6, "6 Pomorský pás bude nivou, stepou pre pastierov a košiarom pre stáda."},
	{7, "7 A pomorský pás bude patriť zvyškom Júdovým, tam sa budú pásť, v domoch Askalona budú za večera košiariť, lebo ich navštívi Pán, ich Boh, a obráti ich osud."},
	{8, "8 „Počul som hanobenie Moabu a rúhanie synov Amona, keď znevažovali môj ľud a rozťahovali sa na jeho území."},
	{9, "9 Preto ako žijem - hovorí Pán zástupov, Boh Izraelov - Moab bude ako Sodoma a Amončania ako Gomora, poľom tŕnia, soľnou baňou a pustatinou naveky. Zvyšky môjho ľudu ich vyplienia a ostatok môjho národa sa ich zmocní.“"},
	{10, "10 Toto ich zastihne pre ich pýchu, pretože hanobili a vyvyšovali sa nad národ Pána zástupov."},
	{11, "11 Pán bude hrozný proti nim, veď vykántri všetkých bohov zeme a jemu sa bude klaňať každý zo svojej vlasti, všetky ostrovy národov."},
	{12, "12 „Aj vy, Etiópci… Tí sú prebodnutí mojím mečom!“"},
	{13, "13 Vystrie ruku proti severu a znivočí Asýrsko, Ninive urobí opusteným, vyschnutým ako pustatina."},
	{14, "14 Uprostred neho budú ležať stáda, húfy rozličných zvierat; i pelikán a jež budú nocovať medzi jeho stĺpmi. Počúvaj! Vresk v oblokoch, havran na prahu, lebo cédrové trámy sú vytrhnuté."},
	{15, "15 Toto je mesto, ktoré plesalo, bývalo bezstarostne a hovorilo si v srdci: „Ja som a nikto viac!“ Ako sa stalo pustatinou, ležiskom zveriny? Každý, kto popri ňom prejde, hvízda a máva rukou."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sk3 poems[] = {
	{1, "1 Beda, neposlušnému, poškvrnenému a násilníckemu mestu."},
	{2, "2 Nepočúvalo na hlas, neprijalo výstrahu, nedôverovalo v Pána, nevinulo sa k svojmu Bohu."},
	{3, "3 Jeho kniežatá uprostred neho sú ručiace levy; jeho sudcovia vlci večerní, ktorí ráno neobhrýzali."},
	{4, "4 Jeho proroci sú nespoľahliví, podvodní mužovia; jeho kňazi znesvätili sväté, znásilnili zákon."},
	{5, "5 Pán v jeho strede je svätý, nerobí neprávosť; ráno čo ráno dáva svoje právo svetlom, ktoré neubúda; ale zločinec nepozná hanby."},
	{6, "6 „Vykántril som národy, spustli ich bašty, vynivočil som ich ulice, takže niet chodcov, vyhubené sú ich mestá, bez mužov, bez občanov."},
	{7, "7 Riekol som: Azda sa ma budeš báť, prijmeš výstrahu. Nezmizne mu spred očí všetko, čím som ho navštívil. Lenže hneď zrána bolo podlé všetko ich konanie."},
	{8, "8 Preto čakajte na mňa - hovorí Pán -, na deň, keď povstanem ako svedok. Lebo je mojím právom zhromaždiť národy, pozbierať kráľovstvá, aby som na ne vylial svoju prchkosť, celý svoj blčiaci hnev, veď oheň mojej žiarlivosti pohltí celú zem."},
	{9, "9 Lebo vtedy dám národom čisté pery, aby všetky vzývali meno Pánovo a slúžili mu spojenými silami."},
	{10, "10 Až spoza riek Etiópie budú moji ctitelia, potomci mojich roztratených, prinášať svoje obety."},
	{11, "11 V ten deň sa nebudeš hanbiť pre rozličné skutky, ktoré si proti mne spáchal, lebo vtedy odstránim sprostred teba tvojich nadutých chvastúňov a viac sa nebudeš vyvyšovať na mojom svätom vrchu."},
	{12, "12 Nechám však v tvojom strede ľud chudobný a biedny.“ Oni budú dôverovať v Pánovo meno."},
	{13, "13 Zvyšky Izraela nebudú páchať neprávosť a nebudú hovoriť lož; v ich ústach sa nenájde podvodný jazyk. Oni sa budú pásť a košiariť, že ich neodstraší nik."},
	{14, "14 Plesaj, dcéra Siona, jasaj, Izrael, teš a raduj sa z celého srdca, dcéra Jeruzalema!"},
	{15, "15 Pán zrušil tvoje pokuty, odvrátil nepriateľa; kráľom Izraela uprostred teba je Pán, nešťastia sa viac neobávaj!"},
	{16, "16 V ten deň povedia Jeruzalemu: „Neboj sa, Sion, nech ti neovisnú ruky!"},
	{17, "17 Uprostred teba je Pán, tvoj Boh, spásonosný hrdina; zajasá nad tebou od radosti, obnoví svoju lásku, výskať bude od plesania.“"},
	{18, "18 „Zronených pre sviatky odstránim z teba, sú ti ťarchou hanebnou."},
	{19, "19 Hľa, v tom čase skoncujem s tými, čo ťa utláčali, zachránim kuľhavého a pozbieram roztratených, urobím ich slávnymi a chýrnymi v celej krajine ich hanby."},
	{20, "20 V tom čase vás privediem, v tom čase vás pozbieram, lebo vás urobím slávnymi a chýrnymi medzi všetkými národmi zeme, až vám navidomoči obrátim váš osud“ - hovorí Pán."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};