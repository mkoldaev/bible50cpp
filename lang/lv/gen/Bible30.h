#include <map>
#include <string>
class Bible30
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
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Še stāstītais ir tas, ko Amoss, kas pats piederēja pie ganiem Tekojā, bija redzējis parādībā nākotnē notiekam ar Israēlu Usijas, Jūdas ķēniņa, un Jerobeāma, Joasa dēla, Israēla ķēniņa, laikā, divus gadus pirms zemestrīces. "},
	{2, "2 Un viņš teica: Tas Kungs rūks kā pērkons no Ciānas un liks atskanēt Savai balsij no Jeruzālemes, tā ka zālainās ganības gani bēdāsies un Karmela virsotne izkaltīs. "},
	{3, "3 Tā saka Tas Kungs: Triju, vēl vairāk, četru Damaskas noziegumu dēļ Es negribu viņus saudzēt, tāpēc ka viņi ir kūluši Gileādu ar dzelzs kuļamiem rīkiem. "},
	{4, "4 Es metīšu uguni Hazaēla namā, tā aprīs Benhadada pilis. "},
	{5, "5 Es salauzīšu Damaskas vārtu aizšaujamos un iznīcināšu Bikat-Avenas iedzīvotājus un to, kas pašlaik tur savās rokās scepteri Bet-Ēdenā, tā ka lai sīriešu tauta tiktu aizvesta trimdā uz Kiru, saka Tas Kungs. "},
	{6, "6 Tā saka Tas Kungs: Triju, vēl vairāk, četru Gacas pārkāpumu dēļ Es viņus nesaudzēšu! Jo viņi ir aizveduši projām kā gūstekņus visus veselu apdzīvotu vietu iedzīvotājus un visus nodevuši Edomai. "},
	{7, "7 Bet Es likšu uzliesmot ugunij Gacas mūros, lai tā aprij viņu lepnās pilis. "},
	{8, "8 Un Es iznīcināšu Ašdodas iedzīvotājus un Aškalonā to, kā rokās pašlaik ir vara, un vērsīšu Savu roku pret Ekronu, lai iznīkst viss, kas vēl palicis no filistiešiem, saka Dievs Tas Kungs. "},
	{9, "9 Tā saka Tas Kungs: Triju, vēl vairāk, četru Tiras noziegumu dēļ Es tos nesaudzēšu! Jo viņi veselu apdzīvotu vietu iedzīvotājus kā gūstekņus visus nodevuši Edomai un nav atcerējušies brāļu starpā pastāvošo derību, "},
	{10, "10 bet Es likšu uzliesmot ugunij Tiras mūros, lai tā aprij viņu lepnās pilis. "},
	{11, "11 Tā saka Tas Kungs: Triju, vēl vairāk, četru Edomas noziegumu dēļ Es viņus nesaudzēšu! Jo viņi savu brāļu tautu vajājuši ar zobenu, aizmirsuši katru žēlsirdību no savas puses, joprojām plosās savās dusmās un nemitīgi patur sevī sava naida bargumu, "},
	{12, "12 bet Es metīšu Savu uguni Temanā, un tā iznīcinās visas lepnās pilis Bocrā. "},
	{13, "13 Tā saka Tas Kungs: Triju, vēl vairāk, četru Amona bērnu noziegumu dēļ Es viņus nesaudzēšu! Jo viņi Gileādā ir saplosījuši grūtas sievas, lai paplašinātu savas robežas, "},
	{14, "14 bet Es ielaidīšu uguni Rabas mūros, kas lai iznīcina viņu lepnās pilis, kad atskanēs trauksme, viņiem taisoties uz cīņu un saceļoties viesulim aukas brīdī. "},
	{15, "15 No turienes viņu ķēniņš tiks aizvests gūstā ar saviem dižciltīgajiem, saka Tas Kungs."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Tā saka Tas Kungs: Triju, vēl vairāk, četru Moāba noziegumu dēļ Es viņus nesaudzēšu! Tāpēc ka viņi sadedzinājuši kaļķos Edoma ķēniņa kaulus, "},
	{2, "2 Es likšu izcelties ugunij Moāba zemē, tā iznīcinās Kariota pilis, un Moābs aizies bojā lielā kņadā, atskanot kara troksnim ar bazūņu skaņām. "},
	{3, "3 Un Es iznīcināšu viņu vidū esošo tiesnesi un nogalināšu kopā ar to visus moābiešu dižciltīgos, saka Tas Kungs. "},
	{4, "4 Tā saka Tas Kungs: Triju, vēl vairāk, četru Jūdas noziegumu dēļ Es viņus nesaudzēšu! Tādēļ ka viņi nepilda Tā Kunga bauslību, neievēro Viņa likumus un ļaujas aizrauties no melu dievībām, kurām sekojuši jau viņu tēvi, "},
	{5, "5 tādēļ Es likšu ugunij uzliesmot Jūdas zemē, un tā izpostīs Jeruzālemes pilis. "},
	{6, "6 Tā saka Tas Kungs: Triju, vēl vairāk, četru Israēla noziegumu dēļ Es viņus nesaudzēšu, tāpēc ka viņi katru taisno pārdod par naudu un katru nabago par pāri kurpju. "},
	{7, "7 Viņi iemin nabago galvas pīšļos un vājos nostumj no ceļa! Kā tēvs, tā dēls iet pie tās pašas netikles, lai padarītu nesvētu Manu svēto Vārdu. "},
	{8, "8 Un viņi dzīro pie altāriem, atlaidušies uz drānām, kas iegūtas pret ķīlām, un dzer vīnu, kas iegūts par grēku nožēlnieku soda naudām, sava Dieva namā! "},
	{9, "9 Un Es taču viņu acu priekšā iznīcināju amoriešus, kas bija augumā tik gari kā ciedri un kam bija spēks un izturība kā ozoliem; Es iznīcināju augšgalā viņu augļus un apakšgalā viņu saknes. "},
	{10, "10 Es izvedu jūs arī no Ēģiptes zemes un četrdesmit gadus vadāju tuksnesī, lai jūs varētu pārņemt savā īpašumā amoriešu zemi. "},
	{11, "11 Es piešķīru dažiem no jūsu bērniem praviešu spējas un dažus no jūsu jaunekļiem izredzēju par nazīriešiem. Vai tas tā nav, Israēla bērni? saka Tas Kungs. "},
	{12, "12 Bet jūs šiem nazīriešiem dodat dzert vīnu un praviešiem savukārt pavēlat, sacīdami: jūs nedrīkstat pravietot! "},
	{13, "13 Redzi, tādēļ Es likšu jums šķobīties, kā šķobās rati, kad tie piekrauti ar kūlīšiem, "},
	{14, "14 ka tas, kam ātras kājas, neizbēgs skrienot, nedz stiprais, kam daudz spēka, būs spējīgs ko darīt, nedz varonis izglābs pats savu dzīvību, "},
	{15, "15 nedz arī loku šāvēji noturēsies savās vietās, un ātrs skrējējs nepagūs nekur aizbēgt, un arī jātniekam nebūs lemts izglābt savu dzīvību. "},
	{16, "16 Un pat tas, kas ir visdrošsirdīgākais starp drosmīgajiem, bēgs kails tanī dienā no cīņas lauka! - tā saka Tas Kungs."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Klausaities, ko Tas Kungs saka jums, Israēla bērni, visām ciltīm, ko Es esmu izvedis no Ēģiptes zemes: "},
	{2, "2 No visām ciltīm zemes virsū Es vienīgos jūs esmu atzinis; tāpēc Es jūs piemeklēšu par visiem jūsu pārkāpumiem! "},
	{3, "3 Ja divi kopā staigā, vai tad viņi nav savā starpā jau iepriekš sarunājušies? "},
	{4, "4 Un vai lauva rūc mežā, ja viņam nav laupījuma? Un vai jauns lauva liek atskanēt rūcienam no savas alas, ja viņš neko pats sev nav guvis? "},
	{5, "5 Vai putns iekrīt uz zemes cilpā, ja tur nav tam bijis lamatu valgs? Un vai kāds pacels cilpu no zemes, kas neko nav sagūstījusi? "},
	{6, "6 Ja pilsētā pūš tauri, vai ļaudis tad lai nesabītos? Vai var gadīties pilsētā kāda nelaime, kam Dievs nebūtu licis notikt? "},
	{7, "7 Jo Dievs Tas Kungs neko nedara, neatklājis Savu noslēpumu praviešiem, Saviem kalpiem. "},
	{8, "8 Lauva rūc, kurš gan lai nebaidītos? Dievs Tas Kungs ir runājis, kas gan tad lai nepravietotu? "},
	{9, "9 Sludiniet Asīrijas un Ēģiptes zemes pilīs un sakait: sapulcējieties Samarijas kalnos un vērojiet, kādas tur norisinās trokšņainas nekārtības un kādi varas darbi notiek viņu vidū! "},
	{10, "10 Viņi neatzīst nekādas taisnības, saka Tas Kungs, un ar noziegumiem un laupījumiem iegūtās bagātības viņi savāc savās pilīs. "},
	{11, "11 Tāpēc tā saka Dievs Tas Kungs: Šo zemi sāks spaidīt no visām pusēm ienaidnieks, tev atraus tavu varu un izlaupīs tavus greznos namus! "},
	{12, "12 Tā saka Tas Kungs: Kā gans izrauj lauvam no rīkles divus stilba kaulus vai kādu kripatiņu no saplosītā dzīvnieka auss, tā tiks izrauti Israēla bērni, kas mīt Samarijā, iespiedušies savu miera pilno gultu stūros, un Damaskā, atpūzdamies uz grezniem zviļņiem. "},
	{13, "13 Klausaities un aplieciniet to Jēkaba namam, saka Tas Kungs, Kungs Dievs Cebaots, "},
	{14, "14 jo tanī dienā, kad Es Israēlam piemeklēšu viņa grēkus, Es piemeklēšu arī Bēteles altārus un nolauzīšu altāra ragus, lai tie nokrīt zemē. "},
	{15, "15 Un Es sagraušu tiklab greznās ziemas, kā vasaras mītnes, un ar ziloņkaulu rotātām telpām būs jāpazūd no zemes virsus, un daudzus namus nopostīs! - tā saka Tas Kungs."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lv4 poems[] = {
	{1, "1 Uzklausait šo vārdu, jūs, Basanas govis, kas jūs esat Samarijas kalnā un nodarāt pāri trūcīgiem, nomācat nabagos un sakāt pastāvīgi saviem vīriem: Dodiet šurpu, lai varam dzīrot! "},
	{2, "2 Tas Kungs Dievs ir zvērējis pie Sava svētuma: Redzi, nāks dienas jums, kad jūs izvilks ar makšķeri un jūsu pēcnākamos ar zvejnieku kāšiem. "},
	{3, "3 Un pa mūru spraugām jūs iziesit, kā gadīsies, cita aiz citas, un jūs aizvedīs uz Hermona kalnu pusi, saka Tas Kungs, "},
	{4, "4 jā, nāciet šurpu uz Bēteli un kalpojiet grēkiem, un dodieties uz Gilgalu, lai varētu grēkot vēl vairāk, un nesiet ik rītus savus ziedojumus un ik trešajā dienā savu desmitās tiesas devu! "},
	{5, "5 Un kvēpiniet raudzētu mīklu pateicības ziedojumiem un nesiet vēl īpašus labprātīgus ziedojumus, un dariet to plaši zināmu arī citiem, jo to jau jūs darāt labprāt, jūs Israēla bērni, saka Tas Kungs. "},
	{6, "6 Tādēļ Es arīdzan jūsu zobiem esmu devis mieru visās jūsu pilsētās un visās vietās liku jums ciest maizes trūkumu, un tomēr jūs neatgriezāties pie Manis, saka Tas Kungs. "},
	{7, "7 Es aizturēju jums arī lietu, kaut gan līdz ražas ievākšanai bija vēl trīs mēneši, un Es liku lietum līt tikai pār vienu pilsētu un pār pārējām pilsētām Es lietum līt neliku; lietus kādreiz nolija tikai pār vienu tīrumu, un otrs, kas nedabūja lietu, nokalta. "},
	{8, "8 Un divas, pat trīs pilsētas devās uz vienu pilsētu, lai varētu padzerties ūdens, un neatrada tā pienācīgā daudzumā; tomēr jūs neatgriezāties pie Manis, saka Tas Kungs. "},
	{9, "9 Es spaidīju jūs ar sausumu un labības rūsu, un arī cirmeņi apēda visu, kas auga jūsu dārzos un vīna kalnos, uz jūsu eļļas un vīģes kokiem, un tomēr jūs neatgriezāties pie Manis, saka Tas Kungs. "},
	{10, "10 Es uzsūtīju jums mēri kā citkārt Ēģiptei; Es liku jūsu jauniem vēršiem dabūt galu no zobena, liku nolaupīt un aizdzīt jūsu zirgus, liku jums dziļi ieelpot nāsīs savu kara nometņu nelabo smaku, un tomēr jūs neatgriezāties pie Manis, saka Tas Kungs. "},
	{11, "11 Es liku daudz ko pie jums sagraut, kā Dievs pavisam sagrāva Sodomu un Gomoru; tad nereti jūs bijāt kā degoša pagale, ko izrauj no liesmām, un tomēr jūs neatgriezāties pie Manis, saka Tas Kungs. "},
	{12, "12 Tāpēc Es arī turpmāk tev tā darīšu, Israēl! Un, ja Es tev tā gribu darīt, tad sataisies, Israēl, lai tu varētu stāties sava Dieva priekšā! "},
	{13, "13 Jo redzi, Viņš ir tas, kas veido kalnus, rada vēju un atklāj cilvēkiem, kas Viņam padomā. Viņš liek ausmai sekot dziesnai, Viņš staigā pāri zemes augstumiem; Dievs Kungs Cebaots ir Viņa vārds."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct lv5 poems[] = {
	{1, "1 Uzklausiet, Israēla nama ļaudis, šos vārdus, jo man tie jums jāceļ priekšā kā raudu dziesma par jums: "},
	{2, "2 Israēla jaunava ir kritusi, lai nekad vairs neceltos; viņa nogrūsta pie zemes, un nav neviena, kas tai palīdzētu atkal tikt uz kājām. "},
	{3, "3 Jo tā saka Dievs Tas Kungs: Pilsēta, kas izgāja cīņā ar tūkstoti karavīru, saglabās no viņiem tikai simtu, un tai, kura iziet ar simts karavīriem, paliks pāri Israēla namā tikai desmit! "},
	{4, "4 Jo tā saka Tas Kungs Israēla namam: Meklējiet Mani, tad jūs dzīvosit! "},
	{5, "5 Bet meklējiet Bēteli un nenāciet uz Gilgalu, un neejiet uz Bēršebu! Jo Gilgalu aizvedīs projām sagūstītu un Bētele kļūs par Bet-Avenu. "},
	{6, "6 Meklējiet To Kungu, tad jūs dzīvosit! Lai Viņš Jāzepa namā neielaužas kā uguns, kas visu ko izposta un ko Bētelē neviens nevar nodzēst; meklējiet Viņu, "},
	{7, "7 jūs, kas tiesu pārvēršat vērmelēs un taisnību saminat putekļos. "},
	{8, "8 Viņš, kas radījis Sietiņu un Orionu, Viņš ir tas, kas pēc tumsas liek uzaust gaišam rītam un pēc dienas gaismas liek sabiezēt tumšai naktij, kas paceļ ūdeni no jūras un izlej to pār zemes virsu; Viņa vārds ir Tas Kungs. "},
	{9, "9 Viņš ir tas, kas rada sabrukumu spēcīgo vidū un sūta izpostīšanu nocietinātām pilsētām. "},
	{10, "10 Bet viņi nicina to, kas vārtos pārmāca, un ienīst to, kas runā patiesību. "},
	{11, "11 Tā kā jūs apspiežat nabagos un piedzenat no viņiem jo lielas labības nodevas, tad jūs nedzīvosit namos, ko esat cēluši no kaltiem akmeņiem; jūs nedzersit arī to vīnu, kura kokus jūs esat stādījuši labi ierīkotos vīnadārzos. "},
	{12, "12 Jo Es zinu, ka jūsu pārkāpumu ir daudz un smagi ir jūsu grēki; un jūs nomācat taisnīgos, ņemat uzpirkšanas dāvanas un nedodat taisnību nabagiem tiesā. "},
	{13, "13 Tādēļ prātīgais šai laikā cieš klusu, jo šie ir ļauni laiki. "},
	{14, "14 Meklējiet labo un ne ļauno, lai jūs varētu dzīvot, tad Dievs Tas Kungs Cebaots būs pie jums, kā jūs to arvien daudzināt. "},
	{15, "15 Ienīstiet ļauno un mīliet labo, un spriediet arvien vārtos tiesu pēc taisnības, tad Dievs, Tas Kungs Cebaots, būs žēlīgs arī Jāzepa nama pāri palikušajiem. "},
	{16, "16 Tādēļ tā saka Dievs, Tas Kungs Cebaots, visuvarenais Dievs: Visos laukumos atskanēs žēlas vaimanas, un visur pa ceļiem dzirdēs sakām: ak vai, ak vai! - un ļaudis uzaicinās arāju sērot un aicinās mirušo apraudāšanai raudu dziesmu pratējus. "},
	{17, "17 Visos vīnadārzos atskanēs vaimanas, jo Es iešu caur jūsu vidu! saka Tas Kungs. "},
	{18, "18 Bēdas tiem, kas ilgojas pēc Tā Kunga dienas! Ko tā jums dos? Jo Tā Kunga diena ir tumsa un ne gaisma! "},
	{19, "19 Tā būs līdzīga tam, kā kad vīrs bēgtu no lauvas un kristu lāča nagos, vai arī ja viņš laimīgs ienāktu namā un atbalstītos ar roku pret sienu, un viņam iedzeltu čūska. "},
	{20, "20 Jā, tiešām tumsa ir Tā Kunga diena un nevis gaisma, tā ir tumša bez gaismas spožuma! "},
	{21, "21 Es ienīstu jūsu svētku dienas un neieredzu tās un nevaru panest pat jūsu sapulču smaku! "},
	{22, "22 Un, ja jūs Man nesat dedzināmos un ēdamos upurus, Man tomēr nav liela prieka par tiem, un jūsu barotu teļu pateicības upurus Es negribu ne redzēt! "},
	{23, "23 Mities jel skandināt Man savas ķerkstošās dziesmas! Un Es negribu ne dzirdēt tavu cītaru skaņu! "},
	{24, "24 Bet lai tiesa plūst kā straume un taisnība kā mūžīgs strauts! "},
	{25, "25 Vai jūs, Israēla nams, Man tuksnesī visus četrdesmit gadus nesāt kaujamos un ēdamos upurus? "},
	{26, "26 Jūs nēsājāt gan apkārt Sikutu, jūsu ķēniņu, un Kiunu, jūsu pašu iedomu tēlu, jūsu dievu zvaigzni, kurus jūs paši sev bijāt darinājuši. "},
	{27, "27 Tādēļ Es jūs aizvedīšu tālu viņpus Damaskas! saka Tas Kungs, Dievs Cebaots ir Viņa vārds."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct lv6 poems[] = {
	{1, "1 Bēdas jums, lepnajiem Ciānā, tāpat arī tiem, kas paļaujas uz Samarijas kalnu, visiem jums, pašas pirmās tautas dižciltīgajiem visu tautu starpā, pie kurām sevi pieskaita arī Israēla nams! "},
	{2, "2 Aizejiet uz Kalni un skatieties, no turienes dodieties uz lielo pilsētu Hamatu un tad ejiet lejup pret filistiešu pilsētu Gātu; vai jūs esat labāki nekā šīs ķēniņa valstis, vai jūsu robežas garākas nekā viņu robežas? "},
	{3, "3 Bēdas tiem, kas domā, ka nelaimes diena vēl tālu, un kas piebīda sev arvienu tuvāk varas darbu krēslu! "},
	{4, "4 Jūs, kas guļat ziloņkaula gultās un izstiepjaties savos atpūtas zviļņos, kas apēdat ganāmpulku treknākos aunus un barotos teļus no laidara vidus, "},
	{5, "5 kas strinkšķināt savas cītaras un sacerat dziesmas, un izveidojat jaunus mūzikas instrumentus kā Dāvids, "},
	{6, "6 kas jūs dzerat vīnu no dārgiem kausiem, ziežaties ar visdārgāko eļļu un esat bez rūpēm par zaudējumiem, kādi notiek Jāzepa namam. "},
	{7, "7 Tādēļ viņi būs pirmie trimdinieku starpā, ko aizvedīs trimdā, un tad arī izbeigsies šo plītnieku prieki. "},
	{8, "8 Jo Dievs Tas Kungs ir zvērējis un apstiprinājis pats pie Sevis, tā saka Tas Kungs, Dievs Cebaots: Man riebjas Jēkaba augstprātība, un Es ienīstu viņa lepnās pilis, un Es nodošu pilsētu ienaidnieku rokās ar visu, kas tajā. "},
	{9, "9 Un notiks, ja kādā namā būs atlikuši desmit vīri, viņiem taču būs jāmirst. "},
	{10, "10 Ja tad nu kāds viņu tuvs radinieks, kas kādu no viņiem mirušu grib sadedzināt, iznesīs no nama viņa kaulus un jautātu tam, kas vēl ir palicis dziļāk nama iekšienē: vai ir vēl kāds pie tevis? - tad tas atbildēs: nav neviena! Un ārā stāvošais viņam teiks: ciet klusu! Jo Tā Kunga Vārdu nedrīkst pieminēt. "},
	{11, "11 Jo redzi, Tas Kungs ir pavēlējis, ka lielos namus būs sagraut drupās, bet mazos namus tā, ka tie sabrūk gabalos. "},
	{12, "12 Kas var ar zirgiem skriet pa klintīm un ar vēršiem art klintis? Jo jūs pārvēršat tiesu žultī un taisnības augļus vērmelēs. "},
	{13, "13 Jūs priecājaties par Lodabaras ieņemšanu un sakāt: vai mēs neesam ar saviem pašu spēkiem vien ieņēmuši Karnaimu? "},
	{14, "14 Tādēļ redzi, saka Tas Kungs Dievs Cebaots, Es celšu pret jums, Israēla nams, kādu tautu, kas jūs spaidīs no Hamatas ceļa līdz pat Tuksneša strautam!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct lv7 poems[] = {
	{1, "1 Tas visuvarenais Kungs ļāva man skatīt šādu parādību. Un redzi, tur stāvēja kāds, kas laida siseņus pasaulē, kad sāka zaļot atāls; šis atāls bija tas, kam bija jāizaug pēc pirmās ķēniņa pļaujas. "},
	{2, "2 Kad siseņi bija visā zemē zāli noēduši, es teicu: Ak, Kungs, Kungs, esi žēlīgs! Kas gan palīdzēs Jēkabam pastāvēt, jo viņš pats jau tā ir niecīgs! "},
	{3, "3 Tad Tam Kungam kļuva notikušā žēl, un Viņš teica: Tas nenotiks! "},
	{4, "4 Dievs Tas Kungs man lika atkal skatīt parādību. Un redzi, Dievs Tas Kungs aicināja uguns liesmu, lai ar to sodītu; tā iznīcināja dziļās dzelmes un aprija aramo zemi. "},
	{5, "5 Tad es lūdzu: Ak, Kungs, Kungs, mitējies taču! Kas palīdzēs Jēkabam pastāvēt, jo viņš pats jau tā ir tik niecīgs? "},
	{6, "6 Tad Tam Kungam kļuva arī tā žēl, un Tas Kungs, Visuvarenais, teica: Tam nebūs notikt! "},
	{7, "7 Viņš ļāva man no jauna skatīt parādību. Un raugi, Tas Kungs stāvēja uz stāvas mūra sienas, un svērteņa aukla ar svinu galā bija Viņa rokā. "},
	{8, "8 Un Tas Kungs man jautāja: Ko tu redzi, Amos? Es atbildēju: Svērteni ar svinu galā. Tad Tas Kungs sacīja: Redzi, Es gribu iegremdēt Savu svērteni pašā vidū Savai Israēla tautai, un turpmāk Es vairs nemaz nebūšu saudzīgs pret to. "},
	{9, "9 Nē! Bet Īzāka kalnu altārus nopostīs un Israēla svētumus sagraus, un pret Jerobeāma namu Es celšos ar zobenu rokā! "},
	{10, "10 Tad Bēteles priesteris Amacija sūtīja ziņu Jerobeāmam, Israēla ķēniņam, un lika viņam sacīt: Amoss kūda Israēla ļaudis uz dumpi pret tevi; zeme vairs nevar paciest viņa vārdus. "},
	{11, "11 Lūk, ko Amoss bija teicis: Jerobeāms mirs no zobena, un Israēlu aizvedīs projām no viņa zemes gūstā. "},
	{12, "12 Bet tad Amacija teica Amosam: Tu, redzētāj, celies un bēdz uz Jūdas zemi! Ēd tur savu maizi un tur pravieto! "},
	{13, "13 Bet Bētelē tu ilgāk vairs nedrīksti pravietot, jo tā ir ķēniņam svēta vieta, un tur ir arī ķēniņa valsts galvenā mītne! "},
	{14, "14 Amoss tad atbildēja Amacijam un teica: Es neesmu pravietis, arī ne pravieša dēls, bet es esmu gans, kas audzē meža vīģes. "},
	{15, "15 Bet Tas Kungs paņēma mani no ganāmā pulka un sacīja man: Ej un uzstājies kā pravietis pret Manu Israēla tautu! "},
	{16, "16 Tādēļ uzklausi Tā Kunga vārdu! Tu saki: Nesludini neko pret Israēlu un nemāci neko pret Īzāka namu. "},
	{17, "17 Tāpēc Tas Kungs saka par tevi tā: tava sieva kļūs pilsētā par netikli, un zobens nesīs nāvi taviem dēliem un tavām meitām, tavu zemi izmērīs ar mērījamo auklu un izdalīs, un tu pats mirsi nešķīstā zemē, bet Israēls tiks vestin aizvests projām no savas zemes!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct lv8 poems[] = {
	{1, "1 Dievs Tas Kungs lika man skatīt šādu parādību. Un redzi, tur bija grozs, un tajā bija ienākušies augļi. "},
	{2, "2 Un Viņš man jautāja: Ko tu redzi, Amoss? Es atbildēju: Grozu un tajā ienākušos augļus. Tad Tas Kungs man teica: Manai Israēla tautai ir pienācis gals, Es turpmāk vairs nemaz nebūšu saudzīgs pret to. "},
	{3, "3 Tanī dienā dziesmas pilīs pārvērtīsies par kaukšanu; visās vietās gulēs daudz miroņu, kurus klusībā tur nometīs. - Tā teica Tas Kungs. "},
	{4, "4 Uzklausiet šo vēsti, jūs, kas nomācat nabago un izdeldējat zemes bēdu ļaudis, "},
	{5, "5 jūs, kas sakāt: Kad tad nu jaunais mēness būs pāri, ka varam pārdot labību, un kad būs pagājis sabats, ka varam atvērt labības klētis, samazinot mēru, paaugstinot cenu un viltojot svaru, "},
	{6, "6 ka beidzot mēs varētu nopirkt nabagos par naudu un trūcīgos par pāri kurpju un pelavas pārdot par graudiem? "},
	{7, "7 Pret šādu Jēkaba augstprātību Tas Kungs ir sacījis, zvērēdams: Tiešām, visus šādus viņa darbus Es nekad neaizmirsīšu! "},
	{8, "8 Vai šā iemesla dēļ nebūtu jānodreb zemei un visiem tās iedzīvotājiem jāizsamist? Tiešām, zemei tad būtu jāpārplūst kā Nīlai, tai būtu jāpaceļas un jānokrītas kā Ēģiptes straumei! "},
	{9, "9 Un notiks tanī dienā, saka Dievs Tas Kungs, Es likšu saulei norietēt jau pusdienas laikā un likšu tumsai nākt pār zemi visgaišākā dienas stundā. "},
	{10, "10 Es visas jūsu svētku dienas pārvērtīšu sēru dienās un visas jūsu dziesmas raudu dziesmās; Es ietērpšu jūsu gurnus maisu drānās, Es likšu mesties jūsu galvām plikām; Es likšu jums visiem pārdzīvot sēras, kādas izjūt cilvēks sava vienīgā dēla nāves dēļ. Un visu šo lietu gals būs rūgta nelaimes diena! "},
	{11, "11 Redzi, nāks dienas, saka Tas Kungs, visvarenais Dievs, Es sūtīšu zemē badu, ne maizes badu, nedz arī slāpes pēc ūdens, bet slāpes uzklausīt Tā Kunga vārdus. "},
	{12, "12 Lai viņi skraidītu grīļodamies no vienas jūras līdz otrai, no ziemeļiem pret austrumiem un meklētu pēc Tā Kunga vārda - un tomēr to neatrastu. "},
	{13, "13 Tai pašā dienā slāpju mocītas saļims skaistās jaunavas un brašie jaunekļi, "},
	{14, "14 kas tagad zvēr pie Samarijas lāsta un saka: tik tiešām, ka tavs Dievs dzīvo, Dan! Tik tiešām, ka pareģe dzīvo Bēršebā! - Jo tie kritīs un nekad vairs nepiecelsies."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct lv9 poems[] = {
	{1, "1 Un es redzēju To Kungu stāvam pār altāri, un Viņš sacīja: Dod triecienu vārtu palodai, lai stabu balsti satricinās, mūri sagāžas un to drupas lai krīt viņiem visiem uz galvas! Kas no viņiem paliks pāri, tos Es nokaušu ar zobenu; nevienam bēdzējam no viņiem nebūs izbēgt, neviens izbēgušais neizglābsies! "},
	{2, "2 Un, ja arī viņi izlauztos cauri līdz pazemei, tad Mana roka tomēr viņus no turienes izvilks, un, ja viņi paceltos pret debesīm, tad Es viņus tomēr nogrūdīšu zemē. "},
	{3, "3 Un, ja tie noslēptos Karmela kalna virsotnē, Es viņus tomēr tur sameklēšu un nodabūšu zemē, un, ja viņi Manu acu priekšā paglābtos jūras dibenā, Es pavēlēšu jūras čūskai, lai tā viņus turpat sadzeļ; "},
	{4, "4 un, ja viņi sagūstīti soļotu savu ienaidnieku priekšā, tad Es tomēr pavēlēšu zobenam, lai tas viņus turpat nobeidz, jo Es vērsīšu Savus skatus uz viņiem - viņiem par nelaimi un ne par labu! "},
	{5, "5 Un tāds ir Viņš, Tas Kungs, Dievs Cebaots. Jo, kad Viņš aizskar zemi, tad tā izkūst un visi tās iedzīvotāji bēdājas; zemes virsa tad paceļas tik augstu kā Nīla uzplūdos un atkal nokrītas tik zemu kā šī Ēģiptes straume. "},
	{6, "6 Viņš ir tas, kas Savu plašo un mūžīgo mājokli uzcēlis debesīs un Savu pagaidu mītni nostiprinājis zemes virsū; Viņš pavēl pār ūdeņiem jūrā un liek tiem izlieties pār visu zemi - Viņa vārds ir Tas Kungs. "},
	{7, "7 Vai jūs, Israēla bērni, Man neesat gluži kā kušītu dēli? saka Tas Kungs. Vai Es neesmu izvedis Israēlu no Ēģiptes zemes, filistiešus no Kaftoras un aramiešus no Kiras? "},
	{8, "8 Redzi, Tā Kunga acis noraugās uz grēcīgo ķēniņa valsti, lai Es to noslaucītu no zemes virsus; taču Jēkaba namu Es pilnīgi gan neizdeldēšu, saka Tas Kungs, "},
	{9, "9 jo raugi, Es pavēlēšu sijāt Israēla namu tautu starpā tā, kā sietā sijā labības graudus, un neviens grauds nenokrīt zemē. "},
	{10, "10 Visiem grēciniekiem Manā tautā būs mirt no zobena, tiem, kas saka: ļaunums nepienāks mums tik tuvu, tas mūs nepārsteigs! "},
	{11, "11 Tai pašā laikā Es sabrukušo Dāvida mītni uzcelšu no jauna, Es aizsegšu ar pinumiem tajā radušos caurumus un plaisas, atjaunošu to, kas būs tai nolūzis, un beigās izveidošu to no jauna pilnīgi tādu, kāda tā kādreiz ir bijusi senajās dienās, "},
	{12, "12 tā, lai viņi iegūtu sev par īpašumu visus pāri palikušos Edomas ļaudis un visas tautas, kuru starpā daudzināts Mans Vārds! - saka Tas Kungs, kas to visu dara. "},
	{13, "13 Raugi, nāks dienas, saka Tas Kungs, kad vienā laikā varēs kārtot zemi sējai un pļaut, varēs spiest vīnogas un sēt, kad visi kalni pilēs no salda vīna, visi pakalni būs auglīgi un tos klās augļu pārpilnība. "},
	{14, "14 Tad Es atsaukšu atpakaļ Savu Israēla tautu no trimdas, un viņi uzcels izpostītās pilsētas un tās arī apdzīvos, viņi dēstīs vīnadārzus un dzers no tiem vīnu, viņi ierīkos augļu dārzus un baudīs to augļus. "},
	{15, "15 Es viņus iedēstīšu stipri viņu pašu zemē, ka tos vairs nekad neizrautu no viņu zemes, ko Es viņiem esmu devis! saka Tas Kungs, tavs Dievs."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};