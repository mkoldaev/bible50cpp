#include <map>
#include <string>
class Bible34
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Spriedums par Ninivi. Nahuma no Elkošas parādību grāmata. "},
	{2, "2 Bargs un atriebīgs Dievs ir Tas Kungs, jā, tik tiešām, Tas Kungs ir atriebīgs un turklāt bargs un dusmīgs; Tas Kungs ir atriebīgs Saviem pretiniekiem un ilgi kaist dusmās pret Saviem ienaidniekiem. "},
	{3, "3 Tas Kungs ir lēnprātīgs dusmās, taču varens spēkā, un nesodītu Dievs neatstās nevienu. Cauri viesuļiem un vētrām ved Tā Kunga ceļš; mākoņi ir putekļi zem Viņa kājām. "},
	{4, "4 Viņš norāj jūru un dara to sausu un izsusina visas upes; Basans un Karmels izkalst, un, kas zied un zaļo Libanonā, tas savīst. "},
	{5, "5 Kalni trīc Viņa priekšā un augstienes izkūst; zeme dreb Viņa vaiga priekšā un pasaule, un visi tās iedzīvotāji. "},
	{6, "6 Kas var pastāvēt Viņa dusmu priekšā, un kas spēj palikt sveikā Viņa barguma karstumā? Viņa dusmu kvēle liesmo kā uguns versme, un klintis sabrūk un saplaisā no tās karstuma. "},
	{7, "7 Tas Kungs ir labs tiem, kas uz Viņu paļaujas bēdu laikā, tiem Viņš ir stipra pils, un Viņš pazīst tos, kas pie Viņa meklē patvērumu. "},
	{8, "8 Viņš liek straumēm plūst pār šo vietu, iznīcinot Savus pretiniekus, un tumsa vajā Viņa ienaidniekus. "},
	{9, "9 Ko jūs vēl lolojat kādus ļaunus nodomus pret To Kungu? Viņš tomēr visam darīs galu; otrreiz vairs nelaimei nemaz nav jānāk. "},
	{10, "10 Un, ja arī viņi būtu cieši kopā saauguši kā ērkšķi un ja viņi būtu pilni sulas kā mucas, tad tomēr viņus aprīs kā izkaltušus rugājus. "},
	{11, "11 Jo no tevis, Ninive, ir nācis negantais padoms, kam pamatā bija ļauna rīcība pret To Kungu. "},
	{12, "12 Tā saka Tas Kungs: Kaut gan tiem labi klājas un kaut gan to ir daudz, tomēr tos nopļaus, un tiem būs jāiznīkst! Es tevi esmu gan pazemojis, bet Es nepazemošu tevi no jauna, Jūda. Taisni otrādi - "},
	{13, "13 tad Es nokratīšu viņa jūgu, ko tu nes, Es saraušu tavas važas. "},
	{14, "14 Bet pret tevi ir Tas Kungs pavēlējis, ka no tava vārda turpmāk vairs nebūs dzimuma. Es izmetīšu no tava dieva nama visus izgrieztos un izlietos elku tēlus, un Es tev rakšu kapu, jo tu esi atrasts par vieglu, Asīrijas valdniek!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Redzi, pāri kalniem kust prieka vēstneša kājas, kas vēstī mieru! Svētī savus svētkus, Jūda, un pildi savus solījumus arī ar brīvprātīgiem ziedojumiem! Jo nekrietnais vairs nestaigās cauri taviem novadiem: viņš ir pavisam iznīcināts. "},
	{2, "2 Tomēr visu sagrāvējs ir devies pret tevi uzbrukumā, Ninive. Nocietini vēl spēcīgāk un apsargā savu cietoksni, uzmani ceļu, apjoz savus gurnus, apbruņojies un pastiprini savu spēku, cik vien iespējams! "},
	{3, "3 Jo Tas Kungs no jauna nostiprinās kā Jēkaba, tā arī Israēla godību, kaut laupītāji bija tos izlaupījuši un nopostījuši viņu vīna stādus. "},
	{4, "4 Viņa spēcīgo cīnītāju vairogi ir sarkanā krāsā, viņa karavīri tērpti purpurā; viņa kara rati laistās spožā tērauda mirdzumā kā savas darināšanas dienā, viņu šķēpu smailes zib. "},
	{5, "5 Viņa rati ripo pa ielām, un to rīboņa atskan ielās; tie lāsmo kā lāpas un drāžas uz priekšu kā zibeņi. "},
	{6, "6 Viņš atceras savus varonīgos karavīrus, sauc tos, viņi iet un klūp un steidzas uz pilsētas mūri, kura pakājē uzbrucēji jau uzcēluši mūra lauzējam aizsargu jumtu. "},
	{7, "7 Bet ūdens noteku aizvari atveras, un ķēniņa pilī rodas apjukums. "},
	{8, "8 Ķēniņiene tiek apsmieta un aizvesta trimdā, viņas galma jaunavas vaid kā ūbeles un sit sev pa krūtīm. "},
	{9, "9 Jo Ninive kļuvusi līdzīga saviļņotiem ūdeņu klajumiem, kas stāvējuši mierīgi sakrāti dīķī, bet tagad paši plūst projām. Viņi pūlas gan tos atturēt, saukdami: stāviet, stāviet, - bet neviena ūdens lāse negriežas vairs atpakaļ. "},
	{10, "10 Tad nu laupiet sudrabu, laupiet zeltu! - jo te nav gala bagātībām, un visvisādi dārgumi un dārgakmeņi te ir neizmērojamā daudzumā. "},
	{11, "11 Visur posts, tukšs klajums un kaila zeme! Sirdi ir pārņēmis izmisums, ceļi ļodzās, gurni gurst un trīc, un visiem nobāl vaigi. "},
	{12, "12 Kur nu ir veco lauvu mājoklis un mazo lauvēnu rotaļāšanās vieta, pa kuru pastaigājas lauva un lauvas māte ar saviem mazuļiem, kur šie mazuļi mita drošībā, kur neviens nedrīkstēja viņus traucēt? "},
	{13, "13 Un pietiekamā daudzumā lauva mēdza saplosīt dzīvniekus saviem mazuļiem, un nemitīgi viņš medīja un nokoda kustoņus arī savām lauvas mātēm, arī pats savas alas viņš piepildīja ar nomedīto laupījumu un savas migas vietu ar saplosīto dzīvnieku gabaliem. "},
	{14, "14 Bet redzi, Es esmu pret tevi, saka Tas Kungs Cebaots, Es likšu taviem kara ratiem dūmos sadegt; zobens aprīs tavus jaunos lauvas, tavu vēstnešu balss vairs nebūs sadzirdama!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Bēdas tai asinskārai pilsētai, kas ir pārpildīta ar meliem un varasdarbiem un kas savu laupīšanas paradumu nespēj atmest! "},
	{2, "2 Klau, pātagas švīkst, riteņi aizdārd, zirgi joņo, un rati rīb! "},
	{3, "3 Atauļo jātnieki ar spīdīgiem zobeniem un mirdzošiem šķēpiem. Aiz viņiem paliek daudz nogalināto, veselas līķu kaudzes; galu dabūjušiem nav skaita, un bieži gājējiem jāklūp pār savu piederīgo līķiem. "},
	{4, "4 Tas viss skaistās un pievilcīgās netikles daudzo netiklību dēļ; ar savām buršanas spēju pilnām mīlas mākām viņa padarījusi par vergiem svešas tautas un ar savām valdzināšanas spējām pakļāvusi sev veselas ciltis. "},
	{5, "5 Redzi, Es tagad tuvošos tev, saka Tas Kungs Cebaots, Es atsegšu tevi, pārmetot tava tērpa apakšmalu tev pār galvu. Es parādīšu tautām tavu kailumu un svešām ķēniņa valstīm tavu kaunu. "},
	{6, "6 Es likšu tevi apmētāt ar nešķīstiem gānekļiem, tie liks tevi kaunā un tevi padarīs par biedēkli, "},
	{7, "7 tā ka visi, kas tevi redzētu, lai bēgtu no tevis un teiktu: Ninive ir izpostīta, kam lai tās būtu žēl? - Un kur lai Es sameklēju tev iepriecinātājus? "},
	{8, "8 Vai tev pašai šķiet, ka tu esi labāka par No Amonu, kas atradās Nīlas krāču abās krastmalās, kurai visapkārt bija ūdeņi, pilsētu, kuras aizsargmūri bija Nīlas apskaloti un kuras cietoksnis bija jūra? "},
	{9, "9 Etiopieši bija tās sauszemes stiprums un bezgalīgais daudzums ēģiptiešu; Putas un Lībijas iedzīvotāji bija vienmēr tās palīgi cīņās. "},
	{10, "10 Tomēr arī viņai bija jāaiziet trimdā un kājām jādodas gūstā; viņu bērni palika guļam sašķaidītiem galvaskausiem visu ielu stūros; par dižciltīgajiem meta kauliņus un visus pilsētas varenos iekala dzelžos un saslēdza važās. "},
	{11, "11 Arī tev, Ninive, tagad jākļūst dzērumā noreibušai, apmulsušai, pat nepazīstamai! Un, kaut tu arī būtu spēcīga jaunava, tev tomēr būs jāpaslēpjas un jāmeklē glābiņš no sava ienaidnieka. "},
	{12, "12 Visi tavi cietokšņi ir kā vīģes koki ar pirmajiem augļiem, kas, ja kokus pakrata, krīt mutē tiem, kas tos grib ēst. "},
	{13, "13 Redzi, tavi kareivji ir kā sievas jūsu vidū. Tavas zemes vārtus viņi vērtin ver vaļā ienaidnieka priekšā, kad uguns ir aprijusi tavu vārtu dzelzs aizšaujamos. "},
	{14, "14 Apgādājies ar ūdeni aplenkuma laikam, nostiprini savus nocietinājumus! Roc mālu zemi, samīci mālus ar savām kājām un darini izturīgus ķieģeļus! "},
	{15, "15 Bet uguns tevi tomēr aprīs un zobens iznīcinās; tā aprīs tevi kā siseņu cirmeņus, kaut arī tevis jau būtu tik daudz kā šo cirmeņu, tik daudz kā šo siseņu. "},
	{16, "16 Tirgotāju tev vairāk kā zvaigžņu pie debesīm, bet viņiem kā jauniem siseņiem būs jāizslīd no savu priekškāju apvalka un jāaizlido! "},
	{17, "17 Tavu augstāko pārvaldnieku tev arī ir tik daudz kā siseņu, rakstvežu ir kā lidojošu kukaiņu bari, kas aukstās dienās sametas uz žogiem, bet, kad atspīd saule, tie paceļas gaisā, un neviens nezina, kur tie paliek. "},
	{18, "18 Tavi gani un vadoņi ir iesnaudušies, ak, Asīrijas ķēniņ! Tavi dižciltīgie ir nogūlušies mierā, tavi karavīri ir izklīduši pa kalniem, un nav neviena, kas tos savāktu vairs vienkopus! "},
	{19, "19 Tavai vainai nav dziedināšanas, sitiens, kas tevi ķēris, ir nāvīgs! Visi, kas tādas lietas par tevi dzirdēs, plaukšķinās aiz prieka rokas par tevi, jo kuru gan nav vajājusi bez mitēšanās tava ļaunprātība!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};