#include <map>
#include <string>
class Bible21
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
	struct lv4	{ int val; const char *msg; };
	struct lv5	{ int val; const char *msg; };
	struct lv6	{ int val; const char *msg; };
	struct lv7	{ int val; const char *msg; };
	struct lv8	{ int val; const char *msg; };
	struct lv9	{ int val; const char *msg; };
	struct lv10	{ int val; const char *msg; };
	struct lv11	{ int val; const char *msg; };
	struct lv12	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Šie ir mācītāja, Dāvida dēla, Jeruzālemes ķēniņa, vārdi. "},
	{2, "2 Ak niecību niecība! saka mācītājs. Ak niecību niecība! Viss ir niecība! "},
	{3, "3 Kāds labums atlec cilvēkam no viņa pūlēm, kurām viņš nododas zem saules? "},
	{4, "4 Viens dzimums aiziet, un cits dzimums nāk, bet zeme pastāv mūžīgi nesatricināta. "},
	{5, "5 Saule uzlec un saule noriet un steidzas atpakaļ uz to pašu vietu, no kurienes tā atkal no jauna uzlec. "},
	{6, "6 Vējš iet uz dienvidiem un griežas pret ziemeļiem; nepārtraukti visapkārt griezdamies un pūzdams, tas aptek apkārt un nonāk atpakaļ savā vecajā vietā. "},
	{7, "7 Visas upes ietek jūrā, un tomēr jūra nekļūst pilnāka; bet pa to pašu vietu, pa kuru upes tek, tās tek arvien joprojām. "},
	{8, "8 Visās vietās ir tik daudz grūtumu, ka neviens cilvēks to nevar izteikt; acis ir par vāju, lai visu to saredzētu, un ausis, lai visu to sadzirdētu. "},
	{9, "9 Kas ir jau bijis, tas atkal būs, un, kas ir jau noticis, tas atkal notiks, jo nekā jauna nav zem saules. "},
	{10, "10 Vai kaut kas kādreiz notiek, par ko varētu sacīt: redzi, tas ir kaut kas jauns! - Tas jau sen ir bijis laikos, kas ir bijuši ilgi pirms mums. "},
	{11, "11 No agrākiem laikiem nav palikusi nekāda piemiņa, un par tiem vēlākiem, kuri nāks, arī par tiem nepaliks nekāda piemiņa tiem, kas nāks pēc viņiem. "},
	{12, "12 Es, mācītājs, biju ķēniņš pār Israēlu Jeruzālemē, "},
	{13, "13 un es apņēmos savā sirdī, ka es ar gudrību visu izpētīšu un izdibināšu, kas zem debess notiek: šīs grūtās pūles Dievs ir uzlicis cilvēku bērniem, lai viņi ar tām nomokās. "},
	{14, "14 Es novēroju visus darbus, kādi tiek zem saules darīti, un redzi, viss bija niecība un vēja ķeršana, "},
	{15, "15 jo tas, kas līks, nevar kļūt taisns, un, kas nepilnīgs, to nevar skaitīt par pilnvērtīgu. "},
	{16, "16 Es domāju savā sirdī un sacīju: patiesi, es esmu gudrībā augsti cēlies un vairāk pieņēmies nekā visi tie, kuri ir bijuši pirms manis Jeruzālemē, un mans gars ir redzējis gudrības un ieguvis atziņu papilnam! "},
	{17, "17 Un, kad es savā garā apņēmos izzināt, kas ir gudrība, un izprast, kas ir neapdomība un neprātība, tad es skaidri atzinu, ka arī tā ir vēja ķeršana; "},
	{18, "18 jo, kur ir daudz gudrības, tur ir daudz nepatikšanu, un ar atziņas pieaugšanu vairojas arī vilšanās."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Tad es domāju savā sirdī: nu tad es gribu vienreiz izjust prieku un baudīt dzīvi! - Bet redzi, arī tā bija niecība. "},
	{2, "2 Par smiešanos man bija jāsaka: tu esi neprātīga! - un par prieku: kam tu deri? "},
	{3, "3 Tad es savā sirdī apņēmos savu miesu labi iepriecināt ar vīnu, tomēr tā, ka mans prāts paturētu manas rīcības virsvadību, un tad nodoties neprātam, līdz kamēr es redzētu, kas cilvēku bērniem būtu tas labākais un kas viņiem būtu jādara zem debess viņu īsajā dzīves laikā. "},
	{4, "4 Es uzsāku lielus darbus; es uzcēlu sev mājas, es dēstīju sev vīna dārzus. "},
	{5, "5 Es sev stādīju dārzus un parkus un dēstīju tur dažādus augļu kokus. "},
	{6, "6 Es sev izraku ūdens dīķus, lai no turienes apūdeņotu mežus ar tajos spēcīgi augošajiem kokiem. "},
	{7, "7 Es pirku kalpus un kalpones, un man bija arī kalpu saime, kas bija dzimusi manā mājā, un man piederēja liellopu un sīklopu ganāmpulki lielākā daudzumā nekā visiem tiem, kas bija bijuši pirms manis Jeruzālemē. "},
	{8, "8 Un es sev sakrāju kaudzēm sudrabu un zeltu, dārgumus no ķēniņiem un no zemēm, sagādāju sev dziedātājus un dziedātājas un - kas mēdz būt cilvēku galvenā iekāre - sievas sievu galā. "},
	{9, "9 Tā es pieaugu spēkā un kļuvu pārāks par visiem, kas pirms manis bija bijuši Jeruzālemē; man palika arī mana gudrība. "},
	{10, "10 Un neko no tā, ko manas acis iekāroja, es tām neatrāvu; es neliedzu savai sirdij arī nekādu vēlēšanos, jo manai sirdij vajadzēja priecāties par visu manu paveikto darbu, un tā bija mana alga par visām manām pūlēm. "},
	{11, "11 Bet, kad es nu pārbaudīdams uzlūkoju visus savus darbus, ko manas rokas bija veikušas, un pūles, kuras es biju tajos ieguldījis, tad - ak vai! - viss bija tukšums, niecība un vēja ķeršana, un nekad nekur nav nekāda ieguvuma zem saules. "},
	{12, "12 Tad es veltīju visu savu uzmanību tam, lai tiešām izprastu dziļākās gudrības nozīmi līdzās muļķībai un neizpratnei. Jo ko tad tas cilvēks darīs, kas nāks pēc manis, pēc ķēniņa? To pašu, kas jau sen tāpat ir darīts. "},
	{13, "13 Un tad es nācu pie ieskata, ka gudrība ir labāka nekā neprātība un ka gaisma ir labāka nekā tumsa. "},
	{14, "14 Gudrajam acis ir galvā, bet nepraša staigā tumsībā; taču tai pašā laikā es arī atzinu, ka viņiem abiem ir vienāds liktenis. "},
	{15, "15 Tad es domāju savā sirdī: ja nu man ir tāds pats liktenis kā neprašam, kāpēc tad es tik pārlieku esmu dzinies pēc gudrības? - Un tā es biju spiests pats sev sacīt: arī tas viss ir niecība! "},
	{16, "16 Jo gudro tāpat nepiemin mūžīgi kā neprašu, un, kas tagad ir, tas nākošās dienās viss tiks aizmirsts. Ak, jā, gudrais taču nomirst tāpat kā nepraša! "},
	{17, "17 Un tādēļ es ienīdu šo dzīvi un dzīvību, jo es turēju par ļaunu visu to rosmi, kas noris zem saules; jā, viss ir niecība un vēja ķeršana! "},
	{18, "18 Tad es ienīdu arī visu savu centību, ko es biju veltījis savam darbam zem saules, jo man viss tas, ko es esmu ar pūlēm ieguvis, būs jāatstāj tam cilvēkam, kas sekos pēc manis. "},
	{19, "19 Un kas zina, vai viņš būs gudrs vai nepraša? Un tomēr viņš valdīs un rīkosies pār visu manu darbu, gar ko es esmu nopūlējies un ko es esmu ar gudrību veicis zem saules. Arī viss tas ir niecība. "},
	{20, "20 Un tā es nonācu pie tā, ka es ieslīgu galīgā izmisumā visu to veltīgo pūļu dēļ, ko es zem saules biju izšķiedis. "},
	{21, "21 Jo notiek tā, ka kāds cilvēks savu darbu ir darījis ar gudrību, izpratni un prasmīgi un tomēr viņam sava darba ieguvums ir jāatstāj kādam citam, kas gar to nemaz nav pūlējies. Arī tas viss ir niecība un liels ļaunums. "},
	{22, "22 Jo kāds tad labums ir cilvēkam no visām viņa pūlēm un no viņa gara centības, kam viņš veltījis zem saules tik daudz spēka? "},
	{23, "23 Visas viņa dienas taču ir ciešanu pilnas, viņa darbs ir pretīguma caurausti sirdēsti, un arī naktī viņa gars neatrod miera. Arī tas ir niecība. "},
	{24, "24 Vai tad nu nebūtu cilvēkam pats labākais, ka viņš ēstu un dzertu un ļautu savai sirdij baudīt visus labumus par savām pūlēm? Bet es esmu atzinis, ka arī tas ir atkarīgs no Dieva rokas. "},
	{25, "25 Tiešām, kas gan var ēst un kas var ko baudīt bez Viņa līdzdalības? "},
	{26, "26 Jo tādam cilvēkam, uz ko Viņam ir labs prāts, Dievs dod gudrību, atziņu dziļumu un prieku, bet grēciniekam Viņš piešķir grūto darbu visu savākt un sakrāt kopā un pēc tam atstāt tam, uz ko Dievam ir labs prāts. Arī tas viss ir niecība un tukša vēja ķeršana."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Katrai lietai ir savs nolikts laiks, un katram īstenošanai paredzētam nodomam zem debess ir sava stunda. "},
	{2, "2 Savs laiks piedzimt, savs laiks mirt, savs laiks dēstīt, un savs laiks dēstīto atkal izraut. "},
	{3, "3 Savs laiks kādu nogalināt, un savs laiks kādu dziedināt; savs laiks ko noplēst, un savs laiks ko uzcelt. "},
	{4, "4 Savs laiks raudāt, un savs laiks smieties; savs laiks sērot, un savs laiks diet. "},
	{5, "5 Savs laiks akmeņus mest, un savs laiks tos salasīt; savs laiks apkampties, un savs laiks, kad šķirties. "},
	{6, "6 Savs laiks ir ko meklēt, un savs laiks ko pazaudēt; savs laiks ir ko glabāt, un savs laiks ko galīgi atmest. "},
	{7, "7 Savs laiks ir ko saplēst, un savs laiks atkal to kopā sašūt; savs laiks klusēt, un savs laiks runāt. "},
	{8, "8 Savs laiks mīlēt, un savs laiks ienīst; savs laiks karam, un savs laiks mieram. "},
	{9, "9 Bet kāds labums tad darītājam no visām savām pūlēm? "},
	{10, "10 Es esmu dziļāk ieskatījies ciešanu pilnā uzdevumā, ko Dievs ir uzlicis cilvēku bērniem, lai viņi ar to mocītos. "},
	{11, "11 Visu Dievs ir savā laikā jauki iekārtojis, pat arī Mūžību Viņš ir licis cilvēku sirdīs; žēl tikai, ka cilvēks nevar izprast Dieva darbu - ne tā iesākumu, ne galu. "},
	{12, "12 Tā es atzinu, ka cilvēkiem nav nekā labāka kā priecāties un labi justies savas dzīves laikā, pievienodams tam tomēr atzinumu, "},
	{13, "13 ka tā tomēr ir Dieva dāvana, ja cilvēks, neraugoties uz nepārtraukto sava mūža piepūli, tomēr ēd, dzer un nereti pat dzīvi arī bauda. "},
	{14, "14 Es atzinu, ka viss, ko Dievs dara, tas paliek mūžīgi: tam nevar neko nedz pielikt, nedz atņemt, un Dievs to visu tā ir iekārtojis, lai Viņu bīstas. "},
	{15, "15 Kas tagad ir, tas jau sen ir bijis, un, kas vēl būs, tas arī jau sen ir bijis, jo Dievs nereti atjauno arī jau sen pagājušo. "},
	{16, "16 Vēl es esmu novērojis zem saules tiesas vietu - tur valdīja netaisnība, un taisnības vietu - tur valdīja bezlikumība. "},
	{17, "17 Tad es savā sirdī nodomāju: Dievs tiesās tiklab taisno, kā bezdievīgo, jo katram nolūkam un katrai rīcībai Viņam ir savs nolikts laiks. "},
	{18, "18 Tad es savā sirdī nodomāju: tas ir cilvēku bērnu dēļ, ka Dievs grib viņus pārbaudīt, lai viņi redzētu, ka būtībā viņi ir līdzīgi dzīvniekiem. "},
	{19, "19 Tiešām, kāds ir cilvēku, tāds pats ir arī dzīvnieku liktenis: kā viens, tā otrs mirst, visiem ir viena dvaša, un cilvēks nav pārāks par dzīvniekiem. "},
	{20, "20 Visi noiet vienā vietā; visi viņi ir cēlušies no pīšļiem, un visi atgriežas atpakaļ pīšļos. "},
	{21, "21 Kas zina ko no cilvēka dzīvības dvašas - vai tā ceļas augšup gaisā, un vai dzīvnieka dzīvības dvaša nolaižas lejup zemē? "},
	{22, "22 Tā es redzēju, ka nekas cilvēkam nav labāks, kā kad viņš priecājas, būdams iesaistīts savas darbības rosmē; tā jau arī ir viņa daļa, un kas gan viņam piešķirs iespēju iegūt ieskatu par to, kas būs pēc viņa?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lv4 poems[] = {
	{1, "1 Un atkal es novēroju visu netaisnību, kas norisinās zem saules; es redzēju, kā raud apspiestie un nomāktie, kam nebija neviena iepriecinātāja un kas cieta pārestības no savu apspiedēju puses, nesajuzdami ne no viena nekādu iepriecinājumu. "},
	{2, "2 Tad es daudzināju jau sen nāvē aizgājušos kā daudz laimīgākus par tiem, kas vēl tagad dzīvi, "},
	{3, "3 bet vēl laimīgākus nekā šos abus es teicu tos, kas vēl nemaz nav dzimuši un kas tādēļ vēl nav redzējuši to ļauno dzīves kņadu, kas norisinās zem saules. "},
	{4, "4 Es novēroju nopietnāk arī darbu un veikumu visās dzīves nozarēs: te ļaudis vienkārši skaudībā nežēlīgi sacentās cits ar citu. Arī tas viss ir niecība un tukša vēja ķeršana. "},
	{5, "5 Nejēga turpretī saliek savas rokas kopā un ēd pats savu miesu. "},
	{6, "6 Viena ar mieru pilna sauja ir labāka nekā abas dūres pilnas darba pūļu un vēja ķeršanas. "},
	{7, "7 Un es redzēju atkal kādu niecību zem saules: "},
	{8, "8 tur ir kāds, kas ir viens pats bez draugiem; un nav viņam ne dēla, ne brāļa, un tomēr viņš nemitas pūlēties līdz nāvei, un viņa acis nevar beigt skatīties sakrātajās bagātībās. Patiesībā viņam taču būtu jāsaka: kam par labu es nopūlos līdz nāvei un neatļaujos sev nekāda prieka? - Arī tā ir niecība un greiza rīcība. "},
	{9, "9 Diviem ir labāk nekā vienam būt, tāpēc ka viņiem tad iznāk labāka alga par viņu pūlēm; "},
	{10, "10 ja viņi krīt, tad viens palīdz otram atkal tikt uz kājām. Bet nelaime tam, kas ir viens! Kad tas krīt, tad otra nav, kas viņu pieceļ! "},
	{11, "11 Tāpat arī, kad divi guļ kopā, viņi viens otru silda, bet kur lai ņem siltumu viens pats? "},
	{12, "12 Un, ja kāds var vienu pārvarēt, tad divi taču var tam pretī stāties, un trīskārtēju auklu nevar tik drīz pārraut. "},
	{13, "13 Nabags, bet gudrs jauneklis, ir vairāk vērts nekā vecs ķēniņš, kas jau par nelgu kļuvis un vairs neievēro brīdinājumu. "},
	{14, "14 Jo no cietuma viņš nokļuva uz troņa, lai gan bija piedzimis nabags iepriekšējās valdīšanas laikā. "},
	{15, "15 Es redzēju visus dzīvos, kas staigā zem saules, turamies kopā ar šo jaunekli, to otru, kam vajadzēja stāvēt viņa vietā. "},
	{16, "16 Nepārredzams bija visu to ļaužu pulks, kuri bija viņu cēluši sev par vadoni, lai gan tie, kuri būs pēc viņa, par viņu nepriecāsies. Tiešām, arī tā ir niecība un vēja ķeršana. "},
	{17, "17 Uzmani savu kāju, kad tu ej Dieva namā, jo nākt un klausīties ir patiešām kaut kas labāks, nekā kad neprašas nes savus upurus; viņi jau patiesībā nezina neko citu kā vienīgi ļaunu darīt."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct lv5 poems[] = {
	{1, "1 Neesi par daudz ātrs ar savu muti, un lai tava sirds savā trauksmē nepārsteidzas kādu vārdu izrunāt Dieva priekšā, jo Dievs ir debesīs, bet tu esi virs zemes; tāpēc lai maz ir tavu vārdu! "},
	{2, "2 Jo, kur ļaudis visai nodarbināti, tur rodas sapņi, un, kur daudz vārdu, tur rodas muļķīgas valodas. "},
	{3, "3 Ja tu esi Dievam devis solījumu, tad nekavējies to izpildīt, jo Viņam nav labs prāts uz neprašām. Ko tu esi apsolījis, to pildi! "},
	{4, "4 Labāk ir nesolīt nekā solīt un nepildīt. "},
	{5, "5 Neatļauj savai mutei tevi apgrēcināt un neizsakies Dieva vēstneša (priestera) priekšā, ka ir notikusi pārsteigšanās; kāpēc lai Dievs apskaišas par to, ko tu esi izrunājis, un neļauj tavam roku darbam labi izdoties? "},
	{6, "6 Un, kur ir daudz sapņu, tur ir arī daudz veltīgu un tukšu vārdu, tur ir niecība. Bet tu bīsties vairāk Dieva! "},
	{7, "7 Kad tu redzi, kā apspiež nabagu un cik bēdīgā stāvoklī valstī ir tiesa un taisnība, tad neuztraucies par to, jo ir vēl viens augstāks par augsto, kas visu novēro. Bet viens, Visuaugstākais, ir nomodā pār viņiem visiem. "},
	{8, "8 Taču ieguvums kādai zemei ir šāds: ķēniņš, kas rūpējas, lai zeme būtu apkopta. "},
	{9, "9 Kas mīl naudu, tam nekad nepietiek naudas, un, kam ir prieks par bagātību, tam nekad nepietiek ar ienākumiem; taču arī tas ir niecība. "},
	{10, "10 Ja manta vairojas, tad vairojas arī tie, kas to apēd, un kāds labums tad tam, kam tā pieder, kā tikai acīm paskatīties? "},
	{11, "11 Salds ir darbinieka miegs, vienalga, vai tas daudz vai maz ko ēdis; bet bagātais, kas spēcīgi pieēdies, nereti netiek pie miega. "},
	{12, "12 It īpaši liels ļaunums, ko es esmu novērojis zem saules, ir bagātība, kas tam pašam paliek par nelaimi, kurš to sargā. "},
	{13, "13 Ja tāda bagātība kādā nelaimē aiziet bojā, tad viņam nav nekā ko atstāt īpašumā savam miesīgajam dēlam. "},
	{14, "14 Kailam, kāds viņš nācis no mātes klēpja, tādam viņam atkal jāaiziet, un viņš nevar pat arī ne to vismazāko līdzi paņemt no savu pūliņu ieguvuma, lai to paturētu savā īpašumā. "},
	{15, "15 Jā, arī tā ir ļauna un bēdīga parādība: pavisam tā, kā viņš ir atnācis, tā viņam atkal ir jāaiziet. Kāds nu viņam ir ieguvums no tā, ka viņš par velti ir pūlējies? "},
	{16, "16 Un pie tam viņš visas savas mūža dienas ir pavadījis tumsā un lielos sirdēstos, un tās bijušas saistītas ar daudzām nepatikšanām, slimībām un uztraukumiem. "},
	{17, "17 Un, ko es esmu atradis kā labu un skaistu, ir tas, ka cilvēks ēd un dzer un jūtas labi visu to bezgalīgo pūļu jūklī, ar kādām viņš zem saules nomoka sevi savā īsajā mūžā, ko Dievs viņam piešķir; un tas arī ir viņa dzīves uzdevums. "},
	{18, "18 Bet, ja Dievs kādam cilvēkam dod bagātību un laicīgu mantu un piešķir viņam to laimīgo stāvokli, ka viņš var to baudīt, var ņemt no tā savu daļu un, pat neraugoties uz visām pūlēm, tomēr priecāties, tad tā ir Dieva žēlastības dāvana. "},
	{19, "19 Tāds tad daudz nedomās par savu dzīves dienu īsumu, tāpēc ka Dievs viņa sirdi apdāvina ar prieku."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct lv6 poems[] = {
	{1, "1 Ir kāds ļaunums, ko es redzēju zem saules un kas smagi guļ uz cilvēkiem. "},
	{2, "2 Ja Dievs ir devis kādam cilvēkam bagātību, laicīgu mantu un godu, tā ka viņam nekā netrūkst no visa tā, ko viņa sirds kāro, bet ja Dievs viņam neļauj no visa tā neko baudīt un to bauda svešinieks, tā ir niecība un liels ļaunums! "},
	{3, "3 Ja kāds kā tēvs dzemdinātu simts bērnus un dzīvotu daudz gadu un viņam būtu garš mūžs, bet viņš nevarētu savu dzīves laimi izjust un baudīt un viņam pat netiktu ne kapa vieta, tad es saku: laimīgāks nekā viņš ir nelaikā dzimis nedzīvs bērns! "},
	{4, "4 Jo tas nāk kā nekas pasaulē un tāds pats aiziet tumsībā, un viņa vārds paliek aizklāts ar tumsu. "},
	{5, "5 Viņš nav arī sauli redzējis un neko nezina no tās, bet miera ziņā viņam ir labāk nekā tam. "},
	{6, "6 Un, ja pat kāds dzīvotu divi reizes tūkstoš gadus un savā dzīvē nemaz neredzētu prieku, vai tad tomēr viss viņu garais mūžs nenovestu pie viena un tā paša gala? "},
	{7, "7 Visas cilvēka pūles ir domātas viņa mutei, un tomēr viņa ēstgriba pilnīgi nekad netiek apmierināta. "},
	{8, "8 Un kas vairāk atlec gudrajam nekā neprašam? Vai kas nabagam, kurš zina staigāt īsto dzīves ceļu? "},
	{9, "9 Labāk ir ko ar acīm uzskatīt nekā iekārē apkārt maldīties; arī tā ir niecība un vēja ķeršana. "},
	{10, "10 Viss, kas notiek, ir jau sen noteikts, un jau laikus ir stingri nolikts, kas kāds cilvēks būs, un neviens nespēj tiesāties ar to, kas ir stiprāks nekā viņš. "},
	{11, "11 Tiešām, ar to saistās nereti daudz vārdu, bet tie tikai vairo niecību; un kāds labums no tā ir cilvēkam? "},
	{12, "12 Tiešām, kas gan zina, kas cilvēkam ir par labu šinī viņa īsajā mūžā, ko viņš savā niecībā pavada, pats būdams ēnai līdzīgs? Un kas gan var cilvēkam pastāstīt, kas pēc viņa notiks zem saules?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct lv7 poems[] = {
	{1, "1 Laba slava ir vērtīgāka nekā dārga svaidāmā eļļa, un miršanas diena ir labāka nekā piedzimšanas. "},
	{2, "2 Labāk ir ieiet sēru namā nekā dzīru namā, jo tur redz norādījumu uz visu cilvēku galu, un tas, kas vēl dzīvo, to lai ņem pie sirds! "},
	{3, "3 Labāk ir skumt nekā smieties, jo, kad vaigs ir noskumis, tad sirdij ir labi. "},
	{4, "4 Gudro sirds ir bēdu namā, bet nelgu sirds ir prieku namā. "},
	{5, "5 Labāk ir klausīties gudrā bāršanu nekā klausīties nelgas dziesmu, "},
	{6, "6 jo, kā ērkšķi sprakšķ zem katla, tā izskan arī nelgas smiekli. Arī tā ir niecība. "},
	{7, "7 Patiešām, netaisna peļņa padara arī gudru par nelgu, un uzpirkšanas dāvanas samaitā sirdi. "},
	{8, "8 Labāks ir kādas lietas gals nekā tās sākums, labāka ir pacietība nekā augstprātība. "},
	{9, "9 Neļauj sevi pārmērīgi ātri pārņemt dusmām, jo dusmas mājo nelgas azotē. "},
	{10, "10 Nejautā, kā tas nāk, ka senie laiki ir bijuši labāki nekā tagadējie; tas nebūtu gudrs jautājums. "},
	{11, "11 Gudrība ir laba kopā ar mantojumu un ir ieguvums tiem, kas sauli redz. "},
	{12, "12 Jo gudrības pavēnī cilvēks jūtas tikpat droši paslēpts kā naudas pavēnī, bet gudrības pārākums ir atziņā, ka gudrība dod dzīvību tiem, kam tā ir. "},
	{13, "13 Uzlūko Dieva darbu, un kurš gan var darīt taisnu to, ko Viņš ir darījis līku? "},
	{14, "14 Baudi labumu labā dienā, bet arī ļaunu dienu ņem par labu, jo Dievs dara gan šo, gan to, tāpēc ka cilvēkam nebūs zināt, kas būs pēc viņa nāves. "},
	{15, "15 Visu to es esmu redzējis savas nīcīgās dzīves dienās: dažs taisnais aiziet bojā savā taisnībā, bet dažs bezdievīgais, neraugoties uz viņa ļaunumu, piedzīvo garu mūžu. "},
	{16, "16 Neesi pārlieku taisns un neturi pats sevi par pārlieku gudru, jo kāpēc tu gribi pats sev kaitēt? "},
	{17, "17 Bet neesi arī pārlieku bezdievīgs un nerīkojies kā nelga, jo kāpēc tu gribi nomirt pirms laika? "},
	{18, "18 Vislabāk ir, ja tu pie viena stipri turies, bet arī no otra neatlaidies, jo tas, kas Dievu bīstas, tiek tālāk nekā viņi visi. "},
	{19, "19 Īsta gudrība stiprina gudro vairāk nekā desmit varenie, kuri ir pilsētā. "},
	{20, "20 Tiešām, virs zemes nav neviena tik taisnīga cilvēka, kurš darītu tikai labu un nekad negrēkotu. "},
	{21, "21 Nepiegriez pārmērīgu vērību arī visām runām, kas tiek runātas, citādi tu kādreiz varētu pat dabūt dzirdēt, ka tavs kalps tevi apsmej, "},
	{22, "22 jo to tu it labi pats zini, ka arī tu esi citus zobojis un apsmējis. "},
	{23, "23 Visu to es esmu ar gudrību pārbaudījis, domādams: tā es iegūšu īsto gudrību! - Bet tā tomēr palika tālu prom no manis. "},
	{24, "24 Lielā tālumā atrodas visu lietu pamats un dziļi, jā, dziļi apslēpts; kurš var to atrast? "},
	{25, "25 Un atkal, un atkal, kad es tam piegriezos un centos savu prātu uz to virzīt, lai iegūtu īstu atziņu un pareizu spriedumu un savos meklējumos pēc gudrības nonāktu pie kāda gala slēdziena, un ieskatītu, ka bezdievība ir muļķība un muļķība ir neprāts, "},
	{26, "26 tad es atradu kaut ko, kas ir rūgtāks nekā nāve, un proti, sievu, kas līdzīga ķeramam tīklam, kuras sirds ir cilpas un kuras rokas ir važas. Tas, uz kuru Dievam ir labs prāts, izglābsies no viņas, bet, kas grēko, tiks viņas sagūstīts. "},
	{27, "27 Redzi, to es esmu atradis, saka mācītājs, pēc tam, kad es esmu licis pieredzes citu pie citas, lai iegūtu drošu gala spriedumu: "},
	{28, "28 bet, ko mana dvēsele arvien vēl meklē un ko es neesmu vēl atradis, tas ir: starp tūkstošiem es esmu atradis vismaz vienu īstu vīru, bet tādu pat sievu starp viņiem visiem es neesmu atradis nevienu. "},
	{29, "29 Bet redzi, vienu lietu gan es esmu atradis, proti, ka Dievs cilvēku ir radījis taisnīgu, bet viņi paši ieslīgst daudzējādā neattaisnojamā gudrošanā."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct lv8 poems[] = {
	{1, "1 Kas ir tiešām īsts gudrais, un kas spēj izskaidrot visas lietas? Gudrība apskaidro cilvēka vaigu, un viņa cietie sejas vaibsti pārvēršas. "},
	{2, "2 Es saku: ievēro ķēniņa pavēli it īpaši tādēļ, ka tu Dieva priekšā esi viņam uzticību zvērējis. "},
	{3, "3 Nesteidzies aiziet projām no viņa acīm un neielaidies nekādās ļaunās lietās, jo visu, ko viņš grib, to viņš izdara. "},
	{4, "4 Patiesi, ķēniņa vārds ir vara, un kas var viņam sacīt: ko tu īsti dari? "},
	{5, "5 Kas pavēli ievēro, tas nepiedzīvos ļauna; bet gudrā sirds zina laiku un piemērotu rīcības veidu. "},
	{6, "6 Jo ikkatrai lietai ir savs laiks un noteikts izšķiršanās brīdis, taču tas ļaunais stāvoklis smagi gulstas uz cilvēku, "},
	{7, "7 ka viņš nezina, kas notiks; un kas gan var viņam pateikt, kā nākotnē būs? "},
	{8, "8 Nevienam cilvēkam nav varas pār vēju, ka viņš spētu vēju aizturēt; tāpat vēl mazāk kāds ir kungs pār savu miršanas dienu; arī no piedalīšanās karā neviens nav atlaižams; tāpat arī likuma pārkāpšana liks sevi sajust tam, kas to dara. "},
	{9, "9 Visu to es esmu redzējis, cenzdamies novērot ikvienu darbību, kas norisinās zem saules, kamēr viens cilvēks valda pār citiem sev par nelaimi. "},
	{10, "10 Pie tam es arī vēl redzēju, ka bezdievīgie tika apglabāti un iegāja mūžīgā mierā, kamēr ļaudis, kas taisnīgi dzīvojuši, bija spiesti aiziet tālu no svētās vietas un tika pilsētā aizmirsti; arī tā ir niecība. "},
	{11, "11 Tā kā tiesu par ļauniem darbiem nespriež tik drīz, tādēļ cilvēku bērnu sirdis pildās ar drosmi darīt ļaunu. "},
	{12, "12 Vēl iemesls te tas, ka grēcinieks, kaut arī simts reizes ļaunu darījis, tomēr dzīvo ilgi, lai gan es zinu, ka tiem, kas Dievu bīstas, klāsies labi, tiem, kam bijība Viņa priekšā, "},
	{13, "13 kurpretī bezdievīgam neklāsies labi, un viņš nevarēs savas dienas stiept garumā kā ēnu, jo viņš nesajūt bijību Dieva priekšā. "},
	{14, "14 Ir kaut kas dziļa niecīguma pilns, kas notiek uz zemes, un proti - ka ir taisnīgi cilvēki, kuriem tā klājas, kā vajadzētu klāties bezdievīgajiem pēc viņu darbiem, un ka dažam bezdievīgam tā klājas, kā vajadzētu klāties taisnajam pēc viņa darbiem. Tad es sacīju: arī tā ir niecība. "},
	{15, "15 Tādēļ es slavēju prieku, jo cilvēkam nav nekā labāka zem saules, kā vien ēst un dzert un priecāties, un šādā noskaņā lai aizrit visas viņa nemitīgo pūļu pilnās dzīves dienas, ko Dievs viņam dod zem saules. "},
	{16, "16 Un arvien, kad es centos izdibināt dziļākās gudrības pamatus un novēroju visu rosību, kas norisinās zemes virsū, "},
	{17, "17 es esmu par dievišķās varas izpausmi atzinis, ka cilvēks, ja arī viņš savām acīm neatvēlētu ne mirkli atpūtas ne dienu, ne nakti, tomēr nespēj izdibināt to varu, kas pastāv zem saules, un cilvēks, neraugoties uz visu piepūli, ar kādu viņš cenšas to izdibināt, taču to izdibināt nespēj. Un, pat ja gudrais iedomājas sevi to izdibināt spējam, patiesībā viņš izdibināt to tomēr nespēj."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct lv9 poems[] = {
	{1, "1 Patiesi, visam tam es esmu piegriezis savu uzmanību un centies visu to sev noskaidrot, it īpaši to, ka taisnīgie un gudrie visā savā darbībā ir Dieva rokā. Cilvēks nezina, vai viņš piedzīvos mīlestību vai naidu; viss viņa priekšā nākotnē ir aizplīvurots. "},
	{2, "2 Tas pats liktenis skar visus bez izšķirības: un vienāds liktenis ir taisnam un negantam, labam un ļaunam, šķīstam un nešķīstam, tam, kas upurē, kā arī tam, kas neupurē; labajam notiek tāpat kā grēciniekam, un tam, kas zvēr, tāpat kā tam, kas no zvēresta bīstas. "},
	{3, "3 Tas ir ļaunums, un tas saistās ar visu, kas notiek zem saules, proti, ka visiem lemts viens un tas pats liktenis, ka cilvēku bērnu sirdis ir pilnas ļaunuma un ka viņu sirdīs mājo neizpratne tik ilgi, kamēr viņi dzīvo; pēc tam viņi nonāk mirušo valstībā. "},
	{4, "4 Jo tik ilgi, kamēr kāds vēl pieder pie dzīvajiem, tik ilgi viņam ir kaut kas ko cerēt; dzīvs suns tomēr ir vairāk vērts nekā nobeidzies lauva. "},
	{5, "5 Dzīvie vismaz vēl zina, ka viņiem ir jāmirst, nomirušie turpretī vispār nezina vairāk nekā, tiem arī nav vairs ko algas gaidīt; pat viņu piemiņa aizmirstas. "},
	{6, "6 Tiklab laiks mīlēt, kā ienīst un dzīves iekārēs degt viņiem jau sen pāri, un mūžībā viņi nepiedalās vairs ne pie kā, kas norisinās zemes virsū. "},
	{7, "7 Tad nu ej, ēd savu maizi ar prieku un dzer savu vīnu ar priecīgu sirdi, jo Dievs jau no sākta gala tādu tavu rīcību ir atzinis par labu. "},
	{8, "8 Nēsā allaž baltas drēbes, un lai tavai galvai netrūkst svaidāmās eļļas. "},
	{9, "9 Baudi šo dzīvi ar savu mīļoto sievu visās tajās ātri zūdošās dzīves dienās, ko Dievs tev ir piešķīris zem saules, cauri visam tavam niecības pilnam mūžam; patiesi, tas ir tas, kas piekrīt tev šai mūžā, un tas ir atalgojums tev par pūlēm, kādām tu nododies zem saules. "},
	{10, "10 Visu, ko tava roka spēj ar taviem spēkiem veikt, to dari, jo pazemē, kurp tavs ceļš iet, nav ne darba, ne vairs kādu pārdomu, ne atziņas, ne gudrības. "},
	{11, "11 Un atkal es redzēju zem saules, ka ne ātrajam skriešanās sacīkstēs tika piešķirta uzvara un ka ne pašam drošsirdīgākajam karā piekrita uzvara, un ne gudrākajam peļnas darbā maize, ne arī pašiem saprātīgākajiem bagātība un arī ne uzskatu ziņā pašiem attīstītākajiem labvēlība, bet gan, ka viss tas ir atkarīgs no laika un apstākļiem. "},
	{12, "12 Un cilvēks arī nezina savu nolikto laiku; nē, kā zivis, kas ieskrien ļaunā tīklā, un kā putni, kurus noķer ar cilpām, tāpat arī cilvēku bērni sapinas savos valgos laikā, kad nelaime pēkšņi viņam uzbrūk. "},
	{13, "13 Arī šādu gudrību es esmu redzējis zem saules, un tā uz mani atstāja dziļu iespaidu: "},
	{14, "14 bija kāda maza pilsēta, un tur iekšā bija nedaudz ļaužu; tad pret to nāca kāds varens ķēniņš, ieslēdza to visapkārt un lika uzcelt pret to varenus aplenkuma nocietinājumus. "},
	{15, "15 Taču tur atradās nabags, bet gudrs vīrs, kurš pilsētu izglāba ar savu gudrību, bet vēlāk neviens cilvēks vairs nepieminēja šo nabaga vīru. "},
	{16, "16 Tad es sacīju: gudrība gan ir labāka nekā stiprums, bet tomēr nabaga gudrība tiek nicināta, un viņa vārdi paliek neuzklausīti. "},
	{17, "17 Gudro vārdi, kurus mierā uzklausa, ir vairāk vērti nekā valdnieka brēkšana nelgu vidū. "},
	{18, "18 Gudrība ir labāka nekā kara ieroči, tomēr viens vienīgs negantnieks var iznīcināt daudz laba."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view10() {
struct lv10 poems[] = {
	{1, "1 Indīgas mušas sasmacē un saraudzē ziežu maisītāja eļļu; tā arī mazliet neprātības samaitā gudrības vērtību. "},
	{2, "2 Gudram viņa saprāts ir virzīts uz visu taisnīgo, bet neprašu vairāk saista viss greizais. "},
	{3, "3 Un lai nepraša ietu kur iedams, viņam ik uz soļa pietrūkst prāta, tā ka visi ļaudis viņā tūliņ saskata neprašu. "},
	{4, "4 Ja pret tevi ceļas valdnieka dusmas, tad tādēļ neatstāj savu vietu; neaizmirsti, ka lēnprātība vērš par labu lielus grēkus. "},
	{5, "5 Vēl ir kāds ļaunums, ko es redzēju zem saules, un proti - tā ir nepareiza valdnieka rīcība: "},
	{6, "6 dažs nelga tiek celts lielā godā, un īsteni dižciltīgajiem jāsēž zemākā vietā. "},
	{7, "7 Es esmu redzējis vergus augstu zirgos sēžam un vadoņus kā vergus kājām ejam. "},
	{8, "8 Kas bedri rok, var pats tur iekrist iekšā, un, kas mūri ārda, tam var iekost čūska. "},
	{9, "9 Kas akmeņus lauž, tas var tikt ievainots; kas malku skalda, var sev sagādāt sāpes. "},
	{10, "10 Kad cirvis ir kļuvis neass un tā asmens netiek uzasināts, tad jāpieliek vairāk spēka, bet darbu veicina gudrība. "},
	{11, "11 Ja čūska iekož, pirms tās kodiens ir apvārdots, tad vārdotājam nav nekāda labuma no viņa mākslas. "},
	{12, "12 Vārdi no gudrā mutes iegūst ļaužu sirdis, bet nelgu iznīcina viņa paša lūpas. "},
	{13, "13 Viņa mutes runājamo vārdu iesākums ir muļķība, un viņa runas gals ir ļauna neprātība un posts. "},
	{14, "14 Nepraša lieto gan daudz vārdu, lai gan neviens cilvēks nezina, kas notiks, un neviens nevar pateikt, ko nākotne nesīs. "},
	{15, "15 Pūles, ko nepraša veltī savam darbam, viņu pārmērīgi nogurdina, tā ka viņš vairs nezina ceļu uz pilsētu. "},
	{16, "16 Bēdas tev, zeme, kuras ķēniņš vēl ir zēns un kuras augstie vadītāji jau no rīta plītē! "},
	{17, "17 Svētīta esi tu, tu zeme, kuras ķēniņš ir dižciltīgas izcelsmes un kuras augstie vadītāji sēž pie galda īstā laikā un sēž kā vīri, nevis kā plītnieki! "},
	{18, "18 Slinkuma dēļ gāžas sijas, un roku kūtruma dēļ ūdens pil nama jumtam cauri. "},
	{19, "19 Dzīres tiek rīkotas priekiem, un vīns ielīksmo tos, kas dzīvo un dzer, un par naudu to visu var iegūt. "},
	{20, "20 Pat savā sirdī nelādi ķēniņu un par kādu augstu stāvošu personu nezobojies pat savā guļamistabā, jo debesu putni varētu aiznest skaņu tālāk un kāds spārnots vēstnesis vārdus darīt zināmus, kam vajag."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view11() {
struct lv11 poems[] = {
	{1, "1 Ļauj savai maizei iet pār plašo jūru; pēc daudzām dienām tu to atkal atdabūsi. "},
	{2, "2 Tomēr sadali to pa septiņiem, pat astoņiem braucieniem, jo tu nezini, kāda nelaime var notikt virs zemes. "},
	{3, "3 Kad mākoņi ir lietus pilni, tad viņi liek ūdens straumēm izlīt pār zemi; un, ja kāds gāžas uz dienvidiem vai uz ziemeļiem, tad tas arī paliek tajā vietā guļam, kur ir kritis. "},
	{4, "4 Kas nepārtraukti novēro vēju, tas netiek pie sēšanas, un, kas vienmēr raugās uz padebešiem, tas netiek pie ražas ievākšanas. "},
	{5, "5 Gluži tāpat kā tu nezini, kāds ceļš ir vējam, nedz arī, kā veidojas kauli grūtas sievas miesās, tikpat maz tu pazīsti Dieva rīcību, kā Viņš visas lietas veic. "},
	{6, "6 No rīta sēj savu sēklu un neļauj mieru savai rokai līdz pat vakaram, jo tu nezini, kas izdosies, vai šis, vai tas, bet var būt, ka izdodas arī abi vienlīdz labi. "},
	{7, "7 Salda ir acij gaisma, un brīnumjauki ir sauli redzēt. "},
	{8, "8 Ja cilvēks arī dzīvo ilgus gadus, lai viņš visus tos gadus nododas arī priekiem, bet lai tomēr viņš domā arī par nebaltām dienām, ka tādu būs daudz; viss, kas nāk, ir niecības apdvests. "},
	{9, "9 Priecājies, jaunekli, savā jaunībā, un lai tava sirds labi jūtas savās jaunības dienās; staigā tos ceļus, ko tava sirds kāro, un ej pakaļ tam, kas patīk tavām acīm; zini tomēr, ka Dievs par visu to prasīs no tevis nolēsumu! "},
	{10, "10 Izmet skumjas no savas sirds un turi tālu nost no savas miesas ciešanas, jo jaunība un tumšās matu cirtas ātri zūd."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view12() {
struct lv12 poems[] = {
	{1, "1 Piemini savu Radītāju savā jaunībā, pirms tās ļaunās dienas nāk un tie gadi tuvojas, par kuriem tu vēlāk sacīsi: tie man nepatīk! "},
	{2, "2 Pirms vēl saule un dienas gaisma, mēness un zvaigznes satumst un pirms vēl mākoņi atkal atgriežas pēc lietus, "},
	{3, "3 tanī laikā, kad nama sargi trīc un stiprie vīri lokās, kad malējas pārtrauc darbu, tāpēc ka viņu palicis maz, un tās ziņkārīgās, kas caur logiem skatās, paliek drūmas, "},
	{4, "4 un kad abi vārti uz ielu paliek aizslēgti, jo malšanas skaņa kļūst klusāka, kad cilvēks ceļas augšā, kad dzird putnus čivinām un visas dziesmu meitenes apklusušas, "},
	{5, "5 kad cilvēks jau baidās arī no katras kalnā kāpšanas un baiļojas pa katru ceļu ejot, kad mandeļu koks gan stāvēs ziedos, bet sisenis jau būs par nastu un līksmība zudīs, jo cilvēks iet uz savu mūža mājokli un viņa raudu dziesmu dziedātāji jau staigā apkārt pa ielām, - "},
	{6, "6 pirms vēl sudraba dzīves pavediens trūkst un zelta trauks saplīst, smeļamais spainis pie avota izkalst un sabrūk, pats smeļamais skritulis salūst un iekrīt akā. "},
	{7, "7 Tiešām, pīšļiem būs atkal atgriezties atpakaļ zemē un kļūt par to, kas tie iepriekš bijuši, un garam atkal atgriezties atpakaļ pie Dieva, kas to ir devis. "},
	{8, "8 Ak, niecība! saka mācītājs. Viss ir niecība! "},
	{9, "9 Un vēl jāuzsver, ka šis mācītājs bija tiešām gudrs, ka viņš mācīja tautai īstas, dziļas un pareizas atziņas un bija domātājs, kas sacerēja daudzus sakāmos vārdus. "},
	{10, "10 Un mācītājs lūkoja atrast iepriecinošus vārdus un pareizi uzrakstīt patiesības vārdus. "},
	{11, "11 Gudro izteicieni ir kā vēršu dzenamie, un kā iedzītas naglas kopā stāv viņu izteimjcieni, kas ir viena vienīga gana veidoti. "},
	{12, "12 Un beidzot: sargies mans dēls! Daudzai grāmatu rakstīšanai nav gala, un pārmērīga lasīšana nopūlē miesu. "},
	{13, "13 Gala iznākums no visa ir šāds: bīsties Dieva un turi Viņa baušļus, jo tas pienākas katram cilvēkam! "},
	{14, "14 Jo Dievs tai tiesā, kas nāks pār visu apslēpto, pasludinās Savu spriedumu par visu notikušo, vai tas būtu bijis labs vai ļauns."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};