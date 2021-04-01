#include <map>
#include <string>
class Bible35
{
	struct et1	{ int val; const char *msg; };
	struct et2	{ int val; const char *msg; };
	struct et3	{ int val; const char *msg; };
public:
static void view1() {
struct et1 poems[] = {
	{1, "1 Prohvet Habakuki nähtud ennustus:  "},
	{2, "2 'Kui kaua, Issand, pean ma appi hüüdma,  ilma et sa kuuleksid? Või sulle kisendama vägivalla pärast, ilma et sa aitaksid? "},
	{3, "3 Miks sa lased mind näha nurjatust ja vaatad ise seda õnnetust pealt? Hävitus ja vägivald on mu ees - on tulnud riid ja tõusnud tüli. "},
	{4, "4 Seepärast on Seadus jõuetu ja õigus ei tule iial esile. Sest õel piirab õiget -  nõnda tekib väänatud õigus."},
	{5, "5 Vaadake ringi paganate seas ja pange tähele, imestage ja hämmastuge! Sest teie päevil tehakse tegu, mida te ei usuks, kui sellest jutustataks. "},
	{6, "6 Sest vaata, ma lasen tõusta kaldealased, kibeda ja tormaka rahva, kes käib maa laiuti läbi,  et vallutada eluasemeid, mis pole tema omad. "},
	{7, "7 Ta on kardetav ja julm, temast enesest tuleb ta õigus ja vägi. "},
	{8, "8 Tema hobused on kiiremad kui pantrid, metsikumad kui hundid õhtul. Tema ratsud trambivad - kaugelt tulevad ta ratsanikud, lendavad nagu saagile sööstvad kotkad. "},
	{9, "9 Kõik nad tulevad tegema vägivalda; nende näod vaatavad otse ette ja nad koguvad vange nagu liiva. "},
	{10, "10 Nad pilkavad kuningaid  ja aukandjad on neile naerualuseks. Nad naeravad iga kindlust, kuhjavad kokku mulda ja vallutavad selle. "},
	{11, "11 Siis nad tormavad kui tuul  ja tõttavad edasi. Nad teevad omaenese jõu enestele jumalaks."},
	{12, "12 Eks ole sina, Issand, muistsest ajast mu püha Jumal? Ära lase meil surra! Issand! Sina oled nad pannud meie üle kohut mõistma, sina, kalju, oled määranud nad meile nuhtlejaiks. "},
	{13, "13 Sinu silmad on liiga puhtad selleks,  et näha kurja, ja sina ei või vaadata õnnetust. Mispärast sa vaatad uskmatute peale, vaikid, kui õel neelab selle, kes on temast õigem, "},
	{14, "14 teed inimesed mere kalade sarnaseks, otsekui roomajaiks, kellel pole valitsejat? "},
	{15, "15 Need kõik tõmbavad nad õngega üles, veavad oma noota ja koguvad võrku; seepärast nad rõõmustavad ja hõiskavad. "},
	{16, "16 Seepärast ohverdavad nad oma noodale ja suitsutavad võrgule, sest nende abil on nende saak rasvane ja roog rammus. "},
	{17, "17 Kas nad võivad nõnda lõpmatult tühjendada oma noota, rahvaid armuta tappes?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct et2 poems[] = {
	{1, "1 Mina seisan oma vahipostil, asun linnusel ja vaatan, et näha, mida ta mulle räägib ja mida ta mulle vastab  mu etteheite peale. "},
	{2, "2 Ja Issand vastas mulle ning ütles:  Kirjuta üles nägemus ja tähenda selgesti lauakeste peale, et see, kes seda loeb,  võiks lugeda soravalt. "},
	{3, "3 Sest nägemus ootab küll oma aega, aga ta ruttab lõpu poole ega peta. Kui ta viibib, siis oota teda,  sest ta tuleb kindlasti ega kõhkle. "},
	{4, "4 Vaata, kes on isemeelne, selle hing ei ole siiras ta sees; aga õige elab oma usust. "},
	{5, "5 Ning veel enam: vein on petlik - ei jõua sihile hoopleja mees, kes avab oma kurgu nagu haua ja on täitmatu otsekui surm, kes korjab enesele kõik paganad ja kogub enese juurde kõik rahvad."},
	{6, "6 Eks nad kõik tee tema kohta pilkelaule ja osatavaid mõistukõnesid ning ütle: Häda sellele, kes kuhjab kokku, mis ei ole tema oma - kui kauaks? - ja koormab ennast võlaga. "},
	{7, "7 Kas viimaks su võlausaldajad ei tõuse äkitselt ja su vintsutajad ei ärka? Jah, ja sina jääd neile saagiks! "},
	{8, "8 Sest sa oled riisunud paljusid rahvaid, nüüd riisuvad kõik rahvad sind inimeste vere ja kõige vägivalla pärast, mis sa oled teinud maale ja linnale ning kõigile selle asukaile. "},
	{9, "9 Häda sellele, kes ahnitseb oma kojale ülekohtust kasu, et paigutada oma pesa kõrgele ja päästa ennast kurja käest. "},
	{10, "10 Sa oled oma kavatsustega  häbistanud oma koja, oled hävitanud paljusid rahvaid ja oled teinud pattu oma hinge vastu. "},
	{11, "11 Sest kivi müüris kisendab  ja sarikapuu vastab temale. "},
	{12, "12 Häda sellele, kes ehitab verega linna ja rajab ülekohtuga linnust! "},
	{13, "13 Vaata, eks seegi ole vägede Issandalt,  et rahvaste vaev saab tuleroaks ja rahvahõimud väsitavad endid ilmaaegu? "},
	{14, "14 Sest maa saab täis Issanda au tundmist - otsekui veed katavad merepõhja. "},
	{15, "15 Häda sellele,  kes joodab ligimest, pannes joogi hulka oma viha, et jooja joobnuks jääks ja jootja saaks vaadata tema alastiolekut. "},
	{16, "16 Au asemel sa küllastud häbist: joo sinagi ja näita oma eesnahka! Issanda parema käe karikas  jõuab ringiga sinuni, ja su au kaetakse häbiga. "},
	{17, "17 Sest Liibanonile tehtud vägivald katab sind ja loomade hävitus teeb sulle hirmu inimeste vere, samuti maale, linnale ja kõigile selle asukaile tehtud vägivalla pärast. "},
	{18, "18 Mis kasu on nikerdatud kujust, mille meister nikerdab, valatud kujust ja valeõpetajast, et meister kuju peale loodab, valmistades keeletuid ebajumalaid? "},
	{19, "19 Häda sellele, kes ütleb puule: 'Ärka!' või liikumatule kivile: 'Liigu!' Ons see õpetaja? Vaata, see on kulla ja hõbedaga kaetud, ometi pole vaimu tema sees. "},
	{20, "20 Aga Issand on oma pühas templis, tema palge ees vaikigu kogu maa!'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct et3 poems[] = {
	{1, "1 Prohvet Habakuki palve kaebelaulude kujul:  "},
	{2, "2 'Issand, ma olen kuulnud su sõnumit, ma kardan su tegu, Issand. Aga lase see ligemail aastail sündida, tee see ligemail aastail teoks ja mõtle oma vihas halastusele! "},
	{3, "3 Jumal tuleb Teemanist, püha Paarani mäelt! Sela. Tema aulikkus katab taevaid ja maa on täis tema kiitust. "},
	{4, "4 Tema all on nagu valguse sära, tema kõrval on kiired, seal on ta võimsuse loor. "},
	{5, "5 Tema ees käib katk ja tema kannul tuleb taud. "},
	{6, "6 Tema seisab ja mõõdab maad, tema vaatab ja paneb rahvad võpatama. Purunevad igavesed mäed, vajuvad ürgsed künkad. Tema teed on igavesed. "},
	{7, "7 Ma näen Kuusani telke vaevakoorma all, Midjanimaa telgiriided värisevad. "},
	{8, "8 Kas oled vihane jõgede pärast, Issand? Ons sul viha jõgede või raev mere vastu, kui sa sõidad oma hobuste seljas ja võit on su sõjavankrite päralt? "},
	{9, "9 Sina paljastad oma ammu, paned nooled nöörile. Sela. Sina lõhestad jõgedega maa. "},
	{10, "10 Mäed näevad sind  ja värisevad, pilved kallavad vett, põhjavesi teeb häält, tõstab oma käed kõrgele. "},
	{11, "11 Päike ja kuu jäävad tõusmata: nad jäävad paigale noolte valguses, su välkuvate piikide säras. "},
	{12, "12 Raevus sammud sa läbi maa, vihas peksad rahvaid nagu reht. "},
	{13, "13 Sa lähed aitama oma rahvast, appi oma võitule. Sa peksad puruks katuse õela kojalt ja paljastad aluse kaljuni. Sela. "},
	{14, "14 Sa läbistad oma nooltega nende pea, kes tõttavad mind laiali pillutama; nad hõiskavad, otsekui neelaksid nad viletsaid salamahti. "},
	{15, "15 Sa tallasid merre tema ratsud, voogude põhjaporri. "},
	{16, "16 Ma kuulen seda ja mu ihu väriseb, hääl paneb vabisema mu huuled, mädanik tungib mu luudesse ja mu põlved värisevad, aga ma ootan, kuni hädaaeg tuleb selle rahva üle, kes on tulnud meile kallale.  "},
	{17, "17 Kuigi viigipuu ei õitse ja viinapuudel pole vilja, õlipuu saak äpardub ja põllud ei anna toidust, lambad ja kitsed kaovad tarast ja veiseid pole karjaaedades, "},
	{18, "18 ometi rõõmustan mina Issandas, hõiskan oma pääste Jumalas. "},
	{19, "19 Issand Jumal on minu jõud. Tema teeb mu jalad  emahirve jalgade sarnaseks ja paneb mind käima mu kõrgustikel.' Laulujuhatajale: minu keelpillisaade."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};