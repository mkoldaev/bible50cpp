#include <map>
#include <string>
class Bible52
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
	struct lv4	{ int val; const char *msg; };
	struct lv5	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Pāvils, Silvāns un Timotejs tesaloniķiešu draudzei, kas ir Dievā Tēvā un Kungā Jēzū Kristū: žēlastība jums un miers! "},
	{2, "2 Mēs vienmēr pateicamies par jums visiem Dievam, kad pieminam jūs savās lūgšanās, "},
	{3, "3 jo pastāvīgi atceramies Dieva, mūsu Tēva, priekšā jūsu ticības darbu, pašaizliedzīgo mīlestību un nesatricināmo cerību uz mūsu Kungu Jēzu Kristu. "},
	{4, "4 Mēs zinām, Dieva mīļotie brāļi, kā jūs tikāt izredzēti, "},
	{5, "5 jo mūsu evaņģēlija vēstījums neparādījās vienīgi vārdos, bet spēkā, Svētā Garā un stiprā pārliecībā - jūs jau zināt, kādi mēs bijām, kad jūsu labā sākām darboties starp jums, "},
	{6, "6 un jūs kļuvāt par maniem un Kunga Kristus sekotājiem, uzņemdami sludināto vārdu Svētā Gara priekā, panesdami daudz spaidu "},
	{7, "7 un tā kļūdami par priekšzīmi visiem ticīgajiem Maķedonijā un Ahajā. "},
	{8, "8 Jo no jums Tā Kunga vārds atskanējis tālāk ne vien Maķedonijā un Ahajā, nē, visās vietās kļuvusi zināma jūsu ticība Dievam, tā ka mums nekas vairs nav jāstāsta; "},
	{9, "9 tie paši cits citam stāsta, kāds bija mūsu darba sākums jūsu starpā un kā jūs no saviem elkiem atgriezāties pie Dieva, lai kalpotu dzīvajam un patiesajam Dievam "},
	{10, "10 un lai gaidītu no debesīm Viņa Dēlu, kuru Viņš uzmodinājis no miroņiem, Jēzu, kas mūs atpestīs no nākamās dusmības."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Jūs paši zināt, brāļi, kāds bija mūsu darba sākums pie jums, ka tas nebija bez panākumiem. "},
	{2, "2 Pēc mūsu iepriekšējām ciešanām un apvainojumiem Filipos, kas jums ir zināmi, mēs mūsu Dievā smēlāmies drosmi lielā cīņas priekā sludināt jums Dieva evaņģēliju. "},
	{3, "3 Jo mūsu sludinājuma pamatā nav maldu vai netīru un negodīgu nolūku, "},
	{4, "4 bet mēs runājām tāpēc, ka Dievs mūs atradis par cienīgiem, uzticēdams mums evaņģēliju, un cenšamies izpatikt nevis cilvēkiem, bet Dievam, kas pārbauda mūsu sirdis. "},
	{5, "5 Jūs zināt, mēs nekad neesam uzstājušies ar glaimiem vai mantkārīgos nolūkos, Dievs ir mūsu liecinieks, "},
	{6, "6 nedz arī sagaidīdami godu no cilvēkiem, ne no jums, ne no citiem. "},
	{7, "7 Lai gan mums kā Kristus apustuļiem būtu bijis iespējams sev prasīt sevišķu cieņu, bet mēs jūsu starpā esam bijuši saudzīgi kā māte, kas lolo savus bērnus. "},
	{8, "8 Tādas ir bijušas mūsu jūtas pret jums; mēs ar jums gribējām dalīties ne vien Dieva evaņģēlijā, bet arī savā dvēselē, jo tik mīļi jūs mums bijāt kļuvuši. "},
	{9, "9 Jūs atceraties, brāļi, mūsu darba pūles; strādādami dienām naktīm, lai tikai jūs neapgrūtinātu, mēs jums nesām Dieva labo vēsti. "},
	{10, "10 Jūs un Dievs esat mani liecinieki, ar kādu bijību un nevainojamu taisnību mēs pret jums izturējāmies, kad bijāt ticīgi kļuvuši. "},
	{11, "11 Mēs ikvienu no jums - jums tas ir zināms - kā tēvs savus bērnus "},
	{12, "12 uzmudinājām, pamācījām un pārliecinājām dzīvot tā, lai jūs būtu sava Dieva cienīgi, kas jūs aicina Savā valstībā un godībā. "},
	{13, "13 Tāpēc mēs arī pastāvīgi pateicamies Dievam, ka jūs, uzklausījuši mūsu sludinātos Dieva vārdus, tos esat uzņēmuši nevis kā cilvēku, bet kā Dieva vārdus, kas tie patiesībā ir; jo pats Dievs darbojas ar Savu spēku jūsos, kas ticat. "},
	{14, "14 Tā jūs, brāļi, esat sākuši staigāt to Dieva draudžu pēdās, kas apliecina Kristu Jēzu Jūdejā, jo jūs tāpat esat cietuši no saviem ciltsbrāļiem kā viņi no jūdiem, "},
	{15, "15 kas nonāvējuši Kungu Jēzu un praviešus, kas mūs vajājuši, kas Dievam nav patīkami un ir naidīgi pret visiem cilvēkiem, "},
	{16, "16 kas mūs kavē sludināt pagāniem un tos glābt no pazušanas. Tā viņi aizvien piepilda savu grēku mēru. Bet dusmība jau nākusi pār viņiem galīgi. "},
	{17, "17 Bet mēs, brāļi, kādu laiku esam jutušies bez jums kā bāriņi; lai gan bijām šķirti tikai ārīgi, ne savās sirdīs, tomēr mēs savās lielajās ilgās neesam taupījuši pūles, lai jūs atkal redzētu. "},
	{18, "18 Mēs, pirmām kārtām es, Pāvils, esam gribējuši ne vienu reizi vien jūs apmeklēt, bet sātans mūs aizkavēja, "},
	{19, "19 jo kas gan cits ir mūsu cerība, prieks un slavas vainags mūsu Kunga Jēzus priekšā Viņa atnākšanas dienā, ja arī ne jūs? "},
	{20, "20 Tiešām, jūs esat mūsu gods un prieks!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Nevarēdami ilgāk ciesties, mēs nolēmām palikt Atēnās vieni paši "},
	{2, "2 un sūtījām pie jums mūsu brāli Timoteju, Dieva aicināto Kristus evaņģēlija kalpu, lai viņš jūs stiprinātu un jūs drošinātu ticībā, "},
	{3, "3 ka neviens nesāktu šaubīties pašreizējos spaidos. Jūs paši zināt, ka tādi mums nolemti. "},
	{4, "4 Jo jau toreiz, kad bijām pie jums, mēs teicām jums, ka vajāšanām jānāk; un tā tas arī ir noticis, jūs to zināt. "},
	{5, "5 Tāpēc arī es, nevarēdams to ilgāk paciest, nosūtīju viņu pie jums, lai dabūtu zināt, kā ir ar jūsu ticību, vai kārdinātājs nav jūs kārdinājis un vai mūsu darbs nesāk irt. "},
	{6, "6 Tagad nu Timotejs no jums atkal pārnācis pie mums, atnesdams mums labas ziņas par jūsu ticību un mīlestību, stāstīdams, ka jūs aizvien mīļi mūs pieminat un ilgojaties mūs redzēt tāpat kā mēs jūs. "},
	{7, "7 Tā mēs, brāļi, dzirdēdami par jūsu ticību, caur jums esam guvuši iepriecu visās savās vajadzībās un bēdās; "},
	{8, "8 jo, kad jūs stipri stāvat savā Kungā, tad mēs dzīvojam. "},
	{9, "9 Ar kādiem pateicības vārdiem mēs gan varam Dievam atmaksāt par visu to prieku, ko izjūtam mūsu Dieva priekšā par jums, "},
	{10, "10 dienu un nakti no visas sirds viņu lūgdami, lai mums būtu lemts redzēt jūs vaigā un stiprināt jūs ticībā, ja tas vēl vajadzīgs. "},
	{11, "11 Bet Viņš, mūsu Dievs un Tēvs, un mūsu Kungs Jēzus lai pašķir mums ceļu pie jums, "},
	{12, "12 un jūs lai Tas Kungs dara vēl pilnīgākus, vairodams mīlestību, kas jūs vieno savā starpā un ar visiem citiem, tāpat kā mēs jūs mīlam, "},
	{13, "13 un lai stiprina jūsu sirdis, lai tās būtu nevainojamas savā svētumā Dieva, mūsu Tēva, priekšā, kad mūsu Kungs Jēzus atnāks ar visiem Saviem svētajiem."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lv4 poems[] = {
	{1, "1 Beidzot, brāļi, mēs lūdzam un pamācām Kungā Jēzū: topiet aizvien pilnīgāki, sekodami tām mācībām, ko no mums esat saņēmuši, proti, kā jādzīvo, lai Dievam patiktu, - un jūs jau arī tā dzīvojat. "},
	{2, "2 Jūs zināt, kādus aizrādījumus mēs jums esam devuši Kunga Jēzus uzdevumā. "},
	{3, "3 Jo tāda ir Dieva griba - lai jūsu dzīve būtu svēta. Atturieties no netiklības! "},
	{4, "4 Zinait, ka ikvienam jāglabā sava miesa svētumā un godā, "},
	{5, "5 bet ne kaislē un kārībā, kā to dara pagāni, kas nepazīst Dievu. "},
	{6, "6 Nevienam nebūs savam brālim pāri darīt vai to izmantot kādā lietā, jo Tas Kungs ir atriebējs visās šinīs lietās, kā mēs jums to jau agrāk esam teikuši un apliecinājuši. "},
	{7, "7 Jo Dievs mūs nav aicinājis nešķīstībai, bet svēttapšanai. "},
	{8, "8 Tātad, kas to nicina, tas nenicina cilvēku, bet Dievu, to pašu, kas jums sirdīs devis Savu Svēto Garu. "},
	{9, "9 Par brāļu mīlestību man nav vajadzīgs jums rakstīt, jo pats Dievs jūs mācījis turēt savā starpā mīlestību. "},
	{10, "10 Un to jūs arī darāt ar visiem brāļiem pa visu Maķedoniju. Bet mēs jums, brāļi, liekam pie sirds: topiet šai ziņā vēl pilnīgāki. "},
	{11, "11 Turiet par lielu godu, klusi dzīvojot, darīt savu darbu un strādāt savām rokām, kā mēs jums to esam piekodinājuši, "},
	{12, "12 lai jūsu dzīve būtu nevainojama arī pret tiem, kas ir ārpusē, un jums ne pie viena nebūtu jāgriežas savās vajadzībās. "},
	{13, "13 Mēs gribam, brāļi, lai jūs būtu skaidrībā par tiem, kas aizmiguši, un lai jūs nenodotos skumjām kā tie, kam nav cerības. "},
	{14, "14 Jo tāpat, kā mēs ticam, ka Jēzus ir nomiris un augšāmcēlies, Dievs arī aizmigušos caur Jēzu vedīs godībā kopā ar Viņu. "},
	{15, "15 To mēs jums sakām, balstoties uz mūsu Kunga vārdu: mēs, kas līdz mūsu Kunga atnākšanai paliksim dzīvi, ne ar ko nebūsim priekšā tiem, kas aizmiguši. "},
	{16, "16 Pats Kungs nāks no debesīm, kad Dievs to pavēlēs, atskanot erceņģeļa balsij un Dieva bazūnei: tad pirmie celsies tie, kas ticībā uz Kristu miruši. "},
	{17, "17 Pēc tam mēs, dzīvie, kas vēl pāri palikuši, kopā ar viņiem tiksim aizrauti gaisā padebešos, pretim Tam Kungam. Tā mēs būsim kopā ar To Kungu vienumēr. "},
	{18, "18 Iepriecinait cits citu ar šiem vārdiem!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct lv5 poems[] = {
	{1, "1 Bet par laiku un stundu, brāļi, man jums nav jāraksta; "},
	{2, "2 jo jūs paši labi zināt, ka Tā Kunga diena nāk tāpat kā zaglis naktī. "},
	{3, "3 Kad sacīs: nu ir miers un drošība, - tad pēkšņi pār viņiem nāks posts, kā dzemdību sāpes pār grūtnieci, un viņi nevarēs izbēgt. "},
	{4, "4 Bet jūs, brāļi, nedzīvojat tumsībā, ka šī diena jūs varētu pārsteigt kā kāds zaglis; "},
	{5, "5 jo jūs visi esat gaismas bērni un dienas bērni. Mēs nepiederam ne naktij, ne tumsai. "},
	{6, "6 Tāpēc negulēsim kā pārējie, bet būsim nomodā un skaidrā prātā. "},
	{7, "7 Kas guļ, tas guļ naktī, un, kas piedzeras, tas piedzeras naktī. "},
	{8, "8 Bet mēs, kas piederam dienai, būsim skaidrā prātā! Tērpsimies ticības un mīlestības bruņās un uzliksim pestīšanas cerības bruņu cepuri! "},
	{9, "9 Jo Dievs mūs nav nolicis dusmībai, bet lai mēs iegūtu pestīšanu caur mūsu Kungu Jēzu Kristu, "},
	{10, "10 kas par mums ir miris, lai mēs kopā ar Viņu dzīvotu, vienalga, vai esam nomodā vai aizmiguši. "},
	{11, "11 Tāpēc iepriecinait cits citu, kā jūs to jau tagad darāt! "},
	{12, "12 Mēs lūdzam jūs, brāļi, atzīstiet tos, kas jūsu labā strādā, kas ir jūsu priekšnieki Tā Kunga draudzē un kas jūs pamāca. "},
	{13, "13 Turiet viņus mīļus un augstā cieņā viņu darba dēļ! Savā starpā turiet mieru. "},
	{14, "14 Mēs jums liekam pie sirds, brāļi, pamācait nekārtīgos, iedrošinait bailīgos, palīdziet vājajiem, esiet pacietīgi pret visiem! "},
	{15, "15 Pielūkojiet, lai neviens nevienam neatmaksā ļaunu ar ļaunu, bet aizvien dzenieties pēc tā, kas labs, gan paši savā starpā, gan pret citiem. "},
	{16, "16 Esiet priecīgi vienumēr, "},
	{17, "17 lūdziet bez mitēšanās Dievu. "},
	{18, "18 Par visu esiet pateicīgi! Jo tāda ir Dieva griba Kristū Jēzū attiecībā uz jums. "},
	{19, "19 Neapslāpējiet Garu, "},
	{20, "20 nenicinait pravietošanu; "},
	{21, "21 pārbaudait visu; kas labs, to paturiet! "},
	{22, "22 Atraujaties no visa, kas ļauns. "},
	{23, "23 Bet pats miera Dievs lai jūs svētī caurcaurim, un jūsu gars, dvēsele un miesa visā pilnībā lai paliek bezvainīgi līdz mūsu Kunga Jēzus Kristus atnākšanai. "},
	{24, "24 Jūsu aicinātājs ir uzticams. Viņš būs arī darītājs. "},
	{25, "25 Brāļi, lūdziet par mums! "},
	{26, "26 Sveicinait visus brāļus ar svēto skūpstu! "},
	{27, "27 No Dieva puses es jums piekodinu: lasait šo vēstuli priekšā visiem brāļiem! "},
	{28, "28 Mūsu Kunga Jēzus Kristus žēlastība lai ir ar jums!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};