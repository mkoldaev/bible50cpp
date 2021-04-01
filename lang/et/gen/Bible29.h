#include <map>
#include <string>
class Bible29
{
	struct et1	{ int val; const char *msg; };
	struct et2	{ int val; const char *msg; };
	struct et3	{ int val; const char *msg; };
public:
static void view1() {
struct et1 poems[] = {
	{1, "1 Issanda sõna, mis tuli Joelile, Petueli pojale:  "},
	{2, "2 'Kuulge seda, vanemad, ja pange tähele, kõik maa elanikud! Kas seesugust on sündinud teie päevil või teie vanemate päevil? "},
	{3, "3 Jutustage sellest oma lastele ja teie lapsed oma lastele ja nende lapsed tulevastele põlvedele: "},
	{4, "4 mis jäi üle röövikuist, selle sõid rohutirtsud; ja mis jäi üle tirtsudest, selle sõid vastsed; ja mis jäi üle vastseist, selle sõid mardikad. "},
	{5, "5 Ärgake, te joobnud, ja nutke, ulguge, kõik veinijoojad, veinivirde pärast, et see on kadunud teie suust! "},
	{6, "6 Sest mu maa kallale on tulnud vägev ja arvutu rahvas: ta hambad on lõvi hambad ja tal on emalõvi lõualuud. "},
	{7, "7 Ta on rüüstanud mu viinapuu tühjaks ja murdnud mu viigipuu katki; ta on koorinud selle koguni paljaks, nii et see on valge ja raagus. "},
	{8, "8 Nuta nagu neitsi, kel kotiriie üll, oma peigmehe pärast! "},
	{9, "9 Roa- ja joogiohver on kadunud Issanda kojast, preestrid, Issanda teenrid, leinavad. "},
	{10, "10 Põllud on laastatud, muld leinab, sest vili on rüüstatud, vein ikaldunud, õli lõppenud. "},
	{11, "11 Põllumehed on jäänud häbisse, viinamäe aednikud halisevad nisu ja odra pärast, sest saak on hävinud. "},
	{12, "12 Viinapuud on äpardunud ja viigipuud närbunud, granaatõunapuu, samuti palm ja õunapuu - kõik puud on kuivanud; tõesti, rõõm on häbiga lahkunud inimlaste juurest.  "},
	{13, "13 Vöötage endid ja leinake, preestrid, kurtke, altari teenrid! Minge sisse, veetke öö kotiriideis, minu Jumala teenrid, sest teie Jumala kojast on kõrvaldatud roa- ja joogiohver! "},
	{14, "14 Pühitsege paastupüha, kutsuge kokku pühalik koosolek, koguge vanemad ja kõik maa elanikud Issanda, oma Jumala kotta ja kisendage Issanda poole! "},
	{15, "15 Oh seda päeva! Sest Issanda päev on ligidal, see tuleb kui hävitus Kõigeväeliselt. "},
	{16, "16 Eks ole meie silme eest kadunud toidus, meie Jumala kojast rõõm ja hõiskamine? "},
	{17, "17 Seemneivad mulla all on tahkunud kõvaks, tagavarad on rüüstatud; aidad on lammutatud, sest vili on ikaldunud. "},
	{18, "18 Kuidas küll loomad ägavad, veisekarjad on arust ära, sest neil pole karjamaad. Ka lambakarjad on hävimas. "},
	{19, "19 Ma kisendan sinu poole, Issand, sest tuli on neelanud kõrbe rohumaad ja leek on kõrvetanud kõik metsapuud. "},
	{20, "20 Metsloomadki igatsevad sind, sest veeojad on kuivanud ja tuli on neelanud kõrbe rohumaad."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct et2 poems[] = {
	{1, "1 Puhuge sarve Siionis, tõstke häält mu pühal mäel! Värisegu kõik maa elanikud, sest Issanda päev tuleb, see on ligidal, "},
	{2, "2 pime ja must päev, pilvine ja sünge päev! Nõnda nagu koit laotub mägedele, tuleb suur ja vägev rahvas, kelle sarnast pole olnud igiaegadest alates ega tule ka enam pärast teda, tulevaste põlvede aastateni. "},
	{3, "3 Tema ees käib hävitav tuli ja tema taga kõrvetav leek; tema ees on maa otsekui Eedeni aed, aga tema taga on tühi kõrb ja ei olegi pääsu tema eest. "},
	{4, "4 Neil on otse hobuste välimus ja nad jooksevad kui sõjaratsud. "},
	{5, "5 Otsekui sõjavankrite mürinal kihutavad nad üle mäeharjade, mühinal, kõrsi põletava tuleleegi moel, vägeva rahva sarnaselt, kes on valmis tapluseks. "},
	{6, "6 Nende ees värisevad rahvad, kahvatuvad kõik palged. "},
	{7, "7 Nad ruttavad nagu võitlejad, ronivad müüridele nagu sõdurid. Igaüks käib oma teed ega muuda oma rada. "},
	{8, "8 Üks ei tõuka teist, igaüks käib oma teed; nad sööstavad peatumata viskodade vahelt läbi. "},
	{9, "9 Nad tormavad linna, jooksevad müürile, ronivad kodadesse, tungivad akendest sisse nagu varas. "},
	{10, "10 Nende ees väriseb maa, põrub taevas, päike ja kuu lähevad mustaks ja tähed kaotavad oma sära. "},
	{11, "11 Ja Issand laseb oma häält kõlada oma sõjaväe ees, sest tema leer on väga suur. Tõesti, vägev on tema käsutäitja, sest Issanda päev on suur ja väga kardetav, kes suudaks seda taluda?"},
	{12, "12 Aga veel nüüdki ütleb Issand: Pöörduge minu poole kõigest südamest, paastudes, nuttes ja kurtes! "},
	{13, "13 Käristage lõhki oma süda, aga mitte oma riided, ja pöörduge Issanda, oma Jumala poole, sest tema on armuline ja halastaja, pika meelega ja rikas heldusest, ja tema kahetseb kurja! "},
	{14, "14 Kes teab, vahest ta pöördub ja kahetseb ja jätab enese järele õnnistuse, nii et te saate tuua roaohvrit ja joogiohvrit Issandale, oma Jumalale? "},
	{15, "15 Puhuge sarve Siionis, pühitsege paastupüha, kutsuge kokku pühalik koosolek! "},
	{16, "16 Koguge rahvas, pühitsege kogudust, tooge kokku vanemad, koguge lapsed ja imikud, peigmees tulgu välja oma toast ja pruut oma kambrist! "},
	{17, "17 Eeskoja ja altari vahel nutku preestrid, Issanda teenrid, ja öelgu: Säästa, Issand, oma rahvast, ja ära anna oma pärisosa teotuseks, paganaile pilgata! Miks peaks rahvaste seas öeldama: Kus on nüüd nende Jumal?'  "},
	{18, "18 Siis Issand hoolitseb oma maa eest ja tunneb oma rahvale kaasa. "},
	{19, "19 Ja Issand kostab ning ütleb oma rahvale: 'Vaata, ma läkitan teile vilja, veini ja õli, et teil on seda kõike küllalt. Ma ei anna teid enam teotuseks paganate sekka. "},
	{20, "20 Ja selle põhja poolt tulija ajan ma teist kaugele, hajutan ta kuivale ja tühjale maale, ta eelväe Idamerre, ta järelväe Läänemerre; ja temast tõuseb hais, tõuseb roiskumise lehk, sellepärast et ta tahtis teha suuri asju. "},
	{21, "21 Ära karda, maa! Hõiska ja rõõmusta, sest Issand teeb suuri asju! "},
	{22, "22 Ärge kartke, välja loomad, sest kõrbe rohumaad löövad haljendama ja puud hakkavad vilja kandma, viigi- ja viinapuud kannavad külluslikult! "},
	{23, "23 Ja teie, Siioni lapsed, hõisake ja rõõmustage Issandas, oma Jumalas, sest tema annab teile õiglaselt varajast vihma, saadab vihma teile alla, varajase ja hilise vihma nagu ennegi! "},
	{24, "24 Siis saavad rehealused täis nisu ning tõrred voolavad üle veinist ja õlist. "},
	{25, "25 Ja ma tasun teile nende aastate eest, kui saagi sõid rohutirtsud, vastsed, mardikad ja röövikud - see mu suur sõjavägi, kelle ma läkitasin teie kallale. "},
	{26, "26 Te saate küllalt süüa, te sööte kõhud täis, ja kiidate Issandat, oma Jumalat, kes teiega on talitanud imepäraselt. Jah, mu rahvas ei jää igavesti häbisse. "},
	{27, "27 Ja te saate tunda, et mina olen Iisraeli keskel, et mina, Issand, olen teie Jumal ja ei keegi teine. Jah, mu rahvas ei jää igavesti häbisse."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct et3 poems[] = {
	{1, "1 Ja pärast seda sünnib, et ma valan oma Vaimu kõige liha peale. Siis teie pojad ja tütred hakkavad ennustama, teie vanemad uinuvad unenägusid nähes, teie noored mehed näevad nägemusi. "},
	{2, "2 Ja neil päevil valan ma oma Vaimu ka sulaste ja teenijate peale.  "},
	{3, "3 Ma annan tunnustähti taevas ja maa peal, verd ja tuld ja suitsusambaid. "},
	{4, "4 Päike muutub pimedaks ja kuu vereks, enne kui tuleb Issanda päev, suur ja kardetav. "},
	{5, "5 Ja sünnib, et igaüks, kes hüüab appi Issanda nime, pääseb. Sest Siioni mäel ja Jeruusalemmas on pääste, nii nagu Issand on öelnud; ja pääsenute hulgas on need, keda Issand kutsub."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};