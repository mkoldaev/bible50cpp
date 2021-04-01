#include <map>
#include <string>
class Bible61
{
	struct cs1	{ int val; const char *msg; };
	struct cs2	{ int val; const char *msg; };
	struct cs3	{ int val; const char *msg; };
public:
static void view1() {
struct cs1 poems[] = {
	{1, "1 Šimon Petr, služebník a apoštol Ježíše Krista, těm, kteříž spolu s námi zároveň drahé dosáhli víry, pro spravedlnost Boha našeho a Spasitele Jezukrista:"},
	{2, "2 Milost vám a pokoj rozmnožen buď skrze známost Boha a Ježíše Pána našeho."},
	{3, "3 Jakož nám od jeho Božské moci všecko, což potřebí bylo k životu a ku zbožnosti, darováno jest, skrze známost toho, kterýž povolal nás k slávě a k ctnosti."},
	{4, "4 Odkudžto veliká nám a drahá zaslíbení dána jsou, tak abyste skrze ně Božského přirození účastníci učiněni byli, utekše porušení toho, kteréž jest na světě v žádostech zlých."},
	{5, "5 A na to pak vy všecku snažnost svou vynaložíce, prokazujte u víře své ctnost, a v ctnosti umění,"},
	{6, "6 V umění pak zdrželivost, a v zdrželivosti trpělivost, v trpělivosti pak zbožnost,"},
	{7, "7 V zbožnosti pak bratrstva milování, a v milování bratrstva lásku."},
	{8, "8 Ty zajisté věci když budou při vás a to rozhojněné, ne prázdné, ani neužitečné postaví vás v známosti Pána našeho Jezukrista."},
	{9, "9 Nebo při komž není těchto věcí, slepýť jest, a toho, což vzdáleno jest, nevida, zapomenuv na očištění svých starých hříchů."},
	{10, "10 Protož, bratří, raději snažte se pevné povolání své i vyvolení učiniti; nebo to činíce, nepadnete nikdy."},
	{11, "11 Takť zajisté hojné způsobeno vám bude vjití k věčnému království Pána našeho a Spasitele Jezukrista."},
	{12, "12 Protož nezanedbámť vždycky vám připomínati těch věcí, ačkoli umělí i utvrzení jste v přítomné pravdě."},
	{13, "13 Neboť to mám za spravedlivé, dokudž jsem v tomto stánku, abych vás probuzoval napomínáním,"},
	{14, "14 Věda, že brzké jest složení stánku mého, jakož mi i Pán náš Ježíš Kristus oznámil."},
	{15, "15 Přičinímť se i o to, abyste vy po odchodu mém často se na ty věci rozpomínati mohli."},
	{16, "16 Nebo ne nějakých vtipně složených básní následujíce, známu učinili jsme vám Pána našeho Jezukrista moc a příchod, ale jakožto ti, kteříž jsme očima svýma viděli jeho velebnost."},
	{17, "17 Přijalť jest zajisté od Boha Otce čest a slávu, když se stal k němu hlas takový od velebné slávy: Tentoť jest ten můj milý Syn, v němž mi se zalíbilo."},
	{18, "18 A ten hlas my jsme slyšeli s nebe pošlý, s ním byvše na oné hoře svaté."},
	{19, "19 A mámeť přepevnou řeč prorockou, kteréžto že šetříte jako svíce, jenž svítí v temném místě, dobře činíte, až by se den rozednil a dennice vzešla v srdcích vašich,"},
	{20, "20 Toto nejprve znajíce, že žádného proroctví Písma svatého výklad nezáleží na rozumu lidském."},
	{21, "21 Nebo nikdy z lidské vůle nepošlo proroctví, ale Duchem svatým puzeni jsouce, mluvili svatí Boží lidé."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct cs2 poems[] = {
	{1, "1 Bývali pak i falešní proroci v lidu, jakož i mezi vámi budou falešní učitelé, kteříž chytře uvedou sekty zatracení, i toho Pána, kterýž je vykoupil, zapírajíce, uvodíce na sebe rychlé zahynutí."},
	{2, "2 A mnozí následovati budou jejich zahynutí, skrze něž cesta pravdy bude v porouhání dávána."},
	{3, "3 A lakomě skrze vymyšlené řeči vámi kupčiti budou; kterýchžto odsouzení již dávno nemešká, a zahynutí jejich nespí."},
	{4, "4 Nebo poněvadžť Bůh andělům, kteříž zhřešili, neodpustil, ale strhna je do žaláře, řetězům mrákoty oddal, aby k odsouzení chováni byli,"},
	{5, "5 I onomu prvnímu světu neodpustil, ale sama osmého Noé, kazatele spravedlnosti, zachoval, když potopu na svět bezbožníků uvedl."},
	{6, "6 A města Sodomských a Gomorských v popel obrátiv, podvrácením odsoudil, příklad budoucím bezbožníkům na nich ukázav,"},
	{7, "7 A spravedlivého Lota, ztrápeného těch nešlechetníků chlipným obcováním, vytrhl."},
	{8, "8 Ten zajisté spravedlivý, bydliv mezi nimi, den ode dne hleděním i slyšením spravedlivou duši nešlechetnými jejich skutky trápil."},
	{9, "9 Umíť Pán zbožné z pokušení vytrhnouti, nepravých pak ke dni soudu potrestaných dochovati,"},
	{10, "10 A zvláště těch, jenž po těle v žádosti nečisté chodí, a vrchností pohrdají, jsou i smělí, sobě se zalibující, neostýchají se důstojnostem porouhati."},
	{11, "11 Ješto andělé, jsouce větší v síle a v moci, nečiní proti nim přede Pánem potupného soudu."},
	{12, "12 Tito pak jako nerozumná hovada, kteráž za přirozením jdou, zplozená k zjímání a k zahynutí, tomu, čemuž nerozumějí, rouhajíce se, v tom svém porušení zahynou,"},
	{13, "13 A tak odplatu nepravosti své ponesou, jakožto ti, kteřížto sobě za rozkoš položili, aby se na každý den v libostech svých kochali, nejsouce než poskvrny a mrzkosti, ti, kteříž s vámi hodujíce, v svých lstech se kochají,"},
	{14, "14 Oči majíce plné cizoložstva, a bez přestání hřešící, přeluzujíce duše neustavičné, srdce majíce vycvičené v lakomství, synové zlořečenství."},
	{15, "15 Kteříž opustivše cestu přímou, zbloudili, následujíce cesty Balámovy, syna Bozorova, kterýž mzdu nepravosti zamiloval."},
	{16, "16 Ale měl, od koho by pokárán byl pro svůj výstupek. Nebo jhu poddaná oslice němá, člověčím hlasem promluvivši, zbránila nemoudrosti proroka."},
	{17, "17 Tiť jsou studnice bez vody, a mlhy vichrem zbouřené, jimžťo mrákota tmy chová se na věčnost."},
	{18, "18 Nebo přepyšně marné věci vypravujíce, žádostmi těla a chlipnostmi loudí ty, kteříž byli vpravdě utekli od těch, jenž bludu obcují,"},
	{19, "19 Slibujíce jim svobodu, ješto sami jsou služebníci porušení, poněvadž od kohož kdo jest přemožen, tomu jest i v službu podroben."},
	{20, "20 Jestliže pak ti, jenž ušli poskvrn světa, skrze známost Pána a Spasitele Jezukrista, opět zase v to zapleteni jsouce, přemoženi byli, učiněn jest poslední způsob jejich horší nežli první."},
	{21, "21 Lépe by zajisté jim bylo nepoznávati cesty spravedlnosti, nežli po nabytí známosti odvrátiti se od vydaného jim svatého přikázání."},
	{22, "22 Ale přihodilo se jim to, což se v přísloví pravém říkává: Pes navrátil se k vývratku svému, a svině umytá do kaliště bláta."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct cs3 poems[] = {
	{1, "1 Nejmilejší, již toto druhý list vám píši, v kterýchžto listech vzbuzuji skrze napomínání vaši upřímnou mysl,"},
	{2, "2 Abyste pamatovali na slova předpověděná od svatých proroků, a na přikázání vydané vám od nás apoštolů Pána a Spasitele,"},
	{3, "3 Toto nejprve vědouce, žeť přijdou v posledních dnech posměvači, podle svých vlastních žádostí chodící,"},
	{4, "4 A říkající: Kdež jest to zaslibování příchodu jeho? Nebo jakž otcové naši zesnuli, všecko tak trvá od počátku stvoření."},
	{5, "5 Tohoť zajisté z úmysla věděti nechtí, že nebesa již dávno slovem Božím byla učiněna, i země z vody a na vodě upevněna."},
	{6, "6 Pročež onen první svět vodou jsa zatopen, zahynul."},
	{7, "7 Ta pak nebesa, kteráž nyní jsou, i země, týmž slovem odložena jsou a zachována k ohni, ke dni soudu a zatracení bezbožných lidí."},
	{8, "8 Ale tato jedna věc nebudiž před vámi skryta, nejmilejší, že jeden den u Pána jest jako tisíc let, a tisíc let jako jeden den."},
	{9, "9 Nemeškáť Pán s naplněním slibů, (jakož někteří za to mají, že obmeškává,) ale shovívá nám, nechtě, aby kteří zahynuli, ale všickni ku pokání se obrátili."},
	{10, "10 Přijdeť zajisté den Páně, jako zloděj v noci, v kterémžto nebesa jako v prudkosti vichru pominou, a živlové pálivostí ohně rozplynou se, země pak i ty věci, kteréž jsou na ní, vypáleny budou."},
	{11, "11 Poněvadž tedy to všecko má se rozplynouti, jací pak vy býti máte v svatých obcováních a v zbožnosti,"},
	{12, "12 Očekávajíce a chvátajíce ku příští dne Božího, v němžto nebesa, hoříce, rozpustí se, a živlové pálivostí ohně rozplynou se?"},
	{13, "13 Nového pak nebe a nové země podle zaslíbení jeho čekáme, v kterýchžto spravedlnost přebývá."},
	{14, "14 Protož, nejmilejší, takových věcí čekajíce, snažtež se, abyste bez poskvrny a bez úhony před ním nalezeni byli v pokoji;"},
	{15, "15 A Pána našeho dlouhočekání za spasení mějte, jakož i milý bratr náš Pavel, podle sobě dané moudrosti, psal vám,"},
	{16, "16 Jako i ve všech epištolách svých, mluvě v nich o těch věcech. Mezi nimiž některé jsou nesnadné k vyrozumění, kterýchžto neučení a neutvrzení natahují, jako i jiných Písem, k svému vlastnímu zatracení."},
	{17, "17 Vy tedy, nejmilejší, to prve vědouce, střeztež se, abyste bludem těch nešlechetných lidí nebyli pojati a nevypadli od své pevnosti."},
	{18, "18 Ale rozmáhejtež se v milosti a v známosti Pána našeho a Spasitele Jezukrista, jemuž sláva i nyní i na časy věčné. Amen."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};