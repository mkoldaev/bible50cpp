#include <map>
#include <string>
class Bible39
{
	struct et1	{ int val; const char *msg; };
	struct et2	{ int val; const char *msg; };
	struct et3	{ int val; const char *msg; };
	struct et4	{ int val; const char *msg; };
public:
static void view1() {
struct et1 poems[] = {
	{1, "1 Ennustus. Issanda sõna Iisraelile Malaki kaudu:  "},
	{2, "2 'Mina olen teid armastanud, ütleb Issand. Aga teie ütlete: 'Kuidas sa meid oled armastanud?' Kas Eesav ei olnud Jaakobi vend? ütleb Issand. Jaakobit ma armastasin, "},
	{3, "3 aga Eesavit ma vihkasin; ma tegin ta mäestiku lagedaks ja jätsin ta pärisosa kõrbe ðaakalitele. "},
	{4, "4 Kui Edom ütleb: 'Me oleme purustatud, aga me ehitame varemed taas üles', siis ütleb vägede Issand nõnda: Nad ehitavad küll, aga mina kisun maha; ja neid nimetatakse 'süüteo maaks' ja 'rahvaks, keda Issand on  neednud igaveseks'. "},
	{5, "5 Teie silmad saavad seda näha  ja te ütlete: 'Issand on suur üle Iisraeli piiri!'"},
	{6, "6 Poeg austab isa ja sulane isandat. Aga kui mina olen isa, kus on siis minu au? Ja kui mina olen Issand, kus on siis minu kartus? ütleb vägede Issand teile, preestrid, kes te põlgate minu nime. Aga te ütlete: 'Kuidas me põlgame su nime?' "},
	{7, "7 Te toote mu altarile rüvetatud leiba. Aga te ütlete: 'Kuidas me rüvetame sind?' Sellega, et ütlete: 'Issanda laud on põlastusväärne.' "},
	{8, "8 Jah, kui te toote ohvriks pimeda, siis ei olevat see paha; või kui te toote lonkaja või tõbise, siis ei olevat see paha. Vii see ometi oma maavalitsejale! Kas temal on sinust hea meel või kas ta peab sinust lugu? ütleb vägede Issand. "},
	{9, "9 Ja nüüd: leevendage ometi Jumala palet, et ta oleks meile armuline! Teie käest on see tulnud -  kas ta saaks teist lugu pidada? ütleb vägede Issand. "},
	{10, "10 Kes ometi oleks teie hulgast,   kes suleks uksed,  et te ei saaks ilmaaegu süüdata tuld mu altaril? Mul ei ole teist hea meel, ütleb vägede Issand, ja roaohver teie käest ei meeldi mulle. "},
	{11, "11 Sest päikesetõusu poolt päikeseloojaku poole on mu nimi paganate seas suur, ja igas paigas suitsutatakse ning tuuakse mu nimele puhas roaohver. Sest mu nimi on paganate seas suur, ütleb vägede Issand. "},
	{12, "12 Aga teie teotate seda, kui te ütlete: 'Issanda laud on rüvetatud, ja selle vilja, tema rooga, võib põlata.' "},
	{13, "13 Ja te ütlete: 'Vaata, missugune vaev!' ja alahindate seda, ütleb vägede Issand. Te toote seda, mis on röövitud, lonkaja ja tõbine. Ja see peab olema ohvriand, mida te toote. Kas mul peaks olema hea meel seda teie käest vastu võtta? ütleb Issand. "},
	{14, "14 Neetud olgu petis, kellel on karjas isane loom ja kes on selle tõotanud, aga ohverdab Issandale vigase! Sest mina olen suur kuningas, ütleb vägede Issand, ja mu nimi on kardetav paganate seas. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct et2 poems[] = {
	{1, "1 Ja nüüd teie kohta, preestrid,  on otsus see:  "},
	{2, "2 kui te ei kuula ega võta südamesse, et te peate andma au mu nimele, ütleb vägede Issand, siis ma läkitan teie vastu needuse ja muudan teie õnnistused needuseks, jah, needuseks, sest te ei ole võtnud seda südamesse. "},
	{3, "3 Vaata, ma sõitlen teie seemet ja puistan teile rooja näkku, teie pidupäevade rooja, ja teid endid viiakse selle juurde. "},
	{4, "4 Ja te saate tunda,  et mina olen teile läkitanud  selle otsuse, et minu leping Leeviga jääks püsima, ütleb vägede Issand. "},
	{5, "5 Minu leping temaga oli elu ja rahu, ja ma andsin selle temale, et ta kardaks; ja ta kartis mind, ta värises mu nime ees. "},
	{6, "6 Tõeõpetus oli tal suus ja pettust ei leitud tema huulilt. Rahus ja siiruses käis ta minuga ja pööras paljusid ära patust. "},
	{7, "7 Jah, preestri huuled talletavad tarkust ja tema suust otsitakse õpetust, sest tema on vägede Issanda käskjalg. "},
	{8, "8 Aga teie olete lahkunud sellelt teelt, olete õpetusega pannud paljusid komistama, olete rikkunud Leevi liidu, ütleb vägede Issand. "},
	{9, "9 Sellepärast teen minagi teid põlatuiks ja armetuiks kõigi rahvaste juures, sest te pole tähele pannud minu teid, vaid olete õpetuses olnud erapoolikud."},
	{10, "10 Eks ole meil kõigil üks isa? Eks ole meid loonud üks Jumal? Mispärast me siis ei ole üksteisele truud, vaid teotame oma vanemate lepingut? "},
	{11, "11 Juuda on olnud truuduseta ja Iisraelis ja Jeruusalemmas on tehtud jäledust. Sest Juuda on teotanud pühamut,  mida Issand armastab, ja on võtnud naiseks võõra jumala tütre. "},
	{12, "12 Issand hävitagu Jaakobi telkidest mees, kes seda teeb, olgu ta kes tahes, ka see, kes viib vägede Issandale ohvriandi. "},
	{13, "13 Ja veel te olete teinud seda: Issanda altar on kaetud silmaveega, nutu ja oigamisega, nii et ta enam ei pöördu ohvrianni poole ega võta seda hea meelega teie käest vastu. "},
	{14, "14 Aga te ütlete: 'Mispärast?' Sellepärast, et Issand on tunnistajaks sinu ja su noorpõlve naise vahel, kelle vastu sa oled olnud truudusetu, kuigi ta on sinu abikaasa ja sinu seadusejärgne naine. "},
	{15, "15 Aga ükski ei tee seda, kelles on veel vaimu jääki. Ja mida peab ta tegema? Otsima Jumala sugu! Kandke siis hoolt oma vaimu eest ja ükski ärgu olgu truudusetu oma noorpõlve naise vastu! "},
	{16, "16 Sest ma vihkan lahutust, ütleb Issand, Iisraeli Jumal,  ja seda,  kes katab oma kuue vägivallaga, ütleb vägede Issand. Kandke siis hoolt oma vaimu eest ja ärge olge truudusetud!"},
	{17, "17 Te väsitate Issandat oma kõnedega. Ometi te ütlete: 'Kuidas me väsitame?' Sellega, et ütlete: 'Igaüks, kes kurja teeb, on Issanda silmis hea, ja seesugune on tema meele järgi.' Või: 'Kus on kohut mõistev Jumal?'  "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct et3 poems[] = {
	{1, "1 Vaata, ma läkitan oma ingli ja tema valmistab minu ees teed. Ja äkitselt tuleb oma templi juurde Issand, keda te otsite, ja lepingu ingel, keda te igatsete. Vaata, ta tuleb, ütleb vägede Issand. "},
	{2, "2 Aga kes suudab taluda tema tuleku päeva?  Ja kes jääb püsima tema ilmudes? Sest tema on nagu sulataja tuli ja nagu pesupesija leelis. "},
	{3, "3 Ja ta istub, sulatab ja puhastab hõbedat, ta puhastab Leevi poegi ja selitab neid nagu kulda ja hõbedat: siis toovad nad Issandale õige ohvrianni. "},
	{4, "4 Siis meeldib Issandale Juuda ja Jeruusalemma ohvriand nagu muistseil päevil ja ammuseil aastail. "},
	{5, "5 Ja ma tulen teile kohut mõistma ning olen kärmeks tunnistajaks nõidade, abielurikkujate ja valevandujate vastu ning nende vastu, kes teevad liiga  palgalisele palga poolest, lesknaisele ja vaeslapsele, kes tõukavad võõra kõrvale ega karda mind, ütleb vägede Issand."},
	{6, "6 Sest mina, Issand, ei ole ennast muutnud, ja teie, Jaakobi lapsed,  ei ole otsa lõppenud. "},
	{7, "7 Oma vanemate päevist alates olete te lahkunud mu määrustest ega ole neid pidanud. Pöörduge tagasi minu juurde, siis pöördun mina teie juurde, ütleb vägede Issand. Aga teie ütlete: 'Kuidas me peaksime pöörduma?' "},
	{8, "8 Kas inimene tohib Jumalat röövida? Aga teie röövite mind ja ütlete: 'Kuidas me sind röövime?' Kümnise ja tõstelõivuga. "},
	{9, "9 Olge needusega neetud, et teie, kogu rahvas, mind röövite! "},
	{10, "10 Tooge kõik kümnis täies mõõdus varaaita, et mu kojas oleks toitu, ja proovige mind ometi sellega, ütleb vägede Issand. Tõesti, ma avan teile taevaluugid ja kallan teile õnnistust küllastuseni. "},
	{11, "11 Ja ma sõitlen teie pärast rohutirtse, et need ei hävitaks teie põlluvilja, ja et teie viinapuu väljal ei jääks viljatuks, ütleb vägede Issand. "},
	{12, "12 Siis kiidavad teid õndsaks kõik rahvad, sest te saate ihaldatud maaks, ütleb vägede Issand."},
	{13, "13 Teie sõnad mu kohta on karmid, ütleb Issand. Aga teie ütlete: 'Mida me su kohta oleme rääkinud?' "},
	{14, "14 Te ütlete: 'Ilmaaegu on Jumalat teenida. Ja mis kasu on meil tema käsu täitmisest või leinariietes käimisest vägede Issanda palge ees? "},
	{15, "15 Nüüd me aga kiidame õndsaks ülbeid. Elavad edasi needki, kes pattu teevad, need koguni kiusavad Jumalat ja pääsevad.'  "},
	{16, "16 Siis rääkisid isekeskis need, kes kartsid Issandat; ja Issand pani tähele ning kuulis ja tema palge ees kirjutati mälestusraamat nende heaks, kes kardavad Issandat ja austavad tema nime. "},
	{17, "17 Ja nad kuuluvad mulle, ütleb vägede Issand, on mu eraomand sel päeval, mille ma valmistan. Ja ma olen neile armuline, nõnda nagu mees on armuline oma pojale, kes teda teenib. "},
	{18, "18 Ja te näete jälle vahet õige ja õela vahel, selle vahel, kes teenib Jumalat, ja selle vahel, kes teda ei teeni."},
	{19, "19 Sest vaata, päev tuleb, põlev nagu ahi, ja kõik ülbed ja kõik,  kes pattu teevad, on nagu kõrred. Ja see päev, mis tuleb, põletab nad ära, ütleb vägede Issand, ega jäta neile ei juurt ega oksa. "},
	{20, "20 Aga teile, kes te mu nime kardate,  tõuseb õiguse päike ja paranemine tema tiibade all. Te lähete siis välja ja lööte kepsu nagu nuumvasikad. "},
	{21, "21 Ja te tallate õelaid, sest need saavad põrmuks teie taldade all sel päeval, mille ma valmistan, ütleb vägede Issand.  "},
	{22, "22 Tuletage meelde mu sulase Moosese Seadust, määrusi ja käske, mis ma temale andsin Hoorebil kogu Iisraeli jaoks!  "},
	{23, "23 Vaata, ma läkitan teile prohvet Eelija, enne kui tuleb Issanda päev, suur ja kardetav. "},
	{24, "24 Ja tema pöörab vanemate südamed jälle laste poole ja laste südamed vanemate poole, et ma ei peaks tulema ja lööma maad needusega.'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct et4 poems[] = {
	{1, "1 Vaata, ma läkitan oma ingli ja tema valmistab minu ees teed. Ja äkitselt tuleb oma templi juurde Issand, keda te otsite, ja lepingu ingel, keda te igatsete. Vaata, ta tuleb, ütleb vägede Issand. "},
	{2, "2 Aga kes suudab taluda tema tuleku päeva?  Ja kes jääb püsima tema ilmudes? Sest tema on nagu sulataja tuli ja nagu pesupesija leelis. "},
	{3, "3 Ja ta istub, sulatab ja puhastab hõbedat, ta puhastab Leevi poegi ja selitab neid nagu kulda ja hõbedat: siis toovad nad Issandale õige ohvrianni. "},
	{4, "4 Siis meeldib Issandale Juuda ja Jeruusalemma ohvriand nagu muistseil päevil ja ammuseil aastail. "},
	{5, "5 Ja ma tulen teile kohut mõistma ning olen kärmeks tunnistajaks nõidade, abielurikkujate ja valevandujate vastu ning nende vastu, kes teevad liiga  palgalisele palga poolest, lesknaisele ja vaeslapsele, kes tõukavad võõra kõrvale ega karda mind, ütleb vägede Issand."},
	{6, "6 Sest mina, Issand, ei ole ennast muutnud, ja teie, Jaakobi lapsed,  ei ole otsa lõppenud. "},
	{7, "7 Oma vanemate päevist alates olete te lahkunud mu määrustest ega ole neid pidanud. Pöörduge tagasi minu juurde, siis pöördun mina teie juurde, ütleb vägede Issand. Aga teie ütlete: 'Kuidas me peaksime pöörduma?' "},
	{8, "8 Kas inimene tohib Jumalat röövida? Aga teie röövite mind ja ütlete: 'Kuidas me sind röövime?' Kümnise ja tõstelõivuga. "},
	{9, "9 Olge needusega neetud, et teie, kogu rahvas, mind röövite! "},
	{10, "10 Tooge kõik kümnis täies mõõdus varaaita, et mu kojas oleks toitu, ja proovige mind ometi sellega, ütleb vägede Issand. Tõesti, ma avan teile taevaluugid ja kallan teile õnnistust küllastuseni. "},
	{11, "11 Ja ma sõitlen teie pärast rohutirtse, et need ei hävitaks teie põlluvilja, ja et teie viinapuu väljal ei jääks viljatuks, ütleb vägede Issand. "},
	{12, "12 Siis kiidavad teid õndsaks kõik rahvad, sest te saate ihaldatud maaks, ütleb vägede Issand."},
	{13, "13 Teie sõnad mu kohta on karmid, ütleb Issand. Aga teie ütlete: 'Mida me su kohta oleme rääkinud?' "},
	{14, "14 Te ütlete: 'Ilmaaegu on Jumalat teenida. Ja mis kasu on meil tema käsu täitmisest või leinariietes käimisest vägede Issanda palge ees? "},
	{15, "15 Nüüd me aga kiidame õndsaks ülbeid. Elavad edasi needki, kes pattu teevad, need koguni kiusavad Jumalat ja pääsevad.'  "},
	{16, "16 Siis rääkisid isekeskis need, kes kartsid Issandat; ja Issand pani tähele ning kuulis ja tema palge ees kirjutati mälestusraamat nende heaks, kes kardavad Issandat ja austavad tema nime. "},
	{17, "17 Ja nad kuuluvad mulle, ütleb vägede Issand, on mu eraomand sel päeval, mille ma valmistan. Ja ma olen neile armuline, nõnda nagu mees on armuline oma pojale, kes teda teenib. "},
	{18, "18 Ja te näete jälle vahet õige ja õela vahel, selle vahel, kes teenib Jumalat, ja selle vahel, kes teda ei teeni."},
	{19, "19 Sest vaata, päev tuleb, põlev nagu ahi, ja kõik ülbed ja kõik,  kes pattu teevad, on nagu kõrred. Ja see päev, mis tuleb, põletab nad ära, ütleb vägede Issand, ega jäta neile ei juurt ega oksa. "},
	{20, "20 Aga teile, kes te mu nime kardate,  tõuseb õiguse päike ja paranemine tema tiibade all. Te lähete siis välja ja lööte kepsu nagu nuumvasikad. "},
	{21, "21 Ja te tallate õelaid, sest need saavad põrmuks teie taldade all sel päeval, mille ma valmistan, ütleb vägede Issand.  "},
	{22, "22 Tuletage meelde mu sulase Moosese Seadust, määrusi ja käske, mis ma temale andsin Hoorebil kogu Iisraeli jaoks!  "},
	{23, "23 Vaata, ma läkitan teile prohvet Eelija, enne kui tuleb Issanda päev, suur ja kardetav. "},
	{24, "24 Ja tema pöörab vanemate südamed jälle laste poole ja laste südamed vanemate poole, et ma ei peaks tulema ja lööma maad needusega.'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};