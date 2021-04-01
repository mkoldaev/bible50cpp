#include <map>
#include <string>
class Bible62
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
	struct lv4	{ int val; const char *msg; };
	struct lv5	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Kas no sākuma bija, ko esam dzirdējuši, ko savām acīm esam redzējuši, ko esam skatījuši un mūsu rokas ir aptaustījušas, dzīvības vārdu - "},
	{2, "2 dzīvība ir parādījusies, mēs esam redzējuši un apliecinām un pasludinām jums mūžīgo dzīvību, kas bija pie Tēva un mums ir parādījusies, - "},
	{3, "3 ko esam redzējuši un dzirdējuši, to pasludinām arī jums, lai arī jums būtu sadraudzība ar mums. Un mūsu sadraudzība ir ar Tēvu un Viņa Dēlu Jēzu Kristu. "},
	{4, "4 To mēs rakstām, lai mūsu prieks būtu pilnīgs. "},
	{5, "5 Šī ir tā vēsts, ko esam no Viņa dzirdējuši un pasludinām jums, ka Dievs ir gaisma un Viņā nav it nekādas tumsības. "},
	{6, "6 Ja mēs sakām, ka mums ir sadraudzība ar Viņu un dzīvojam tumsībā, tad melojam un nedarām patiesību. "},
	{7, "7 Bet, ja mēs dzīvojam gaismā, kā Viņš ir gaismā, tad mums ir sadraudzība savā starpā un Viņa Dēla Jēzus asinis šķīsta mūs no visiem grēkiem. "},
	{8, "8 Ja sakām, ka mums nav grēka, tad maldinām paši sevi, un patiesība nav mūsos. "},
	{9, "9 Ja atzīstamies savos grēkos, tad Viņš ir uzticīgs un taisns, ka Viņš mums piedod grēkus un šķīsta mūs no visas netaisnības. "},
	{10, "10 Ja sakām, ka neesam grēkojuši, tad darām Viņu par meli, un Viņa vārdi nemājo mūsos."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Mani bērniņi, to es jums rakstu, lai jūs negrēkotu. Un, ja kāds krīt grēkā, tad mums ir aizstāvis Tēva priekšā - Jēzus Kristus, kas ir taisns. "},
	{2, "2 Viņš ir mūsu grēku izpircējs, ne tikai mūsu vien, bet visas pasaules grēku. "},
	{3, "3 No tā mēs noprotam, ka esam Viņu atzinuši, ja turam Viņa baušļus. "},
	{4, "4 Kas saka: es esmu Viņu atzinis, bet netur Viņa baušļus, ir melis, un viņā nav patiesības. "},
	{5, "5 Bet, kas Viņa vārdus tur, tanī patiesi Dieva mīlestība ir kļuvusi pilnīga. No tā mēs noprotam, ka esam Viņā. "},
	{6, "6 Kas teicas paliekam Viņā, tam pienākas arī pašam tā dzīvot, kā Viņš ir dzīvojis. "},
	{7, "7 Mīļie, ne jaunu bausli es jums rakstu, bet vecu bausli, kas bija no sākuma. Šis vecais bauslis ir tas vārds, ko esat dzirdējuši. "},
	{8, "8 Tomēr jaunu bausli es jums rakstu, un tas ir patiess Viņā un jūsos, jo tumsība zūd, un īstā gaisma jau spīd. "},
	{9, "9 Kas teicas esot gaismā un ienīst savu brāli, ir vēl aizvien tumsībā. "},
	{10, "10 Kas mīl savu brāli, paliek gaismā, un piedauzības nav viņā; "},
	{11, "11 bet, kas savu brāli ienīst, ir tumsībā un dzīvo tumsā un nezina, kurp tas iet, jo tumsa ir aptumšojusi viņa acis. "},
	{12, "12 Es rakstu jums, bērniņi, jo grēki jums ir Viņa Vārda dēļ piedoti. "},
	{13, "13 Es rakstu jums, tēvi, jo jūs esat atzinuši Viņu, kas ir no sākuma. Es rakstu jums, jaunekļi, jo jūs esat uzvarējuši ļauno. "},
	{14, "14 Es esmu jums rakstījis, bērni, jo jūs esat Tēvu atzinuši. Es esmu jums rakstījis, tēvi, jo jūs esat atzinuši Viņu, kas ir no sākuma. Es esmu jums rakstījis, jaunekļi, jo jūs esat stipri, un Dieva vārds paliek jūsos, un jūs ļauno esat uzvarējuši. "},
	{15, "15 Nemīliet pasauli, nedz to, kas ir pasaulē. Ja kāds mīl pasauli, tad viņā nav Tēva mīlestības; "},
	{16, "16 jo viss, kas ir pasaulē - miesas kārība, acu kārība un dzīves lepnība - tas nav no Tēva, bet ir no pasaules. "},
	{17, "17 Pasaule iznīkst un viņas kārība, bet, kas dara Dieva prātu, paliek mūžīgi. "},
	{18, "18 Bērniņi, ir pēdējā stunda, un, kā jūs esat dzirdējuši, ka nāk antikrists, tā jau tagad daudzi antikristi ir cēlušies; no tā mēs noprotam, ka ir pēdējā stunda. "},
	{19, "19 No mums viņi ir izgājuši, bet viņi nav bijuši mūsējie, jo, ja tie būtu bijuši mūsējie, tie būtu pie mums palikuši, bet viņi nav pie mums palikuši, lai atklātos, ka viņi nav visi mūsēji. "},
	{20, "20 Jums ir svaidījums no Svētā, un jūs zināt visu. "},
	{21, "21 Es esmu jums rakstījis ne tāpēc, ka jūs nezināt patiesību, bet tāpēc, ka jūs to zināt un ka meli nekad nav no patiesības. "},
	{22, "22 Kas ir melis, ja ne tas, kas noliedz, ka Jēzus ir Kristus? Tas ir antikrists, kas noliedz Tēvu un Dēlu. "},
	{23, "23 Katram, kas noliedz Dēlu, nav Tēva, tam, kas apliecina Dēlu, ir arī Tēvs. "},
	{24, "24 Jūsos lai paliek tas, ko esat dzirdējuši no sākuma. Ja jūsos paliks tas, ko esat dzirdējuši no sākuma, tad arī jūs paliksit Dēlā un Tēvā. "},
	{25, "25 Šis ir tas apsolījums, ko Viņš mums ir apsolījis - mūžīgā dzīvība. "},
	{26, "26 To es esmu jums rakstījis par tiem, kas jūs maldina. "},
	{27, "27 Arī jūs svaidījumu saņēmāt no Viņa, un tas paliek jūsos, un jums nevajag, ka kāds jūs mācītu; bet, kā Viņa svaidījums māca jums visas lietas un ir patiesīgs un nav meli un kā Viņš jūs ir mācījis, tā palieciet Viņā. "},
	{28, "28 Un tagad, bērniņi, palieciet Viņā, lai, kad Viņš parādīsies, mums būtu drošs prāts un mēs, Viņam atnākot, nepaliktu kaunā. "},
	{29, "29 Ja jūs zināt, ka Viņš ir taisns, tad jūs saprotat, ka katrs, kas dara taisnību, ir no Viņa piedzimis."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Redziet, kādu mīlestību Tēvs mums ir parādījis, ka tiekam saukti Dieva bērni, un mēs tādi arī esam. Pasaule mūs tāpēc neatzīst, ka tā Viņu nav atzinusi. "},
	{2, "2 Mīļie, tagad mēs esam Dieva bērni, un vēl nav atklājies, kas mēs būsim. Mēs zinām, ka, kad tas atklāsies, mēs būsim Viņam līdzīgi, jo mēs redzēsim Viņu, kāds Viņš ir. "},
	{3, "3 Katrs, kam ir šī cerība uz Viņu, šķīsta sevi pašu, kā Viņš ir šķīsts. "},
	{4, "4 Katrs, kas dara grēku, dara arī netaisnību; grēks ir netaisnība. "},
	{5, "5 Jūs zināt, ka Viņš ir atklājies, lai grēkus atņemtu, un grēku nav Viņā. "},
	{6, "6 Katrs, kas paliek Viņā, negrēko; katrs, kas grēko, nav Viņu redzējis, nedz Viņu atzinis. "},
	{7, "7 Bērni, lai neviens jūs nemaldina: kas dara taisnību, ir taisns, tā kā Viņš ir taisns. "},
	{8, "8 Kas dara grēku, ir no velna, jo velns grēko no sākuma. Tamdēļ Dieva Dēls atnācis, lai Viņš iznīcinātu velna darbus. "},
	{9, "9 Ikviens, kas ir no Dieva dzimis, nedara grēku, jo Viņa sēkla paliek viņā un tas nevar grēkot, jo viņš ir no Dieva dzimis. "},
	{10, "10 No tā var pazīt Dieva bērnus un velna bērnus; katrs, kas nedara taisnību, nav no Dieva, arī tas ne, kas nemīl savu brāli. "},
	{11, "11 Jo šī ir tā vēsts, ko esat dzirdējuši no sākuma, ka mums būs citam citu mīlēt, "},
	{12, "12 ne kā Kains, kas bija no ļaunā un nokāva savu brāli, bet kādēļ viņš to nokāva? Tāpēc ka viņa darbi bija ļauni un viņa brāļa darbi taisni. "},
	{13, "13 Nebrīnieties, brāļi, ja pasaule jūs ienīst. "},
	{14, "14 Mēs zinām, ka esam no nāves pārgājuši dzīvībā, jo mēs mīlam brāļus; kas nemīl, paliek nāvē. "},
	{15, "15 Katrs, kas savu brāli ienīst, ir slepkava, un jūs zināt, ka neviens slepkava nepatur sevī mūžīgo dzīvību. "},
	{16, "16 No tā mēs esam nopratuši mīlestību, ka Viņš Savu dzīvību par mums ir atdevis; tad arī mums pienākas atdot savu dzīvību par brāļiem. "},
	{17, "17 Bet kam ir laicīga manta un viņš redz savu brāli ciešam trūkumu un aizslēdz viņam savu sirdi, kā gan Dieva mīlestība paliktu viņā? "},
	{18, "18 Bērniņi, nemīlēsim vārdiem, nedz ar mēli, bet ar darbiem un ar patiesību! "},
	{19, "19 No tā mēs zināsim, ka piederam patiesībai un varēsim savu sirdi Viņa priekšā klusināt, "},
	{20, "20 ka, ja mūsu sirds mūs pazudina, Dievs ir lielāks nekā mūsu sirds un zina visas lietas. "},
	{21, "21 Mīļie, kad mūsu sirds nepazudina mūs, tad mums ir paļāvība uz Dievu, "},
	{22, "22 un visu, ko mēs lūdzam, to saņemam no Viņa, jo mēs turam Viņa baušļus un darām to, kas Viņam patīkams. "},
	{23, "23 Bet šis ir Viņa bauslis, lai mēs ticam Viņa Dēla Jēzus Kristus Vārdam un mīlam cits citu, kā Viņš mums pavēlējis. "},
	{24, "24 Kas Viņa baušļus tur, tas paliek Viņā un Viņš tanī, bet no tā mēs noskārstam, ka Viņš paliek mūsos, proti, no Gara, ko Viņš mums ir devis."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lv4 poems[] = {
	{1, "1 Mīļie, neticiet katram garam, bet pārbaudiet garus, vai viņi ir no Dieva, jo daudz viltus pravieši ir izgājuši pasaulē. "},
	{2, "2 No tā atzīstiet Dieva Garu: ikviens gars, kas apliecina Jēzu Kristu miesā nākušu, ir no Dieva. "},
	{3, "3 Un ikviens gars, kas neapliecina Jēzu, nav no Dieva, tas ir antikrista gars, par ko jūs esat dzirdējuši, ka viņš nāks; tas jau tagad ir pasaulē. "},
	{4, "4 Jūs, bērniņi, esat no Dieva un esat viņus uzvarējuši, jo lielāks ir Tas, kas jūsos, nekā tas, kas ir pasaulē. "},
	{5, "5 Viņi ir no pasaules, tāpēc viņu runa ir pasaulīga, un pasaule klausa viņus. "},
	{6, "6 Mēs esam no Dieva; kas Dievu atzīst, klausa mūs, kas nav no Dieva, neklausa mūs. No tā pazīstam patiesības garu un maldu garu. "},
	{7, "7 Mīļie, mīlēsim cits citu, jo mīlestība ir no Dieva, un katrs, kas mīl, ir no Dieva dzimis un atzīst Dievu. "},
	{8, "8 Kas nemīl, nav Dievu atzinis, jo Dievs ir mīlestība. "},
	{9, "9 Redzama kļuvusi ir Dieva mīlestība mūsu starpā, Dievam Savu vienpiedzimušo Dēlu sūtot pasaulē, lai mēs dzīvotu caur Viņu. "},
	{10, "10 Šī ir tā mīlestība nevis, ka mēs esam mīlējuši Dievu, bet ka Viņš mūs mīlējis un sūtījis Savu Dēlu mūsu grēku izpirkšanai. "},
	{11, "11 Mīļie, ja Dievs mūs tā ir mīlējis, tad arī mums pienākas citam citu mīlēt. "},
	{12, "12 Dievu neviens nekad nav redzējis; ja mēs mīlam cits citu, tad Dievs mājo mūsos, un Viņa mīlestība ir mūsu vidū tapusi pilnīga. "},
	{13, "13 No tā mēs atzīstam, ka mēs esam Viņā un Viņš mūsos, ka Viņš mums no Sava Gara ir devis. "},
	{14, "14 Un mēs esam redzējuši un apliecinām, ka Tēvs ir sūtījis Savu Dēlu par pasaules Glābēju. "},
	{15, "15 Kas apliecina, ka Jēzus ir Dieva Dēls, tanī paliek Dievs un viņš Dievā. "},
	{16, "16 Mēs esam atzinuši un ticam mīlestībai, kas Dievam ir uz mums. Dievs ir mīlestība, un, kas paliek mīlestībā, tas paliek Dievā un Dievs viņā. "},
	{17, "17 Ar to mīlestība ir pie mums kļuvusi pilnīga, ka mums ir droša paļāvība tiesas dienā, jo, kāds Viņš ir, tādi arī mēs esam šinī pasaulē. "},
	{18, "18 Baiļu nav mīlestībā, bet pilnīgā mīlestība aizdzen bailes, jo bailēm ir mokas; kas baiļojas, nav sasniedzis pilnību mīlestībā. "},
	{19, "19 Mīlēsim, jo Viņš ir mūs pirmais mīlējis. "},
	{20, "20 Ja kāds saka: es mīlu Dievu, - un ienīst savu brāli, tad viņš ir melis; jo, kas nemīl savu brāli, ko viņš ir redzējis, nevar mīlēt Dievu, ko viņš nav redzējis. "},
	{21, "21 Un šis bauslis mums ir no Viņa, ka tam, kas mīl Dievu, būs mīlēt arī savu brāli."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct lv5 poems[] = {
	{1, "1 Ikviens, kas tic, ka Jēzus ir Kristus, ir no Dieva dzimis, un ikviens, kas mīl To, kas Viņu ir dzemdinājis, mīl arī to, kas no Viņa ir dzimis. "},
	{2, "2 No tā mēs noprotam, ka mēs Dieva bērnus mīlam, kad mīlam Dievu un turam Viņa baušļus. "},
	{3, "3 Jo šī ir Dieva mīlestība, ka turam Viņa baušļus, un Viņa baušļi nav grūti; "},
	{4, "4 jo viss, kas ir dzimis no Dieva, uzvar pasauli, un šī ir tā uzvara, kas uzvarējusi pasauli - mūsu ticība. "},
	{5, "5 Kas ir pasaules uzvarētājs? Tikai tas, kas tic, ka Jēzus ir Dieva Dēls. "},
	{6, "6 Viņš ir tas, kurš nācis caur ūdeni un asinīm, Jēzus Kristus, ne ūdeni vien, bet ar ūdeni un asinīm. Un Gars ir liecinieks, jo Gars ir patiesība. "},
	{7, "7 Jo trīs ir, kas dod liecību debesīs: Tēvs, Vārds un Svētais Gars, un šie trīs ir viens. "},
	{8, "8 Un trīs ir, kas liecina virs zemes: Gars, ūdens un asinis, un šie trīs ir kopā. "},
	{9, "9 Ja pieņemam cilvēku liecību, tad Dieva liecība ir lielāka, proti, šī ir Dieva liecība, ko Viņš ir nodevis par Savu Dēlu. "},
	{10, "10 Kas tic uz Dieva Dēlu, tam ir liecība Viņā. Kas netic Dievam, tas Viņu ir darījis par meli, tāpēc ka tas nav ticējis tai liecībai, ko Dievs ir nodevis par Savu Dēlu. "},
	{11, "11 Un šī ir tā liecība, ka Dievs mums ir devis mūžīgu dzīvību, un šī dzīvība ir Viņa Dēlā. "},
	{12, "12 Kam Dēls ir, tam ir dzīvība, kam Dieva Dēla nav, tam nav dzīvības. "},
	{13, "13 To es jums rakstu, lai jūs zinātu, ka jums ir mūžīga dzīvība, kas ticat Dieva Dēla Vārdam. "},
	{14, "14 Un šī paļāvība mums ir uz Viņu, ka Viņš klausa mūs, ja ko lūdzam pēc Viņa prāta. "},
	{15, "15 Ja zinām, ka Viņš mūs klausa, ko vien lūdzam, tad zinām, ka saņemam to, ko esam no Viņa lūguši. "},
	{16, "16 Ja kāds redz savu brāli darām grēku, kas nav nāves grēks, tas lai lūdz Dievu, un Viņš tam dos dzīvību, proti, tādiem, kas nedara nāves grēku. Ir nāves grēks, par to es nesaku, lai lūdz. "},
	{17, "17 Katra netaisnība ir grēks, bet ir grēks, kas nav nāves grēks. "},
	{18, "18 Mēs zinām, ka ikviens, kas no Dieva dzimis, negrēko, bet tas, kas no Dieva dzimis, pasargā sevi, un ļaunais neaizskar viņu. "},
	{19, "19 Mēs zinām, ka esam no Dieva, un visa pasaule ir grimusi ļaunumā. "},
	{20, "20 Bet mēs zinām, ka Dieva Dēls ir nācis un mums tādu prātu ir devis, ka atzīstam vienīgi patieso, un mēs jau esam patiesajā - Viņa Dēlā Jēzū Kristū. Šis ir patiesais Dievs un mūžīgā dzīvība. "},
	{21, "21 Bērniņi, sargaities no elkiem."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};