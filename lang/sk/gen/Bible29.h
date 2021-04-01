#include <map>
#include <string>
class Bible29
{
	struct sk1	{ int val; const char *msg; };
	struct sk2	{ int val; const char *msg; };
	struct sk3	{ int val; const char *msg; };
	struct sk4	{ int val; const char *msg; };
public:
static void view1() {
struct sk1 poems[] = {
	{1, "1 Slovo Pánovo, ktoré prehovoril k Joelovi, synovi Fatuela."},
	{2, "2 Čujte toto, starci, nakloňte si ucho, všetci obyvatelia zeme! Či sa stalo takéto za vašich dní alebo za dní vašich otcov?"},
	{3, "3 Rozprávajte o tom svojim deťom a vaše deti svojim deťom a ich deti ďalším pokoleniam!"},
	{4, "4 Zvyšok po rezáčovi zožrala kobylka, zvyšok po kobylke zožral skokan, zvyšok po skokanovi zožral ničiteľ."},
	{5, "5 Vzbuďte sa, opilci, plačte a kvíľte, všetci pijani vína, pre mušt, lebo vám ho spred úst zničili."},
	{6, "6 Lebo do mojej krajiny vystúpil mocný a nespočetný národ; jeho zuby sú zuby leva, hryzáky má ako levica."},
	{7, "7 Moju vinicu obrátil na púšť a moje figovníky obhrýzol, úplne ich olúpal a zahodil, obeleli ich konáre."},
	{8, "8 Kvíľ ako panna odiata vrecovinou pre muža svojej mladosti!"},
	{9, "9 Pokrmové a nápojové obety zmizli z domu Pánovho, smútia kňazi, služobníci Pánovi."},
	{10, "10 Spustošené je pole, smúti roľa, veď je znivočené obilie, vyschol mušt, olej uvädol."},
	{11, "11 Roľníci sa hanbia, jajkajú vinári pre pšenicu a jačmeň, lebo žatva je preč z poľa."},
	{12, "12 Vinič vyschol, figovníky uvädli, granátniky i palmy a jablone, všetky stromy poľa vyschli, áno, zmizla radosť u ľudí."},
	{13, "13 Opášte sa a nariekajte, kňazi, kvíľte, služobníci oltára, poďte, bedlite vo vrecovinách, sluhovia môjho Boha, lebo domu Pánovmu sú upreté obety pokrmu a nápoja."},
	{14, "14 Zasväťte pôst, zvolajte zbor, zhromaždite starcov, všetkých občanov krajiny do domu Pána, svojho Boha, a volajte k Pánovi:"},
	{15, "15 „Beda tomuto dňu, veď blízo je Pánov deň, príde ako pohroma od Hromovládcu!"},
	{16, "16 Či nie pred naším zrakom hynie pokrm, z domu nášho Boha radosť a plesanie?“"},
	{17, "17 Hnijú semená pod svojimi hrudami, pusté sú sýpky, rúcajú sa sklady, lebo obilie vyšlo na hanbu."},
	{18, "18 Ako bučí dobytok! Blúdia čriedy statku, lebo nemajú pastvy; aj stáda oviec hynú."},
	{19, "19 K tebe, Pane, volám, lebo oheň strávil stepné lúky a plameň spálil všetky stromy poľa."},
	{20, "20 I zverina poľa túži po tebe, lebo vyschli vodné toky a oheň strávil stepné lúky."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sk2 poems[] = {
	{1, "1 Zvučte trúbou na Sione, volajte na mojom svätom vrchu, nech sa trasú všetci obyvatelia zeme, lebo prichádza Pánov deň, áno, blízko je."},
	{2, "2 Deň tmy a mrákavy, deň oblakov a víchrice. Ako zora sa rozprestiera na vrchoch národ početný a mocný, jemu podobný nebol od prapočiatku a za ním už po roky rodov a rodov nebude."},
	{3, "3 Pred ním oheň zožiera a za ním vypaľuje plameň; sťa záhrada Eden je pred ním zem, za ním však znivočená púšť a nieto pred ním nijakej záchrany."},
	{4, "4 Ich výzor je ako výzor koní a ako jazdci, tak bežia."},
	{5, "5 Akoby hrmot vozov poskakujú na temene vrchov a ako šľahot plamenného ohňa, ktorý plevu zožiera; ako mocný národ zriadený do boja."},
	{6, "6 Pred ním sa chvejú národy, zo všetkých tvárí sa červeň sťahuje."},
	{7, "7 Bežia ako bohatieri a ako bojovníci lezú na múry; každý ide svojou cestou, neodchýli sa zo svojho chodníka."},
	{8, "8 Jeden nevráža do druhého, každý kráča svojou koľajou, i cez strely sa neprestajne rútia."},
	{9, "9 Vpadnú do mesta, bežia po múroch, vylezú na domy, vojdú ako zlodej cez okná."},
	{10, "10 Pred ním sa trasie zem, chveje sa nebo, slnko a mesiac sa zatemnia a hviezdy stiahnu svoj jas."},
	{11, "11 Pán vydá hlas pred svojím vojskom, veď jeho tábor je veľmi veľký, veď je mocný a vykonáva jeho rozkaz. Áno, veľký je Pánov deň a veľmi hrozný, ktože ho vydrží?"},
	{12, "12 „Teraz však - hovorí Pán - obráťte sa ku mne celým svojím srdcom, pôstom i plačom a nárekom,"},
	{13, "13 roztrhnite si srdcia, a nie rúcho, obráťte sa k Pánovi, svojmu Bohu, veď je dobrotivý a milosrdný, trpezlivý a veľmi ľútostivý a môže odvrátiť nešťastie.“"},
	{14, "14 Možno, že sa zmení a odpustí a zanechá po sebe požehnanie na obetu a nápoj Pánovi, vášmu Bohu."},
	{15, "15 Zvučte trúbou na Sione, zasväcujte pôst, zvolajte zhromaždenie,"},
	{16, "16 zvolajte ľud, zasväťte zástup, zjednoťte starcov, zhromaždite maličkých aj tých, čo sajú prsia; ženích nech vyjde zo svojej izby a nevesta zo svojej chyže."},
	{17, "17 Medzi predsieňou a oltárom nech plačú kňazi, Pánovi sluhovia, a nech hovoria: „Ušetri, Pane, svoj ľud a nevydávaj svoje dedičstvo na hanbu, aby nad nimi panovali národy;“ prečo by mali vravieť medzi národmi: „Kdeže je ich Boh?“"},
	{18, "18 Pán sa rozhorlil za svoju krajinu a ušetril svoj ľud."},
	{19, "19 Pán odpovedal svojmu ľudu: „Hľa, ja vám pošlem obilie, víno a olej: nasýtite sa nimi a viac vás nedám na potupu národom."},
	{20, "20 A toho, čo je zo severu, oddialim od vás, odoženiem ho na suchú a pustú zem, jeho predvoj k Východnému moru a jeho zadný voj k Západnému moru. Jeho zápach sa bude roznášať a jeho smrad bude vystupovať, pretože urobil priveľa."},
	{21, "21 Neboj sa, zem, plesaj a raduj sa, pretože Pán konal veľkolepo."},
	{22, "22 Neboj sa, poľná zverina, lebo sa rozzelenajú nivy púšte, lebo strom prinesie svoje ovocie, figovník a vinič vydajú svoju silu."},
	{23, "23 Synovia Siona, plesajte a radujte sa v Pánovi, svojom Bohu, pretože vám dá učiteľa spravodlivosti a zošle vám dážď ranný a neskorý ako kedysi,"},
	{24, "24 takže sa humná naplnia obilím a lisy budú pretekať vínom a olejom."},
	{25, "25 Vynahradím vám roky, ktoré vyžrala kobylka, skokan, ničiteľ a rezáč, moje veľké vojsko, ktoré som na vás poslal."},
	{26, "26 Budete hojne jesť a nasýtite sa a budete chváliť meno Pána, svojho Boha, ktorý zaobchádzal s vami zázračne, a môj ľud sa už nikdy nezahanbí."},
	{27, "27 Budete vedieť, že uprostred Izraela som ja, ja som Pán, váš Boh, a nik iný, a môj ľud sa už nikdy nezahanbí!“"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sk3 poems[] = {
	{1, "1 Potom vylejem svojho ducha na každé telo a budú prorokovať vaši synovia i vaše dcéry; vaši starci budú mávať sny a vaši mládenci budú mať videnia."},
	{2, "2 Aj na služobníkov a služobnice vylejem v tých dňoch svojho ducha."},
	{3, "3 Dám znamenia na nebi i na zemi, krv, oheň a kúrňavu s dymom."},
	{4, "4 Slnko sa zmení na tmu a mesiac na krv, skôr než príde veľký a hrozný Pánov deň."},
	{5, "5 A každý, kto bude vzývať Pánovo meno, bude zachránený, lebo na vrchu Sion a v Jeruzaleme bude záchrana, ako riekol Pán, a medzi pozostalými bude, koho volá Pán."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sk4 poems[] = {
	{1, "1 Lebo, hľa, v tých dňoch a v tom čase, keď obrátim osud Júdu a Jeruzalema,"},
	{2, "2 zhromaždím všetky národy, zavediem ich do Jozafatského údolia a budem sa tam s nimi pravotiť pre môj ľud a moje dedičstvo, Izrael, ktorý rozhádzali medzi národy, rozkúskovali moju krajinu,"},
	{3, "3 o môj ľud hádzali žreb, chlapca dali za pobehlicu a dievča predali za víno, čo vypili."},
	{4, "4 A čo ste aj vy pre mňa, Týrus a Sidon a celý obvod Filištíncov? Idete sa mi pomstiť? Ak sa mi chcete pomstiť, veľmi rýchlo obrátim vašu pomstu na vašu hlavu."},
	{5, "5 Veď ste zobrali moje striebro a zlato a moje najkrajšie skvosty zaniesli do svojich chrámov."},
	{6, "6 Synov Júdu a synov Jeruzalema ste predali Grékom, aby ste ich odstránili z ich vlasti."},
	{7, "7 Hľa, ja ich vzbudím z miesta, kde ste ich predali, a váš čin zvrátim na vašu hlavu."},
	{8, "8 Vašich synov a vaše dcéry predám prostredníctvom Júdovcov; oni ich predajú Sabejcom, ďalekému to národu, lebo hovoril Pán."},
	{9, "9 Volajte toto medzi národmi, vyhláste vojnu, vzbuďte všetkých hrdinov, nech prídu, nech vystúpia všetci bojovníci!"},
	{10, "10 Prekujte si pluhy na meče a viničné nože na kopije, slaboch nech povie: „Som hrdina!“"},
	{11, "11 Ponáhľajte sa a poďte, všetky národy z okolia, a zhromaždite sa! Priveď ta, Pane, svojich hrdinov!"},
	{12, "12 Nech sa vzbudia a nech vystúpia národy do Jozafatského údolia, lebo tam si zasadnem súdiť všetky okolité národy."},
	{13, "13 Priložte kosák, lebo žatva je zrelá, poďte, šliapte, lebo lis je plný, kade prekypujú, lebo ich zločin je veľký.“"},
	{14, "14 Zástup za zástupom v Údolí rozsudku, lebo blízo je Pánov deň v Údolí rozsudku."},
	{15, "15 Slnko a mesiac očernejú a hviezdy stiahnu svoj lesk."},
	{16, "16 A Pán bude volať zo Siona a z Jeruzalema vydá svoj hlas; a otrasú sa nebesá i zem. Pán je však útočišťom svojho ľudu a pevnosťou synov Izraela."},
	{17, "17 I poznáte, že ja som Pán, váš Boh, čo bývam na svojom svätom vrchu, na Sione. Jeruzalem bude svätý a cudzinci viac cezeň neprejdú."},
	{18, "18 V ten deň budú vrchy kvapkať mušt, z kopcov bude vytekať mlieko, zo všetkých žriediel Júdu bude vyvierať voda a z Pánovho domu bude prúdiť prameň a zavlažovať bude Dolinu agátov."},
	{19, "19 Egypt bude pustatinou a Edom bude pustou stepou pre násilie proti synom Júdu, ktorí vylievali nevinnú krv v ich krajine."},
	{20, "20 Júda bude trvať naveky a Jeruzalem z pokolenia na pokolenie."},
	{21, "21 Pomstím ich nepomstenú krv. Pán býva na Sione."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};