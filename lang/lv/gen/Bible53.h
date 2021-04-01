#include <map>
#include <string>
class Bible53
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Pāvils, Silvāns un Timotejs tesaloniķiešu draudzei, Dievā, mūsu Tēvā, un Kungā Jēzū Kristū: "},
	{2, "2 žēlastība jums un miers no Dieva Tēva un Kunga Jēzus Kristus! "},
	{3, "3 Mums vienumēr jāpateicas Dievam par jums, brāļi, kā pienākas, jo jūsu ticība aug augumā un jūsu visu savstarpējā mīlestība kļūst pilnīgāka pie ikviena no jums, "},
	{4, "4 tā ka mēs paši lepojamies ar jums citās Dieva draudzēs, vērā ņemot jūsu izturību un ticību visās jūsu vajāšanās un spaidos, kas jums jāpanes. "},
	{5, "5 Tā ir Dieva taisnās tiesas zīme, ka jūs reiz būsit cienīgi iemantot Dieva valstību, kuras dēļ tagad ciešat; "},
	{6, "6 jo tāda ir Dieva taisnība, ka Viņš jūsu spaidītājiem atmaksā ar spaidiem, "},
	{7, "7 bet jums, kam jācieš, ar atpestīšanu, kopā ar mums, kad Kungs Jēzus atklāti parādīsies no debesīm ar Savas varenības eņģeļiem uguns liesmās "},
	{8, "8 un turēs tiesu pār tiem, kas Dievu neatzīst un kas neklausa mūsu Kunga Jēzus evaņģēlijam. "},
	{9, "9 Tie kā sodu saņems mūžīgu pazušanu no Tā Kunga vaiga un Viņa godības spēka, "},
	{10, "10 kad Viņš nāks pagodināt Sevi Savu svēto vidū un saņemt apbrīnošanu visu ticīgo starpā viņā dienā, arī pie jums, kuru starpā mūsu liecība iemantojusi ticību. "},
	{11, "11 Tamdēļ arī mēs vienumēr lūdzam par jums, lai mūsu Dievs jūs darītu Sava aicinājuma cienīgus un līdz galam piepildītu jūsu sirsnīgo cenšanos pēc laba un ticības darbu spēkā, "},
	{12, "12 lai tā jūsos tiktu pagodināts mūsu Kunga Jēzus Vārds un jūs Viņā, pēc mūsu Dieva un Kunga Jēzus Kristus žēlastības."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Bet attiecībā uz mūsu Kunga Jēzus Kristus atnākšanu un mūsu savienošanos ar Viņu, mēs lūdzam jūs, brāļi: "},
	{2, "2 nepadodieties tik ātri neapdomīgam uztraukumam vai bailēm, it kā Tā Kunga diena būtu klāt. Vai tas būtu gara iedvesmojums, runāts vārds vai it kā manā vārdā rakstīta vēstule, "},
	{3, "3 lai neviens jūs nemaldina ne šādā, ne tādā veidā: jo papriekš jānāk atkrišanai un atklāti jāparādās grēka cilvēkam, pazušanas dēlam, "},
	{4, "4 pretiniekam, kas saceļas pret visu, kas saucas Dievs vai svētums, un pat ieņem vietu Dieva templī, pats sevi celdams par Dievu. "},
	{5, "5 Vai jūs neatceraties, ka es par to jums esmu runājis, vēl pie jums būdams? "},
	{6, "6 Un jūs zināt, kas ir tagad tas kavēklis, kura dēļ viņš atklāti parādīsies tikai tad, kad būs pienācis viņa laiks. "},
	{7, "7 Jo netaisnības noslēpumainais spēks jau ir darbā, tikai tam, kas to līdz šim kavē, papriekš jāpazūd. "},
	{8, "8 Tikai tad netaisnais parādīsies atklāti, un Kungs Jēzus iznīcinās viņu ar Savas mutes elpu un izdeldēs viņu, kad pats atnāks godībā. "},
	{9, "9 Jo viņa (šī pretinieka) parādīšanās ar visu viņa viltus varu, zīmēm un brīnumiem ir sātana darbs, "},
	{10, "10 kas ar visādiem netaisnības līdzekļiem pieviļ tos, kas pazūd, tāpēc ka tie nav pieņēmuši patieso mīlestību, kas tos būtu izglābusi. "},
	{11, "11 Tāpēc Dievs tagad sūta tiem maldu varu, ka tie sāk ticēt meliem, "},
	{12, "12 tā ka sodā krīt visi, kas nav ticējuši patiesībai, bet vairāk mīlējuši netaisnību. "},
	{13, "13 Bet mums pienākas Dievam pastāvīgi pateikties par jums, Tā Kunga mīļotie brāļi, ka Dievs jūs no paša sākuma izraudzījis pestīšanai Gara dzīves svētumā un patiesības ticībā, "},
	{14, "14 aicinādams jūs uz to ar mūsu sludināšanu, lai jūs iemantotu mūsu Kunga Jēzus Kristus godību. "},
	{15, "15 Tad nu, brāļi, stāviet stipri, turēdami tās mācības, kuras esat smēlušies gan no mūsu runām, gan no mūsu vēstules. "},
	{16, "16 Bet Viņš pats, mūsu Kungs Jēzus Kristus, un Dievs, mūsu Tēvs, kas mūs ir mīlējis un Savā žēlastībā mums devis mūžīgo iepriecu un labu cerību, "},
	{17, "17 lai iepriecina jūsu sirdis un lai dara jūs stiprus ikvienā labā darbā un vārdā."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Beidzot, brāļi, lūdziet par mums, lai mūsu Kunga vārds turpina savu gaitu un manto godu tāpat kā pie jums "},
	{2, "2 un lai mēs tiekam paglābti no nekrietnajiem, ļaunajiem cilvēkiem: ne jau visiem ir ticība. "},
	{3, "3 Tas Kungs ir uzticams. Viņš jūs darīs stiprus un pasargās no ļauna. "},
	{4, "4 Mēs paļaujamies uz jums, ticēdami Tam Kungam, ka jūs darāt un darīsit, ko mēs noteicam. "},
	{5, "5 Bet pats Kungs lai vērš jūsu sirdis uz Dieva mīlestību un Kristus pacietību. "},
	{6, "6 Mēs aizrādām jums, brāļi, Kunga Jēzus Kristus Vārdā: atraujieties no katra brāļa, kas nekārtīgi dzīvo, neievērodams mācības, ko jūs no mums esat saņēmuši. "},
	{7, "7 Jūs paši zināt, kā jums jāseko mūsu paraugam, jo mēs jūsu starpā neesam dzīvojuši nekārtīgi, "},
	{8, "8 neesam arī ne pie viena maizi ēduši par brīvu, bet esam dienām naktīm grūti strādājuši un pūlējušies, lai nevienam no jums nebūtu par apgrūtinājumu; "},
	{9, "9 nevis it kā mums nebūtu uz to tiesības, bet lai jums būtu par paraugu, ka jūs mums varētu sekot. "},
	{10, "10 Jo, kad bijām pie jums, mēs noteicām jums: ja kas negrib strādāt, tam arī nebūs ēst. "},
	{11, "11 Tagad dzirdam, ka daži jūsu starpā dzīvo nekārtīgi, nestrādādami nekādu darbu, bet tikai izlikdamies. "},
	{12, "12 Tādiem mēs aizrādām un liekam pie sirds, atsaukdamies uz mūsu Kungu Jēzu Kristu, lai viņi klusā garā strādā un ēd savu maizi. "},
	{13, "13 Bet jūs, brāļi, nepiekūstiet, labu darīdami. "},
	{14, "14 Un, ja kāds neklausa mūsu vēstules vārdiem, to ievērojiet un nesaejieties ar to, lai tas justos apkaunots. "},
	{15, "15 Tikai neizturieties pret to kā pret ienaidnieku, bet pamācait to kā brāli. "},
	{16, "16 Bet pats miera Kungs lai jums dod mieru vienumēr un visādos veidos! Mūsu Kungs lai ir ar jums visiem! "},
	{17, "17 Šo sveicienu es, Pāvils, rakstu ar savu paša roku. Tā ir pazīšanas zīme katrā vēstulē: tāds ir mans raksts. Mūsu Kunga Jēzus Kristus žēlastība ar jums visiem!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};