#include <map>
#include <string>
class Bible8
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
	struct lv4	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Soģu valdības laikā zemē izcēlās bads. Kāds vīrs no Jūdas Bētlemes gāja, lai apmestos Moāba zemē, - viņš pats, viņa sieva un abi viņa dēli. "},
	{2, "2 Šī vīra vārds bija Ēlimelehs, viņa sievas vārds bija Naomija, un viņa abu dēlu vārdi bija Mahlons un Kiljons; viņi bija efratieši no Jūdas Bētlemes. Viņi nonāca Moāba zemē un tur palika. "},
	{3, "3 Ēlimelehs, Naomijas vīrs, nomira, un viņa palika ar saviem abiem dēliem. "},
	{4, "4 Tie ņēma sev moābiešu sievas: vienas vārds bija Orpa, un otras vārds bija Rute. Viņi dzīvoja tur kādus desmit gadus. "},
	{5, "5 Tad nomira abi - Mahlons un Kiljons. Tā šī sieva palika viena pēc abu dēlu un vīra nāves. "},
	{6, "6 Nu viņa kopā ar savām vedeklām posās atgriezties atpakaļ no Moāba zemes, jo viņa bija tur dzirdējusi, ka Tas Kungs esot labvēlīgi uzlūkojis Savu tautu, dodams tai maizi. "},
	{7, "7 Viņa kopā ar savām vedeklām atstāja vietu, kur viņa bija, un gāja atpakaļ uz Jūdas zemi. "},
	{8, "8 Ceļā Naomija sacīja abām savām vedeklām: Ejiet, griezieties atpakaļ katra savas mātes mājā, un Tas Kungs lai parāda jums mīlestību, tāpat kā jūs esat to parādījušas man un abiem nelaiķiem. "},
	{9, "9 Tas Kungs lai dod jums atrast mieru katrai sava vīra namā. Tad viņa tās skūpstīja, bet tās sāka skaļā balsī raudāt "},
	{10, "10 un atbildēja viņai: Mēs gribam iet tev līdzi pie tavas tautas. "},
	{11, "11 Tad Naomija sacīja: Griezieties atpakaļ, manas meitas, kādēļ jums nākt man līdzi? Vai man būtu vēl dēli manā klēpī, kas varētu jums kļūt par vīriem? "},
	{12, "12 Griezieties atpakaļ, manas meitas, ejiet, jo esmu par vecu, lai ietu pie vīra. Ja arī es sacītu: man ir cerības, - un ja pat šo nakti es ietu pie vīra un dzemdētu dēlus, "},
	{13, "13 vai jūs gan gaidītu, līdz kamēr tie izaugtu? Vai jūs gan noslēgtos, neiedamas pie vīra? Nē, manas meitas, jo man ir pārāk sāpīgi jūsu dēļ, ka Tā Kunga roka ir mani skārusi. "},
	{14, "14 Tad viņas vēl skaļāk raudāja, un Orpa deva skūpstu savai vīramātei, bet Rute pieglaudās viņai. "},
	{15, "15 Tad tā viņai sacīja: Lūk, tava svaine ir atgriezusies pie savas tautas un pie saviem dieviem, seko arī tu savai svainei. "},
	{16, "16 Bet Rute atbildēja: Nespied mani tevi atstāt un no tevis aiziet, jo, kurp tu iesi, es iešu un, kur tu mitīsi, es mitīšu; tava tauta būs mana tauta, un tavs Dievs būs mans Dievs. "},
	{17, "17 Kur tu mirsi, es miršu, un tur es gribu būt arī apglabāta. Lai Tas Kungs dara man tā un vēl vairāk, tiešām, nāve vien spēs šķirt mani un tevi. "},
	{18, "18 Un, kad Naomija redzēja, ka viņa nelokāmi paliek pie sava nodoma iet viņai līdzi, viņa mitējās viņu pierunāt. "},
	{19, "19 Tā viņas abas gāja tālāk, līdz nonāca Bētlemē. Un, kad viņas ienāca Bētlemē, tad visā pilsētā viņu dēļ radās satraukums. Un bija dzirdamas runas: vai šī nav Naomija? "},
	{20, "20 Viņa sacīja tām: Nesauciet mani - Naomija, bet sauciet mani - Māra, jo Visuvarenais man ir licis pieredzēt daudz rūgtuma. "},
	{21, "21 Pilnībā es aizgāju, un tukšai Tas Kungs man ir licis atgriezties. Kādēļ jūs mani saucat Naomija, ja Tas Kungs mani ir pazemojis un Visuvarenais mani ir apbēdinājis? "},
	{22, "22 Tā Naomija atgriezās un līdz ar viņu moābiete Rute, viņas vedekla, kas bija atnākusi no Moāba zemes. Viņas ieradās Bētlemē miežu pļaujas sākumā."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Naomijai bija kāds radinieks no vīra puses, turīgs vīrs no Ēlimeleha dzimtas, viņa vārds bija Boāss. "},
	{2, "2 Un moābiete Rute sacīja Naomijai: Es iešu tīrumā lasīt vārpas tā aizmugurē, kā acīs es atradīšu labvēlību. Un tā atbildēja viņai: Ej, mana meita. "},
	{3, "3 Tā viņa devās ceļā un gāja un lasīja vārpas tīrumā pļāvēju aizmugurē. Viņai gadījās nokļūt tīruma daļā, kas piederēja Boāsam no Ēlimeleha dzimtas. "},
	{4, "4 Un redzi, Boāss nāca no Bētlemes un sacīja pļāvējiem: Tas Kungs lai ir ar jums! Un tie atbildēja: Tas Kungs lai tevi svētī! "},
	{5, "5 Tad Boāss jautāja puisim, kas bija iecelts par uzraugu pļāvējiem: Kam pieder šī meita? "},
	{6, "6 Un puisis, kas bija iecelts par uzraugu pļāvējiem, atbildēja un sacīja: Tā ir kāda jauna moābiete, kas ir atnākusi līdzi Naomijai no Moāba zemes. "},
	{7, "7 Viņa teica: lūdzu, ļauj man lasīt un paņemt vārpas starp labības kūlīšiem pļāvēju aizmugurē. - Tā viņa atnāca un ir pastāvīgi šeit no agra rīta līdz šim laikam, bez kāda atpūtas brīža. "},
	{8, "8 Tad Boāss sacīja Rutei: Uzklausies, mana meita: neej lasīt vārpas cita tīrumā un neej arī prom no šejienes, bet turies pie manām kalponēm. "},
	{9, "9 Tavas acis lai ir vērstas uz šo tīrumu, kuru manas kalpones pļauj, seko viņām. Es esmu piekodinājis puišiem tevi neaiztikt. Un, kad tu esi izslāpusi, ej pie traukiem un dzer no tā, ko puiši ir smēluši. "},
	{10, "10 Tad viņa krita uz sava vaiga, liekdamās līdz zemei, un sacīja viņam: Kā es esmu atradusi labvēlību tavās acīs, ka tu mani ievēro? Es taču esmu svešiniece. "},
	{11, "11 Bet Boāss atbildēja un sacīja viņai: Man ir atstāstīts jo sīki viss, ko tu esi laba darījusi savai vīramātei pēc viņas vīra nāves un ka tu esi atstājusi savu tēvu un savu māti, un savu dzimto zemi un esi gājusi pie tautas, ko iepriekš neesi pazinusi. "},
	{12, "12 Tas Kungs lai atmaksā tev tavu labo darbu, un tava alga lai ir pilnīga no Viņa, Israēla Dieva, zem kura spārniem tu esi nākusi meklēt patvērumu. "},
	{13, "13 Tad viņa sacīja: Kaut es atrastu labvēlību tavās acīs, mans kungs, jo tu esi mani mierinājis un runājis uz savas kalpones sirdi, kaut gan es pat neesmu viena no tavām kalponēm. "},
	{14, "14 Un launaga laikā Boāss viņai sacīja: Nāc šurp un ēd, un mērc savu kumosu skābumā. Tā viņa sēdēja blakus pļāvējiem, un viņš pasniedza viņai grauzdētus labības graudus, un viņa ēda, līdz paēda, un atstāja vēl pāri. "},
	{15, "15 Kad viņa atkal piecēlās lasīt vārpas, Boāss pavēlēja saviem puišiem, sacīdams: Lai viņa lasa arī starp labības kūlīšiem, un nedariet viņai pāri, "},
	{16, "16 bet izvelciet pat drusku no kopiņām viņai un atstājiet, lai viņa lasa, un nerājiet viņu. "},
	{17, "17 Un tā lasīja tīrumā līdz vakaram, tad izkūla to, ko bija salasījusi. Tas bija apmēram viena ēfa miežu. "},
	{18, "18 Un viņa paņēma to un gāja uz pilsētu. Tur viņa rādīja savai vīramātei, ko bija salasījusi, un izņēma arī un deva viņai to, ko ēdot bija atlicinājusi. "},
	{19, "19 Un viņas vīramāte jautāja: Kur tu šodien lasīji vārpas, un kur tu strādāji? Svētīts lai ir tas, kas tevi ir uzlūkojis! Tad viņa stāstīja savai vīramātei, pie kā viņa bija strādājusi, un sacīja: Tā vīra vārds, pie kura es šodien strādāju, ir Boāss. "},
	{20, "20 Un Naomija sacīja savai vedeklai: Lai viņš ir Tā Kunga svētīts, kura mīlestība nav atstājusi dzīvos un mirušos! Naomija arī stāstīja viņai: Tas vīrs ir mūsu tuvinieks, viens no mūsu radiem. "},
	{21, "21 Un moābiete Rute sacīja: Bez tam viņš man sacīja: turies pie maniem kalpiem, līdz kamēr viņi būs ievākuši visu manu ražu. "},
	{22, "22 Un Naomija sacīja Rutei, savai vedeklai: Tas ir labi, mana meita, ka tu turies pie viņa kalponēm, lai cita laukā tev nenodarītu pāri. "},
	{23, "23 Tā viņa turējās pie Boāsa kalponēm, lasīdama vārpas, līdz miežu un kviešu pļaujas beigām; tad viņa atgriezās pie savas vīramātes."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Tad Naomija, viņas vīramāte, viņai sacīja: Mana meita, vai lai es nemeklēju tev vietu, kur tev labi klāsies? "},
	{2, "2 Un vai Boāss, pie kura kalpiem tu esi bijusi, nav mūsu radinieks? Lūk, šonakt viņš vētīs miežus piedarbā. "},
	{3, "3 Tādēļ mazgājies un svaidies, uzvelc savas jaunās drēbes un noej uz piedarbu, bet nerādies tam vīram, pirms viņš nav pabeidzis ēst un dzert. "},
	{4, "4 Bet, kad viņš apgulsies, ievēro to vietu, kur viņš guļ, tad ej, pacel segu no viņa kāju galiem, noklāj to tiem līdzās un apgulsties uz tās; tad viņš tev teiks, kas tev jādara. "},
	{5, "5 Un viņa tai atbildēja: Visu, ko tu saki, es darīšu. "},
	{6, "6 Tā viņa nogāja uz piedarbu un darīja visu taisni tā, kā viņas vīramāte bija likusi. "},
	{7, "7 Un, kad Boāss bija paēdis un padzēris un viņa sirds bija jautra, viņš gāja gulēt labības kaudzes galā. Tad viņa klusi nāca un atsedza viņa kājas, un apgūlās. "},
	{8, "8 Ap pusnakti tas vīrs uztrūkās un palocījies ieraudzīja, ka kāda sieva gulēja pie viņa kājām. "},
	{9, "9 Viņš jautāja: Kas tu esi? Un viņa atbildēja: Esmu Rute, tava kalpone; izplet savus spārnus pāri savai kalponei, jo tu esi mans tuvākais radinieks. "},
	{10, "10 Un viņš sacīja: Esi Tā Kunga svētīta, mana meita; tu esi izdarījusi šo pēdējo mīlestības darbu labāk kā pirmo, neskriedama pakaļ jauniem puišiem, vai tie būtu nabagi vai bagāti. "},
	{11, "11 Un tagad, mana meita, nebīsties: es darīšu tavā labā visu, ko vien tu prasīsi, jo visos vārtos mani ļaudis zina, ka tu esi godīga sieva. "},
	{12, "12 Ir taisnība, ka es esmu tavs radinieks, tomēr vēl ir kāds tuvāks radinieks par mani. "},
	{13, "13 Paliec šonakt še, un, ja rīt viņš gribēs tevi ņemt, labi, lai viņš tevi ņem, bet, ja viņš negribēs tevi ņemt, tad es tevi ņemšu; tik tiešām, ka Tas Kungs ir dzīvs! Guli līdz rītam. "},
	{14, "14 Tā viņa gulēja pie viņa kājām līdz rītam. Bet viņa piecēlās, pirms viens otru varēja pazīt, jo viņa sprieda: Lai tas nekļūst zināms, ka sieva ir nākusi uz piedarbu. "},
	{15, "15 Un viņš sacīja: Dod šurp lakatu, kas tev ir, un paturi to. Tā viņa turēja to, un viņš iemērīja sešus mērus miežu un uzlika viņai tos mugurā, un viņa gāja uz pilsētu. "},
	{16, "16 Un, kad viņa atnāca pie savas vīramātes, tā jautāja: Kā tev ir klājies, mana meita? Tad viņa stāstīja tai visu, ko tas vīrs bija darījis viņas labā: "},
	{17, "17 Šos sešus mērus miežu viņš man deva, jo viņš sacīja: tev nebūs tukšā iet pie savas vīramātes. "},
	{18, "18 Viņa sacīja: Pagaidi, mana meita, līdz kamēr tu dabūsi zināt, kāds būs iznākums, jo tas vīrs nepaliks mierā, bet nokārtos šo lietu drīz."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lv4 poems[] = {
	{1, "1 Boāss bija aizgājis vārtos un tur apsēdies. Un redzi, tas tuvākais radinieks, par kuru Boāss bija stāstījis, gāja garām. Tad Boāss sacīja: Iegriezies, draugs, atsēdies šeit. Un viņš iegriezās un atsēdās. "},
	{2, "2 Un viņš ņēma desmit vīrus no pilsētas vecajiem un sacīja: Sēdiet šeit. Tā viņi atsēdās. "},
	{3, "3 Tad viņš tam tuvākam radiniekam sacīja: Ir pārdodams kāds tīruma gabals, kas ir piederējis mūsu radiniekam Ēlimeleham. To grib pārdot Naomija, kas atgriezusies no Moāba zemes. "},
	{4, "4 Tā nu es domāju, es darīšu tev to zināmu, sacīdams: nopērc tu to manas tautas vecaju priekšā un visu priekšā, kas šeit sēž. Ja tu gribi būt pircējs, tad pērc, bet, ja tu tas negribi būt, tad pasaki man to, lai es zinu, jo cita neviena nav bez tevis, kam nāktos pirkt, bet pēc tevis nāku es. Viņš atbildēja: Es pirkšu. "},
	{5, "5 Tad Boāss sacīja: Tai dienā, kad tu pirksi to tīrumu no Naomijas rokas, tu saņemsi arī moābieti Ruti, nelaiķa sievu, lai atjaunotu nelaiķa vārdu uz viņa mantojumu. "},
	{6, "6 Tad tas tuvākais radinieks sacīja: Es nevaru to sev pirkt, lai nesabojātu savu mantojumu. Saņem tu manas pirkšanas tiesības, jo es to nevaru pirkt. "},
	{7, "7 Senos laikos Israēlā bija šāds paradums par pirkšanu un mainīšanu: lai apstiprinātu kādu lietu, viens novilka savu kurpi un deva to otram, un tāds bija veids, lai noslēgtu Israēlā līgumu. "},
	{8, "8 Tad tas tuvākais radinieks sacīja viņam: Pērc tu to sev. Un viņš novilka savu kurpi. "},
	{9, "9 Tad Boāss sacīja vecajiem un visiem ļaudīm: Šodien jūs esat liecinieki, ka es esmu nopircis no Naomijas rokas visu, kas ir piederējis Ēlimeleham, un visu, kas ir piederējis Kiljonam un Mahlonam. "},
	{10, "10 Es esmu saņēmis arī moābieti Ruti, Mahlona atraitni, un ņemšu to sev par sievu, lai nepārtrauktu nelaiķa vārdu uz viņa īpašumu un lai neizdeldētu nelaiķa vārdu no viņa brāļu vidus un no viņa dzimtās vietas vārtiem; jūs esat šodien liecinieki. "},
	{11, "11 Tad visi ļaudis un vecaji, kas bija pie vārtiem, sacīja: Mēs esam liecinieki. Lai Tas Kungs dara to sievu, kas nāks tavā mājā, kā Rahēli un kā Leu, kas abas kopā cēla Israēlā namu. Kļūsti laimīgs un vairo bagātību Efratā, un topi daudzināts Bētlemē! "},
	{12, "12 Un to bērnu dēļ, ko Tas Kungs tev dos no šīs jaunās sievas, lai tavs nams ir kā Pereca nams, ko Tamāra dzemdēja Jūdam. "},
	{13, "13 Tā Boāss ņēma Ruti, un viņa kļuva tam par sievu; un viņš iegāja pie viņas, un Tas Kungs deva viņai miesas augli, un viņa dzemdēja dēlu. "},
	{14, "14 Tad sievas sacīja Naomijai: Slavēts lai ir Tas Kungs, kas nav licis tev šodien palikt bez radinieka! Lai Viņa Vārds top daudzināts Israēlā! "},
	{15, "15 Viņš būs tev par dzīvības atjaunotāju, par balstu tavās vecuma dienās, jo tava vedekla, kas tevi ir mīlējusi, kas tev ir labāka par septiņiem dēliem, ir viņu dzemdējusi. "},
	{16, "16 Tad Naomija paņēma bērnu, ielika viņu savā klēpī un kļuva tam par aukli. "},
	{17, "17 Un kaimiņienes deva viņam vārdu, sacīdamas: Dēls ir dzimis Naomijai. Viņas nosauca to par Obedu; tas bija Dāvida tēva Isaja tēvs. "},
	{18, "18 Šie ir Pereca pēcnācēji: Perecs bija Hecrona tēvs, "},
	{19, "19 Hecrons Rama, Rams Aminādaba, "},
	{20, "20 Aminādabs Nahšona, Nahšons Salmona, "},
	{21, "21 Salmons Boāsa, Boāss Obeda, "},
	{22, "22 Obeds Isaja, bet Isajs bija Dāvida tēvs."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};