#include <map>
#include <string>
class Bible22
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
	struct lv4	{ int val; const char *msg; };
	struct lv5	{ int val; const char *msg; };
	struct lv6	{ int val; const char *msg; };
	struct lv7	{ int val; const char *msg; };
	struct lv8	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Salamana augstā dziesma. "},
	{2, "2 Lai viņš skūpsta mani ar savu lūpu skūpstu, jo tava mīlestība ir tīkamāka par vīnu! "},
	{3, "3 Brīnišķa ir tavu ziežu smarža; pats tavs vārds ir it kā maigi iztriepta dzidra ziedes eļļa, tāpēc arī jaunavas tevi tā mīl. "},
	{4, "4 Velc mani sev līdzi, tad tecēsim mēs! Ķēniņš ieveda mani savās dzīvojamās telpās. - Mēs priecājamies un esam iepriecinātas par tevi; mēs kavējamies domās vairāk pie tavas mīlestības nekā pie vīna. Rimtās un tikušās jaunavas mīl tevi. "},
	{5, "5 Es esmu melna, bet tiešām mīlīga, jūs Jeruzālemes meitas, kā Kedara lauku mitekļi, kā Salamana paklāji. "},
	{6, "6 Neskatieties uz mani, ka es esmu tik melna, jo saule mani tā nodedzinājusi! Manas pašas mātes dēli ir bijuši dusmīgi uz mani, viņi ielikuši mani par vīna dārzu uzraudzi, bet manas pašas vīna dārzu es esmu atstājusi novārtā un neuzraudzītu. "},
	{7, "7 Saki man tu, mans draugs, ko tā mīl mana dvēsele, - kur tu gani, kur tu atdusies pusdienas laikā? Lai man nebūtu velti jāklejo šurpu turpu ap tavu palīgu ganāmiem pulkiem. "},
	{8, "8 Ja tu to vēl nezinātu, tu skaistākā starp sievām, tad izej tālākās ārēs pa aitu ganāmpulku pēdām un gani savus kazlēniņus gar aitu ganu mitekļiem! "},
	{9, "9 Tu man liecies līdzīga, mana draudzene, faraona ratu lepnajam aizjūgam. "},
	{10, "10 Tavi vaidziņi ir mīlīgi aizsegti ar važiņām, un tavu kaklu grezno rotu vijas! "},
	{11, "11 Mēs darināsim tev zelta rotu sloksnītes ar sīkiem sudraba ielaidumiem. "},
	{12, "12 Kamēr ķēniņš pie galda, smaržo mana nardes puķe. "},
	{13, "13 Mans draugs ir man kā mirru pušķītis, kas novietots starp manām krūtīm. "},
	{14, "14 Mans draugs man ir kā ciprešu ziedu čemurs Engedijas vīna dārzos. "},
	{15, "15 Redzi, mana draudzene, tu esi skaista; skaista tu esi, tavas acis ir tādas kā baložiem. "},
	{16, "16 Raugies, mans draugs, arī tu esi skaists un mīlīgs! Redzi, mūsu guļasvieta ir zaļumu klājā; "},
	{17, "17 mūsu ēku stabi, sijas un dziedri ir ciedri, mūsu sienu pārsegums ir cipreses."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Es esmu Šaronas narcise un ielejas lilija. "},
	{2, "2 Kā lilija starp ērkšķiem, tā izceļas mana draudzene starp tautas meitām. "},
	{3, "3 Kā ābele starp meža kokiem, tā izceļas mans draugs starp tautas dēliem. Es sēžu kārotajā pavēnī, un mana ēnas devēja koka augļi ir saldi manai mutei. "},
	{4, "4 Viņš ved mani vīna pagrabā, un viņa mīlestība ir viņa karogs pār mani. "},
	{5, "5 Viņš iedveš man ar puķēm jaunu dzīvības spēku un atspirdzina mani ar āboliem, jo es sirgstu ar mīlestību. "},
	{6, "6 Viņa kreisā roka guļ zem manas galvas, un viņa labā roka glāsta mani. "},
	{7, "7 Es jūs no sirds lūdzu, jūs Jeruzālemes meitas, jūsu mīlestības un uzmanības dēļ pret stirnām un briežu mātēm laukos, neskarieties klāt manai draudzenei un nemodiniet viņu, kamēr viņai pašai neiepatīkas mosties! "},
	{8, "8 Klau, tur dzirdama mana drauga balss! Raugi, viņš nāk un, sīkiem soļiem palēkdamies, dodas augšup kalnos un lēkā no pakalna uz pakalna! "},
	{9, "9 Mans draugs ir līdzīgs jaunam stirnāzim vai jaunam briedim. Raugi, viņš stāv aiz mūsu sienas, raugās pa logu un lūkojas cauri skadriņiem! "},
	{10, "10 Mans draugs atbild un saka man: celies, mana draudzene, mana skaistule, un nāc šurpu! "},
	{11, "11 Jo redzi, ziema ir pagājusi, lietus ir mitējies, un lietus posms ir galīgi izbeidzies! "},
	{12, "12 Zemes virsu pārklāj puķes, klāt ir dziesmu laiks - pavasaris, un ūbeles balss jau dzirdama mūsu zemē. "},
	{13, "13 Vīģes kokiem sariesušies mezglaini pumpuri, vīna koki ir izplaukuši un izdveš savu smaržu. Piecelies, mana draudzene, un nāc, mana daiļā, nāc šurp pie manis! "},
	{14, "14 Tu, mana dūja klinšu spraugās, slēpta akmeņu plaisās, parādi man savu vaigu un liec man dzirdēt savu balsi, jo tava balss ir salda un tavs vaigs ir mīlīgs! "},
	{15, "15 Gūstiet mums nebēdnes lapsas, mazās lapsas, kas posta vīna dārzus, jo tagad ziedos ir arī mūsu vīna dārzi! "},
	{16, "16 Mans draugs ir mans, un es esmu viņa draudzene, kas gana zem augstajām lilijām. "},
	{17, "17 Iekām vēl diena metas dzestra un ēnas zūd, griezies atpakaļ, mans draugs, kļūsti kā jauns stirnāzis vai kā jauns briedis starp kalniem, kurus plaisas šķir citu no cita."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Naktī savā guļasvietā es meklēju viņu, savu draugu, ko tā mīl mana dvēsele. Es meklēju, bet es viņu neatrodu. "},
	{2, "2 Es nolemju celties augšā, paklejot pa pilsētas gātēm un ielām un pameklēt viņu, ko mana dvēsele tā mīl! Es meklēju un tomēr viņu neatradu. "},
	{3, "3 Mani sastapa sargi, kas apstaigā pilsētas ielas, un es viņiem jautāju: vai jūs neesat redzējuši viņu, ko tik dziļi mīl mana dvēsele? "},
	{4, "4 Un, kad es biju drusku pagājusi viņiem garām, es atradu viņu, ko tik stipri mīl mana dvēsele. Es viņu turu ciet un neatlaidīšu viņu, kamēr es viņu neatvedīšu savas mātes namā, viņas, manas labās, manas dzemdētājas, istabā. "},
	{5, "5 Es jūs no sirds lūdzu, jūs Jeruzālemes meitas, jūsu mīlestības un uzmanības dēļ pret stirnām un briežu mātēm laukos, neskarieties klāt manai draudzenei un nemodiniet viņu, kamēr viņai pašai neiepatīkas mosties! "},
	{6, "6 Kas ir tas, kas tur paceļas no tuksneša kā augšup kāpjošs dūmu stabs, kā kvēpinājuma vilnis no mirrēm un vīraka un no kaltētu augu pārdevēju dažādu garšu un smaržu zāļu putekļiem? "},
	{7, "7 Raugi, ap Salamana guļamo krēslu stāv sešdesmit spēcīgu vīru no pašiem spēcīgākajiem Israēlā. "},
	{8, "8 Viņiem visiem ir zobeni, un viņi prot ar tiem veikli rīkoties; katram ir zobens pie viņa gurna naktī draudošo iespējamo briesmu dēļ! "},
	{9, "9 Ķēniņš Salamans bija licis darināt sev pārnesamu guļamo krēslu no Libanona ciedru koka. "},
	{10, "10 Tā balsti ir izgatavoti no sudraba, tā atzveltne un pārklājums ir no zelta, pats sēdeklis purpura, bet no iekšpuses šo krēslu ir dāsni izdaiļojušas Jeruzālemes meitas aiz mīlestības pret savu ķēniņu. "},
	{11, "11 Izejiet ārā, jūs Ciānas meitas, un apskatiet ķēniņu Salamanu ķēniņa vainagā, ar kuru viņa māte ir viņu vainagojusi viņa kāzu un viņa sirds prieka dienā!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lv4 poems[] = {
	{1, "1 Redzi, mana draudzene, tu esi skaista, tiešām, skaista tu esi! Tavas acis ir kā baložu acis starp tavām divās grīstītēs savītajām matu cirtām. Tavas matu cirtas kopā ir kā ganāms pulks kazu, kas dodas lejup pa Gileāda kalna nogāzi. "},
	{2, "2 Tavi zobi ir kā baltu avju bars ar vienādi pusapcirptu vilnu, kad tās nāk no peldes. Ikvienai no viņām ir dvīņi, un nav nevienas viņu starpā, kam to nebūtu. "},
	{3, "3 Tavas lūpas ir kā sarkana purpura aukla, un tava mute ir mīlīga; tavi vaigi ir kā granātābola sārtās plāksnes starp tavām divās grīstītēs savītajām matu cirtu pīnēm; pāri tām glaužas tavs šķidrauts. "},
	{4, "4 Tavs kakls ir kā Dāvida tornis ar puslokā uz priekšu izvirzītu aizsargu valni, ap kuru sakārti vesels tūkstotis vairogu un daudzu spēcīgu vīru visdažādākie ieroči. "},
	{5, "5 Abas tavas krūtis ir kā jauni stirnas dvīņi, kas ganās zem lilijām. "},
	{6, "6 Kad diena metīsies dzestra un ēnas zudīs, es došos pie mirru kalna un pie smaržīgā vīraka pakalna. "},
	{7, "7 Lai no kurienes tevi uzskatītu, tu arvienu esi skaista, mana draudzene, un tev nekur nav nekādas vainas! "},
	{8, "8 Nāc man līdzi, mana līgava, lejup no Libanona kalniem, nāc man līdzi projām no Libanona kalniem, virzies šurpu še no Amanas augstienes, no Senīra un Hermona virsotnēm, no lauvu mītnēm, no leopardu kalniem! "},
	{9, "9 Tu esi paņēmusi man manu sirdi, mana māsa, mana mīļā līgava, ar vienas savas acs skatu un ar vienu sava kakla viju! "},
	{10, "10 Cik skaista ir tava mīlestība, mana māsa, mana mīļā līgava! Tava mīlestība ir tīkamāka par vīnu, un tava ziežu smarža pārspēj visas pārējās spēcīgās smaržas! "},
	{11, "11 Tavas lūpas, mana līgava, ir it kā pāri plūstošas medus kāres; piens un medus ir zem tavas mēles, un tavu drēbju smarža ir kā Libanona kalnu gaisa smarža! "},
	{12, "12 Mana māsa, mana līgava, tu esi kā aizkorēts dārzs, kā aizslēgts avots, kā aizzīmogota aka. "},
	{13, "13 Viss, kas no tava stāva riešas, ir kā jauks granātābeļu un dārgu augļu dārzs, ciprešu puķes ar nardēm, "},
	{14, "14 ar īstajām nardēm un safrānu, ar kuplām skalbēm un kanēļa augiem, ar dažādiem kvēpināmo vielu kokiem, mirrēm un alvejām; visi šie augi izdveš vispatīkamākās smaržas. "},
	{15, "15 Tu esi kā dārza avots, dzīvo ūdeņu izteka, un kā strauti, kuri plūst no Libanona kalniem. "},
	{16, "16 Mosties, ziemeli, un traucies, dienvidu vējš! Un drāzies ar sparu cauri manam dārzam, lai pil uz visām pusēm tajā esošo augu rasojošās spēcīgās smaržas! "},
	{17, "17 Lai mans draugs nāk savā dārzā un bauda no tā dižciltīgiem augļiem!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct lv5 poems[] = {
	{1, "1 Es esmu ienācis, mana māsa, mana mīļā līgava, savā dārzā; es plūcu savas mirres un savu balzamu, es ēdu zeltaino medu no savas medus kāres un tās šūnām, es dzeru savu vīnu līdz ar pienu. Ēdiet, mani mīļie, un dzeriet, mani draugi, priecājieties mīlestībā un noreibstiet labsajūtā! "},
	{2, "2 Es guļu, bet mana sirds ir nomodā. Lūk! Es dzirdu sava drauga balsi, viņš pieklauvē un saka: atver man, lai es ieeju pie tevis, mana mīļā draudzene, mana māsa, mana dūja, mana cildenā! Jo mana galva ir pilna rasas, un manas matu cirtas ir pilnas nakts valguma! "},
	{3, "3 Es esmu novilkusi savu tērpu, kā lai es to atkal uzvelku?! Es esmu nomazgājusi savas kājas, kā lai es tās atkal notriepju? "},
	{4, "4 Bet mans draugs izbāza savu roku caur režģu spraugu; tas lika līdz pašiem dziļumiem ietrīcēties manai sirdij ilgās pēc viņa, un mani prāti samulsa, viņa balsi un vārdus izdzirdot. "},
	{5, "5 Tad es piecēlos, lai atdarītu savam draugam; pa maniem roku dilbiem lejup ritēja šķidro mirru straumītes, un dārga ziežu eļļa pilēja no maniem pirkstiem uz durvju aizšaujamā. "},
	{6, "6 Un, kad es beidzot atvēru durvis savam draugam, tad viņš bija aizgājis un nebija vairs redzams. Mana dvēsele bija ārkārtīgi satraukta, kamēr viņš runāja. Tad es meklēju viņu, bet neatradu; es viņu saucu, bet viņš man neatbildēja. "},
	{7, "7 Tad mani sastapa sargi, kas apstaigāja pilsētu; viņi mani sasita līdz asinīm un ievainoja, un citi sargi uz mūra noņēma man manu šķidrautu! "},
	{8, "8 Es nopietni lieku jums pie sirds, Jeruzālemes meitas, ja jūs atrodat manu draugu, tad sakait viņam, ka es esmu sasirgusi aiz mīlestības! "},
	{9, "9 Ar ko tavs draugs ir pārāks par citiem draugiem, tu visuskaistākā starp sievām? Ar ko tavs draugs ir pārāks par citiem draugiem, ka tu mums to tā nozvērini? "},
	{10, "10 Mans draugs ir žilbinoši balts ar sārtu ādas krāsu, viņš ir īpašs un izceļas starp tūkstošiem. "},
	{11, "11 Viņa galva ir vistīrākais un vissmalkākais zelts. Viņa matu šķipsnas ir cirtainas, un tās ir melnas kā kraukļi. "},
	{12, "12 Viņa acis ir kā baložu acis pie ūdens strautiem; tās ir dzidras it kā pienā mazgātas, skaistas un lielas, un to āboli veidoti daiļi noapaļotā pilnīgumā. "},
	{13, "13 Viņa vaigi ir kā garšaugu dobes, kā balzama zāles; viņa lūpas ir kā lilijas, kuras pil no to slacinātājām mirrēm. "},
	{14, "14 Viņa roku dilbi ir vienās zelta aprocēs, kas vēl bagātīgi izdaiļotas ar tirkīziem. Viņa miesa ir kā mākslas darbs no tīra ziloņkaula, kas safīriem rotāts. "},
	{15, "15 Viņa lieli ir kā marmora pīlāri, kuri balstās uz vistīrākā zelta pamatiem. Viņa stāvs ir kā viens no diženākiem Libanona kalniem, kas tikpat izcils kā tajā augošie ciedri. "},
	{16, "16 Viņa mute ir salda, un visā savā būtībā viņš ir ārkārtīgi pievilcīgs! Tāds ir mans draugs, jā, tiešām, tāds ir mans mīļākais, jūs Jeruzālemes meitas!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct lv6 poems[] = {
	{1, "1 Kurp tad ir aizgājis tavs draugs, tu visskaistākā starp sievām? Uz kurieni tavs draugs virzījis savu ceļu? Mēs mēģināsim kopā ar tevi viņu meklēt. "},
	{2, "2 Mans draugs ir nokāpis dziļi lejup savā dārzā pie savām garšaugu dobēm, lai viņš tur savos dārzos pastaigātos un plūktu lilijas. "},
	{3, "3 Mans draugs ir mans, un es esmu viņa draudzene - viņa, kas gana liliju līcī. "},
	{4, "4 Tu esi skaista, mana draudzene, kā Tirca, mīlīga kā Jeruzāleme, bet reizēm gan briesmīga kā naidīgi karapulki! "},
	{5, "5 Novērs savas acis no manis, jo tās mulsina mani! Tavi mati ir kā ganāmpulks kazu, kas, lejup virzīdamās, novietojušās Gileāda kalna nogāzē. "},
	{6, "6 Tavi zobi ir kā ganāmpulks avju, kas nāk no peldes; ikvienai no tām ir dvīņi, un neviena starp viņām nav neauglīga. "},
	{7, "7 Tavi vaigi ir kā granātābola sārtās puses starp tavām divās grīstītēs savītajām matu cirtu pīnēm. "},
	{8, "8 Sešdesmit ir ķēniņienes, astoņdesmit blakussievas, un jaunavu daudzums ir neizskaitāms. "},
	{9, "9 Bet tikai viena vienīga ir mana dūja, mana rimtā un cildenā, tikai viena ir savai mātei pati mīļākā un savas mātes izraudzītā, kurai viņa deva dzīvību. Un, kad meitas viņu redzēja, tad viņas viņu teica svētlaimīgu esam, un ķēniņienes un blakussievas viņu slavēja un daudzināja. "},
	{10, "10 Kura ir starp viņām, kas mirdzēdama iznirst no tumsas kā rīta blāzma, skaista kā mēness, starojoša kā saule, briesmīga kā naidīga karaspēka bari? "},
	{11, "11 Es biju nokāpis lejup savā riekstu dārzā, lai apskatītu jaunos riekstu kociņus strauta malā un lai palūkotos, vai vīnakoks rieš pumpurus un vai granātābolu koki jau izplaukuši. "},
	{12, "12 Es nezināju, ka manas dvēseles trauksme mani neapzinīgi bija novedusi pie dižciltīgā Amī-Nadila ratiem."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct lv7 poems[] = {
	{1, "1 Atgriezies jel, Sulamīte, atgriezies! Vērs atpakaļ savus soļus un pagriez pret mums savu vaigu, lai mēs varētu tevi skatīt! - Un ko jūs tagad saskatāt Sulamītē - vispievilcīgāko daiļumu, līdzīgu rotaļu dejai Mahanajimā? "},
	{2, "2 Cik cēla ir tava gaita tavās kurpēs, tu valdnieka meita! Tavi gurni savu daiļo apaļumu izliekumā ir kā divi gredzeni, ko darinājusi gudra lietpratēja roka. "},
	{3, "3 Tavs klēpis ir kā apaļš kauss, kurā nekad netrūkst dzēriena valgmes. Tava miesa ir kā kviešu kopa, kas apspraudīta ar lilijām. "},
	{4, "4 Abas tavas krūtis ir kā divi jauni stirnu dvīņi. "},
	{5, "5 Tavs kakls ir kā ziloņkaula tornis. Tavas acis ir dzidras kā Hešbonas dīķi pie Batrabima vārtiem. Tavs deguns ir kā tornis Libanona kalnos, tas, kas noraugās uz Damasku. "},
	{6, "6 Tava galva uz tava ķermeņa ir kā Karmela kalns, un tev pār pleciem plūstošās matu cirtas ir kā krokās sakārtots tumši sārts valdnieka purpurs; pats ķēniņš ir šo cirtu savaldzināts! "},
	{7, "7 Cik skaista un cik tīkama esi tu, cildena prieka un jauku pārdzīvojumu pilnā mīlestība! "},
	{8, "8 Tu esi augumā smuidra kā palma, un tavas krūtis ir līdzīgas vīna ķekariem. "},
	{9, "9 Es sacīju sev: man būtu jāuzkāpj palmu kokā un jāsatver tā zari, lai tavas krūtis man tiešām šķistu kā ķekari pie vīna koka un tava deguna elpai lai būtu ābolu smarža. "},
	{10, "10 Un tava mute lai būtu kā labs vīns, kas manam draugam labi patīk un liek runāt pat snaudošo lūpām. "},
	{11, "11 Mans draugs ir mans, un visa viņa sirds ilgošanās ir pēc manis! "},
	{12, "12 Nāc, mans draugs, lai izejam laukos un lai pārnakšņojam ciemos! "},
	{13, "13 Un lai mēs agri varētu uzkāpt vīna dārzos un redzētu, vai vīna koks rieš pumpurus, vai tā ziedi veras vaļā un vai granātābeles plaukst; tur es tev dāvināšu savu mīlestību. "},
	{14, "14 Mīlestības āboli smaržo saldi, un uz novietnes virs mūsu durvīm ir dažādi augstvērtīgi augļi. Mans draugs, es esmu tev tur sataupījusi labākos gan no šā, gan arī pat vēl no pagājušā gada ražas."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct lv8 poems[] = {
	{1, "1 Ak, kaut tu būtu mans brālis, kas būtu zīdis manas mātes krūtis! Būtu es tevi tad kaut kur laukā sastapusi, es tevi skūpstītu no visas sirds, un neviens nedrīkstētu mani par to nicināt. "},
	{2, "2 Es tevi ņemtu aiz rokas un vestu tevi manas mātes namā, kur tev mani būtu jāmāca; es tev tur dotu dzert ar garšvielām jauktu vīnu un manu granātābolu raudzēto sulu. "},
	{3, "3 Viņa kreisā roka ir zem manas galvas, un viņa labā roka glāsta mani. "},
	{4, "4 Es no sirds lūdzu, jūs Jeruzālemes meitas, lai jūs priekšlaikus nesatrauktu un neatmodinātu manī mīlestību, nedz arī liktu tai kaut kā citādi rosīties manī, iekāms tas tai pašai patīk! "},
	{5, "5 Kas ir tā, kas kāpj augšup no tuksneša, atbalstīdamās pret savu draugu? - Zem ābeles es pamodināju tevi; tur tevi sāpēs ir gaidījusi piedzimstam tava māte, tur tevi laidusi pasaulē viņa, kas tevi dzemdējusi. "},
	{6, "6 Piespied mani kā zīmogu pie savas sirds un ļauj, lai es uzspiežos kā zīmoggredzens uz tavas rokas! Jo mīlestība ir spēcīga kā nāve, un tās karstums ir varens kā elle; tās versme ir ugunīga, un tās liesmas ir kā Dieva liesmas. "},
	{7, "7 Lieli ūdeņi nevar apdzēst mīlestību, nedz arī ūdens straumes to apslīcināt un nomākt; un, ja kāds pat visu sava nama pārticību būtu ar mieru atdot par mīlestību, tad tomēr viņš paliktu tikai par apsmieklu! "},
	{8, "8 Mums ir maza māsa, un viņai vēl nav krūšu; ko mēs lai darām ar savu māsu tajā dienā, ja kāds taisītos viņu precēt? "},
	{9, "9 Ja viņa ir mūris, tad mēs varētu pie tā uzcelt sudraba priekšnocietinājumu, bet, ja viņa ir durvis, tad mēs tās varētu nostiprināt ar ciedru dēļiem. "},
	{10, "10 Es esmu mūris, un manas krūtis ir kā torņi; viņa acīm es esmu pilnība, un tajās es saskatīju apmierinājumu. "},
	{11, "11 Salamanam ir vīna dārzs Baal-Hamonā; viņš iznomāja vīna dārzu tā sargiem; ikvienam no sargiem būtu bijis jādod viņam par augļiem tūkstoš sudraba gabali. "},
	{12, "12 Man pašai piederīgais mans vīna dārzs ir manā priekšā. Tie tūkstoš sudraba gabali pieder tev, mans Salaman! Bet divi simti lai iet viņa augļu sargiem. "},
	{13, "13 Dārgā, tu, kas mīti tais dārzos, liec atskanēt savai balsij un man to dzirdēt; mani biedri jau veltī tai visu savu uzmanību! "},
	{14, "14 Steidzies tu, mans draugs, un esi kā jauns stirnāzis vai kā jauns briedis smaržīgajos ar garšaugiem apstādītajos kalnos!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};