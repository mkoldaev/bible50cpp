#include <map>
#include <string>
class Bible8
{
	struct sk1	{ int val; const char *msg; };
	struct sk2	{ int val; const char *msg; };
	struct sk3	{ int val; const char *msg; };
	struct sk4	{ int val; const char *msg; };
public:
static void view1() {
struct sk1 poems[] = {
	{1, "1 V čase, keď úradovali sudcovia, nastal v krajine hlad. Istý človek sa vysťahoval z júdskeho Betlehema, aby ako cudzinec žil na Moabských rovinách so svojou manželkou a dvoma synmi."},
	{2, "2 Muž sa volal Elimelech, jeho manželka Noemi a jeho dvaja synovia Machlon a Kiljon. Boli to Efratejci z júdskeho Betlehema, ktorí sa presťahovali na Moabské roviny, aby sa tam osadili."},
	{3, "3 Ale Noemin manžel Elimelech zomrel, a tak zostala sama so svojimi synmi."},
	{4, "4 Oni sa oženili s Moabkami. Jedna nevesta sa volala Orfa a druhá Rút. Tak tam bývali asi desať rokov."},
	{5, "5 Ale aj títo dvaja, Machlon a Kiljon, jej umreli, takže po smrti svojich dvoch synov a po smrti manžela zostala táto žena sama (v cudzej krajine)."},
	{6, "6 Vydala sa teda spolu s nevestami na cestu späť z Moabských rovín, lebo sa na Moabskej rovine dopočula, že Pán milostivo navštívil svoj ľud a dal mu chlieb."},
	{7, "7 A tak zanechala miesto, kde dosiaľ bývala, a (šli) s ňou aj jej dve nevesty. Keď došli na cestu, ktorá viedla späť do júdskej krajiny,"},
	{8, "8 Noemi povedala svojim dvom nevestám: „Choďte, vráťte sa každá do domu svojej matky! Nech vám Pán preukáže svoju lásku, akú ste prejavili (mojim) mŕtvym i mne!"},
	{9, "9 Nech vám Pán dá, aby ste našli spočinutie každá v dome svojho manžela!“ A pobozkala ich. Ale ony sa pustili do hlasitého plaču"},
	{10, "10 a hovorili jej: „Vrátime sa s tebou k tvojmu národu!“"},
	{11, "11 Noemi im odpovedala: „Vráťte sa, dcéry moje! Prečo by ste šli so mnou? Či sa mi ešte narodia synovia, aby sa stali vašimi manželmi?!"},
	{12, "12 Vráťte sa, dcéry moje! Choďte len! Ja som už stará na vydaj. Veď keby som si povedala: Mám ešte nádej (na dieťa) a keby som ešte túto noc bola s mužom a porodila by som synov,"},
	{13, "13 či chcete na nich čakať, až vyrastú? Či sa uzavriete, aby ste sa pre nich nevydali za muža? Nie tak, dcéry moje! Moja trpkosť je omnoho väčšia ako vaša, lebo Pánova ruka vystúpila proti mne.“"},
	{14, "14 Tu sa znovu dali hlasite plakať. Pritom Orfa pobozkala svoju svokru a vrátila sa, ale Rút sa jej pridŕžala."},
	{15, "15 Povedala jej (Noemi): „Hľa, tvoja švagriná sa vrátila k svojmu národu a k svojim bohom! Choď aj ty za svojou švagrinou!“"},
	{16, "16 Ale Rút odpovedala: „Nenaliehaj na mňa, aby som ťa opustila a odvrátila sa od teba: lebo kde pôjdeš ty, pôjdem i ja, kde sa zdržíš, zdržím sa aj ja: tvoj národ sa stane mojím národom a tvoj Boh bude mojím Bohom."},
	{17, "17 Kde ty zomrieš, tam zomriem i ja a tam budem aj pochovaná. Nech mi Pán tak urobí a nech mi tak aj pridá, že len smrť ma odlúči od teba.“"},
	{18, "18 Keď (Noemi) videla, že je pevne rozhodnutá ísť s ňou, prestala ju nahovárať a odporúčať jej návrat k svojim."},
	{19, "19 Tak išli obidve spolu, až došli do Betlehema. Ako vošli do Betlehema, vzrušilo sa pre ne celé mesto a (ženy) si hovorili: „Nie je to Noemi?“"},
	{20, "20 Ale ona im vravela: „Nehovorte mi už Noemi, ale volajte ma Mara, lebo veľkú trpkosť mi dal skúsiť Všemohúci!"},
	{21, "21 Odišla som plná a Pán ma privádza späť prázdnu. Prečo mi teda hovoríte Noemi, keď Pán takto svedčí proti mne a Všemohúci priviedol na mňa utrpenie.“"},
	{22, "22 Tak sa vrátila Noemi a jej moabská nevesta Rút, ktorá prišla spolu s ňou z Moabskej roviny. Do Betlehema došli na začiatku žatvy jačmeňa."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sk2 poems[] = {
	{1, "1 Podľa svojho muža mala Noemi istého príbuzného, ktorý bol veľmi zámožným mužom z Elimelechovho rodu; volal sa Bóz."},
	{2, "2 Moabka Rút povedala Noemi: „Dovoľ mi ísť na pole a zbierať tam klásky po tých (žencoch), u ktorých nájdem milosť!“ Ona jej odvetila: „Choď, dcéra moja!“"},
	{3, "3 Šla teda, prišla na pole a zbierala (klasy) po žencoch. Náhodou zbierala na poli Bózovom, ktorý bol z Elimelechovho príbuzenstva."},
	{4, "4 A Bóz prišiel z Betlehema (na pole) a pozdravil žencov: „Pán nech je s vami!“ Oni mu odpovedali: „Požehnaj ťa Pán!“"},
	{5, "5 Bóz sa pýtal svojho služobníka, ktorý mal dozor nad žencami: „Čia je to deva?“"},
	{6, "6 Služobník, dozorca žencov, mu povedal: „To je moabské dievča, ktoré prišlo spolu s Noemi z Moabskej roviny."},
	{7, "7 Aj ma požiadala: Chcela by som zbierať klasy a paberkovať medzi snopmi po žencoch. Prišla a od včasného rána je na nohách, ani chvíľku nepobudla doma.“"},
	{8, "8 Bóz sa prihovoril Rút: „Dcéra moja, počúvaj ma! Nechoď zbierať klásky na iné pole, ani neprechádzaj stadiaľto, ale drž sa mojich služobníc!"},
	{9, "9 Oči (maj upreté) na pole, na ktorom žnú, a zbieraj za nimi! Svojim sluhom som rozkázal, aby ti nik nekrivdil. Ak zacítiš smäd, zájdi k nádobám a napi sa z toho, čo načerpali sluhovia!“"},
	{10, "10 Ona pred ním padla na tvár, poklonila sa po zem a povedala mu: „Ako to, že som našla priazeň v tvojich očiach a že sa staráš o mňa, hoci som cudzinka?“"},
	{11, "11 Bóz jej odpovedal: „Hlásili mi všetko, čo si urobila pre svoju svokru po smrti svojho manžela: ako si opustila svojho otca, svoju matku a svoju vlasť, kde si sa narodila, a prišla si medzi ľud, ktorý si predtým nepoznala."},
	{12, "12 Pán nech ti odplatí za tvoj skutok! Nech sa ti dostane plnej odmeny od Pána, Izraelovho Boha, ku ktorému si pristúpila, aby si sa uchýlila pod ochranu jeho krídel!“"},
	{13, "13 Ona mu odpovedala: „Pane, našla som priazeň v tvojich očiach, lebo si potešil svoju služobnicu a hovoril si k jej srdcu, hoci nie som ani tvojou služobnicou.“"},
	{14, "14 A keď prišiel čas jedla, Bóz jej povedal: „Poď sem a jedz z chleba a omoč si krajec v octe!“ Sadla si teda vedľa žencov a on jej nadelil praženého zrna, takže sa najedla do sýtosti a ešte jej aj zvýšilo."},
	{15, "15 Keď vstala zbierať klásky, Bóz rozkázal svojim sluhom: „Nech si zbiera klásky aj medzi snopmi a vy na ňu nebuďte za to mrzutí!"},
	{16, "16 Ba (náročky) vypúšťajte (klasy) zo svojich hrstí a nechajte pre ňu, aby nazbierala, a nehrešte ju za to!“"},
	{17, "17 Tak zbierala klásky do večera a keď vymlátila, čo nazbierala, mala z toho asi efu jačmeňa."},
	{18, "18 Keď jej svokra videla, koľko nazbierala, a keď okrem toho vyňala a podala, čo jej zvýšilo, keď sa nasýtila,"},
	{19, "19 vravela jej svokra: „Kdeže si zbierala klasy a kde si pracovala? Nech je požehnaný človek, ktorý sa staral o teba!“ Vtedy oznámila svokre, u koho pracovala, a povedala: „Meno muža, u ktorého som dnes pracovala, je Bóz.“"},
	{20, "20 Noemi povedala svojej neveste: „Nech Pán požehná človeka, ktorý neodoprel svoju dobrotu ani živým, ani mŕtvym!“ A vravela ďalej: „Ten človek je naším príbuzným, jedným z tých, čo sú zaviazaní konať za nás krvnú pomstu.“"},
	{21, "21 A Moabka Rút rozprávala ďalej: „Aj to mi ešte povedal: Drž sa mojich služobníkov, kým nedokončia celú moju žatvu!“"},
	{22, "22 Noemi povedala svojej neveste: „Dobre je to, dcéra moja. Chodievaj von s jeho služobnicami a nik ťa nebude hrešiť na poli niekoho iného.“"},
	{23, "23 Tak sa držala pri zbieraní klasov Bózových služobníc až do ukončenia žatvy jačmeňa a žatvy pšenice. Potom bývala pri svojej svokre."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sk3 poems[] = {
	{1, "1 (Istého dňa) jej povedala svokra Noemi: „Dcéra moja, nemám ti pohľadať spokojný príbytok, aby ti bolo dobre?"},
	{2, "2 Tak teda: Náš príbuzný Bóz, s ktorého služobnicami si bola (pri žatve), túto noc veje jačmeň na humne."},
	{3, "3 Umy sa, pomaž sa, obleč si (krajšie) rúcho a choď dolu na humno! Ale nech ťa nezbadá ten muž, dokiaľ neprestane jesť a piť!"},
	{4, "4 A keď sa potom odoberie na odpočinok, všimni si miesto, kde si ľahne. Potom pôjdeš, odhrnieš mu z nôh prikrývku a ľahneš si. On ti potom povie, čo máš robiť.“"},
	{5, "5 Ona jej povedala: „Urobím všetko, čo mi kážeš.“"},
	{6, "6 Tak išla dolu na humno a urobila všetko, ako jej kázala svokra."},
	{7, "7 Keď sa Bóz najedol a napil, takže bol v dobrej nálade, odobral sa na odpočinok vedľa hromady (zrna). Tu prišla potichu ona, odhrnula mu z nôh prikrývku a ľahla si."},
	{8, "8 O polnoci sa ten človek preľakol a skrútil sa, lebo mu žena ležala pri nohách."},
	{9, "9 I opýtal sa: „Kto si?“ Ona odpovedala: „Som Rút, tvoja služobnica. Rozprestri okraj (svojho plášťa) na svoju služobnicu, lebo si mi príbuzný!“"},
	{10, "10 On jej povedal: „Nech ťa požehná Pán, dcéra moja! Táto tvoja druhá láskavosť sa mi viac páči ako tá prvá, lebo nechodíš za mladíkmi, či sú chudobní alebo bohatí."},
	{11, "11 A teraz sa neboj, dcéra moja. Urobím ti všetko, čo vyslovíš, veď všetok ľud môjho mesta ťa pozná ako čnostnú ženu."},
	{12, "12 A teraz je pravda, že som ti príbuzný. Ale je ešte v príbuzenstve, kto ti je bližší ako ja."},
	{13, "13 Zostaň cez noc tu! A zajtra, ak ten človek bude voči tebe uplatňovať právo príbuzenstva, dobre, nech ho uplatní; ale ak nebude chcieť uplatniť svoje príbuzenské právo na teba, uplatním ho voči tebe ja - ako žije Pán! Nocuj tu do rána!“"},
	{14, "14 A tak mu zostala ležať pri nohách do rána. Vstala však prv, ako by človek človeka rozoznal, a on jej povedal: „Nech sa nik nedozvie, že nejaká žena prišla za mnou na humno!“"},
	{15, "15 A ešte dodal: „Daj sem svoj plášť, ktorý máš na sebe, a podrž mi ho!“ Keď mu ho podržala, nameral jej šesť mier jačmeňa a naložil jej ho. Potom šiel do mesta."},
	{16, "16 Keď došla k svojej svokre, ona sa jej pýtala: „Ako si (pochodila), dcéra moja?“ I porozprávala jej všetko, ako sa ten muž zachoval."},
	{17, "17 A dodala: „Týchto šesť mier jačmeňa mi dal, lebo vravel: Nepôjdeš naprázdno ku svojej svokre.“"},
	{18, "18 Ona jej povedala: „Dočkaj, dcéra moja, kým sa nedozvieš, ako sa celá vec skončí. Lebo ten muž neustane, kým neprivedie ešte dnes túto vec ku koncu.“"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sk4 poems[] = {
	{1, "1 Bóz sa odobral do brány (mesta) a sadol si tam. Keď ta prišiel aj príbuzný, o ktorom Bóz hovoril, povedal mu: „Poď sem, ty a ty, a posaď sa!“ On pristúpil a sadol si."},
	{2, "2 Nato si Bóz vybral desať mužov spomedzi starších mesta a povedal im: „Posaďte sa sem!“ A oni si posadali."},
	{3, "3 Potom povedal tomu príbuznému: „Noemi, ktorá sa navrátila z Moabskej roviny, dáva do predaja čiastku poľa, čo patrila nášmu bratovi Elimelechovi."},
	{4, "4 Povedal som si, že ti to dám vedieť a poviem ti: Odkúp si ho v prítomnosti tých, čo tu sedia, a v prítomnosti starších môjho ľudu. Ak ho chceš odkúpiť, tak si ho odkúp! Ak ho kúpiť nemieniš, oznám mi to, lebo viem, že okrem teba niet iného, kto by ho mal odkúpiť. Ja nasledujem po tebe.“ On povedal: „Ja ho odkúpim.“"},
	{5, "5 Bóz hovoril ďalej: „Ak dnes nadobúdaš z Noeminých rúk pole, si povinný vziať si aj Moabku Rút, manželku zosnulého, aby si oživil meno zomrelého pre jeho dedičstvo.“"},
	{6, "6 Príbuzný povedal: „Tak ho nemôžem odkúpiť, lebo by som si zničil svoj dedičný podiel. Odkúp si ty, čo som mal ja odkúpiť, lebo ja ho kúpiť nemôžem.“"},
	{7, "7 Od starodávna bolo v Izraeli (zvykom) pri kupovaní alebo pri zámene vecí, aby bola celá záležitosť pevná, že jeden si vyzul obuv a podal ju druhému. To bolo ako potvrdenie v Izraeli."},
	{8, "8 A tak si vyzul obuv aj ten príbuzný, ktorý povedal Bózovi: „Odkúp si ho ty!“"},
	{9, "9 Nato povedal Bóz starším (mesta) a všetkému ľudu: „Dnes ste mi svedkami, že som z Noeminých rúk kúpil všetko, čo patrilo Elimelechovi, aj všetko, čo patrilo Kiljonovi a Machlonovi."},
	{10, "10 Ale aj Machlonovu manželku, Moabku Rút, som získal za ženu, aby som zomrelému splodil potomka pre jeho dedičstvo, aby nebolo meno zosnulého vymazané spomedzi jeho bratov a z brán jeho (rodného) mesta."},
	{11, "11 Vy ste toho dnes svedkami.“"},
	{12, "12 A všetok ľud, ktorý bol v bráne, aj starší (mesta) odpovedali: „Sme toho svedkami. Nech Pán urobí aj s touto ženou, ktorá vstúpi do tvojho domu, ako (urobil) s Ráchel a Liou, lebo ony dve zbudovali dom Izraelov. Nech si počína čnostne v Efrate, aby ti urobila meno v Betleheme. Tvoj dom nech je ako dom Fáresov, ktorého porodila Tamar Júdovi, zásluhou potomstva, ktoré ti dá Pán z tejto ženy.“"},
	{13, "13 Bóz si ju teda vzal a stala sa mu manželkou. Keď s ňou obcoval, Pán bol k nej dobrotivý, takže počala a porodila syna."},
	{14, "14 Tu hovorili ženy k Noemi: „Nech je zvelebený Pán, ktorý ti dnes neodoprel ochrancu."},
	{15, "15 Nech sa jeho meno (pochvalne) uvádza v Izraeli! Nech ti je potešením duše a živiteľom v dňoch staroby. Porodila ti ho tvoja nevesta, ktorá ťa miluje. Ona ti je oveľa lepšia ako sedem synov.“"},
	{16, "16 Noemi vzala chlapca, vložila si ho do lona a bola mu pestúnkou."},
	{17, "17 Susedky mu dali meno a hovorili si: „Vnuk sa narodil Noemi.“ A nazvali ho Obedom. On je otcom Izaiho, Dávidovho otca."},
	{18, "18 Toto je Fáresov rodostrom: Fáres bol Ezronovým otcom,"},
	{19, "19 Ezron bol Aramovým otcom, Aram bol Aminadabovým otcom,"},
	{20, "20 Aminadab bol Násonovým otcom, Náson bol Salmonovým otcom,"},
	{21, "21 Salmon bol Bózovým otcom a Bóz bol Obedovým otcom."},
	{22, "22 Obed bol otcom Izaiho a Izai bol Dávidovým otcom."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};