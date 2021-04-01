#include <map>
#include <string>
class Bible21
{
	struct lt1	{ int val; const char *msg; };
	struct lt2	{ int val; const char *msg; };
	struct lt3	{ int val; const char *msg; };
	struct lt4	{ int val; const char *msg; };
	struct lt5	{ int val; const char *msg; };
	struct lt6	{ int val; const char *msg; };
	struct lt7	{ int val; const char *msg; };
	struct lt8	{ int val; const char *msg; };
	struct lt9	{ int val; const char *msg; };
	struct lt10	{ int val; const char *msg; };
	struct lt11	{ int val; const char *msg; };
	struct lt12	{ int val; const char *msg; };
public:
static void view1() {
struct lt1 poems[] = {
	{1, "1 Dovydo sūnaus, pamokslininko, kuris buvo Jeruzalės karalius, žodžiai."},
	{2, "2 Tuštybių tuštybė,­sako pamokslininkas.­Tuštybių tuštybė, viskas tuštybė."},
	{3, "3 Kokia nauda žmogui iš viso jo triūso, kurį jis turi po saule."},
	{4, "4 Viena karta praeina, kita­ateina, o žemė lieka per amžius."},
	{5, "5 Saulė teka, leidžiasi ir skuba į vietą, iš kur ji užtekėjo."},
	{6, "6 Vėjas pučia į pietus ir pasisuka į šiaurę; pučia šen ir ten, sukasi aplinkui ir vėl grįžta į vietą, iš kur pakilo."},
	{7, "7 Visos upės teka į jūrą, bet jūra vis nepilna. Upės grįžta atgal, iš kur ištekėjo."},
	{8, "8 Akys nepasisotins stebėdamos ir ausys neprisipildys girdėdamos."},
	{9, "9 Kas buvo, tas vėl bus; kas padaryta, tas vėl bus daroma. Nieko naujo nėra po saule."},
	{10, "10 Jei yra kas, apie ką būtų galima sakyti: “Žiūrėk, tai nauja!”, tai jau buvo senais laikais prieš mus."},
	{11, "11 Praeities įvykiai užmirštami, o ir vėliau būsiančių nebeatsimins tie, kurie gyvens po jų."},
	{12, "12 Aš, pamokslininkas, buvau Izraelio karalius Jeruzalėje."},
	{13, "13 Aš nusprendžiau savo širdyje stebėti ir tyrinėti išmintimi visa, kas darosi šiame pasaulyje. Šią varginančią užduotį Dievas davė žmonių sūnums, kad ją vykdytų."},
	{14, "14 Aš mačiau viską, kas darosi po saule, ir supratau, kad tai tuštybė ir vėjo gaudymas."},
	{15, "15 Kas kreiva, negalima ištiesinti, ir ko nėra, negalima suskaičiuoti."},
	{16, "16 Aš galvojau savo širdyje, kad esu įsigijęs daugiau išminties už visus, prieš mane buvusius Jeruzalėje. Mano širdis įgavo daug išminties ir pažinimo."},
	{17, "17 Aš nusprendžiau savo širdyje suprasti, kas yra išmintis ir kas beprotybė bei kvailystė, bet patyriau, kad tai taip pat vėjo gaudymas."},
	{18, "18 Kur yra daug išminties, ten yra ir daug sielvarto; kuo daugiau išminties, tuo daugiau kančių."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lt2 poems[] = {
	{1, "1 Tariau savo širdyje: “Dabar išbandysiu tave linksmumu, todėl džiaukis malonumais”. Bet ir tai yra tuštybė."},
	{2, "2 Apie juoką pasakiau: “Kvailystė”, o apie linksmybes: “Kokia iš jų nauda?”"},
	{3, "3 Aš nusprendžiau mėgautis vynu, tačiau neatsisakyti išminties savo širdyje, ir suprasti, kas yra kvailystė, kol pamatysiu, ką gero žmonių vaikai galėtų daryti, gyvendami po dangumi per visas savo dienas."},
	{4, "4 Aš ėmiausi didelių darbų, pasistačiau namų, užsiveisiau vynuogynų,"},
	{5, "5 sodų, parkų ir prisodinau juose įvairiausių vaismedžių."},
	{6, "6 Pasidariau tvenkinių ir jų vandeniu laisčiau miško medžius."},
	{7, "7 Pirkau vergų ir vergių, turėjau ir savo namuose gimusių vergų; laikiau dideles bandas galvijų ir avių, didesnes negu prieš mane gyvenusieji Jeruzalėje."},
	{8, "8 Aš įsigijau sidabro, aukso ir kitų turtų iš karalių ir kraštų; pasirūpinau giesmininkų ir giesmininkių, to, ką mėgsta žmonių sūnūs, ir įvairiausių muzikos instrumentų."},
	{9, "9 Aš tapau didis ir išgarsėjau labiau už visus, prieš mane gyvenusius Jeruzalėje. Mano išmintis taip pat pasiliko su manimi."},
	{10, "10 Ko mano akys geidė, nieko joms neatsakiau, nedraudžiau savo širdžiai jokios linksmybės. Mano širdis džiaugėsi mano darbais, ir tai buvo atlyginimas už mano triūsą."},
	{11, "11 Aš pažiūrėjau į visus savo darbus ir triūsą, ir štai, viskas buvo tuštybė ir vėjo gaudymas; iš to nebuvo jokios naudos po saule."},
	{12, "12 Aš gręžiausi ieškoti skirtumo tarp išminties, kvailystės ir beprotybės. Ką darys žmogus, kuris gyvens po karaliaus? Tai, kas jau yra padaryta."},
	{13, "13 Pamačiau, kad išmintis yra vertingesnė už kvailystę tiek, kiek šviesa už tamsą."},
	{14, "14 Išmintingas turi akis, o kvailys vaikščioja tamsoje. Taip pat supratau, kad abiejų laukia toks pat likimas."},
	{15, "15 Tada tariau širdyje: “Jei kvailio likimas yra toks pat kaip mano, tai kodėl aš siekiu išminties?” Supratau, kad ir tai yra tuštybė."},
	{16, "16 Išmintingo, kaip ir kvailio, neatsimins ateityje; tai, kas yra dabar, užmirš būsiančios kartos. Išmintingas miršta lygiai taip pat, kaip kvailys."},
	{17, "17 Aš ėmiau nekęsti gyvenimo; man nepatiko, kas darosi po saule, nes viskas tuštybė ir vėjo gaudymas."},
	{18, "18 Aš ėmiau nekęsti viso savo triūso šioje žemėje, nes turėsiu viską palikti žmogui, kuris bus po manęs."},
	{19, "19 Kas žino, ar jis bus išmintingas, ar kvailys? Jis valdys visa, ką sukroviau savo darbu, naudodamasis savo išmintimi po saule. Ir tai yra tuštybė."},
	{20, "20 Gailėjausi įdėjęs tiek triūso po saule."},
	{21, "21 Žmogus, kuris dirbo išmintingai, protingai ir sėkmingai, turės viską palikti kitam, kuris niekuo neprisidėjo. Tai yra tuštybė ir didelė blogybė."},
	{22, "22 Kokia nauda žmogui dirbti ir vargti pasaulyje?"},
	{23, "23 Visas jo gyvenimas pilnas vargo, sielvarto ir kančių; net naktį jis neturi poilsio. Tai taip pat tuštybė."},
	{24, "24 Žmogui nieko nėra geresnio, kaip valgyti, gerti ir džiaugtis savo darbu. Aš mačiau, kad visa tai ateina iš Dievo rankų."},
	{25, "25 Ar kas be Jo gali valgyti ir mėgautis?"},
	{26, "26 Žmogui, kuris Jam patinka, Jis suteikia išmintį, pažinimą ir džiaugsmą, bet nusidėjėliui duoda sunkią užduotį rinkti ir kaupti, kad galėtų atiduoti tam, kuris patinka Dievui. Tai taip pat tuštybė ir vėjo gaudymas."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lt3 poems[] = {
	{1, "1 Viskam yra laikas, metas kiekvienam įvykiui po dangumi."},
	{2, "2 Yra laikas gimti ir mirti; laikas sodinti ir rauti, kas pasodinta."},
	{3, "3 Yra laikas žudyti ir gydyti; laikas griauti ir statyti."},
	{4, "4 Yra laikas verkti ir juoktis; laikas gedėti ir šokti."},
	{5, "5 Yra laikas mėtyti akmenis ir juos vėl surinkti; laikas apkabinti ir susilaikyti nuo apkabinimo."},
	{6, "6 Yra laikas įgyti ir prarasti; laikas laikyti ir išmesti."},
	{7, "7 Yra laikas perplėšti ir susiūti; laikas tylėti ir kalbėti."},
	{8, "8 Yra laikas mylėti ir nekęsti; laikas karui ir taikai."},
	{9, "9 Kokią naudą turi tas, kuris dirba, iš savo triūso?"},
	{10, "10 Aš regėjau užduotį, kurią Dievas davė žmonių vaikams."},
	{11, "11 Jis skirtu laiku viską puikiai padarė. Jis įdėjo amžinybę žmogui į širdį, kad nė vienas žmogus nesuvoktų Dievo darbų nuo pradžios iki galo."},
	{12, "12 Aš supratau, kad žmonėms nėra nieko geresnio, kaip linksmintis ir daryti gera savo gyvenime."},
	{13, "13 Tai yra Dievo dovana, kad žmogus valgo, geria ir džiaugiasi savo darbo gėrybėmis."},
	{14, "14 Aš žinau, kad visa, ką Dievas daro, yra amžina,­nieko negalima nei pridėti, nei atimti. Dievas daro tai, kad žmonės Jo bijotų."},
	{15, "15 Kas buvo, tas ir yra, o kas bus, jau yra buvę. Dievas pašaukia praeitį."},
	{16, "16 Aš mačiau po saule: teismo vietoje­nedorybė, teisingumo vietoje­neteisybė."},
	{17, "17 Tariau savo širdyje: “Dievas teis teisųjį ir nedorėlį, nes Jis paskyrė laiką kiekvienam įvykiui ir darbui”."},
	{18, "18 Aš galvojau savo širdyje apie žmones: “Dievas bando juos ir leidžia jiems suprasti, kad jie patys iš savęs tėra gyvuliai”."},
	{19, "19 Žmonėms atsitinka kaip ir gyvuliams: kaip vieni miršta, taip ir kiti, ir visi vienodai kvėpuoja. Žmogus nėra pranašesnis už gyvulius; viskas yra tuštybė."},
	{20, "20 Visi eina į vieną vietą; visi yra iš dulkių ir vėl pavirs dulkėmis."},
	{21, "21 Kas žino žmogaus dvasią, kuri kyla aukštyn, ir gyvulių kvapą, kuris eina žemyn, į žemę?"},
	{22, "22 Aš supratau, kad žmogui nėra nieko geresnio, kaip džiaugtis savo darbais, nes tai yra jo dalia. Nes kas gi jam parodys, kas bus po jo?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lt4 poems[] = {
	{1, "1 Aš mačiau visą priespaudą, kuri yra šiame pasaulyje. Štai ašaros prispaustųjų ir niekas jų nepaguodžia. Skriaudėjai galingi, bet nėra kam paguosti."},
	{2, "2 Aš nusprendžiau, kad mirusieji laimingesni už gyvuosius."},
	{3, "3 Dar laimingesnis už juos tas, kuris dar negimęs, nes jis dar nematė piktadarysčių, kurios vyksta pasaulyje."},
	{4, "4 Toliau stebėjau žmonių darbą ir jų pastangas, dėl kurių žmogui pavydi jo kaimynas. Tai irgi tuštybė ir vėjo gaudymas."},
	{5, "5 Kvailys sėdi sudėjęs rankas ir valgo savo kūną."},
	{6, "6 Geriau turėti saują su ramybe negu pilnas rieškučias vargstant ir gaudant vėjus."},
	{7, "7 Pastebėjau dar vieną tuštybę po saule."},
	{8, "8 Vienišas žmogus, neturįs nei sūnaus, nei brolio, triūsia be galo, ir jo akys nepasisotina turtais. Jis nepagalvoja: “Kodėl aš triūsiu ir užginu gėrybių savo sielai?” Tai taip pat tuštybė ir nereikalingas vargas!"},
	{9, "9 Du yra geriau negu vienas, nes jie turi gerą atlygį už savo triūsą."},
	{10, "10 Jei vienas kristų, kitas jį pakeltų. Bet vargas vienam, jei jis krinta, nes nėra kam padėti."},
	{11, "11 Jei dviese miega, vienas kitą šildo. Bet kaip sušilti vienam?"},
	{12, "12 Jei vienas užpuolamas, dviese pasipriešina. Trigubą virvę sunku pertraukti."},
	{13, "13 Geriau neturtingas, bet išmintingas jaunuolis, negu senas kvailas karalius, kuris nepriima patarimų."},
	{14, "14 Nes jis, išėjęs iš kalėjimo, tapo karaliumi, o kitas, gimęs karaliumi, nuskursta."},
	{15, "15 Aš galvojau apie žmones, gyvenančius pasaulyje, ir kitą jaunuolį, kuris užims ano vietą."},
	{16, "16 Daugybė žmonių buvo prieš jį, ir vėliau atėjusieji nesidžiaugs juo. Ir tai yra tuštybė ir vėjo gaudymas."},
	{17, "17 Būk atsargus, kai eini į Dievo namus, ir būk pasiruošęs klausyti. Tai bus geriau negu kvailių auka, kurie net nežino, kad daro pikta."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct lt5 poems[] = {
	{1, "1 Neskubėk savo burna, ir tegu neskuba tavo širdis kalbėti Dievo akivaizdoje, nes Dievas yra danguje, o tu žemėje. Todėl tenebūna daug tavo žodžių."},
	{2, "2 Kaip nuo daugybės rūpesčių kyla sapnai, taip kvailio balsą pažinsi iš žodžių gausos."},
	{3, "3 Kai padarai įžadą Dievui, įvykdyk jį nedelsdamas, nes Jam nepatinka kvailiai."},
	{4, "4 Geriau nežadėti negu pažadėjus neįvykdyti."},
	{5, "5 Nevesk savo burna kūno į nuodėmę. Nesakyk angelo akivaizdoje, kad suklydai. Kodėl Dievas, supykęs dėl tavo žodžių, turėtų sunaikinti tavo darbą?"},
	{6, "6 Sapnų gausybė, kaip ir žodžių gausybė, yra tuštybė. Tu bijok Dievo."},
	{7, "7 Jei matai spaudžiamą vargšą ir teisingumo bei tiesos iškraipymą krašte, nesistebėk, nes aukštą stebi aukštesnis už jį, o virš jų yra dar aukštesnis."},
	{8, "8 Nauda iš žemės yra visiems, ir karalius aprūpinamas iš laukų."},
	{9, "9 Kas myli sidabrą, niekad nepasitenkins sidabru; kas myli turtus, nepasitenkins tuo, ką turi; tai taip pat tuštybė."},
	{10, "10 Kur daug gėrybių, ten daug ir valgančių. Tad kokia nauda yra savininkui iš turtų? Nebent ta, kad jis mato juos savo akimis."},
	{11, "11 Darbininkas, daugiau ar mažiau pavalgęs, saldžiai miega, o turtuoliui jo turtai neleidžia užmigti."},
	{12, "12 Didelę blogybę pastebėjau pasaulyje: turtų savininkas kaupia juos, kad sau pakenktų."},
	{13, "13 Pražūna turtai atsitikus nelaimei, ir kai jam gimsta sūnus, jis nieko neturi."},
	{14, "14 Kaip jis gimė nuogas, taip nuogas ir išeis­nieko nepasiims savo rankoje, ką užsidirbo."},
	{15, "15 Tai yra didelė blogybė: kaip jis atėjo, taip ir išeis. Kokia jam nauda iš to, kad jis dirbo vėjams?"},
	{16, "16 Visą savo gyvenimą jis vargo, krimtosi, sirgo ir buvo tamsoje."},
	{17, "17 Štai ką mačiau: gera ir malonu žmogui yra valgyti, gerti ir džiaugtis savo darbu, kurį jam Dievas paskyrė dirbti per visas jo dienas. Tai yra jo dalia."},
	{18, "18 Kiekvienam žmogui, kuriam Dievas suteikė turto ir lobių ir leido jam valgyti, imti savo dalį ir džiaugtis savo darbu, tai yra Dievo dovana."},
	{19, "19 Nes jis nedaug atsimins savo gyvenimo dienų, kadangi Dievas džiugina jo širdį."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct lt6 poems[] = {
	{1, "1 Pastebėjau kitą blogybę pasaulyje, kuri yra dažna tarp žmonių."},
	{2, "2 Kai kam Dievas duoda turtų, lobio ir garbės. Jis turi visko, ko siela geidžia, bet jis negali tuo pasinaudoti­svetimas naudojasi tuo. Tai yra tuštybė ir didelė nelaimė."},
	{3, "3 Jei žmogui gimtų šimtas vaikų ir jis gyventų daug metų, bet jo siela nepasitenkintų gėrybėmis ir jis neturėtų net kapo, tai negyvas gimęs kūdikis yra laimingesnis už jį."},
	{4, "4 Jis atėjo į tuštybę ir nueina į tamsą; jo vardą uždengia tamsa."},
	{5, "5 Jis nematė saulės ir nieko nežino; jam ramiau negu tam,"},
	{6, "6 kuris gyventų žemėje du tūkstančius metų, bet nematytų gero; visi eina į tą pačią vietą."},
	{7, "7 Žmogus dirba dėl savo burnos, bet jo siela nepasitenkina."},
	{8, "8 Kuo išmintingasis pranašesnis už kvailį? Kokia nauda beturčiui, kuris žino, kaip gyventi?"},
	{9, "9 Geriau matyti akimis negu mintimis klajoti; tai taip pat tuštybė ir vėjo gaudymas."},
	{10, "10 Visa, kas yra, jau pavadinta ir žinoma, kad tai yra žmogus. Jis negali varžytis su stipresniu už save."},
	{11, "11 Daug dalykų, nuo kurių gausėja tuštybės. Kokia nauda iš to žmogui?"},
	{12, "12 Kas žino, kas žmogui gyvenime naudinga per visas jo gyvenimo dienas, kurios prabėga kaip šešėlis? Kas gali pasakyti, kas bus pasaulyje po jo?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct lt7 poems[] = {
	{1, "1 Geras vardas yra geriau negu brangus tepalas ir mirties diena negu gimimo diena."},
	{2, "2 Geriau eiti į gedulo negu į puotos namus, nes tai visų žmonių galas ir gyvieji susimąsto."},
	{3, "3 Geriau yra liūdėti negu juoktis, nes liūdnas veidas daro širdį geresnę."},
	{4, "4 Išmintingųjų širdis yra gedulo namuose, o kvailių­linksmybės namuose."},
	{5, "5 Geriau yra išgirsti išmintingo barimą negu klausytis kvailųjų giedojimo."},
	{6, "6 Kvailio juokas yra kaip deginamų erškėčių spragsėjimas po puodu. Ir tai yra tuštybė."},
	{7, "7 Priespauda ir išmintingą padaro beprotį, o kyšiai sugadina širdį."},
	{8, "8 Pabaiga geriau negu pradžia; kantrumas geriau negu išdidumas."},
	{9, "9 Nebūk greitas pykti, nes pyktis yra kvailio antyje."},
	{10, "10 Nesakyk: “Kodėl seniau buvo geriau negu dabar?” Tai neišmintingas klausimas."},
	{11, "11 Gerai yra išmintis su paveldėjimu, ypač tiems, kurie mato saulę."},
	{12, "12 Išmintis yra tokia pat apsauga kaip pinigai, bet pažinimo pranašumas tas, kad išmintis suteikia gyvenimą tam, kuris ją turi."},
	{13, "13 Pažvelk į Dievo darbus! Kas galėtų ištiesinti tai, ką Jis padarė kreivą?"},
	{14, "14 Gerą dieną džiaukis, o nelaimės dieną susimąstyk: Dievas padarė vieną ir kitą, kad žmogus nežinotų, kas jo laukia."},
	{15, "15 Per savo beprasmes dienas mačiau, kaip teisusis žūva savo teisume, o nedorėlis ilgai gyvena, darydamas pikta."},
	{16, "16 Nebūk per daug teisus nė per daug išmintingas; nepakenk pats sau."},
	{17, "17 Nebūk per daug nedoras nė kvailas, kad nemirtum prieš laiką."},
	{18, "18 Gera laikytis vieno ir nepaleisti kito, nes bijantis Dievo išvengs viso to."},
	{19, "19 Išmintingas yra stipresnis už dešimt galiūnų."},
	{20, "20 Nėra žemėje teisaus žmogaus, kuris visad gera darytų ir niekad nenusidėtų."},
	{21, "21 Nekreipk dėmesio į visas kalbas, kad neišgirstum savo tarno tave keikiant."},
	{22, "22 Nes tavo širdis žino, kad ir tu dažnai keiki kitus."},
	{23, "23 Aš viską išmintingai tyrinėjau ir galvojau, kad būsiu išmintingesnis, bet tai buvo toli nuo manęs."},
	{24, "24 Visa tai yra toli ir labai giliai. Kas visa tai ištirs?"},
	{25, "25 Aš nusprendžiau savo širdyje pažinti, ištirti ir surasti išmintį bei priežastis, suprasti kvailumo, beprotystės ir neišmanymo pragaištingumą."},
	{26, "26 Aš supratau, kad kartesnė už mirtį yra moteris, kurios širdyje yra spąstai ir tinklai, o rankose­ virvės. Kas patinka Dievui, tas pabėgs nuo jos, bet nusidėjėlį ji sugauna."},
	{27, "27 Tai aš supratau,­sako pamokslininkas,­lygindamas vieną dalyką su kitu, kol radau atsakymą."},
	{28, "28 Ko mano siela ieškojo, bet aš neradau? Suradau vieną vyrą iš tūkstančio, bet moters tarp visų neradau nė vienos."},
	{29, "29 Štai ką aš supratau: Dievas sukūrė visus žmones teisius, bet jie patys daug dalykų prasimano."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct lt8 poems[] = {
	{1, "1 Kas yra toks išmintingas, kad galėtų viską išaiškinti? Išmintis nušviečia žmogaus veidą ir sušvelnina jo bruožus."},
	{2, "2 Klausyk karaliaus įsakymų dėl Dievui duotos priesaikos."},
	{3, "3 Neskubėk išeiti iš jo akivaizdos. Nedalyvauk nedorame darbe, nes jis gali daryti, ką nori."},
	{4, "4 Karaliaus žodis yra galingas; kas gali jam sakyti: “Ką tu darai?”"},
	{5, "5 Klausydamas jo įsakymų, nepatirsi pikta. Išmintingas žmogus žino, kada ir kaip elgtis."},
	{6, "6 Kiekvienam dalykui yra laikas ir sprendimas, tačiau žmogui tai didelis vargas,"},
	{7, "7 nes nė vienas nežino, kas bus ir kada tai įvyks?"},
	{8, "8 Nė vienas žmogus neturi galios sulaikyti dvasią nei pakeisti mirties laiko. Negali būti atleistas nuo šitos kovos, ir nedorybė neišgelbės to, kuris jai atsidavęs."},
	{9, "9 Aš viską stebėjau, kreipiau dėmesį į kiekvieną dalyką pasaulyje. Kartais žmogus gali valdyti kitą žmogų ir pats sau kenkti."},
	{10, "10 Aš mačiau nedorėlius laidojant; jie eidavo į šventyklą, tačiau buvo pamiršti mieste, kuriame taip elgėsi. Tai irgi yra tuštybė."},
	{11, "11 Kadangi nuosprendis už piktus darbus ne tuojau įvykdomas, todėl žmonių širdys yra visiškai atsidavę daryti pikta."},
	{12, "12 Nors nusidėjėlis ir šimtą kartų nusikaltęs ilgai gyventų, tačiau aš žinau, kad tie, kurie bijo Dievo, tikrai patirs gera."},
	{13, "13 Bet nedorėliui nebus gerai ir netruks ilgai jo dienos, kurios tėra šešėlis, nes jis nebijo Dievo."},
	{14, "14 Žemėje kartais teisusis gauna, ką nedorėlis yra nusipelnęs, o nedorėlis gauna, ką yra nusipelnęs teisusis. Aš sakiau, kad tai taip pat tuštybė."},
	{15, "15 Tada aš gyriau linksmybę, nes žmogui nėra nieko geresnio po saule, kaip valgyti, gerti ir būti patenkintam. Tai pasiliks su juo jo darbuose per visas dienas, kurias Dievas jam davė po saule."},
	{16, "16 Kai aš stengiausi suprasti išmintį ir tai, kas vyksta žemėje, kodėl žmonės nei dieną, nei naktį nesudeda akių,"},
	{17, "17 aš pamačiau visus Dievo darbus ir supratau, kad žmogus negali suvokti, kas vyksta po saule. Kaip žmogus besistengtų tyrinėdamas, jis nesuvoks to; net išmintingasis, kuris tariasi žinąs, to nesupras."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct lt9 poems[] = {
	{1, "1 Visa apsvarstęs, supratau, kad teisusis, išmintingasis ir jų darbai yra Dievo rankose. Žmogus nežino, ar jo laukia meilė, ar neapykanta."},
	{2, "2 Visiems yra vienodas likimas: teisiajam ir nedorėliui, geram ir blogam, švariam ir nešvariam, aukojančiam aukas ir neaukojančiam, doram ir nusidėjėliui, prisiekiančiam ir nedrįstančiam prisiekti."},
	{3, "3 Tai yra pasaulio blogybė­tas pats likimas visiems. Visų širdys yra pilnos piktybių, ir beprotybė pasilieka žmonių širdyse, kol jie gyvena, o po to­pas mirusiuosius."},
	{4, "4 Kol žmogus gyvas, jis turi vilties. Gyvas šuo vertingesnis už negyvą liūtą."},
	{5, "5 Gyvieji žino, kad jie mirs, bet mirusieji nieko nebežino. Jie nebesulauks jokio atlyginimo ir bus užmiršti."},
	{6, "6 Jų meilė, neapykanta ir pavydas dingo; jie nebeturi jokios dalies pasaulyje."},
	{7, "7 Valgyk linksmas savo duoną, gerai nusiteikęs, gerk vyną, nes Dievas dabar priima tavo darbus."},
	{8, "8 Tebūna tavo drabužiai visados balti ir tegul netrūksta tavo galvai aliejaus."},
	{9, "9 Džiaukis gyvenimu, kurį tau Dievas davė, kartu su žmona, kurią myli. Tokia yra tavo gyvenimo dalis šiame pasaulyje."},
	{10, "10 Ką gali, daryk dabar, nes kape, į kurį eisi, nebus nei darbo, nei minčių, nei supratimo, nei išminties."},
	{11, "11 Aš pastebėjau pasaulyje, kad lenktynes laimi ne greitieji, karus ne drąsieji, duonos turi ne išmintingieji, turtus ne protingieji ir palankumą ne sumanieji. Visa priklauso nuo laiko ir atsitiktinumo."},
	{12, "12 Žmonės nežino savo laiko kaip ir žuvys, kurios sugaunamos tinklu, arba kaip paukščiai, kurie pagaunami spąstais. Žmonės patenka į nelaimės spąstus, kai jie to visai nesitiki."},
	{13, "13 Aš mačiau tokią išmintį po saule, ir man ji pasirodė didelė."},
	{14, "14 Buvo mažas miestas, kuriame gyveno nedaug žmonių. Atėjo galingas karalius, apsupo jį ir pristatė didelių įtvirtinimų."},
	{15, "15 Mieste gyveno neturtingas, bet išmintingas žmogus. Savo išmintimi jis išlaisvino miestą. Tačiau niekas neatsiminė to beturčio žmogaus."},
	{16, "16 Tada aš tariau: “Išmintis vertingesnė už jėgą”. Bet beturčio išmintis buvo paniekinta, ir niekas jo žodžių neklausė."},
	{17, "17 Išmintingojo ramiai pasakytų žodžių klausoma labiau negu šauksmo to, kuris vadovauja kvailiams."},
	{18, "18 Išmintis vertingesnė už ginklus. Vienas nusidėjėlis gali daug blogo padaryti."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view10() {
struct lt10 poems[] = {
	{1, "1 Negyva musė sugadina vaistininko tepalą, menka kvailystė pakenkia išmintingam ir gerbiamam žmogui."},
	{2, "2 Išmintingojo širdis linksta į dešinę, o kvailio­į kairę."},
	{3, "3 Kvailys, keliu eidamas, elgiasi neprotingai ir kiekvienam pasirodo, kad yra kvailas."},
	{4, "4 Jei tavo valdovas supyko ant tavęs, nepalik savo vietos, nes romumas padengia dideles klaidas."},
	{5, "5 Pasaulyje mačiau tokią blogybę, kuri yra tarsi valdovo klaida:"},
	{6, "6 kvailiai sėdi garbės vietose, o turtingieji­pažeminti;"},
	{7, "7 mačiau tarnus, jojančius ant žirgų, o kunigaikščius, einančius pėsčiomis."},
	{8, "8 Kas kasa duobę, pats į ją įkris, o kas ardo mūrą, tam įgels gyvatė."},
	{9, "9 Kas tašo akmenis, gali susižeisti jais, o kas skaldo malkas, gali nuo jų nukentėti."},
	{10, "10 Jei kirvis atbukęs ir nepagaląstas, reikės įdėti daugiau jėgų. Geriausia viską išmintingai apgalvoti."},
	{11, "11 Gyvatė gali įgelti, kol ji dar neužkalbėta, ir plepys už ją ne geresnis."},
	{12, "12 Išmintingojo žodžiai maloningi, o kvailio kalbos pražudo jį patį;"},
	{13, "13 jo kalbos pradžia yra kvailystė, o pabaiga­beprotybė."},
	{14, "14 Kvailys daug kalba. Nė vienas žmogus nežino, kas bus; kas gali jam pasakyti, kas bus po jo?"},
	{15, "15 Kvailys nuo darbo greitai pavargsta, nes jis net kelio į miestą nežino."},
	{16, "16 Vargas kraštui, kurio karalius yra vaikas ir kurio kunigaikščiai puotauja rytą."},
	{17, "17 Palaimintas kraštas, kurio karalius yra kilmingas ir kurio kunigaikščiai valgo laiku; ne pasigerdami, o pasistiprindami."},
	{18, "18 Dėl tinginystės namas griūna ir dėl rankų neveiklumo vanduo varva į namus."},
	{19, "19 Puotos ir vynas palinksmina, o pinigas už viską atsako."},
	{20, "20 Net mintyse nekeik karaliaus ir turtuolio savo miegamajame, nes padangių paukščiai nuneš žodį ir paskelbs, kas buvo pasakyta."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view11() {
struct lt11 poems[] = {
	{1, "1 Mesk savo duoną ant vandens, nes tu ją rasi po daugelio dienų."},
	{2, "2 Padalyk ją į septynias ar aštuonias dalis, nes nežinai, kokia nelaimė gali įvykti žemėje."},
	{3, "3 Kai debesys pilni, jie duoda žemei lietaus. Kokia kryptimi medis griūva, taip jis ir guli."},
	{4, "4 Kas žiūri vėjo­nesėja, kas stebi debesis­nepjauna."},
	{5, "5 Kaip nežinai dvasios kelių ir kūdikio kaulų augimo įsčiose, taip nežinai ir darbų Dievo, kuris viską sukūrė."},
	{6, "6 Sėk sėklą rytą ir vakare, nes nežinai, kuri geriau užderės; o gal abi bus vienodai geros."},
	{7, "7 Šviesa yra maloni, akys mėgsta saulę."},
	{8, "8 Kiek ilgai žmogus begyventų, tegul džiaugiasi visą laiką ir nepamiršta, kad tamsių dienų bus daugybė. Visa, kas bus, yra tuštybė."},
	{9, "9 Jaunuoli, džiaukis savo jaunyste! Tegul tavo širdis džiugina tave ir eik, kur tavo širdis traukia ir kur akys mato, bet žinok, kad už viską turėsi atsiskaityti prieš Dievą."},
	{10, "10 Nesirūpink, atitolink pikta nuo savo kūno, nes vaikystė ir jaunystė yra tuštybė."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view12() {
struct lt12 poems[] = {
	{1, "1 Prisimink savo Kūrėją jaunystėje, nelauk, kol ateis piktos dienos ir metai, apie kuriuos sakysi: “Man jie nepatinka”."},
	{2, "2 Nelauk, kol aptems saulės šviesa, mėnulis bei žvaigždės ir nauji debesys užeis po lietaus."},
	{3, "3 Tuomet namų sargai drebės, stiprieji susilenks, malėjos nebedirbs, nes jų bus maža išlikę, o tie, kurie žiūrės pro langus, nieko nebematys;"},
	{4, "4 durys į gatvę užsidarys, girnų garsas nusilps; paukščiai prikels savo giesmėmis, o dukterų giesmių nesigirdės."},
	{5, "5 Tuomet jie bijos aukštumų ir baimė bus kelyje. Migdolų medžiai pražys, skėriai taps našta. Žmogus nieko nebenori, jis žengia į savo amžinus namus, ir raudotojai jau vaikščioja gatvėse."},
	{6, "6 Sidabrinis siūlas nutrūks, auksinis dubuo suduš, ąsotis prie šulinio subyrės ir šulinio ratas sulūš."},
	{7, "7 Dulkės sugrįš į žemę, iš kurios kilo, o dvasia­pas Dievą, kuris ją davė."},
	{8, "8 Tuštybių tuštybė,­sako pamokslininkas,­viskas yra tuštybė."},
	{9, "9 Kadangi pamokslininkas buvo išmintingas, jis visą laiką mokė žmones pažinimo. Jis viską ištyrė, apsvarstė ir sudėjo daug patarlių."},
	{10, "10 Pamokslininkas stengėsi surasti tinkamus pasakymus ir tiksliai užrašyti tiesos žodžius."},
	{11, "11 Išmintingųjų žodžiai yra lyg akstinai, jų pamokymai lyg tvirtai įkaltos vinys, ir visa tai davė vienas ganytojas."},
	{12, "12 Mano sūnau, įsidėmėk, kad knygų rašymui nebus galo, o daug besigilindamas į jas nuvarginsi kūną."},
	{13, "13 Paklausykime, kokią galima padaryti išvadą: bijok Dievo ir vykdyk Jo įsakymus, nes tai yra viskas kiekvienam žmogui."},
	{14, "14 Nes Dievas teis visus darbus ir visus paslėptus dalykus­gerus ir blogus."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};