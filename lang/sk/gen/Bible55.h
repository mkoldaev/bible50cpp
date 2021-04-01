#include <map>
#include <string>
class Bible55
{
	struct sk1	{ int val; const char *msg; };
	struct sk2	{ int val; const char *msg; };
	struct sk3	{ int val; const char *msg; };
	struct sk4	{ int val; const char *msg; };
public:
static void view1() {
struct sk1 poems[] = {
	{1, "1 Pavol, z Božej vôle apoštol Ježiša Krista podľa prisľúbenia života, ktorý je v Kristovi Ježišovi,"},
	{2, "2 milovanému synovi Timotejovi: Milosť, milosrdenstvo a pokoj od Boha Otca i od Ježiša Krista, nášho Pána."},
	{3, "3 Vzdávam vďaky Bohu, ktorému slúžim s čistým svedomím ako moji predkovia, keď na teba neprestajne myslím vo svojich modlitbách vo dne v noci."},
	{4, "4 A keď si spomínam na tvoje slzy, túžim ťa vidieť, aby ma naplnila radosť."},
	{5, "5 Spomínam si na tvoju úprimnú vieru, akú mala už tvoja stará matka Loida a tvoja matka Eunika, a som presvedčený, že aj ty."},
	{6, "6 Preto ti pripomínam, aby si roznecoval Boží dar, ktorý je v tebe prostredníctvom vkladania mojich rúk."},
	{7, "7 Veď Boh nám nedal Ducha bojazlivosti, ale Ducha sily, lásky a rozvahy."},
	{8, "8 Preto sa nehanbi za svedectvo o našom Pánovi ani za mňa, jeho väzňa, ale trp spolu so mnou za evanjelium, posilňovaný mocou Boha."},
	{9, "9 On nás spasil a povolal svätým povolaním, nie pre naše skutky, ale zo svojho rozhodnutia a milosti, ktorú sme dostali v Ježišovi Kristovi pred večnými vekmi."},
	{10, "10 No známou sa stala až teraz, keď sa zjavil náš Spasiteľ Ježiš Kristus. On zničil smrť a zjavil život a nesmrteľnosť evanjeliom"},
	{11, "11 a ja som ustanovený za jeho hlásateľa, apoštola a učiteľa."},
	{12, "12 Preto aj toto trpím, ale sa nehanbím, lebo viem, komu som uveril, a som presvedčený, že má moc zachovať to, čo mi bolo zverené, až do onoho dňa."},
	{13, "13 Maj za vzor zdravých slov to, čo si počul odo mňa, vo viere a v láske, ktoré sú v Ježišovi Kristovi."},
	{14, "14 Zverený poklad chráň mocou Ducha Svätého, ktorý v nás prebýva."},
	{15, "15 Vieš, že sa odo mňa odvrátili všetci, čo sú v Ázii, medzi nimi aj Fygelus a Hermogenes."},
	{16, "16 Nech Pán preukáže milosrdenstvo Oneziforovmu domu, lebo často ma osviežil a nehanbil sa za moje okovy,"},
	{17, "17 ale keď prišiel do Ríma, usilovne ma hľadal a našiel ma."},
	{18, "18 - Nech mu Pán dá, aby v onen deň našiel milosrdenstvo u Pána. - A aké služby preukázal v Efeze, ty vieš najlepšie."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sk2 poems[] = {
	{1, "1 Ty sa teda, syn môj, upevňuj v milosti, ktorá je v Kristovi Ježišovi."},
	{2, "2 A čo si počul odo mňa pred mnohými svedkami, zveruj spoľahlivým ľuďom, ktorí budú schopní učiť aj iných."},
	{3, "3 Trp spolu so mnou ako dobrý vojak Ježiša Krista."},
	{4, "4 Nik z vojakov sa nemieša do záležitostí všedného života, ak sa chce páčiť tomu, kto ho najal."},
	{5, "5 A kto závodí, nedostane veniec, ak nezávodí podľa pravidiel."},
	{6, "6 Roľník, ktorý sa namáha, má prvý dostať podiel na úrode."},
	{7, "7 Uvažuj o tom, čo hovorím. Pán ti dá porozumieť všetkému."},
	{8, "8 Pamätaj na to, že Ježiš Kristus, z Dávidovho rodu, bol vzkriesený z mŕtvych podľa môjho evanjelia,"},
	{9, "9 pre ktoré znášam útrapy až po okovy ako nejaký zločinec. Ale Božie slovo nie je spútané!"},
	{10, "10 Preto všetko znášam pre vyvolených, aby aj oni dosiahli spásu, ktorá je v Ježišovi Kristovi, a večnú slávu."},
	{11, "11 Spoľahlivé je to slovo: Ak sme s ním zomreli, s ním budeme aj žiť."},
	{12, "12 Ak vytrváme, s ním budeme aj kraľovať. Ak ho zaprieme, aj on zaprie nás."},
	{13, "13 Ak sme neverní, on ostáva verný, lebo seba samého zaprieť nemôže."},
	{14, "14 Toto pripomínaj a zaprisahávaj ich pred Bohom, aby sa nepreli o slová. Nie je to na nič užitočné, len na skazu poslucháčov."},
	{15, "15 Usiluj sa ukázať Bohu ako osvedčený, ako robotník, ktorý sa nemusí hanbiť a správne podáva slovo pravdy."},
	{16, "16 Svetáckym prázdnym rečiam sa vyhýbaj; lebo ešte viac budú postupovať v bezbožnosti"},
	{17, "17 a ich reč sa bude šíriť ako rakovina. Takí sú aj Hymeneus a Filetus,"},
	{18, "18 ktorí zblúdili od pravdy a hovoria, že vzkriesenie už bolo, a tak rozvracajú vieru niektorých."},
	{19, "19 Ale pevný Boží základ stojí a má túto pečať: Pán pozná svojich a: Nech sa odvráti od neprávosti každý, kto vyznáva meno Pánovo."},
	{20, "20 Vo veľkom dome nie sú len zlaté a strieborné nádoby, ale aj drevené a hlinené; jedny na vznešené ciele, iné na všedné."},
	{21, "21 Kto sa od tohto očistí, bude nádobou na vznešené ciele, posvätenou, užitočnou Pánovi, pripravenou na každé dobré dielo."},
	{22, "22 Chráň sa mladíckych žiadostí a usiluj sa o spravodlivosť, vieru, lásku a pokoj s tými, čo z čistého srdca vzývajú Pána."},
	{23, "23 Hlúpym a neviazaným otázkam sa vyhýbaj, veď vieš, že vyvolávajú len zvady."},
	{24, "24 A Pánov služobník sa nemá vadiť, ale má byť ku každému prívetivý, schopný učiť a byť trpezlivý."},
	{25, "25 Tých, čo odporujú, má mierne karhať; možno im raz Boh dá kajúcnosť, aby poznali pravdu"},
	{26, "26 a vymanili sa z osídel diabla, ktorý ich drží v zajatí svojej vôle."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sk3 poems[] = {
	{1, "1 Vedz, že v posledných dňoch nastanú nebezpečné časy."},
	{2, "2 Ľudia budú totiž sebeckí, chamtiví, chvastaví, pyšní, rúhaví, neposlušní voči rodičom, nevďační, bezbožní,"},
	{3, "3 bezcitní, nezmierliví, ohovárační, nezdržanliví, suroví, bez lásky k dobru,"},
	{4, "4 zradní, bezhlaví, nadutí, milujúci viac rozkoše ako Boha;"},
	{5, "5 budú mať výzor nábožnosti, ale jej silu budú popierať. A týchto sa chráň!"},
	{6, "6 Lebo z nich sú tí, čo sa vkrádajú do domov a podmaňujú si ľahké ženy, obťažené hriechmi a hnané rozličnými žiadostivosťami,"},
	{7, "7 ktoré sa stále učia, a nikdy nie sú schopné spoznať pravdu."},
	{8, "8 Ako sa Jannes a Jambres postavili proti Mojžišovi, tak aj oni odporujú pravde. Sú to ľudia so zvrátenou mysľou, nespoľahliví vo viere."},
	{9, "9 Ale ďaleko sa nedostanú, lebo všetkým bude zjavná ich nerozumnosť, ako bola aj tamtých."},
	{10, "10 Ty si však nasledoval moje učenie, spôsob života, plány, vieru, zhovievavosť, lásku, trpezlivosť,"},
	{11, "11 prenasledovania a utrpenia, ktoré ma stihli v Antiochii, Ikóniu a v Lystre. A aké prenasledovania som podstúpil! Ale Pán ma vyslobodil zo všetkých."},
	{12, "12 Veď všetci, čo chcú žiť nábožne v Kristovi Ježišovi, budú prenasledovaní."},
	{13, "13 Ale zlí ľudia a zvodcovia budú spieť k horšiemu, budú strhávať do bludu a sami budú blúdiť."},
	{14, "14 Ale ty vytrvaj v tom, čo si sa naučil a čo ti je zverené. Veď vieš, od koho si sa to naučil."},
	{15, "15 Od útleho detstva poznáš Sväté písma, ktoré ti môžu dať poučenie na spásu skrze vieru, ktorá je v Kristovi Ježišovi."},
	{16, "16 Celé Písmo je Bohom vnuknuté a užitočné na poúčanie, na usvedčovanie, na nápravu a na výchovu v spravodlivosti,"},
	{17, "17 aby bol Boží človek dokonalý a pripravený na každé dobré dielo."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sk4 poems[] = {
	{1, "1 Zaprisahávam ťa pred Bohom a Kristom Ježišom, ktorý bude súdiť živých i mŕtvych, pre jeho príchod a jeho kráľovstvo:"},
	{2, "2 Hlásaj slovo, naliehaj vhod i nevhod, usvedčuj, karhaj a povzbudzuj so všetkou trpezlivosťou a múdrosťou."},
	{3, "3 Lebo príde čas, keď neznesú zdravé učenie, ale nazháňajú si učiteľov podľa svojich chúťok, aby im šteklili uši."},
	{4, "4 Odvrátia sluch od pravdy a obrátia sa k bájkam."},
	{5, "5 Ty však buď vo všetkom triezvy, znášaj útrapy, konaj dielo evanjelistu, plň svoju službu."},
	{6, "6 Lebo ja mám vyliať svoju krv na obetu, nastáva čas môjho odchodu."},
	{7, "7 Dobrý boj som bojoval, beh som dokončil, vieru som zachoval."},
	{8, "8 Už mám pripravený veniec spravodlivosti, ktorý mi v onen deň dá Pán, spravodlivý sudca; a nielen mne, ale aj všetkým, čo milujú jeho príchod."},
	{9, "9 Poponáhľaj sa a príď ku mne čo najskôr."},
	{10, "10 Démas ma opustil, lebo miluje tento svet, a odišiel do Solúna, Krescent do Galácie, Títus do Dalmácie."},
	{11, "11 Jediný Lukáš je so mnou. Vezmi Marka a priveď ho so sebou, lebo je mi užitočný v službe."},
	{12, "12 Tychika som poslal do Efezu."},
	{13, "13 Keď prídeš, prines plášť, čo som si nechal v Troade u Karpa, aj knihy, a najmä pergameny."},
	{14, "14 Kováč Alexander mi spôsobil veľa zlého. Pán mu odplatí podľa jeho skutkov."},
	{15, "15 Aj ty sa ho chráň, lebo veľmi odporoval našim slovám."},
	{16, "16 Keď som sa prvý raz bránil, nebol pri mne nik; všetci ma opustili. Nech sa im to nepočíta."},
	{17, "17 Ale Pán stál pri mne a posilňoval ma, aby sa cezo mňa naplnilo ohlasovanie a aby ho počuli všetky národy; a bol som vyslobodený z tlamy leva."},
	{18, "18 Pán ma vyslobodí zo všetkého zla a zachráni ma pre svoje nebeské kráľovstvo. Jemu sláva na veky vekov. Amen."},
	{19, "19 Pozdrav Prisku a Akvilu aj Oneziforov dom."},
	{20, "20 Erastus zostal v Korinte. Trofima som nechal chorého v Miléte."},
	{21, "21 Ponáhľaj sa a príď ešte pred zimou. Pozdravuje ťa Eubulus, Pudens, Línus, Klaudia a všetci bratia."},
	{22, "22 Pán nech je s tvojím duchom. Milosť s vami."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};