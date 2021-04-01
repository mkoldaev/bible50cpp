#include <map>
#include <string>
class Bible35
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Šis ir Dieva pasludinājums, ko parādībā redzējis pravietis Habakuks. "},
	{2, "2 Cik ilgi, Kungs, es lai saucu pēc palīdzības - un Tu to nedzirdi? Cik ilgi lai Tavās ausīs atskan mani saucieni par varmācību - un Tu nesniedz palīdzību? "},
	{3, "3 Kādēļ Tu man liec redzēt pārestību, kas kādam tiek nodarīta, un kādēļ Tu liec man noskatīties mokās? Laupīšanas un noziegumi notiek manā acu priekšā, rodas asas domstarpības un uzliesmo naids! "},
	{4, "4 Tāpēc bauslība kļuvusi maznozīmīga, un taisnība nekur nevar kļūt par uzvarētāju. Bezdievīgais uzveic taisno, un tiesa tiek sagrozīta. "},
	{5, "5 Aplūkojiet citas tautas, skataities cits uz citu un brīnaities, jo Es darīšu kaut ko jūsu dienās, kas jums būtu neticams, ja jums to stāstītu. "},
	{6, "6 Jo redzi, Es atmodināšu kaldejus, skaudru, nežēlīgu un kustīgu tautu, kas ar mieru pat kājām doties līdz pašam zemes galam, lai iegūtu sev jaunas dzīves vietas, kas viņiem nepieder. "},
	{7, "7 Tā ir briesmīga un nežēlīga tauta; savu taisnību un pārgalvību tā uzliek visiem par likumu. "},
	{8, "8 Viņu straujie zirgi zviedz, leopardu izbiedēti, viņi ir tramīgi tiem uzglūnošo tuksnešu vilku dēļ. Viņu jātnieki atauļo no lielas tālienes, viņi atlido kā ērgļi, kas steidz gūt savu ēsmu. "},
	{9, "9 Viss viņu pulks nāk, lai darītu varas darbus; kurp tie vērš savu skatu, tur tie izlaužas cauri kā rīta vējš; viņu savākto gūstekņu skaits ir kā tuksneša smiltis. "},
	{10, "10 Viņi ļauni zobojas par ķēniņiem un apsmej vadoņus; par cietokšņiem tie smejas, jo tie uzber smilšu valni un ieņem cietoksni. "},
	{11, "11 Tā viņi aizdrāžas tālāk kā vējš, turpinādami apgrēcību, un uzskata savu spēku par savu dievu. "},
	{12, "12 Bet vai Tu, Kungs, neesi no laika gala mans Dievs, mans Svētais? Nē, mēs taču nemirsim! Jeb vai Tu, mūsu stiprā klints, tiešām šo mūsu ienaidnieku esi nolicis mums par tiesātāju, esi izraudzījis viņu, lai mūs pārmācītu? "},
	{13, "13 Tavas acis ir pārāk šķīstas, lai Tu varētu skatīt ļaunumu, un varas darbus Tu arī nevari uzlūkot. Kāpēc tad Tu mierīgi noraugies uz laupītājiem un ciet klusu, kad ļaundaris aprij to, kas taisnāks par viņu? "},
	{14, "14 Tu padari cilvēku līdzīgu zivīm jūrā, līdzīgu kādam rāpulim, kas nepazīst valdnieka. "},
	{15, "15 Viņš izvilks visus tos ar savas makšķeres auklu, viņš savāks visus savos tīklos un saķers savos valgos; tad viņš priecāsies un gavilēs par to. "},
	{16, "16 Tādēļ arī sava kaujamā upura tiesu viņš nes savam tīklam un kvēpināmo upuri nes savai makšķeres auklai, jo tikai ar šo abu lietu palīdzību viņa īpašuma daļa ir trekna un barība tik bagāta ar aizdaru. "},
	{17, "17 Lai viņš tad arī izmet un tukšo savu tīklu, bet vai viņš pastāvīgi drīkst nokaut tautas bez žēlastības?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Es nostāšos savā sarga vietā, es turēšos stingri savā sargu tornī, un es novērošu un pārbaudīšu kā izlūks, ko Viņš man sacīs un kādu atbildi dos uz manu sūdzību. "},
	{2, "2 Bet man atbildēja Tas Kungs un teica man: Apraksti tevis redzēto parādību un uzraksti to uz plāksnēm, lai to ikviens viegli var lasīt. "},
	{3, "3 Šī parādība īstenosies noteiktā laikā, un tās īstenošanās steidzīgi tuvojas, un, pat ja tās piepildīšanās vilcinātos, tad tomēr stipri būs cerēt uz to, jo tas viss nāktin nāks un nekur nepaliks. "},
	{4, "4 Lūk, uzpūtīgs un pārgalvīgs savā sirdī ir iekarotājs. Bet taisnais dzīvos savas paļāvīgās ticības dēļ. "},
	{5, "5 Pilnā mērā gan atzīstams: vīns krāpj savu baudītāju; vīna noskaņā pārgalvīgam un pārdrošam vīram nekad nav miera, tādam, kas savu kāro rīkli izpleš plašu kā apakšzemi un kas ir nepiesātināms kā nāve, tā ka viņš cenšas sagrābt un uzņemt sevī visas tautas. "},
	{6, "6 Vai tās visas nesacerēs par viņu kādu zobgalīgu dziesmu un neteiks nievājumu pilnu runu, izsaukdamās: bēdas tādam, kas savu labumu nemitīgi vairo ar to, kas viņam nepienākas! Cik ilgi to vēl lai ciešam? Un kādu smagu parādu viņš uzņemas uz sevi! "},
	{7, "7 Vai pēkšņi nesacelsies pret tevi tavi parādu devēji? Vai tevi neizbiedēs tie, pret kuriem tu esi bijis varmācīgs un kurus tu esi mocījis? Tad tu kļūsi viņiem par laupījumu. "},
	{8, "8 Tu taču pats esi izlaupījis daudzas svešas tautas, un tādēļ arī tevi izlaupīs visas vēl atlikušās tautas, izlaupīs daudzu cilvēku asinsizliešanas un daudzu zemju varmācīgas apspiešanas dēļ, jo no tevis ir cietušas gan pilsētas, gan to iedzīvotāji! "},
	{9, "9 Bēdas tam, kas kāri un sīksti rauš kopā netaisnu mantu savam namam. Velti viņš cenšas novietot savu ligzdu augstā vietā, lai paglābtos no nelaimes nesējas rokas. "},
	{10, "10 Tavs iepriekšējais apsvērums ir nesis tikai kaunu tavam namam, jo tu esi centies panākt daudzu tautu pilnīgu iznīcināšanu, bet ar to tu esi uzvēlis savai dvēselei smagu grēku nastu. "},
	{11, "11 Jo akmeņi sienās kliegs un koka sijas griestos tiem pievienosies! "},
	{12, "12 Bēdas tam, kas ceļ pilsētas ar asinsizliešanu un kas pilis uztaisa ar netaisnību! "},
	{13, "13 Ievērojiet, vai tas tā nav Tā Kunga Cebaota nolikts, ka tautas nopūlas tikai tādēļ, lai uguns izpostītu viņu pūliņu augļus, un ka bojā jāaiziet tam, kā dēļ tautas tik neatlaidīgi ir pūlējušās! "},
	{14, "14 Jo zeme tiks piepildīta ar Tā Kunga godības atziņu, tāpat kā ūdeņi apklāj jūras pamatus. "},
	{15, "15 Bēdas tam, kas savu tuvāku dzirdina no lielas krūzes, tur klāt piemaisot savu indi, un tā panāk, ka tas piedzeras, lai pēc tam redzētu viņa apslēpto kailumu un ieskatītos viņa gara un prāta noslēpumos! "},
	{16, "16 Goda vietā tu piesātinies ar kaunu; tad nu dzer arī tu un atsedz savas miesas apslēptākās vietas. Un, iedams no rokas rokā, pie tevis pienāk Tā Kunga labās rokas kauss, un pār tavu godību nāk pilnīgs apkaunojums, "},
	{17, "17 jo tavs Libanonā izdarītais noziegums gulsies pār tevi, un iztrenkātie un iznīcinātie meža zvēri tevi biedēs izlieto cilvēku asiņu un noziegumu dēļ, ko tu esi izdarījis gan pret zemi, gan pilsētu, gan arī pret tās iedzīvotājiem. "},
	{18, "18 Ko tad līdz kokā izgrieztais elka tēls, ko veidojis izgriezējs, vai arī izlietā neīstā dieva tēls, uz ko gan paļaujas tā darinātājs, kaut arī apzinādamies, ka viņš izveidojis tikai mēmu elku. "},
	{19, "19 Bēdas tam, kas kokam saka: uzmosties! - un mēmam akmeniem: piecelies! Ko gan var mācīt tāds elks? Redzi, tas ir gan pārklāts ar zeltu un sudrabu, un tomēr tajā nav nekāda dzīva gara. "},
	{20, "20 Bet Tas Kungs ir Savā svētajā namā. Lai visa pasaule klusē Viņa vaiga priekšā!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Šī ir pravieša Habakuka dziedamā lūgšana. "},
	{2, "2 Kungs, es dzirdēju Tavu vēsti, mani māc bailes Tavu darbu priekšā. Gadu plūdumā īsteno Savu darbu un dari to gadu plūdumā arī visiem zināmu un skaidri saskatāmu! Dusmās atceries arī apžēlošanu! "},
	{3, "3 Dievs uzsāka Savas gaitas no Temanas, Svētais no Paranas kalniem. Viņa godība apklāja debesis, visa zeme bija pilna Viņa slavas. "},
	{4, "4 Viņa mirdzums izlaužas un laistās kā saules spožums, gaismas stari nāk no Viņa rokām, tur slēpjas Viņa vara. "},
	{5, "5 Viņam pa priekšu iet mēris, un Viņam pa pēdām seko sērgas karstums. "},
	{6, "6 Kad Viņš apstājas, sakustas zeme; kad Viņš raugās uz tautām, tad tās krīt bailēs; kalni, kas no mūžības pastāv, pēkšņi sabirst drumslās, pakalni, kas bijuši jau no pašiem pirmajiem laikiem, saplok un izlīdzinās; Viņš iet ceļus, kādus Viņš jau reiz mūžībā gājis. "},
	{7, "7 Es redzu Kušana teltis postā un vēroju, kā plivinās vējā Midiāna telšu pārklāji. "},
	{8, "8 Vai pret upēm, ak, Kungs, ir iedegusies Tava bardzība vai Tavas dusmas pret ūdeņiem un Tevi pārņēmusi nepatika pret jūru, ka Tu sēsties, lai trauktos uz priekšu Savu zirgu vilktajos uzvaras nesējos braucamos ratos? "},
	{9, "9 Tavs spodrais loks ir šaušanas gatavībā, bultu soma ir bultu pilna. Tu skaldi zemi, ka no tās dziļumiem rodas strauti. "},
	{10, "10 Kad kalni Tevi ierauga, tiem paliek bail, tie trīc, un ūdeņi gāžas no mākoņiem, jūra paceļ savu dziļumu balsi, tā krāc un augstu pret debesīm paceļ savas rokas. "},
	{11, "11 Saule un mēness paliek stāvam savās mājvietās, kad liesmo Tavas lidojošās šautras un mirdz Tavs spīguļojošais šķēps. "},
	{12, "12 Dusmās Tu pārstaigā zemi, bardzībā Tu samin svešas tautas. "},
	{13, "13 Tu dodies uzbrukumā, lai izglābtu Savu tautu, lai izglābtu Savu svaidīto; Tu notriec jumtu bezdievīgā namam un atsedz pamatus klintij, uz kuras tas celts. "},
	{14, "14 Tu satriec ar Savām bultām viņu vadoņu galvas, kuri traucās šurp kā vētra, lai man uzbruktu, un gavilēja pārliecībā, ka viņi mani nabagu varēs mierīgi aprīt manā vienkāršajā paslēptuvē. "},
	{15, "15 Tu staigā ar Saviem zirgiem pa jūru, tur brāžas un šalc varenas ūdeņu plūsmas. "},
	{16, "16 Kad es to dzirdēju, nemiera trīsas izgāja caur manu miesu, un manas lūpas nodrebēja, atskanot balsij. Nāves bailes pārņēma mani, kaulos kļuva sajūtams ļenganums; es trīcēju visā savā ķermenī it kā savas bojā ejas stundā, bet man mierīgi ir jānogaida līdz nelaimes piemeklējuma dienai, kamēr pienāks klāt tā tauta, kas mums uzbruks. "},
	{17, "17 Ja vīģes koks arī neziedēs un vīnakokam nebūs ogu un ja nepiepildās arī cerības, kādas bija liktas uz eļļas kokiem, un arī tīrumi nesniedz nekādu barību, ja sīklopi būtu izzuduši no aplokiem un kūtīs nebūtu arī vairs neviena liellopa, "},
	{18, "18 tad es tomēr gribu gavilēt savam Kungam un likt izpausties savam priekam par savu Glābēju, savu Dievu! "},
	{19, "19 Jo Dievs Tas Kungs ir mans spēks un darīs manas kājas vieglas kā kalnu kazai un pāri maniem augstumiem rādīs man ceļu un vadīs mani. - Nodziedāt stīgu mūzikas instrumenta pavadībā."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};