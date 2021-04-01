#include <map>
#include <string>
class Bible32
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
	struct lv4	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Tā Kunga vārds nāca pār Jonu, Amitaja dēlu: "},
	{2, "2 Celies un dodies uz lielo pilsētu Ninivi; norāj to un paziņo tai, ka tās ļaunie darbi jau nonākuši Mana vaiga priekšā! "},
	{3, "3 Bet Jona cēlās, lai bēgtu no Tā Kunga vaiga, gribēdams nokļūt Taršišā, un nonāca līdz Jafai. Tur viņš atrada kuģi, kas taisījās ceļā uz Taršišu, samaksāja braucamo naudu un iekāpa kuģī, kam bija viņš jāaizved uz Taršišu, projām no Tā Kunga acīm. "},
	{4, "4 Tad Tas Kungs lika pūst uz jūras lielam vējam; drīz sacēlās vētra, un visiem likās, ka kuģis grims. "},
	{5, "5 Kuģa ļaudis pārņēma lielas izbailes, un viņi kliedza, piesaukdami katrs savu dievu, un sameta visu, kas bija uz kuģa, jūrā, lai atvieglotu kravas svaru. Jona bija nokāpis apakšējās dziļākās kuģa telpās, tur nolicies un gulēja dziļā miegā. "},
	{6, "6 Tad pie viņa piegāja kuģa kapteinis un sacīja: Kā tu vari tik cieši gulēt? Celies un piesauc savu Dievu! Varbūt šis Dievs atcerēsies mūs, lai mēs neaizejam bojā. "},
	{7, "7 Un kuģa ļaudis teica cits uz citu: Sanāciet, metīsim kauliņus, lai izzinātu, kura dēļ mums klājas tik ļauni! Kauliņus metot, vaina krita uz Jonu. "},
	{8, "8 Tad viņi teica viņam: Saki mums, kāpēc mums ir uzbrukusi šī nelaime? Kāda ir tava nodarbošanās, un no kurienes tu nāc? Kādas tu zemes un tautas? "},
	{9, "9 Tad viņš tiem atbildēja: Es esmu ebrejs un bīstos To Kungu, debesu Dievu, kas radījis jūru un sauszemi. "},
	{10, "10 Tad no jauna kuģa ļaudis ārkārtīgi izbijās un jautāja viņam: Kādēļ tu to tā izdarīji? Viņi zināja, ka Jona bēga no Tā Kunga, jo viņš to viņiem iepriekš bija pateicis. "},
	{11, "11 Tad tie viņam sacīja: Ko lai mēs ar tevi darām, lai jūra nomierinātos? - jo jūra joprojām bija ārkārtīgi nemierīga. "},
	{12, "12 Viņš atbildēja viņiem tā: Ņemiet mani un iemetiet jūrā, tad tā kļūs rāma. Es zinu, ka manas vainas dēļ pār jums sacēlusies šī lielā vētra. "},
	{13, "13 Tad kuģa ļaudis, visiem spēkiem airēdami, centās pagriezt kuģi tā, lai viņi drīzāk sasniegtu krastu, bet tas viņiem neizdevās, jo jūra bija sacēlusies un bangoja vētrā pāri viņu galvām. "},
	{14, "14 Tad viņi piesauca To Kungu un sacīja: Ak, Kungs, nepazudini mūs šā cilvēka dvēseles dēļ un nepieskaiti mums par grēku viņa nenoziedzīgās asinis! Jo Tu, Kungs, rīkojies tā, kā Tu atzini par pareizu. "},
	{15, "15 Tad viņi satvēra Jonu un iemeta jūrā; vētras trakošana mitējās, un drīz jūra norima pavisam. "},
	{16, "16 Bet kuģa ļaudis pārņēma lielas bailes Tā Kunga priekšā; viņi nesa Tam Kungam kaujamos upurus un deva Viņam solījumus."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Bet Tas Kungs sūtīja lielu zivi aprīt Jonu. Un Jona sabija zivs vēderā trīs dienas un trīs naktis. "},
	{2, "2 Un Jona no zivs vēdera raidīja pie Tā Kunga, sava Dieva, lūgšanu pēc palīdzības "},
	{3, "3 un sacīja: Es piesaucu To Kungu savās bēdās, un Viņš atbildēja man; es kliedzu no pazemes dziļumiem, un Tu sadzirdēji manu saucienu. "},
	{4, "4 Tu iemeti mani dzelmē pašā jūras vidū, kur mani no visām pusēm apņēma straumes; visas Tevis sūtītās bangas un viļņu kalni vēlās man pāri, "},
	{5, "5 tā ka man šķita - es esmu atstumts no Tavu acu skata un man nekad vairs neredzēt Tavu svēto namu! "},
	{6, "6 Līdz pašiem manas dzīvības dziļumiem mani bija apklājuši ūdeņi, visapkārt mani bija ietvēruši dziļumi; niedres bija apvijušās ap manu galvu. "},
	{7, "7 Es biju nolaidies līdz dziļākajiem kalnu pamatiem, zemes aizsprosti, šķiet, bija aizdarījušies aiz manis uz mūžu, bet Tu tomēr esi licis manai dzīvībai pacelties augšup no šīs tumšās bedres un izglābis to no pazušanas, ak, Kungs, mans Dievs! "},
	{8, "8 Un, kad mana dvēsele bija pagurusi baiļu mazdūšībā, es atcerējos Tevi, ak, Kungs, un mana lūgšana nonāca pie Tevis Tavā svētajā namā. "},
	{9, "9 Tie, kas turas pie nīcīgām viltus dievībām, zaudē savu žēlastības tiesu. "},
	{10, "10 Bet ar pateicības prieku es nesīšu Tev savus upurus, savus solījuma upurus es Tev pienesīšu. Glābšana ir pie Tā Kunga! "},
	{11, "11 Un Tas Kungs pavēlēja zivij, un viņa izspļāva Jonu malā."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Un otrreiz nāca Tā Kunga vārds pār Jonu: "},
	{2, "2 Celies un ej uz lielo pilsētu Ninivi un sludini tai, ko Es tev teikšu! "},
	{3, "3 Tad Jona cēlās un gāja uz Ninivi, kā Tas Kungs bija teicis. Ninive bija liela pilsēta Dieva priekšā; lai tai apietu apkārt un to kurmet izstaigātu, bija vajadzīgas trīs dienas. "},
	{4, "4 Jona iesāka staigāt pa pilsētu un paveica veselas dienas gājumu, viņš sludināja un teica: Vēl tikai četrdesmit dienas, tad Ninive tiks galīgi nopostīta! "},
	{5, "5 Tad Ninives ļaudīs radās ticība Dievam, viņi izsludināja gavēni, un liels un mazs uzvilka mugurā maisu. "},
	{6, "6 Un, kad tas kļuva zināms Ninives ķēniņam, viņš uzcēlās no sava troņa, novilka savu purpuru, ietērpa savu miesu maisa drānās, sajozās un apsēdās pelnos. "},
	{7, "7 Tad viņš lika Ninivē ar uzsaukumu zināmu darīt: Pēc ķēniņa un augstāko varas nesēju pavēles stājas spēkā šāds rīkojums: ne cilvēki, ne lopi, ne vērši, ne avis nedrīkst nekādu ēdienu, nedz ēdamo baudīt; lopus nedrīkst dzīt ganos, nedz arī viņus dzirdīt ar ūdeni; "},
	{8, "8 bet cilvēki un lopi lai tērpjas maisu drānās un lai jo gauži piesauc Dievu, un lai ikviens atgriežas no sava ļaunā ceļa un no varasdarba, ko tas ar savām rokām dara! "},
	{9, "9 Kas gan lai zina? Varbūt Dievam paliek mūsu žēl un Viņš ļaujas novērst Sevi no Savām bargajām dusmām, tā ka mēs nepazūdam! "},
	{10, "10 Un, kad Dievs redzēja viņu darbus, redzēja, ka viņi atgriezušies no sava ļaunā ceļa, tad Viņam kļuva žēl tā ļaunuma, ko Viņš bija teicies viņiem nodarīt, un Viņš viņiem to nenodarīja."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lv4 poems[] = {
	{1, "1 Tas sagādāja Jonam lielu vilšanos, un viņš iedegās dusmās. Viņš tad "},
	{2, "2 piesauca lūgšanā To Kungu un teica: Ak, Kungs, vai tas nav tieši tas, ko es teicu, kad es biju vēl savā zemē? Tādēļ es priekšlaikus steidzos aizbēgt uz Taršišu, jo es zināju, ka Tu esi žēlīgs un mīlestības pilns Dievs, lēnprātīgs un bagāts žēlastībā, kam paredzamā ļaunuma pašam žēl. "},
	{3, "3 Tad nu, Kungs, pieņem manu dvēseli, jo es gribu labāk mirt nekā dzīvot! "},
	{4, "4 Bet Tas Kungs teica: Vai tu domā, ka tu dari labi dusmodamies? "},
	{5, "5 Tad Jona izgāja no pilsētas un apmetās kādā vietā uz austrumiem no tās. Viņš uzcēla sev tur mazu būdiņu un apsēdās tās paēnā, lai nogaidītu un redzētu, kas notiks ar pilsētu. "},
	{6, "6 Bet Dievs Tas Kungs lika tur uzaugt ricinus stādam; tas drīz izauga lielāks par Jonu, radīja pavēni viņa galvai un atsvabināja viņu no drūmā garastāvokļa; tādēļ Jona ļoti priecājās par šo ricinus stādu. "},
	{7, "7 Bet otrā dienā Dievs Tas Kungs rīta ausmā pavēlēja parādīties kādam tārpam; tas iedzēla ricinus stādam, un tas nokalta. "},
	{8, "8 Un, kad bija uzlēkusi saule, Dievs lika pūst sausam austrumu vējam, saule spieda Jonam virs galvas, tā ka viņš zaudēja samaņu; savā dvēselē viņš tad vēlējās nāvi un teica: Es gribētu labāk mirt nekā dzīvot! "},
	{9, "9 Tad Tas Kungs teica Jonam: Vai tu domā, ka tu pamatoti dusmojies ricinus stāda dēļ? Jona atbildēja: Tik tiešām, ka es mirstu, manas dusmas ir pamatotas! "},
	{10, "10 Bet Tas Kungs sacīja: Tev sāp sirds par ricinus stādu, gar kuru tu nemaz nebiji pūlējies, kuru tu nebiji izaudzējis, kas vienā naktī tapa un vienā naktī bija atkal pagalam. "},
	{11, "11 Un kā tad lai Man nebūtu žēl Ninives, tādas tik lielas pilsētas, ar vairāk kā simts divdesmit tūkstošiem iedzīvotāju, kas vienkārši nezina atšķirt savu labo roku no savas kreisās un kuriem pieder daudz lopu?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};