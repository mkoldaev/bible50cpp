#include <map>
#include <string>
class Bible32
{
	struct et1	{ int val; const char *msg; };
	struct et2	{ int val; const char *msg; };
	struct et3	{ int val; const char *msg; };
	struct et4	{ int val; const char *msg; };
public:
static void view1() {
struct et1 poems[] = {
	{1, "1 Ja Issanda sõna tuli Joonale, Amittai pojale; ta ütles: "},
	{2, "2 'Võta kätte, mine Niinevesse, sinna suurde linna, ja jutlusta sellele, sest nende kurjus on tõusnud mu palge ette!'"},
	{3, "3 Aga Joona tahtis põgeneda Issanda palge eest Tarsisesse; ta läks alla Jaafosse ja leidis laeva, mis oli Tarsisesse minemas; ta andis sõiduraha ja astus peale, et minna koos nendega Tarsisesse, Issanda silma alt ära. "},
	{4, "4 Ent Issand tõstis merel kange tuule, nõnda et puhkes suur torm ja näis, et laev hukkub. "},
	{5, "5 Ja meremehed kartsid ning karjusid igaüks oma jumala poole; ja nad heitsid merre laevas olevaid asju, et seda nende võrra kergendada. Aga Joona oli läinud alla laevaruumi ja oli heitnud magama; ja ta magas sügavasti.  "},
	{6, "6 Siis astus laevajuht tema juurde ja ütles talle: 'Kuidas sa saad nõnda sügavasti magada? Tõuse üles, hüüa oma jumala poole, vahest jumal mõtleb meie peale ja me ei hukku!' "},
	{7, "7 Aga isekeskis nad rääkisid: 'Lähme ja heidame liisku, et saaksime teada, kelle pärast on see õnnetus meile tulnud!' Ja nad heitsid liisku ja liisk langes Joonale. "},
	{8, "8 Siis nad ütlesid temale: 'Seleta meile ometi, mispärast on see õnnetus meile tulnud? Mis on su amet ja kust sa tuled? Kus on su kodumaa ja missugusest rahvast oled sa pärit?' "},
	{9, "9 Ja ta vastas neile: 'Mina olen heebrealane ja ma kardan Issandat, taeva Jumalat, kes on teinud mere ja kuiva maa.' "},
	{10, "10 Siis hakkasid mehed väga kartma ja ütlesid temale: 'Miks sa seda tegid?' Sest mehed teadsid, et ta oli Issanda palge eest põgenemas; ta oli neile sellest rääkinud. "},
	{11, "11 Ja nad küsisid temalt: 'Mida me peaksime sinuga tegema, et meri võiks meie poolest rahuneda?' Sest meri hakkas üha enam mässama. "},
	{12, "12 Ja ta vastas neile: 'Võtke mind ja visake merre, siis rahuneb meri teie poolest! Sest ma tean, et see suur torm on teile tulnud minu pärast.' "},
	{13, "13 Mehed sõudsid küll, et pääseda tagasi kuivale maale, aga nad ei suutnud, sest meri hakkas nende vastu üha enam mässama. "},
	{14, "14 Siis nad hüüdsid Issanda poole ja ütlesid: 'Oh Issand, ära ometi lase meid hukkuda selle mehe hinge pärast, samuti ära pane meie peale süütu verd, sest sina, Issand, teed nõnda, nagu on sinule meelepärane!' "},
	{15, "15 Ja nad võtsid Joona ning viskasid ta merre; siis rauges mere raev.  "},
	{16, "16 Aga mehed kartsid Issandat väga ja nad ohverdasid Issandale tapaohvri ning andsid tõotusi."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct et2 poems[] = {
	{1, "1 Aga Issand saatis ühe suure kala, et see neelaks Joona. Ja Joona oli kala kõhus kolm päeva ja kolm ööd. "},
	{2, "2 Ja Joona palus Issandat, oma Jumalat, kala kõhus  "},
	{3, "3 ja ütles:  'Ma hüüdsin oma kitsikuses  Issanda poole  ja tema vastas mulle. Haua sisemuses hüüdsin ma appi ja sina kuulsid mu häält. "},
	{4, "4 Sest sina heitsid mind sügavusse, merede südamesse; veevool ümbritses mind, kõik su vood ja su lained käisid minust üle. "},
	{5, "5 Siis ma mõtlesin: Ma olen ära aetud su silma eest. Siiski ehk saan veel näha su püha templit! "},
	{6, "6 Vesi ümbritses mind  kõrist saadik, süvavesi piiras mind, mererohi mähkis mu pead. "},
	{7, "7 Ma vajusin alla mägede alusteni, maa riivid sulgusid  mu kohal igaveseks. Aga sina tõid mu elu hauast üles, Issand, mu Jumal! "},
	{8, "8 Kui mu hing nõrkes mu sees,  mõtlesin ma Issandale ja mu palve tuli sinu juurde su pühasse templisse. "},
	{9, "9 Need, kes austavad tühje ebajumalaid, hülgavad oma osaduse. "},
	{10, "10 Aga mina tahan ohverdada sinule tänulaulu kõlades. Mida olen tõotanud, seda täidan! Issanda käes on pääste!' "},
	{11, "11 Siis Issand käskis kala ja see oksendas Joona kuivale maale."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct et3 poems[] = {
	{1, "1 Ja Joonale tuli teist korda Issanda sõna; ta ütles:  "},
	{2, "2 'Võta kätte, mine Niinevesse, sinna suurde linna, ja pea sellele jutlus, nagu ma sind käsin!' "},
	{3, "3 Siis Joona võttis kätte ja läks Issanda sõna peale Niinevesse; Niineve oli suur linn Jumala ees: kolm päevateekonda. "},
	{4, "4 Ja Joona hakkas linna läbi käima; käies esimese päeva teed, ta hüüdis ja ütles: 'Veel nelikümmend päeva ja Niineve hävitatakse!'"},
	{5, "5 Ja Niineve mehed uskusid Jumalasse, kuulutasid paastu ja riietusid kotiriidesse, nii suured kui väikesed. "},
	{6, "6 Ja kui sõna sellest jõudis Niineve kuningani, tõusis too oma aujärjelt ja võttis mantli seljast, kattis ennast kotiriidega ja istus tuha peale. "},
	{7, "7 Siis ta laskis Niineves kuulutada ja öelda: 'Kuninga ja tema ülikute käsul öeldakse: Inimesed ja loomad, veised, lambad ja kitsed ärgu söögu midagi, ärgu käigu karjas ja ärgu joogu vett, "},
	{8, "8 vaid nad katku endid kotiriidega, inimesed ja loomad, ja hüüdku võimsasti Jumala poole ja igaüks pöördugu oma kurjalt teelt  ja vägivallast, mis nende käte küljes on! "},
	{9, "9 Kes teab, vahest Jumal pöördub ja kahetseb, pöördub oma tulisest vihast, nii et me ei hukku.' "},
	{10, "10 Kui Jumal nägi nende tegusid, et nad pöördusid oma kurjalt teelt, siis Jumal kahetses kurja, mis ta oli lubanud neile teha, ega teinud seda."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct et4 poems[] = {
	{1, "1 Aga see oli Joonale väga vastumeelt ja ta viha süttis põlema. "},
	{2, "2 Ja ta palus Issandat ning ütles: 'Oh Issand! Eks olnud see minugi sõna, kui ma olin alles kodumaal? Sellepärast ma tahtsingi eelmisel korral põgeneda Tarsisesse, sest ma teadsin, et sina oled armuline ja halastaja Jumal, pika meelega ja rikas heldusest ja et sa kahetsed kurja. "},
	{3, "3 Seepärast, Issand, võta nüüd ometi minust mu hing, sest mul on parem surra kui elada!' "},
	{4, "4 Aga Issand küsis: 'Kas sul on õigus vihastada?'"},
	{5, "5 Siis Joona läks linnast välja ja asus ida poole linna; ta tegi enesele sinna lehtmajakese ja istus selle varjus, et näha, mis linnaga juhtub. "},
	{6, "6 Ja Issand Jumal käskis kiikajonipuul kasvada Joona kohale ja olla ta peale varjuks ning päästa ta tema vaevast. Ja Joona rõõmustas väga kiikajonipuu pärast. "},
	{7, "7 Aga järgmise päeva koites saatis Jumal ussi, kes näris kiikajonipuud, nõnda et see kuivas. "},
	{8, "8 Ja kui päike tõusis, saatis Jumal kõrvetava idatuule ja päike pistis Joonat pähe, nõnda et ta oli minestamas; siis ta palus enesele surma ja ütles: 'Mul on parem surra kui elada!'"},
	{9, "9 Aga Jumal küsis Joonalt: 'Kas sul on õigus vihastada kiikajonipuu pärast?' Tema vastas: 'Küllap mul on õigus vihastada surmani.' "},
	{10, "10 Siis ütles Issand: 'Sina tahaksid armu anda kiikajonipuule, mille kallal sa ei ole näinud vaeva ja mida sa ei ole kasvatanud, mis ühe ööga sündis ja ühe ööga hukkus, "},
	{11, "11 aga mina ei peaks armu andma Niinevele, sellele suurele linnale, kus on enam kui kaksteist korda kümme tuhat inimest, kes ei oska vahet teha oma parema ja vasaku käe vahel, ja kus on palju loomi!'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};