#include <map>
#include <string>
class Bible36
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Šis ir Tā Kunga vārds, kas nāca pār Cefanju, Kušija dēlu, - Kušijs bija Gedaljas, tas Amarjas, tas Hiskijas dēls, - Josijas, Amona dēla, Jūdas ķēniņa laikā. "},
	{2, "2 Es aizraušu, jā, tiešām Es rautin aizraušu visu, kas zemes virsū! saka Tas Kungs. "},
	{3, "3 Es atstāšu zemi bez cilvēkiem un lopiem, bez debesu putniem un jūras zivīm; Es likšu, lai pazūd visa apgrēcība, tāpat arī visi bezdievīgie, tiešām, Es iznīdēšu ļaudis virs zemes! saka Tas Kungs. "},
	{4, "4 Es pacelšu Savu roku pret Jūdu un visiem, kas dzīvo Jeruzālemē; Es iznīcināšu no šīs vietas to, kas palicis pāri no Baala, elka dievu kalpu vārdu līdz ar priesteriem, "},
	{5, "5 tāpat arī tos, kas uz jumtiem pielūdz debesu pulkus, pielūdz tos un tomēr zvēr kā pie Tā Kunga, tā arī pie Milkoma, "},
	{6, "6 un tos, kas atkrīt no Tā Kunga un tādēļ pēc Tā Kunga vairs neprasa un Viņu necienī! "},
	{7, "7 Esiet klusu Dieva Tā Kunga priekšā, jo Tā Kunga diena ir tuvu; Tas Kungs ir sataisījis kaujamo upuri un uz to ieaicinājis Savus izraudzītos viesus. "},
	{8, "8 Bet Tā Kunga kaujamā upura dienā notiks: Es piemeklēšu lielkungus un ķēniņa bērnus, un visus, kas staigā svešzemju drēbēs. "},
	{9, "9 Es piemeklēšu tai pašā dienā arī tos, kas lec pār slieksni un kas savu kungu elka dievu namu pilda ar varmācību un krāpšanu. "},
	{10, "10 Tai pašā dienā, saka Tas Kungs, atskanēs skaļi vaimanu kliedzieni no Zivju vārtu puses, kaucieniem līdzīgi saucieni otrā pilsētas daļā un spēcīgas vaimanas no pakalniem. "},
	{11, "11 Vaimanājiet jūs, Mahteša ielejas iedzīvotāji! Jo beigti ir visi tirgotāji, un iznīcināti ir visi naudas skaitītāji un pārsvērēji. "},
	{12, "12 Tai pašā laikā notiks, ka Es pārmeklēšu ar uguni visu Jeruzālemi un piemeklēšu tos ļaudis, kas joprojām guļ savā vecajā raugā un runā savā sirdī: Tas Kungs mums nedarīs ne labu, ne ļaunu! "},
	{13, "13 Viņu mantu izvazās, un viņu nami aizies galīgi postā. Viņi gan cels atkal namus, bet paši tajos nedzīvos, viņi dēstīs vīnadārzus, bet nedzers no tiem vīnu. "},
	{14, "14 Tā Kunga lielā diena ir tuvu, tā ir jau klāt un nāk steigdamās. Klau, Tā Kunga diena! Pat drošsirdīgākie karavīri kliedz izmisumā! "},
	{15, "15 Jo šī diena ir niknuma diena, tā ir skumju un baiļu diena, negaisa un vētras diena, tumsas un nakts melnuma diena, mākoņu un miglas diena, "},
	{16, "16 diena, kad atskanēs pret nocietinātām pilsētām un pret augstiem cietokšņu torņiem kaujas saucieni un tauru skaņas. "},
	{17, "17 Es iedvesīšu ļaudīm bailes, ka tie staigās apkārt taustīdamies kā akli, jo viņi ir grēkojuši pret To Kungu; viņu asinis izlies kā samazgas un viņu miesas izmetīs kā mēslus! "},
	{18, "18 Tā Kunga dusmības dienā viņus neglābs ne viņu sudrabs, ne zelts, un visu zemi aprīs Viņa niknuma uguns, jo ātru galu Viņš atnesīs visiem zemes iedzīvotājiem."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Pārbaudi sevi un atgriezies tu, kauna nepratēja tauta, "},
	{2, "2 pirms krīt spriedums, - kā pelus aizput diena - , pirms Tā Kunga dusmu karstums nāks pār jums, pirms pār jums nāks pati Tā Kunga dusmības diena! "},
	{3, "3 Meklējiet To Kungu, jūs visi nelaimīgie šai zemē, jūs, kas ievērojat Tā Kunga likumus; dzenieties pēc taisnības, kļūstiet pazemīgi, lai jūs Tā Kunga dusmu dienā varētu glābšanu atrast! "},
	{4, "4 Jo Gaca būs jāatstāj, un Aškalona kļūs neauglīgs klajums; dienas vidū izdzīs visus no Ašdodas, un Ekronu noslaucīs no zemes virsus. "},
	{5, "5 Bēdas tiem, kas dzīvo gar jūras malu, krētiešu tautai! Tā Kunga vārds nāks pār jums: Kānaāna, filistiešu zeme! Es tevi tā piemeklēšu, ka tur vairs nebūs iedzīvotāju! "},
	{6, "6 Gar jūras malu lai būtu tikai niecīgas ganu mītnes un sīklopu aploki. "},
	{7, "7 Šī zemes sloksne lai kļūst par īpašumu pāri palikušajiem no Jūdas nama, un lai viņi tur gana savus lopus. Vakaros lai viņi apmetas pārnakšņošanai Aškalonas namos, kad Tas Kungs, viņu Dievs, būs par viņiem apžēlojies un izbeigs viņu cietumu. "},
	{8, "8 Es esmu dzirdējis Moāba nievas un Amona bērnu paļas, ar kādām viņi ir apsmējuši Manu tautu, stāvēdami lielīdamies pie tās robežām. "},
	{9, "9 Tik tiešām, ka Es dzīvoju! saka Tas Kungs Cebaots, Israēla Dievs. Moābam jākļūst kā Sodomai un Amona bērniem kā Gomorai, viņu zemei kā nātrienei, kā sāls bedrei un kā tuksnesim uz mūžīgiem laikiem! Manas tautas pāri palicēji viņus paņems sev par laupījumu, un Manas tautas atlikums paņems viņu zemi sev par īpašumu! "},
	{10, "10 Tas viss viņiem lai notiek par viņu augstprātību, ka viņi nonicinājuši Tā Kunga Cebaota tautu un tukši lielījušies. "},
	{11, "11 Briesmīgs būs Tas Kungs pret viņiem, jo Viņš izskaudīs visus neīstos dievus virs zemes, un Viņu pielūgs visas tautas savās jūras salās, piesaukdami Viņu katrs savā dzīves vietā. "},
	{12, "12 Arī jūs, etiopiešus, nogalinās Mans zobens! "},
	{13, "13 Un Viņš izstieps Savu roku pret ziemeļiem un iznīcinās Asīriju. Ninivi Viņš pārvērtīs par neauglīgi kailatni, kas būs izkaltusi kā tuksnesis, "},
	{14, "14 kur vidū apmetīsies ganāmpulki un baros mitīs visādi zvēri; dzēses un eži taisīs sev naktsmītnes tās tempļu stabu pamatos, dziedātāju putni dziedās gaismas ailēs, kraukļi sēdēs uz sliekšņa, jo tempļa vidū būs izputēšana: ciedru koka plāksnes būs visas norautas. "},
	{15, "15 Tāda izskatīsies līksmā pilsēta, kas tik droši dzīvoja un runāja savā sirdī: es, un citas nav nevienas! - Kā tā nu ir kļuvusi par tuksnešainu klajumu, zvēriem par mitekli! Un visi, kas iet tai garām, svilpo, pasmejas priekā par to un atmet ar roku."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Bēdas tai nepaklausīgai, par netīru kļuvušai un varmācīgai pilsētai! "},
	{2, "2 Tā neklausa brīdinājumam, nedz arī ļauj sevi pamācīt; tā nepaļaujas uz To Kungu un negrib nākt pie sava Dieva. "},
	{3, "3 Tās augstākie ir viņu vidū kā rūcoši lauvas, un tās tiesneši ir kā vilki vakarā, kas neko no sava laupījuma neatstāj rītam. "},
	{4, "4 Tās pravieši ir vieglprātīgi, neuzticami cilvēki; tās priesteri sagandē svētumu un sagroza bauslību. "},
	{5, "5 Bet Tas Kungs, kas ir viņu vidū, ir taisns un nedara netaisnību; Viņš ik rītus ceļ gaismā Savu taisnību, un tur nekā netrūkst, bet bezdievīgais neprot kauna. "},
	{6, "6 Es esmu iznīcinājis tautas, sagrāvis pilis, tukši ir viņu lauku ceļi, ka tur neviens vairs nestaigā; izputinātas ir viņu pilsētas, un neviens vairs tur nedzīvo. "},
	{7, "7 Es domāju: tagad viņa Mani bīsies un pieņems pamācības, lai viņas mājokļus neizpostītu un nepiepildītos viss no tā, ar ko Es biju piedraudējis viņu pārmācīt. Bet patiesībā viņi savu rīcību padara vēl jo ļaunāku. "},
	{8, "8 Tāpēc, saka Tas Kungs, jums arī būs Mani jāgaida līdz tai dienai, kamēr Es celšos ar Savu liecību, ka Es spēju tiesāties un sapulcināt tautas un savest kopā ķēniņu valstis un izliet Savas dusmas pār tām, jā, visu Savu dusmu karstumu, jo visu pasauli aprīs Manu dusmu bargums! "},
	{9, "9 Un tad Es piešķiršu tautām šķīstas lūpas, lai viņas visas piesauc Tā Kunga Vārdu un Viņam vienprātībā kalpo. "},
	{10, "10 No viņpus Etiopijas ūdeņiem Man atvedīs Manus pielūdzējus, Manus izkaisītos ļaudis, un to pasniegs Man kā upura dāvanu. "},
	{11, "11 Tanī dienā tev vairs nebūs jākaunas par visiem saviem ļauniem darbiem, ar kādiem tu kādreiz esi apgrēkojusies pret Mani, jo Es izmetīšu tavus pārgalvīgi lepnos no tava vidus, lai tu pati vairs nelepotos pārgalvībā uz Mana svētā kalna, Jeruzāleme. "},
	{12, "12 Un Es tavā vidū atlicināšu pazemīgus un nabadzīgus ļaudis, kas savu cerību liks uz Tā Kunga Vārdu. "},
	{13, "13 Pārējie, kas vēl no Israēla atlikuši, nedarīs neko ļaunu un nerunās melus, un viņu mutē neatradīs viltus mēli; viņi paši būs ganāmais pulks, kas ganīsies mierā, un neviens tos netraucēs. "},
	{14, "14 Priecājies, Ciānas meita! Gavilē, Israēl! Priecājies un gavilē no visas sirds, tu Jeruzālemes meita! "},
	{15, "15 Jo Tas Kungs ir atsvabinājis tevi no soda un novērsis no tevis tavus ienaidniekus. Tas Kungs, Israēla ķēniņš, ir pie tevis. Ļaunuma tu vairs neredzēsi. "},
	{16, "16 Tanī pašā dienā sacīs Jeruzālemei: nebīsties, Ciāna! Nenolaid savas rokas bezspēcībā! "},
	{17, "17 Jo Tas Kungs, tavs Dievs, ir pie tevis, tavs spēcīgais glābējs; Viņš priecāsies par tevi, būs pret tevi mīļš, tev piedos un skaļi izpaudīs Savu prieku par tevi. "},
	{18, "18 Tos, kas bailēs tālumā skumst, nevarēdami piedalīties tavos svētkos, Es sapulcināšu vienuviet, jo viņi pieder tev, kaut arī tagad viņiem jācieš pazemojums. "},
	{19, "19 Redzi, Es tanī laikā saukšu pie atbildības visus tavus apspiedējus, Es gribu palīdzēt klibajiem un sapulcināšu visus izkaisītos, un gribu viņus iecelt slavā un godā visās zemēs, kur viņus ienīst. "},
	{20, "20 Tanī laikā Es jūs atvedīšu šurp, un tanī laikā Es jūs sapulcināšu vienkopus, jo Es gribu jūs izcelt ar slavu un godu visu tautu starpā ar to, ka Es pavisam izbeigšu jūsu gūstniecību jūsu pašu acu priekšā, saka Tas Kungs."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};