#include <map>
#include <string>
class Bible54
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
	struct lv4	{ int val; const char *msg; };
	struct lv5	{ int val; const char *msg; };
	struct lv6	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Pāvils, Kristus Jēzus apustulis pēc Dieva, mūsu Pestītāja, un Kunga Kristus Jēzus, mūsu cerības, pavēles, "},
	{2, "2 Timotejam, savam īstam dēlam ticībā: žēlastība, apžēlošana, miers no Dieva Tēva un Kristus Jēzus, mūsu Kunga. "},
	{3, "3 Jau iedams uz Maķedoniju, esmu lūdzis tevi palikt Efezā, lai tu piekodinātu zināmiem ļaudīm nemācīt svešas mācības, "},
	{4, "4 nedz nodoties bezgalīgām pasakām un cilts rakstiem, kas vairāk ierosina prātošanu nekā kopj Dieva draudzi ticībā, "},
	{5, "5 bet sludināšanas mērķis ir mīlestība, kas nāk no skaidras sirds un labas apziņas un neliekuļotas ticības. "},
	{6, "6 No tā daži ir noklīduši un nogriezušies uz tukšu izrunāšanos, "},
	{7, "7 gribēdami būt bauslības mācītāji, bet nesaprazdami ne to, ko saka, nedz to, ko daži apgalvo. "},
	{8, "8 Bet mēs zinām, ka bauslība ir laba, ja lieto to pareizi, "},
	{9, "9 atzīstot, ka bauslība nav dota taisnam, bet netaisniem un nepaklausīgiem, bezdievīgiem un grēciniekiem, negantiem un nesvētiem, tēva un mātes slepkavām, cilvēku kāvējiem, "},
	{10, "10 netikļiem, vīru piegulētājiem, cilvēku pārdevējiem, melkuļiem, zvēresta lauzējiem un ja kas vien vēl ir pretim veselīgai mācībai, "},
	{11, "11 pēc svētā Dieva godības evaņģēlija, kas man uzticēts. "},
	{12, "12 Esmu pateicīgs Tam, kas darījis mani spēcīgu - Kristum Jēzum, mūsu Kungam, ka Viņš atzinis mani par uzticamu un iecēlis kalpošanai, "},
	{13, "13 kaut gan iepriekš biju zaimotājs, vajātājs un varmāka; tomēr es esmu apžēlots, jo es nezinādams esmu darījis to neticībā, "},
	{14, "14 bet pāri mēram bija mūsu Kunga žēlastība ar ticību un mīlestību, kas sakņojas Kristū Jēzū. "},
	{15, "15 Tas ir patiess un pilnā mērā atzīstams vārds, ka Kristus Jēzus ir nācis pasaulē izglābt grēciniekus. Es esmu pirmais viņu starpā, "},
	{16, "16 bet tāpēc es esmu atradis apžēlošanu, lai īpaši manī Kristus Jēzus parādītu visu savu lēnprātību par priekšzīmi tiem, kas turpmāk, paļaudamies uz Viņu, iegūs mūžīgu dzīvību. "},
	{17, "17 Bet pasaules mūžu valdniekam, neiznīcīgam, neredzamam vienīgajam Dievam lai ir gods un slava mūžu mūžos. Āmen. "},
	{18, "18 Šo piekodinājumu es lieku tev pie sirds, mans dēls Timotej, pēc agrākiem praviešu vārdiem par tevi, lai tu cīnītos ar tiem labo cīņu "},
	{19, "19 savā ticībā un labā sirdsapziņā, ko daži ir atmetuši, un tā viņu ticības laiva ir sadragāta; "},
	{20, "20 to starpā ir Himenējs un Aleksandrs. Tos esmu nodevis sātanam, lai viņi pārmācīti vairs nezaimotu Dievu."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Tad nu es pamācu tevi vispirms turēt lūgšanas, pielūgšanas, aizlūgšanas, pateicības lūgšanas par visiem cilvēkiem, "},
	{2, "2 par valdniekiem un visiem, kas ir augstā amatā, lai mēs dzīvotu mierīgu un klusu dzīvi visā dievbijībā un cienībā. "},
	{3, "3 Tas ir labi un patīkami Dieva, mūsu Pestītāja, priekšā, "},
	{4, "4 kas grib, lai visi cilvēki tiek izglābti un nāk pie patiesības atziņas. "},
	{5, "5 Jo ir viens Dievs, kā arī viens starpnieks starp Dievu un cilvēkiem - cilvēks Kristus Jēzus, "},
	{6, "6 kas Sevi pašu ir nodevis par atpirkuma maksu par visiem, par liecību savā laikā. "},
	{7, "7 Tālab es esmu iecelts par saucēju un sūtni (es saku patiesību, nemeloju), par mācītāju pagāniem ticībā un patiesībā. "},
	{8, "8 Tad nu es gribu, lai vīri lūdz Dievu katrā vietā, paceldami svētas rokas bez dusmām un šaubām. "},
	{9, "9 Tāpat arī sievas pieklājīgā uzvedībā, kaunīgi un savaldīgi, lai viņas greznojas nevis ar matu pīnēm un zeltu vai ar pērlēm vai dārgu uzvalku, "},
	{10, "10 bet ar to, kas pienākas sievām, kuras grib parādīt dievbijību, - ar labiem darbiem. "},
	{11, "11 Sieva lai klusībā mācās visā padevībā; "},
	{12, "12 taču mācīt es sievai nepieļauju, nedz valdīt pār vīru, bet viņai jāturas klusībā. "},
	{13, "13 Jo Ādams ir pirmais radīts, pēc tam Ieva. "},
	{14, "14 Un Ādams netika pievilts, bet sieva tika pievilta un krita pārkāpumā; "},
	{15, "15 taču viņa tiks izglābta, dzemdējot bērnus, ja tā paliks ticībā un mīlestībā un svētā dzīvē ar savaldību."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Tas ir patiess vārds: ja kas tiecas pēc bīskapa amata, tas iekāro teicamu darbu. "},
	{2, "2 Bīskapam pienākas būt nepeļamam vienas sievas vīram, sātīgam, prātīgam, godīgam, viesmīlīgam, izveicīgam mācīšanā; "},
	{3, "3 ne dzērājam, ne kauslim, bet lēnīgam, ne ķildīgam, ne mantkārīgam; "},
	{4, "4 tādam, kas labi valda savu namu, kas bērnus tur paklausībā un pilnā godbijībā; "},
	{5, "5 (Bet, ja kas neprot valdīt sava paša namu, kā tas gādās par Dieva draudzi?) "},
	{6, "6 ne jaunatgrieztam, lai viņš neuzpūstos un neiekristu velna tiesā. "},
	{7, "7 Bet viņam vajag arī būt labā slavā pie tiem, kas ir ārpusē, lai viņš neiekristu neslavā un velna valgā. "},
	{8, "8 Diakoniem tāpat būs būt cienīgiem, ne divkosīgiem, ne pārmērīgiem vīna baudītājiem, ne negodīgas peļņas kāriem, "},
	{9, "9 tādiem, kas ticības noslēpumu glabā skaidrā sirdsapziņā. "},
	{10, "10 Arī šie papriekš jāpārbauda, pēc tam lai viņi kalpo, ja nav viņiem ko pārmest. "},
	{11, "11 Sievām tāpat būs būt cienīgām, ne mēlnesēm, bet sātīgām, uzticamām visās lietās. "},
	{12, "12 Diakoniem jābūt vienas sievas vīriem, kas labi valda bērnus un savu pašu namu. "},
	{13, "13 Jo tie, kas labi kalpojuši, iegūst sev cienīgu stāvokli un daudz priecīgas drosmes ticībā, kas Kristū Jēzū. "},
	{14, "14 To es rakstu tev, cerēdams drīz nākt pie tevis; "},
	{15, "15 bet ja es aizkavētos - lai tu zinātu, kā pienākas izturēties Dieva namā, kas ir dzīvā Dieva draudze, patiesības balsts un pamats. "},
	{16, "16 Un patiesi liels ir dievbijības noslēpums: Viņš ir skatīts miesā, taisnots Garā, parādījies eņģeļiem, sludināts tautām, ticēts pasaulē, uzņemts godībā."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lv4 poems[] = {
	{1, "1 Gars skaidri saka, ka vēlākos laikos daži atkritīs no ticības, pieķerdamies maldu gariem un dēmonu mācībām, "},
	{2, "2 padodamies melkuļu liekulīgajiem vārdiem, kam pašu sirdsapziņa ar kauna zīmi iededzināta. "},
	{3, "3 Tie aizliedz doties laulībā, pavēl atturēties no barības vielām, ko Dievs ir radījis, lai ticīgie un patiesības atzinēji saņemtu tās ar pateicību. "},
	{4, "4 Jo katra Dieva radība ir laba, un nekas nav atmetams, ko saņem ar pateicību; "},
	{5, "5 jo svētumu tam piešķir Dieva vārds un lūgšana. "},
	{6, "6 Likdams šīs lietas brāļiem pie sirds, tu būsi labs Kristus Jēzus kalps, audzināts ticības un tevis ieturētās labās mācības vārdos. "},
	{7, "7 Bet nesvētas un vecu sievu tenkas noraidi. Vingrinies turpretim pats dievbijībā. "},
	{8, "8 Jo miesas vingrināšana maz ko der, bet dievbijība der visās lietās, jo tai ir tagadējās un nākamās dzīves apsolījums. "},
	{9, "9 Tas ir patiess un pilnā mērā atzīstams vārds, "},
	{10, "10 jo tālab mēs pūlamies un cīnāmies, jo esam likuši savu cerību uz dzīvo Dievu, kas ir visu cilvēku, visvairāk ticīgo Pestītājs. "},
	{11, "11 Piekodini un māci šīs lietas. "},
	{12, "12 Neviens lai nenicina tavu jaunumu, bet topi tu par paraugu ticīgajiem vārdos un dzīvē, mīlestībā, ticībā un šķīstībā. "},
	{13, "13 Tiekāms es nāku, nododies lasīšanai, paskubināšanai, mācīšanai. "},
	{14, "14 Nenicini dāvanu, kas ir tevī, kas tev tika dota ar praviešu vārdiem toreiz, kad presbiteri uzlika tev rokas. "},
	{15, "15 Par to gādā, pie tā paliec, lai tavs briedums būtu redzams visiem. "},
	{16, "16 Esi nomodā par sevi pašu un par mācību, turies pie tā, jo, darīdams to, tu izglābsi gan pats sevi, gan tos, kas klausās tevi."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct lv5 poems[] = {
	{1, "1 Vecāku vīru nerāj, bet pamāci laipni kā tēvu, jaunākus kā brāļus, "},
	{2, "2 vecākas sievas kā mātes, jaunākas kā māsas visā šķīstībā. "},
	{3, "3 Godā atraitnes - tās, kas ir īstas atraitnes. "},
	{4, "4 Bet, ja kādai atraitnei ir bērni vai bērnubērni, tad lai tie papriekš mācās pildīt savu godbijības pienākumu pret savu pašu dzimtu un dot pateicību saviem tēviem; jo tas Dievam labpatīk. "},
	{5, "5 Bet īsta atraitne, viena pati palikusi, ir likusi savas cerības uz Dievu un pastāv lūgšanās un pielūgšanās nakti un dienu; "},
	{6, "6 bet, kas dzīvo izlaidīgu dzīvi, tā, dzīva būdama, ir mirusi. "},
	{7, "7 Piekodini arī to, lai viņas būtu nepeļamas. "},
	{8, "8 Bet, ja kāds negādā par savējiem un visvairāk par saviem mājas ļaudīm, tad viņš ir aizliedzis ticību un ir ļaunāks par neticīgu. "},
	{9, "9 Atraitnēs jāieskaita tāda, kas nav jaunāka par sešdesmit gadiem, kas bijusi viena vīra sieva, "},
	{10, "10 kam ir labu darbu slava, ja viņa ir izaudzinājusi bērnus, ja viņa ir bijusi viesmīlīga, ja viņa ir mazgājusi svētajiem kājas, ja viņa ir nākusi palīgā apspiestajiem, ja viņa ir dzinusies pēc ikviena laba darba. "},
	{11, "11 Bet jaunākas atraitnes noraidi, jo, kad viņas pārgalvībā novēršas no Kristus, tad viņas grib precēties "},
	{12, "12 un pelna spriedumu, ka viņas ir lauzušas pirmo uzticību; "},
	{13, "13 turklāt viņas mācās vēl arī dīkā dzīvot, staigādamas apkārt no mājas uz māju, taču ne tikai dīkā dzīvot, bet arī iznēsāt pļāpas un jaukties citu darīšanās, runājot to, kas neklājas. "},
	{14, "14 Tad nu es gribu, lai jaunākās apprecētos, dzemdētu bērnus, valdītu māju, nedotu pretiniekam nekādu iemeslu nievāšanai, "},
	{15, "15 jo dažas ir jau nogriezušās neceļos sātanam pakaļ. "},
	{16, "16 Ja kādai ticīgajai ir atraitnes, tad lai viņa palīdz tām un lai netiek apgrūtināta draudze, ka tā var palīdzēt īstajām atraitnēm. "},
	{17, "17 Presbiteri, kas ir labi priekšnieki, lai būtu divkārša goda cienīgi, visvairāk tie, kas darbojas sludināšanā un mācībā. "},
	{18, "18 Proti, raksti saka: vērsim, kas klonā min labību, tev nebūs aizsiet purnu, un: strādnieks ir savas algas cienīgs. - "},
	{19, "19 Pret presbiteru nepieņem sūdzību bez diviem vai trim lieciniekiem. "},
	{20, "20 Tiem, kas grēko, pierādi viņu vainu, visiem klāt esot, lai arī citiem būtu bailes. "},
	{21, "21 Es svēti piekodinu Dieva un Kristus Jēzus un izredzēto eņģeļu priekšā: turi šīs lietas bez aizsprieduma, nedarīdams neko ne aiz naida, ne aiz draudzības. "},
	{22, "22 Rokas nesteidzies nevienam uzlikt un neuzņemies atbildību par svešiem grēkiem, sevi pašu glabā šķīstu. "},
	{23, "23 Nedzer vairs ūdeni vien, bet lieto mazliet vīna sava kuņģa un savas biežās neveselības dēļ. "},
	{24, "24 Dažu cilvēku grēki ir visiem zināmi un iet viņiem pa priekšu tiesā, bet citiem grēki arī vēl seko; "},
	{25, "25 tāpat arī labie darbi ir visiem zināmi, un, kur tas tā vēl nav, tur tie nevar palikt apslēpti."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct lv6 poems[] = {
	{1, "1 Visiem, kas ir vergi apakš jūga, būs turēt savus kungus par visa goda cienīgiem, lai Dieva Vārds un mācība netiktu zaimoti. "},
	{2, "2 Bet tiem, kam ir ticīgi kungi, nebūs nicināt viņus tāpēc, ka tie ir brāļi, bet jo vairāk viņiem kalpot; jo tie, kuru labā viņi darbojas, ir ticīgi un mīlami. To tu māci un uz to skubini. "},
	{3, "3 Ja kāds māca ko citu un nepiegriežas mūsu Kunga Jēzus Kristus veselīgajiem vārdiem un dievbijības mācībai, "},
	{4, "4 tas ir uzpūties un nezina nenieka, bet slimo ar prātošanas un ķildošanās sērgu, no kā ceļas skaudība, ķilda, zaimi, ļaunas aizdomas, "},
	{5, "5 prātā sajukušu un patiesību zaudējušu cilvēku naidošanās - tādu, kas ar dievbijību cer iegūt peļņu. "},
	{6, "6 Patiesi, lielu ieguvumu dod dievbijība ar pieticību, "},
	{7, "7 jo mēs nenieka neesam pasaulē ienesuši, tāpēc arī nenieka nevaram iznest; "},
	{8, "8 bet, kad mums ir barība un apģērbs, tad ar to mēs pietiksim. "},
	{9, "9 Bet, kas grib tapt bagāts, krīt kārdinājumā un valgā un daudzās bezprātīgās un kaitīgās iegribās, kas gāž cilvēkus postā un pazušanā. "},
	{10, "10 Jo visa ļaunuma sakne ir mantas kārība; dažs labs, tiekdamies pēc tās, ir nomaldījies no ticības un pats sev nodarījis daudz sāpju. "},
	{11, "11 Bet tu, Dieva cilvēks, bēdz no šīm lietām: dzenies pēc taisnības, dievbijības, ticības, mīlestības, pacietības, lēnprātības, "},
	{12, "12 cīnies labo ticības cīņu, satver mūžīgo dzīvību, uz ko tu esi aicināts, pats apliecinādams labo liecību daudzu liecinieku priekšā. "},
	{13, "13 Es piekodinu tev Dieva priekšā, kas visu dara dzīvu, un Kristus Jēzus priekšā, kas apliecinājis labo liecību Poncija Pilāta priekšā, "},
	{14, "14 turi šo pavēli neaptraipītu un nenopeltu, līdz mūsu Kungs Jēzus Kristus parādīsies Savā godībā, "},
	{15, "15 ko savā laikā darīs redzami svētais un vienīgais Valdnieks, ķēniņu Ķēniņš un kungu Kungs, "},
	{16, "16 kam vienīgam ir nemirstība, kas dzīvo nepieejamā gaismā, kuru neviens cilvēks nav redzējis, nedz arī var redzēt, Viņam lai ir gods un mūžīga vara! Āmen! "},
	{17, "17 Tiem, kas ir bagāti tagadējā pasaules laikmetā, piekodini, lai viņi nebūtu augstprātīgi un neliktu cerību uz nedrošo bagātību, bet uz Dievu, kas mums dod visu bagātīgi baudīt; "},
	{18, "18 lai viņi darītu labu, būtu bagāti labos darbos, devīgi, nesavtīgi, "},
	{19, "19 uzkrādami sev labu mantas pamatu nākamai dzīvei, ka iegūtu īsto dzīvību. "},
	{20, "20 Tu, Timotej, paglabā uzticēto mantu, novērsdamies no nesvētām valodām un pretrunām, kas ceļas no nepareizas tā dēvētās atziņas; "},
	{21, "21 daži, turēdamies pie tās, ir nomaldījušies no ticības. Žēlastība lai ir ar jums."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};