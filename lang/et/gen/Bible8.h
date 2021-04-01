#include <map>
#include <string>
class Bible8
{
	struct et1	{ int val; const char *msg; };
	struct et2	{ int val; const char *msg; };
	struct et3	{ int val; const char *msg; };
	struct et4	{ int val; const char *msg; };
public:
static void view1() {
struct et1 poems[] = {
	{1, "1 Ja neil päevil, kui kohtumõistjad mõistsid kohut, juhtus, et nälg oli maal. Siis läks üks mees Petlemmast Juudamaalt, et võõrana elada Moabi väljadel, tema ja ta naine ja kaks poega. "},
	{2, "2 Selle mehe nimi oli Elimelek, ta naise nimi Noomi ja ta kahe poja nimed Mahlon ja Kiljon; nad olid efratlased Petlemmast Juudamaalt, ja nad tulid Moabi väljadele ning jäid sinna.  "},
	{3, "3 Aga Elimelek, Noomi mees, suri, ja Noomi jäi järele oma kahe pojaga.   "},
	{4, "4 Ja need võtsid endile moabi naised: ühe nimi oli Orpa ja teise nimi Rutt; ja nad elasid seal ligi kümme aastat. "},
	{5, "5 Siis surid ka mõlemad pojad, Mahlon ja Kiljon, ning naine jäi üksi, ilma oma kahest pojast ja mehest.  "},
	{6, "6 Ta võttis siis oma miniatega kätte ja läks Moabi väljadelt tagasi, sest ta oli Moabi väljadel kuulnud, et Issand oli hoolitsenud oma rahva eest, andes neile leiba. "},
	{7, "7 Ta läks ära paigast, kus ta oli olnud, ja temaga koos ta kaks miniat. Aga olles teel tagasi Juudamaale,  "},
	{8, "8 ütles Noomi oma mõlemale miniale: 'Minge, pöörduge kumbki oma ema koju! Issand tehku teile head, nagu te olete teinud surnuile ja minule!  "},
	{9, "9 Andku teile Issand, et leiaksite varjupaiga kumbki oma mehe kojas!' Ja ta suudles neid. Aga nad tõstsid häält ja nutsid "},
	{10, "10 ning ütlesid temale: 'Ei, me läheme koos sinuga su rahva juurde!'  "},
	{11, "11 Aga Noomi ütles: 'Minge tagasi, mu tütred! Miks peaksite tulema koos minuga? On mul siis veel poegi üsas, et need võiksid saada teile meesteks?  "},
	{12, "12 Minge tagasi, mu tütred, minge, sest mina olen liiga vana, et minna mehele! Kui ma ütleksin: Mul on veel lootust, kui ma veel täna öösel saaksin mehele ja sünnitaksin poegigi, "},
	{13, "13 kas tahaksite siis oodata, kuni nad suureks saavad? Kas tahate seni meheleminekust hoiduda? Ei, mu tütred, mina kannatan tõesti rohkem kui teie, et Issanda käsi mind on tabanud.' "},
	{14, "14 Aga nemad tõstsid häält ja nutsid veel enam; Orpa suudles seejärel oma ämma, kuna Rutt jäi tema seltsi.  "},
	{15, "15 Noomi ütles: 'Vaata, su kälis pöördus tagasi oma rahva ja jumalate juurde. Pöördu ka sina oma käliksele järele!' "},
	{16, "16 Kuid Rutt vastas: 'Ära käi mulle peale, et ma sind maha jätaksin ja pöörduksin tagasi su juurest, sest kuhu sina lähed, sinna lähen ka mina, ja kuhu sina jääd, sinna jään minagi! Sinu rahvas on minu rahvas ja sinu Jumal on minu Jumal. "},
	{17, "17 Kus sina sured, seal tahan ka mina surra ja sinna maetagu mindki! Issand tehku minuga ükskõik mida, ainult surm lahutagu mind ja sind!'  "},
	{18, "18 Kui Noomi nägi, et Rutil oli kindel nõu temaga kaasa tulla, siis ta sellest enam ei rääkinud.  "},
	{19, "19 Nii läksid nad mõlemad, kuni jõudsid Petlemma. Ja kui nad Petlemma tulid, siis oli kogu linn nende pärast liikvel ja naised küsisid: 'Kas see on Noomi?'  "},
	{20, "20 Aga tema vastas neile: 'Ärge hüüdke mind Noomiks, hüüdke mind Maaraks, sest Kõigeväeline on mulle valmistanud palju kibedust! "},
	{21, "21 Külluses läksin ma ära ja tühje käsi tõi Issand mind tagasi. Miks te hüüate mind Noomiks, sest Issand on tunnistanud minu vastu ja Kõigeväeline on teinud mulle paha!'"},
	{22, "22 Nõnda tuli Noomi tagasi ja koos temaga moabi naine Rutt, ta minia, kes tuli ära Moabi väljadelt; ja nad jõudsid Petlemma odralõikuse alguseks. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct et2 poems[] = {
	{1, "1 Ja Noomil oli ta mehe sugulane, jõukas mees Elimeleki suguvõsast, Boas nimi.  "},
	{2, "2 Ja moabi naine Rutt ütles Noomile: 'Lase ma lähen põllule ja nopin viljapäid selle järelt, kelle silmis ma armu leian!' Ja ta vastas temale: 'Mine, mu tütar!'  "},
	{3, "3 Ja ta läks ning tuli ja noppis põllul lõikajate järelt; temale juhtus juhuslikult põlluosa, mis kuulus Boasele, kes oli Elimeleki suguvõsast.  "},
	{4, "4 Ja vaata, Boas tuli Petlemmast ja ütles lõikajaile: 'Issand olgu teiega!' Ja nad vastasid temale: 'Issand õnnistagu sind!' "},
	{5, "5 Siis Boas küsis oma sulaselt, kes oli pandud lõikajate ülevaatajaks: 'Kelle noorik see on?'  "},
	{6, "6 Ja sulane, kes oli pandud lõikajate ülevaatajaks, vastas ning ütles: 'See noorik on moabi naine, kes koos Noomiga tuli Moabi väljadelt;  "},
	{7, "7 ta palus: Luba ma nopin ja kogun parmaste juurest, lõikajate järelt! Nii ta tuli ja on püsinud hommikust kuni siiani, ta on ainult pisut aega kodus olnud.' "},
	{8, "8 Siis Boas ütles Rutile: 'Kas kuuled, mu tütar, ära mine teisele põllule noppima ja ära mine ka ära, vaid seltsi siin minu tüdrukutega!  "},
	{9, "9 Hoia oma silmad põllul, mida nad lõikavad, ja käi nende järel! Ma olen poisse keelanud sinusse puutumast. Ja kui sul on janu, siis mine lähkrite juurde ja joo, mis poisid toovad!' "},
	{10, "10 Siis Rutt heitis silmili ja kummardas maani ning ütles temale: 'Miks olen ma su silmis armu leidnud, et sa minust hoolid, kuigi olen võõras?' "},
	{11, "11 Ja Boas vastas ning ütles temale: 'Küllap on mulle teada antud kõik, mida sa oma ämmale oled teinud pärast oma mehe surma, ja kuidas sa jätsid maha oma isa ja ema ja oma sünnimaa ja tulid rahva juurde, keda sa enne ei tundnud.  "},
	{12, "12 Issand tasugu su tegu ja täielik palk tulgu sulle Issandalt, Iisraeli Jumalalt, kelle tiibade alla sa oled tulnud varjule!' "},
	{13, "13 Ja Rutt ütles: 'Ma olen sinu silmis armu leidnud, mu isand, sest sa oled mind trööstinud ja oled rääkinud oma teenijale meelepäraselt, kuigi ma pole ühegi su teenija vääriline.'"},
	{14, "14 Söögiajal ütles Boas temale: 'Tule siia ja söö seda leiba ja kasta oma paluke äädikasse!' Ja Rutt istus lõikajate kõrvale ja Boas ulatas talle kõrvetatud teri; ja ta sõi, ta kõht sai täis ja teri jäi ülegi.  "},
	{15, "15 Kui ta tõusis noppima, siis käskis Boas oma poisse, öeldes: 'Noppigu ta ka parmaste vahelt ja te ei tohi teda häbistada! "},
	{16, "16 Jah, koguni tõmmake temale vihkudest välja ja jätke maha, et ta neid nopiks, ja ärge sõidelge teda!'  "},
	{17, "17 Nii noppis Rutt põllul kuni õhtuni ja rabas, mis ta oli noppinud, ja sai ligi pool vakka otri. "},
	{18, "18 Ja ta võttis need ja tuli linna ning ta ämm nägi, mis ta oli noppinud; siis ta tõi esile ja andis temale selle, mis jäi üle, kui ta kõht oli täis saanud.  "},
	{19, "19 Ja ta ämm ütles temale: 'Kus sa täna noppisid ja kus sa töötasid? Olgu õnnistatud see, kes sinust hoolis!' Siis ta jutustas oma ämmale, kelle juures ta oli töötanud, ja ütles: 'Selle mehe nimi, kelle juures ma täna töötasin, on Boas.' "},
	{20, "20 Ja Noomi ütles oma miniale: 'Õnnistagu teda Issand, kes pole loobunud oma heldusest elavate ja surnute vastu!' Ja Noomi ütles temale: 'See mees on meie lähem sugulane, ta on üks meie suguvõsa lunastajaid.'  "},
	{21, "21 Siis ütles moabi naine Rutt: 'Ta ütles mulle veel: Jää mu sulaste seltsi, kes mul on, seni kui nad on lõpetanud kogu mu lõikuse!'  "},
	{22, "22 Ja Noomi ütles Rutile, oma miniale: 'See on hea, mu tütar, et sa koos tema tüdrukutega välja lähed, siis ei tülitata sind teisel põllul.' "},
	{23, "23 Nii jäi Rutt Boase tüdrukute seltsi noppima, kuni lõppes odra- ja nisulõikus; ja ta elas oma ämma juures. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct et3 poems[] = {
	{1, "1 Ja ta ämm Noomi ütles temale: 'Mu tütar, kas ma ei peaks otsima sulle varjupaika, et su käsi võiks käia hästi? "},
	{2, "2 Ja eks ole nüüd Boas, kelle tüdrukutega sa oled koos olnud, meie sugulane? Vaata, ta tuulab täna öösel odrareht. "},
	{3, "3 Pese siis ennast ja võia  ennast ning riietu ja mine alla rehealusesse; aga ära lase, et mees sind märkaks, enne kui ta söömise ja joomise on lõpetanud.  "},
	{4, "4 Aga kui ta heidab magama, siis pane tähele paika, kus ta magab, ja mine tõsta üles ta jalgade kate ja heida magama; siis ta ütleb sulle, mis sa pead tegema.' "},
	{5, "5 Ja Rutt vastas temale: 'Ma teen kõik, mis sa mulle ütled.'"},
	{6, "6 Ja ta läks alla rehealusesse ning tegi kõik nõnda, nagu ta ämm oli käskinud. "},
	{7, "7 Ja kui Boas oli söönud ja joonud ja ta süda oli rõõmus, siis ta läks magama viljahunniku äärde; ja Rutt tuli hiljukesi, tõstis üles jalgade katte ning heitis magama.  "},
	{8, "8 Aga keskööl mees võpatas ja pööras end, ja vaata, naine magas ta jalgade juures. "},
	{9, "9 Ja ta küsis: 'Kes sa oled?' Ja naine vastas: 'Mina olen Rutt, su teenija. Laota hõlm oma teenija peale, sest sina oled suguvõsa lunastaja!'  "},
	{10, "10 Siis ta ütles: 'Õnnistagu sind Issand, mu tütar! Sa oled nüüd viimaks osutanud oma armastust paremini kui varem, et sa ei ole järele jooksnud noortele meestele, olgu nad vaesed või rikkad. "},
	{11, "11 Ja nüüd, mu tütar, ära karda; kõik, mida sa soovid, ma teen sulle, sest mu rahva väravas teab igaüks, et sa oled tubli naine! "},
	{12, "12 On ju nüüd küll tõsi, et ma olen su suguvõsa lunastaja, aga on ka lunastaja, kes on ligem kui mina. "},
	{13, "13 Jää selleks ööks siia, ja kui ta hommikul tahab sind lunastada, hea küll, siis lunastagu! Aga kui ta ei soovi sind lunastada, siis lunastan mina sind, nii tõesti kui Issand elab. Maga hommikuni!'"},
	{14, "14 Ja Rutt magas tema jalgade juures hommikuni, aga tõusis enne, kui keegi teist võis tunda; ja Boas ütles: 'Ärgu saagu teatavaks, et naine on tulnud siia rehealusesse!' "},
	{15, "15 Ja ta ütles: 'Anna suurrätik, mis sul üll on, ja hoia see lahti!' Ja ta hoidis seda. Siis Boas mõõtis kuus mõõtu otri ja pani temale selga; ja ta läks linna. "},
	{16, "16 Ja Rutt tuli oma ämma juurde ning see küsis: 'Kuidas sul läks, mu tütar?' Ja ta jutustas temale kõik, mis mees oli temale teinud, "},
	{17, "17 ja ütles: 'Ta andis mulle need kuus mõõtu otri, sest ta ütles: Ära mine oma ämma juurde tühje käsi!' "},
	{18, "18 Ja ämm ütles: 'Jää siia, mu tütar, kuni sa saad teada, kuidas asi õnnestub, sest see mees ei puhka enne, kui on täna asja toime saatnud!' "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct et4 poems[] = {
	{1, "1 Ja Boas läks väravasse ning istus seal; ja vaata, see lunastaja läks mööda, kellest Boas oli rääkinud, ja Boas ütles: 'Tule istu siia, sina, mis su nimi nüüd ongi!' Ja see pöördus ning istus. "},
	{2, "2 Ja Boas võttis kümme meest linna vanemaist ning ütles: 'Istuge siia!' Ja need istusid.  "},
	{3, "3 Siis ta ütles lunastajale: 'Noomi, kes tuli tagasi Moabi väljadelt, tahab ära müüa põlluosa, mis kuulus meie vennale Elimelekile. "},
	{4, "4 Siis ma mõtlesin, et ma teatan sulle ja ütlen: Osta see nende ees, kes siin istuvad, ja mu rahva vanemate ees! Kui sa tahad lunastada, siis lunasta, aga kui sa ei taha lunastada, siis avalda mulle, et ma teaksin, sest peale sinu pole kedagi, kes võiks lunastada, ja sinu järel olen mina!' Ja ta ütles: 'Mina lunastan!' "},
	{5, "5 Siis ütles Boas: 'Sel päeval, kui sa ostad Noomilt põllu, ostad sa selle ka moabi naiselt Rutilt, surnu naiselt, surnu nime taastamiseks tema pärisosal.' "},
	{6, "6 Aga lunastaja ütles: 'Ma ei saa siis seda enesele lunastada, et mitte rikkuda oma pärisosa. Lunasta sina enesele see, mida mina pidin lunastama, sest mina ei saa lunastada!' "},
	{7, "7 Vanasti oli Iisraelis vabaksostu ja vahetuse puhul kogu asja kinnituseks seesugune viis: üks tõmbas sandaali jalast ja andis teisele; see oli Iisraelis tõendiks. "},
	{8, "8 Ja lunastaja ütles Boasele: 'Osta enesele!' ning tõmbas sandaali jalast.  "},
	{9, "9 Siis Boas ütles vanemaile ja kogu rahvale: 'Te olete täna tunnistajad, et ma olen ostnud Noomilt kõik, mis kuulus Elimelekile, ja kõik, mis kuulus Kiljonile ja Mahlonile. "},
	{10, "10 Ka olen ma moabi naise Ruti, Mahloni naise, ostnud enesele naiseks, et taastada surnu nimi ta pärisosal, et ei kaoks surnu nimi ta vendade hulgast ega ta kodukoha väravast; te  olete täna selle tunnistajad.'  "},
	{11, "11 Ja kogu rahvas, kes oli väravas, samuti vanemad, ütlesid: 'Meie oleme tunnistajad. Issand tehku naine, kes tuleb su kotta, Raaheli ja Lea sarnaseks, kes mõlemad ehitasid Iisraeli koja! Tee vägevaid tegusid Efratas, tee oma nimi kuulsaks Petlemmas! "},
	{12, "12 Ja saagu su sugu Peretsi soo sarnaseks, kelle Taamar sünnitas Juudale, seemnest, mille Issand sulle annab sellest noorikust!'"},
	{13, "13 Ja Boas võttis Ruti ning see sai tema naiseks; Boas heitis ta juurde ja Issand andis, et Rutt jäi lapseootele ja tõi poja ilmale. "},
	{14, "14 Siis ütlesid naised Noomile: 'Kiidetud olgu Issand, kes täna ei jätnud sind lunastajata! Saagu ta nimi kuulsaks Iisraelis! "},
	{15, "15 Saagu ta sulle hingejahutajaks ja toitjaks su vanas eas, sest su minia, kes sind armastab, on ta sünnitanud, tema, kes sulle on parem kui seitse poega!' "},
	{16, "16 Siis Noomi võttis lapse, pani oma sülle ja sai tema hoidjaks. "},
	{17, "17 Ja naabrinaised panid temale nime, öeldes: 'Noomile sündinud poeg!' Ja nad panid temale nimeks Oobed; temast sai Taaveti isa Iisai isa. "},
	{18, "18 Ja need on Peretsi järeltulijad: Peretsile sündis Hesron; "},
	{19, "19 Hesronile sündis Raam ja Raamile sündis Amminadab; "},
	{20, "20 Amminadabile sündis Nahson ja Nahsonile sündis Salma; "},
	{21, "21 Salmale sündis Boas ja Boasele sündis Oobed; "},
	{22, "22 Oobedile sündis Iisai ja Iisaile sündis Taavet."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};