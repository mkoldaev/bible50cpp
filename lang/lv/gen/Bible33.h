#include <map>
#include <string>
class Bible33
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
	struct lv4	{ int val; const char *msg; };
	struct lv5	{ int val; const char *msg; };
	struct lv6	{ int val; const char *msg; };
	struct lv7	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Šis ir Tā Kunga vārds, kas nāca pār Mihu no Morešetas Jūdas ķēniņu Jotāma, Ahasa un Hiskijas valdīšanas laikā parādībā par Samariju un Jeruzālemi. "},
	{2, "2 Uzklausait to, visas tautas, ievēro to, zeme un visi, kas to apdzīvojat! Pats Tas Kungs ir liecinieks pret jums, Tas Kungs no Sava svētā nama! "},
	{3, "3 Jo redzi, Tas Kungs atstāj Savu vietu, nolaižas zemē un staigā pa augstākām zemes virsotnēm, "},
	{4, "4 tā ka kalni zem Viņa soļiem izkūst un ielejas saplaisā gabalos - kā vasks kūst uguns tuvumā un kā izzūd ūdens, kas plūst lejup pa stāvu nogāzes vietu. "},
	{5, "5 Tas viss ir noticis Jēkaba noziegumu un Israēla nama grēku dēļ! Bet kāds ir Jēkaba noziegums? Vai tā nav Samarija? Un kas rīkoja Jūdas elka dievu altārus? Vai ne Jeruzāleme? "},
	{6, "6 Un Es pārvērtīšu Samariju par akmeņu kaudzi tīrumā, par vīnadārza ierīkošanas vietu; pilsētas akmeņus Es novelšu ielejā, un Es atsegšu vaļā tās pamatus. "},
	{7, "7 Un visi tās izgrieztie elku tēli jāsadauza gabalos, un visas tiem pienestās netiklās mīlas veltes jāsadedzina ugunī; visus viņu elkus Es veltīšu iznīcībai, jo par netiklības naudu tie ir savākti un darināti un tiem jākļūst atkal par netiklības atlīdzību! "},
	{8, "8 Tādēļ es sērošu un vaimanāšu, es staigāšu basām kājām un bez virsdrēbēm! Es vaimanāšu kā šakāļi un sērošos kā strausi! "},
	{9, "9 Jo viņas gūtās vātis nav dziedināmas, tās sniedzas līdz Jūdai, līdz manas tautas vārtiem - līdz Jeruzālemei. "},
	{10, "10 Nesludiniet par to Gātā, nelieciet atskanēt savām raudām Akojā; vārtieties pīšļos Bet-Leafrā! "},
	{11, "11 Tev, Safīra, ar visu kaunu būs jāatstāj savs miteklis; Caānana paliks, un Bet-Haecelas sēras traucēs jūs tur apmesties. "},
	{12, "12 Marota nespēs iepriecināt sevi par labumu zaudējumu, jo uzbrukušās briesmas nāca no Tā Kunga un ir aizsniegušās līdz Jeruzālemes vārtiem. "},
	{13, "13 Tu, Lahiša, iejūdz savus skrējējus zirgus ratos un brauc projām, jo tu esi bijusi Ciānas meitai viņas ierosinātāja uz grēkiem un tevī sāka izraisīties Israēla pārkāpumi. "},
	{14, "14 Tādēļ tev būs jādod atlaišanas dāvanas Morešetas Gātai, šķiroties no tās. Ar Ahsibas pilsētu Israēla ķēniņi pievilsies. "},
	{15, "15 Es atvedīšu tev, Mareša, mantinieku, un Israēla godība atnāks līdz Adullāmas alai. "},
	{16, "16 Nodzen sev matus un liec apgriezt sev bārdu savu maigo, bet negodā piedzīvoto bērnu dēļ, lai tavs pakausis kļūtu pliks kā noplūkts ērglis, jo tavi bērni ir aizvesti projām no tevis."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Bēdas tiem, kas izgudro netaisnību pret citiem un lolo, izstiepušies savās guļasvietās, ļaunus nodomus un tos īsteno rīta gaismā, jo viņu rokās ir vara! "},
	{2, "2 Viņi ar varu piesavinās laukus un atņem mājas, kas viņiem iepatīkas; tā viņi rīkojas varmācīgi pret ikvienu nama īpašnieku un pret viņa mantoto īpašumu. "},
	{3, "3 Tāpēc Tas Kungs saka tā: Redzi, Man ir nodomā pret šo cilti kas ļauns, un tāpēc jūs neizglābsit no tā savus kaklus un nestaigāsit apkārt tik lepni, jo pārdzīvojamais laiks ir baigs laiks! "},
	{4, "4 Tai pašā dienā par jums dziedās joku dziesmu, un pēc tam tūliņ atskanēs raudu dziesma: Ir beigas! Mēs esam pilnīgi izpostīti! Manas tautas mantojumu Viņš nodos svešās rokās, ak, kā man Viņš to atņem! Mūsu tīrumi nodoti atkritējiem! "},
	{5, "5 Tiešām, jums nebūs neviena, kas jums iemērītu daļu Tā Kunga draudzē. "},
	{6, "6 Neaizraujieties un nesludiniet! tā viņi sludina, jo tādas lietas jau nesludina; mēs tādēļ tomēr nenokļūsim kaunā! "},
	{7, "7 Vai nolādēts ir Jēkaba nams? Vai tev šķiet, ka Tas Kungs ir tik straujš Savās dusmās? Vai Tā Kunga Gars ir par ierobežotu, vai tas, kas noticis, ir tiešām Dieva darbi? - Vai Viņa vārdi nav patīkami tiem, kas bez vainas staigā? "},
	{8, "8 Bet jūs - tie, kas pret manu tautu esat uzstājušies kā ienaidnieki! No apmetņiem jūs noplēšat grezno uzšuvi, jūs nolaupāt mierīgiem garāmgājējiem tiklab svārkus, kā apmetni, kā to nereti dara tie, kas atgriežas no kara. "},
	{9, "9 Manas tautas sievas jūs ar varu izstumjat no viņu patīkamajiem namiem, un viņu mazajiem bērniem jūs atraujat manas godības rotu uz mūžīgiem laikiem. "},
	{10, "10 Tādēļ celieties un dodieties ceļā! Jo šī zeme nav jums paliekama vieta, tādēļ ka tā nešķīsta, tā ved postā, un par savu nešķīstību tā tiks postīt izpostīta. "},
	{11, "11 Ja kāds nāktu, kas grozās pēc vēja, un jums sludinātu viltu un melus un stāstītu, kā viņiem jādzer un jādzīro, tad tas būtu šai tautai piemērotais sludinātājs. "},
	{12, "12 Tiešām gan, Es sapulcinādams sapulcināšu tevi, Jēkab, un arī pāri palikušos Israēlā Es savedīšu kopā; kā avis Es viņus novietošu vienkopus stiprā kūtī un kā ganāmo pulku aplokos, lai visas malas būtu pilnas cilvēku trokšņa. "},
	{13, "13 Viņu priekšā ies šķēršļu salauzējs. Viņi izlauzīsies un izies pa vārtiem; viņu ķēniņš ies viņiem pa priekšu; un Tas Kungs būs viņu vadonis."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Un es sacīju: Uzklausiet taču jūs, Jēkaba nama galvenie, un jūs, Israēla nama vadoņi! Vai jums neklātos tiesu un taisnību zināt? "},
	{2, "2 Bet jūs ienīstat labo un mīlat ļauno; jūs dīrājat viņiem ādu nost no miesas un plēšat nost miesu no viņu kauliem, "},
	{3, "3 un aprijat manas tautas miesu, un, kad jūs viņas ādu būsit novilkuši no miesas, jūs salauzīsit arī viņas kaulus, sadalīsit viņu gabalos, liekot tos kā cepeti podā un vārot kā gaļu katlā. "},
	{4, "4 Tādēļ, kad jūs, kaut arī skaļi kliegdami, piesauksit To Kungu, Viņš jūs neuzklausīs, bet aizsegs Savu vaigu jūsu priekšā, kā jūs to ar savu ļauno rīcību esat izpelnījušies. "},
	{5, "5 Tā saka Tas Kungs par praviešiem, kas maldina manu tautu: tie sludina mieru, kad tiem ir ko ēst, bet tur, kur viņiem neko nedod mutē, pret tiem viņi izsludina karu. "},
	{6, "6 Tādēļ lai klājas neziņas nakts pār jums bez kādas paredzēšanas, un lai pār jums mīt tumsa bez kādas nākamo lietu izmaņas; lai saule noriet pār šiem praviešiem, un lai pār viņiem aptumšojas diena. "},
	{7, "7 Tad redzētāji stāvēs nokaunējušies un zīlnieki, cerībās vīlušies, nosarks, un visi viņi paslēpsies savās bārdās, tādēļ ka Dievs neatbild. "},
	{8, "8 Bet es esmu Tā Kunga spēka un Gara pilns, pilns tiesas un varonīga stipruma, lai pasludinātu Jēkabam viņa uzticības laušanu un Israēlam viņa grēkus. "},
	{9, "9 Tādēļ uzklausiet jūs, Jēkaba nama galvenie, un jūs, Israēla nama vadoņi, jūs, kas nicināt taisnību un visu, kas taisns, apgriežat otrādi, "},
	{10, "10 jūs, kas ceļat Ciānu ar asinsizliešanu un Jeruzālemi ar netaisnību! "},
	{11, "11 Tās priekšnieki spriež tiesu par samaksu, tās priesteri māca tieslietas par atlīdzību, tās pravieši tulko likteni par naudu un turklāt paļaujas uz To Kungu un saka: Vai tad Tas Kungs nav mūsu vidū? Mums ļaunums neuzies! "},
	{12, "12 Tāpēc tieši jūsu dēļ Ciānu uzars kā tīrumu un Jeruzālemi pārvērtīs par drupu kaudzi, un šī nama kalns kļūs par mežainu augstieni!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lv4 poems[] = {
	{1, "1 Bet visu dienu galā kalns, uz kura atrodas Tā Kunga nams, stāvēs jo stipri, būdams augstāks nekā visi citi kalni, paceldamies augstu pāri visiem pakalniem, un visas tautas steigsies pie tā. "},
	{2, "2 To starpā būs arī daudzas citas tautas, tās ies un sacīs: Nāciet, lai steidzamies aug-šup Tā Kunga kalnā un ejam Jēkaba Dieva namā, lai Viņš mums māca Savus ceļus, ka lai mēs staigājam Viņa tekas! - Jo no Ciānas izies bauslība un Tā Kunga vārds no Jeruzālemes. "},
	{3, "3 Viņš spriedīs tiesu daudzu lielu tautu starpā un izšķirs strīdus lietas stiprām tautām pat tālās zemēs. Tās pārkals zobenus lemešos un savu šķēpu galus par vīna dārznieku nažiem. Neviena tauta nepacels zobenu pret otru un nemācīsies vairs karot. "},
	{4, "4 Bet tie ikviens sēdēs un dzīvos bez bailēm zem sava vīna un vīģes koka, jo nebūs neviena, kas tiem iedvestu bailes, jo to ir noteikusi Tā Kunga Cebaota mute. "},
	{5, "5 Jo ikviena tauta staigā sava dieva vārdā, bet mēs lai staigājam Tā Kunga, mūsu Dieva, Vārdā mūžīgi mūžam! "},
	{6, "6 Tai pašā dienā, saka Tas Kungs, Es sapulcināšu klibos un savākšu kopā tos, kas bijuši izkaisīti un trimdā, kā arī tos, kam Es esmu uzsūtījis kādu ļaunumu, "},
	{7, "7 un Es darīšu klibos par atlikumu un tālu aizdzītos par varenu tautu, un Tas Kungs būs viņu ķēniņš Ciānas kalnā no šā laika un mūžīgi. "},
	{8, "8 Un tu, ganāmo pulku sargu torni, tu, Ciānas meitas nocietinātais uzkalns, pie tevis nonāks un tevī ieies agrākā pirmatnējā valsts vara, Jeruzālemes meitas ķēniņvalsts. "},
	{9, "9 Kāpēc tad tu tagad kliedz tik skaļi? Vai tev nav ķēniņa? Jeb vai tavi padomdevēji ir aizgājuši bojā, ka tevi tā pēkšņi ir sagrābušas sāpes kā dzemdētāju sievu grūtā stundā? "},
	{10, "10 Lokies šais sāpēs, paciet tās un vaidi, Ciānas meita, kā dzemdētāja sieva! Jo tev tagad jādodas prom no pilsētas, tev jādzīvo laukā un jānonāk līdz Bābelei, bet tur tu atradīsi glābiņu, tur Tas Kungs tevi atpestīs no tavu ienaidnieku rokas! "},
	{11, "11 Bet pašlaik pret tevi pulcējušās daudzas svešas tautas un apspriežas savā starpā: lai viņa tiek sagānīta, ka mēs ar prieku noraugāmies Ciānā! "},
	{12, "12 Bet viņi nezina Tā Kunga apslēptos nodomus un neizprot to, kas Viņam padomā, jo Viņš viņus savācis kā kūlīšus uz kuļamā klona. "},
	{13, "13 Tādēļ celies, Ciānas meita, un sāc kult! Es tevi apveltīšu ar dzelzs ragiem un vara nagiem, un tu sakulsi smalkās drumstalās daudzas tautas un šo tautu salaupīto veltīsi pateicībā Tam Kungam; arī visu viņu mantību tu novēlēsi visas pasaules Kungam. "},
	{14, "14 Bet tagad, karotāja, bruņojies! Mēs esam ielenkti, un ar rīksti viņi sitīs pa vaigu Israēla tiesnesi."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct lv5 poems[] = {
	{1, "1 Bet tu, Bētleme Efratā, kas esi maza starp tūkstošiem no Jūdas, no tevis nāks tas, kam jābūt par valdnieku Israēlā un kura izcelšanās meklējama sensenos laikos, mūžības pirmlaikos. "},
	{2, "2 Tādēļ Viņš atstās viņus līdz tam laikam, kamēr tā, kam jādzemdē, dzemdēs; tad arī pāri palikušie brāļi atgriezīsies atpakaļ pie Israēla bērniem. "},
	{3, "3 Un Viņš stāvēs un ganīs Savu tautu Tā Kunga spēkā un Tā Kunga, sava Dieva, Vārda godībā. Un viņi dzīvos drošībā, jo Viņš kļūs varens līdz pat pasaules galiem. "},
	{4, "4 Un Viņš būs miers. - Ja Asurs iebruktu mūsu zemē un sāktu postīt mūsu namus, tad mēs varētu raidīt viņam pretī septiņus ganu cilšu priekšniekus un astoņus novadu vecākos, "},
	{5, "5 kas gāzīs postā Asura zemi ar zobeniem un Nimroda zemi ar atvēztu zobena asmeni. Un tā Viņš izglābs mūs no asīriešiem, ja tie ienāks mūsu zemē un staigās pa mūsu robežām. "},
	{6, "6 Un pāri palikušie no Jēkaba nama būs citu tautu starpā kā Tā Kunga rasa un kā lietus pilieni uz zāles, kas nekā negaida no cilvēkiem un nepaļaujas uz cilvēku bērniem. "},
	{7, "7 Tiešām, Jēkaba atlikums būs starp svešām tautām kā lauva starp meža zvēriem, kā jauns lauvēns avju ganāmā pulkā; kurp vien tas noklīst, viņš visur visu saplosa un ar kājām nomin, tā ka nav nekāda glābiņa. "},
	{8, "8 Lai tava roka ir augsti pacelta pret taviem pretiniekiem, un lai visi tavi ienaidnieki top izdeldēti! "},
	{9, "9 Un tanī dienā notiks, saka Tas Kungs, Es tev atņemšu visus tavus zirgus un iznīcināšu tavus kaujas ratus, "},
	{10, "10 un Es izdeldēšu tavas zemes pilsētas un sagraušu visas tavas nocietinātās vietas. "},
	{11, "11 Un Es iznīcināšu buršanu no tavas rokas, un tavā vidū vairs nebūs zīlnieku. "},
	{12, "12 Un Es satriekšu gabalos tavus izgrieztos elku tēlus un tavus izlietos elka dievu stabus tavā vidū, lai tu vairs nemestos uz sava vaiga pie zemes tava paša roku darba priekšā. "},
	{13, "13 Es iznīdēšu tavus elku kokus no tava vidus un izdeldēšu tavas pilsētas. "},
	{14, "14 Un Es ar dusmām un atriebēja bargumu piemeklēšu visas tautas, kuras nav gribējušas būt paklausīgas."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct lv6 poems[] = {
	{1, "1 Klausaities taču, ko saka Tas Kungs: Celies un sāc savu uzstāšanos tiesā kalnu priekšā un ļauj pakalniem sadzirdēt savu balsi! "},
	{2, "2 Klausaities jūs, kalni, kā Tas Kungs ies tiesā, un arī jūs, spēcīgie zemes pamati, jo Tas Kungs grib iet tiesā ar Savu tautu un grib sodīt Israēlu! "},
	{3, "3 Ko Es esmu tev nodarījis, Mana tauta, un ar ko Es tevi būtu apkaitinājis? Atbildi jel Man to! "},
	{4, "4 Es taču izvedu tevi no Ēģiptes zemes un atsvabināju tevi no tavas verdzības nama, un sūtīju tev pa priekšu Mozu, Āronu un Mirjamu. "},
	{5, "5 Atceries taču to, Mana tauta, kādus nodomus bija lolojis Balaks, moābiešu ķēniņš, un ko viņam atbildēja Bileāms, Beora dēls, kā arī to, kas notika ceļā no Sitimas līdz Gilgalai, lai tu saprastu, ka Tas Kungs jums darījis tikai labu! "},
	{6, "6 Kā lai es tuvojos Tam Kungam? Vai lai es nometos zemē augstā Dieva priekšā? Vai lai es tuvojos Viņam ar dedzināmiem upuriem, veltījot Viņam gadu vecus telēnus? "},
	{7, "7 Vai var iegūt Tā Kunga labpatiku ar daudziem tūkstošiem aunu, ar desmit tūkstošām eļļas straumju? Jeb vai man jādod par manu pārkāpumu mans pirmdzimtais, manas miesas auglis par manas dvēseles grēkiem? "},
	{8, "8 Tev, cilvēk, ir sacīts, kas ir labs un ko Tas Kungs no tevis prasa, proti - darīt taisnību, mīlēt žēlastību un pazemīgi staigāt sava Dieva priekšā! "},
	{9, "9 Klau! Tā Kunga vēstījuma balss atskan pa visu pilsētu - ir gudrība bīties Tavu Vārdu. Ņem vērā rīksti un arī, kas to sūta! "},
	{10, "10 Vai arvien vēl neatrodas bezdievīgo namos netaisna manta kopā ar sasodīto samazināto labības mēru? "},
	{11, "11 Jeb vai lai Es attaisnoju nepareizos svarus un somā līdzi nēsājamos viltotos atsvarus, "},
	{12, "12 ar kuriem viņu bagātnieki, kas nereti ar varmācību kļuvuši bagāti, nodara tik daudz netaisnības? Un viņu mājinieki runā melus, un viņu pašu mutē ir nepatiesa mēle. "},
	{13, "13 Tāpēc Es tev sodam sagādāšu visai sāpīgas ciešanas un tavu grēku dēļ tevi izpostīšu. "},
	{14, "14 Tu ēdīsi, bet nebūsi paēdis, savās iekšās tu pastāvīgi sajutīsi bada tukšumu. Un, ko tu noliksi pie malas, to tu tomēr nesataupīsi, un, kas tev vēl paliks pāri, to Es iznīcināšu ar zobenu. "},
	{15, "15 Tu gan sēsi, bet tu nepļausi, tu audzināsi olīvas, spiedīsi eļļu, un tu tomēr nesvaidīsies ar to, tu liksi spaidā vīnogas, bet tu nedzersi no tām darinātu vīnu. "},
	{16, "16 Jo tu sekoji Omrija mācībām un ievēroji visas Ahaba nama izdarības, un jūs sekojāt tām, paklausīdami šā nama padomiem. Tādēļ Es tevi nodošu izpostīšanai un tavus iedzīvotājus apsmieklam, un jums būs jācieš Manas tautas kauns!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct lv7 poems[] = {
	{1, "1 Bēdas man! Jo man klājas kā tādam augļu novākšanas laikā, kas vīnadārzā salasa ražas atlikumus, kad vairs neatrod neviena ēšanai derīga ķekara un arī nevienas pirmās ražas vīģes, ko mana sirds tā kāro! "},
	{2, "2 Dievbijīgie ir izmiruši šai zemē, un taisnīgo vairs nav ļaužu starpā; visi slāpst tikai pēc asinīm, viņi cenšas cits citam izlikt valgus, jo tie viens otru uzlūko par medījumu. "},
	{3, "3 Viņu rokas gatavas darīt ļaunu; ko grib novada valdnieks, to izpilda tiesnesis par maksu. Tie, kam vara, izsaka ļaunas vēlēšanās aiz tīrās vieglprātības un groza lietas, kā viņiem patīk. "},
	{4, "4 Labākie viņu starpā ir kā ērkšķi un godīgākie ir kā ērkšķu dzīvžogs. Bet, kad pienāks tava sludinātāju diena un kad tev draudēs barga piemeklēšana, tad viņi nezinās, kur izeja. "},
	{5, "5 Neviens lai neuzticas savam tuvākam, neviens lai nepaļaujas uz savu draugu! Noslēdz savas mutes vārtus pat tai sievai, kas guļ tev pie krūtīm! "},
	{6, "6 Jo dēls nicina un nopaļā tēvu, meita uzstājas pret māti, vedekla ir pret vīramāti, un cilvēka ienaidnieki ir viņa pašamājinieki. "},
	{7, "7 Bet es noraugos uz To Kungu un gaidu uz Dievu, manas glābšanas nesēju; mans Dievs mani uzklausīs! "},
	{8, "8 Nepriecājies par mani, mana ienaidniece, ja es guļu nogāzts pie zemes: es atkal celšos kājās, un, ja es arī mītu tumsā, tad tomēr Tas Kungs ir mana gaisma! "},
	{9, "9 Es panesīšu Tā Kunga dusmas, jo es jau esmu pret Viņu grēkojis, kamēr Viņš izšķirs manu lietu un dos man taisnību; Viņš mani izvedīs gaismā, tā ka es ar prieku skatīšu Viņa taisnību. "},
	{10, "10 Manai ienaidniecei tas būs jāredz un pašai par lielu kaunu arī jāatzīst, viņai, kas tagad man saka: Kur ir Tas Kungs, tavs Dievs? Manas acis ar gandarījumu redzēs, ka viņu tad kā dubļus samin uz ielas. "},
	{11, "11 Nāks diena, kur atkal no jauna uzcels tavus mūrus, diena, kur tavas robežas sniegsies atkal tālu. "},
	{12, "12 Tanī dienā nāks pie tevis no Asīrijas un Ēģiptes pilsētām, no Ēģiptes līdz Eifratai, no vienas jūras līdz otrai, no viena kalna līdz otram. "},
	{13, "13 Bet zeme paliks par neauglīgu atmatu savu iedzīvotāju dēļ, un tas būs sods par viņu ļaunajiem darbiem. "},
	{14, "14 Bet Tu gani ar Savu gana vēzdu Savu tautu, šo ganāmo pulku, kas Tev pieder kā mantojums, Savus sīklopus, kas dzīvo atdalīti meža kalnājā, Karmela vidū; laid viņiem ganīties atkal Basanā un Gileādā kā kādreiz vecos laikos! "},
	{15, "15 Es likšu viņiem pieredzēt atkal brīnumus kā tai laikā, kad viņi izgāja no Ēģiptes zemes. "},
	{16, "16 Citas tautas to redzēs un paliks kaunā ar visu savu varu, tie liks roku uz mutes, un viņu ausis būs kurlas. "},
	{17, "17 Lai viņi laiza putekļus kā čūskas, kā zemes tārpi, lai viņi, bailēs trīcēdami, lien laukā no savām pilīm un tuvojas Tam Kungam, mūsu Dievam, lai tie izjūt bailes Tavā priekšā. "},
	{18, "18 Kur ir tāds Dievs, kā Tu esi, kas piedod grēkus un neatmaksā Savas tautas atlikušajiem viņu noziegumus, kas mūžīgi netur dusmas? Jo Tev patīk žēlastība. "},
	{19, "19 Viņš atnāks pie mums atkal atpakaļ, Viņš apžēlosies par mums; mūsu vainas Viņš griezīs atkal par labu. Visus mūsu grēku darbus tu liec iemest jūras dziļumos. "},
	{20, "20 Tu parādīsi Jēkabam uzticību un dāvināsi žēlastību Ābrahāmam, ko Tu esi mūsu tēviem apsolījis ar zvērestu kopš senajām dienām."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};