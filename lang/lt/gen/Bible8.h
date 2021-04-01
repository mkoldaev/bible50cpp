#include <map>
#include <string>
class Bible8
{
	struct lt1	{ int val; const char *msg; };
	struct lt2	{ int val; const char *msg; };
	struct lt3	{ int val; const char *msg; };
	struct lt4	{ int val; const char *msg; };
public:
static void view1() {
struct lt1 poems[] = {
	{1, "1 Teisėjų valdymo laikais šalyje kilo badas. Vienas vyras iš Judo Betliejaus su žmona ir dviem sūnumis iškeliavo gyventi į Moabo kraštą."},
	{2, "2 To vyro vardas buvo Elimelechas, jo žmonos vardas Noomė, o sūnų­Machlonas ir Kiljonas, efratai iš Judo Betliejaus. Jie atvyko į Moabo kraštą ir ten apsigyveno."},
	{3, "3 Noomės vyras Elimelechas mirė ir ji liko su dviem sūnumis."},
	{4, "4 Jie vedė žmonas moabites. Viena vardu Orpa, o kita­Rūta. Jie ten išgyveno apie dešimt metų."},
	{5, "5 Po to abu sūnūs, Machlonas ir Kiljonas, mirė. Moteris neteko abiejų sūnų ir vyro."},
	{6, "6 Ji su savo marčiomis pakilo grįžti į savo kraštą, nes buvo girdėjusi būdama Moabo krašte, kad Viešpats aplankė savo tautą, duodamas jiems duonos."},
	{7, "7 Ji išėjo iš ten, kur gyveno kartu su savo marčiomis, ir ėjo į Judą."},
	{8, "8 Noomė tarė savo marčioms: “Eikite namo pas savo motinas. Viešpats tebūna malonus jums, kaip jūs buvote mirusiems ir man."},
	{9, "9 Viešpats jums tesuteikia poilsį vyro namuose”. Noomė pabučiavo savo marčias, kurios pakėlė balsus ir verkė."},
	{10, "10 Ir jos sakė: “Mes norime eiti su tavimi pas tavo žmones”."},
	{11, "11 Noomė atsakė: “Grįžkite, mano dukros. Kodėl jūs norite eiti su manimi? Ar manote, kad aš galiu užauginti sūnus, kurie taptų jūsų vyrais?"},
	{12, "12 Grįžkite, mano dukros. Aš juk per sena vedyboms. Jei turėčiau viltį dar šiąnakt ištekėti ir pagimdyti sūnų,"},
	{13, "13 argi jūs lauktumėte, kol jis užaugs? Argi dėl to susilaikytumėte nuo santuokos? Ne, mano dukros. Man labai skaudu dėl jūsų, bet Viešpaties ranka yra prieš mane”."},
	{14, "14 Jos pakėlė balsus ir vėl verkė. Orpa atsisveikino su savo anyta, o Rūta pasiliko su ja."},
	{15, "15 Noomė tarė: “Tavo brolienė sugrįžo pas savo tautą ir savo dievus. Grįžk ir tu”."},
	{16, "16 Tačiau Rūta atsakė: “Neversk manęs tave palikti ir sugrįžti. Kur tu eisi, ir aš eisiu; kur tu gyvensi, ir aš gyvensiu. Tavo tauta yra mano tauta ir tavo Dievas­mano Dievas."},
	{17, "17 Kur tu mirsi, ir aš ten mirsiu ir būsiu palaidota. Tegul Viešpats padaro man tai ir dar daugiau, bet tik mirtis atskirs mane nuo tavęs”."},
	{18, "18 Noomė matė, kad Rūta tvirtai pasiryžusi eiti su ja, ir nustojo atkalbinėti."},
	{19, "19 Taip jos keliavo, kol atėjo į Betliejų. Joms atėjus į Betliejų, visas miestas sujudo ir klausinėjo: “Ar tai Noomė?”"},
	{20, "20 Ji atsakė: “Nevadinkite manęs Noome, vadinkite mane Mara, nes Visagalis labai apkartino mano gyvenimą."},
	{21, "21 Išėjau turtinga, o Viešpats parvedė tuščiomis rankomis. Kodėl vadinate mane Noome? Juk Viešpats paliudijo prieš mane, Visagalis mane nubaudė”."},
	{22, "22 Taip grįžo Noomė ir jos marti moabitė Rūta iš Moabo krašto. Jos atvyko į Betliejų miežių pjūties pradžioje."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lt2 poems[] = {
	{1, "1 Noomės giminaitis iš vyro pusės buvo Boozas, pasiturintis vyras iš Elimelecho giminės."},
	{2, "2 Moabitė Rūta tarė Noomei: “Leisk man eiti į lauką varpų rinkti, kur man leis”. Noomė sakė: “Eik, mano dukra”."},
	{3, "3 Nuėjusi ji rinko varpas paskui pjovėjus. Jai pasitaikė rinkti lauke, kuris priklausė Boozui iš Elimelecho giminės."},
	{4, "4 Kaip tik tuo metu Boozas atėjo iš Betliejaus ir pasveikino pjovėjus: “Viešpats su jumis”. Tie jam atsakė: “Telaimina tave Viešpats”."},
	{5, "5 Tada Boozas paklausė pjovėjų prižiūrėtoją: “Kas šita moteris?”"},
	{6, "6 Prižiūrėtojas atsakė: “Ji yra moabitė, atvykusi su Noome iš Moabo krašto."},
	{7, "7 Ji prašė: ‘Leisk man rinkti paskui pjovėjus nukritusias varpas’. Ji atėjo ir buvo čia nuo ryto iki dabar, tik trumpam buvo parėjusi į namus”."},
	{8, "8 Boozas tarė Rūtai: “Klausyk, mano dukra! Neik rinkti į kitą lauką ir nesitrauk iš čia, bet pasilik prie mano moterų."},
	{9, "9 Sek paskui pjovėjus. Aš įsakiau jaunuoliams tavęs neliesti. Ištroškusi eik prie ąsočių ir gerk tai, ką pjovėjai geria”."},
	{10, "10 Ji puolė veidu į žemę ir, nusilenkusi iki žemės, klausė: “Kodėl tu man toks malonus ir atkreipei dėmesį į mane, nors esu svetimšalė?”"},
	{11, "11 Boozas atsakė jai: “Man viską papasakojo, kaip tu, tavo vyrui mirus, elgeisi su anyta ir kaip palikusi tėvą, motiną ir gimtąją šalį, atvykai į tautą, kurios anksčiau nepažinai."},
	{12, "12 Teatlygina tau Viešpats už tai, ką padarei, ir teduoda tau pilną užmokestį Viešpats, Izraelio Dievas, po kurio sparnais atėjai prisiglausti”."},
	{13, "13 Ji atsakė: “Mano viešpatie, kad tik rasčiau malonę tavo akyse. Tu paguodei mane, draugiškai kreipdamasis į savo tarnaitę, nors neprilygstu tavo tarnaitėms”."},
	{14, "14 Valgant Boozas jai tarė: “Ateik čia, valgyk duonos ir padažyk savo kąsnį vyne”. Ji atsisėdo šalia pjovėjų, o jis padavė jai paskrudintų grūdų. Ji pavalgė, o kas liko, pasilaikė."},
	{15, "15 Kai ji kėlėsi rinkti, Boozas įsakė savo tarnams: “Leiskite jai rinkti tarp pėdų ir nepriekaištaukite."},
	{16, "16 Iš pėdų tyčiomis ištraukite ir palikite jai, kad galėtų rinkti; nedrauskite jai”."},
	{17, "17 Ji rinko iki vakaro. Surinktas varpas iškūlė ir buvo arti efos miežių."},
	{18, "18 Parėjusi į miestą, ji parodė savo anytai, kiek pririnko. Be to, padavė jai likusį maistą, kurį buvo pasilaikiusi."},
	{19, "19 Anyta jos paklausė: “Kur tu šiandien rinkai? Tebūna palaimintas tas, kuris atkreipė dėmesį į tave!” Ji papasakojo savo anytai, pas ką dirbo, ir pasakė, kad to vyro vardas Boozas."},
	{20, "20 Noomė tarė savo marčiai: “Viešpats telaimina jį, nes jis išliko malonus gyviems ir mirusiems. Be to, tas vyras yra iš mūsų giminės, vienas iš artimiausių mūsų giminaičių”."},
	{21, "21 Rūta sakė: “Jis man patarė laikytis prie jo pjovėjų iki pjūties galo”."},
	{22, "22 Ir Noomė tarė savo marčiai Rūtai: “Gerai, mano dukra, kad eini su jo tarnaitėmis. Kitame lauke tave galėtų įžeisti”."},
	{23, "23 Ji laikėsi prie Boozo tarnaičių rinkdama varpas, kol pasibaigė miežių ir kviečių pjūtis, ir gyveno su savo anyta."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lt3 poems[] = {
	{1, "1 Noomė tarė Rūtai: “Mano dukra, ar ne laikas man pasirūpinti vieta, kur tu galėtum ramiai gyventi?"},
	{2, "2 Boozas, su kurio tarnaitėmis tu dirbai, yra mūsų giminaitis. Jis šį vakarą vėtys miežius klojime."},
	{3, "3 Nusiprausk, pasitepk, apsivilk geriausiu rūbu ir nueik į klojimą. Nepasirodyk jam, kol jis pavalgys ir atsiguls."},
	{4, "4 Kai jis atsiguls, įsidėmėk vietą, kur jis guli; priėjusi atidenk jo kojas ir atsigulk. Jis tau pasakys, ką daryti”."},
	{5, "5 Ji atsakė: “Visa, ką man sakai, padarysiu”."},
	{6, "6 Nuėjusi į klojimą, ji pasielgė taip, kaip jai anyta patarė."},
	{7, "7 Boozas, pavalgęs ir atsigėręs, buvo patenkintas ir atsigulė javų krūvos gale. Rūta tyliai priėjo, atidengė jo kojas ir atsigulė."},
	{8, "8 Vidurnaktį pabudęs žmogus nusigando, pamatęs moterį, gulinčią prie jo kojų."},
	{9, "9 Jis paklausė: “Kas tu esi?” Ji atsakė: “Aš esu tavo tarnaitė Rūta. Ištiesk savo apsiaustą ant savo tarnaitės, nes tu esi artimas giminaitis”."},
	{10, "10 Jis sakė: “Viešpats telaimina tave, mano dukra. Tavo paskutinis poelgis yra geresnis už pirmutinį, nes tu neieškojai jaunuolio, turtingo ar beturčio."},
	{11, "11 Nebijok, mano dukra. Visa, ko prašai, aš padarysiu. Visi šio miesto gyventojai žino, kad tu esi dora moteris."},
	{12, "12 Tikrai aš esu artimas tavo giminaitis, tačiau yra kitas, dar artimesnis už mane."},
	{13, "13 Pasilik šią naktį čia. O rytoj, jei jis tave paims,­gerai, tegul paima. O jei jis nenorės tavęs paimti, kaip Viešpats gyvas, aš tave paimsiu! Gulėk iki ryto”."},
	{14, "14 Ji gulėjo prie jo kojų iki ryto ir atsikėlė, kai žmogus žmogaus dar negalėjo atpažinti. Jis sakė jai: “Žiūrėk, kad niekas nesužinotų, jog moteris buvo klojime”."},
	{15, "15 Jis liepė jai ištiesti savo apsiaustą, kuriuo ji buvo apsisiautusi. Atseikėjęs šešis saikus miežių, jis supylė į apsiaustą ir užkėlė jai ant pečių. Taip ji grįžo į miestą."},
	{16, "16 Namuose anyta klausė: “Kaip tau sekėsi, mano dukra?” Ji papasakojo jai visa, kas įvyko,"},
	{17, "17 ir sakė: “Šituos šešis saikus miežių jis man davė ir pasakė: ‘Tu neturi grįžti tuščiomis pas savo anytą’ ”."},
	{18, "18 Noomė tarė: “Dabar palauk, mano dukra, kol sužinosi, kaip viskas baigsis. Jis nenurims, kol visko nesutvarkys dar šiandien”."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lt4 poems[] = {
	{1, "1 Boozas, nuėjęs prie vartų, atsisėdo. Pro šalį ėjo giminaitis, apie kurį Boozas buvo kalbėjęs. Jis tarė jam: “Bičiuli, sėskis čia!” Tas atėjęs atsisėdo."},
	{2, "2 Boozas pasišaukė dar dešimt vyrų, miesto vyresniųjų, ir tarė jiems: “Sėskitės!” Jie atsisėdo."},
	{3, "3 Ir jis kalbėjo giminaičiui: “Noomė, kuri grįžo iš Moabo krašto, parduoda lauką, priklausiusį mūsų broliui Elimelechui."},
	{4, "4 Aš norėjau pranešti tai tau. Pirk tą lauką čia sėdinčiųjų ir vyresniųjų akivaizdoje. Jei nori išpirkti, pirk, o jei nenori, pasakyk man, kad žinočiau. Nėra kito, kuris turi teisę tai išpirkti, o po tavęs­mano eilė”. Tas atsakė: “Aš pirksiu”."},
	{5, "5 Boozas tarė: “Tą dieną, kai pirksi lauką iš Noomės, turėsi nupirkti ir moabitę Rūtą, mirusiojo žmoną, kad išlaikytum mirusiojo vardą jo nuosavybei”."},
	{6, "6 Giminaitis atsakė: “Aš negaliu išpirkti jos, nes tada nukentėtų mano paties paveldėjimas. Tu pasinaudok mano teise, nes aš negaliu to padaryti”."},
	{7, "7 Izraelyje buvo paprotys: kai kas nors perleisdavo savo teisę į paveldėjimą kitam, jis nusiaudavo savo sandalą ir paduodavo savo artimui. Tai būdavo liudijimas Izraelyje."},
	{8, "8 Kai giminaitis pasakė Boozui: “Pirk tai sau”, nusiavė sandalą ir jam padavė."},
	{9, "9 Tada Boozas tarė vyresniesiems ir visiems žmonėms: “Jūs esate šiandien liudytojai, kad aš nupirkau iš Noomės visa, kas priklausė Elimelechui, Kiljonui ir Machlonui."},
	{10, "10 Taip pat ir moabitę Rūtą, Machlono žmoną, vesiu, kad išlaikyčiau mirusiojo vardą, jo nuosavybei ir kad jo vardas neišnyktų tarp jo brolių ir iš jo tėviškės. Jūs esate šiandien to įvykio liudytojai”."},
	{11, "11 Visi ten esantys žmonės ir vyresnieji atsakė: “Mes esame liudytojai. Viešpats telaimina moterį, ateinančią į tavo namus, kaip Rachelę ir Lėją, kurios sukūrė Izraelio namus. Tegul tau sekasi Efratoje ir tebūna garsus tavo vardas Betliejuje."},
	{12, "12 Tebūna tavo namai kaip namai Pereco, kurį Tamara pagimdė Judui, per palikuonis, kuriuos Viešpats tau duos iš šios jaunos moters”."},
	{13, "13 Boozas vedė Rūtą. Ir kai jis įėjo pas ją, Viešpats davė jai pastoti ir ji pagimdė sūnų."},
	{14, "14 Tuomet moterys sakė Noomei: “Palaimintas Viešpats, kuris nepaliko tavęs be įpėdinio, kad jo vardas būtų žymus Izraelyje."},
	{15, "15 Jis bus tau atgaiva ir pasirūpins tavimi senatvėje. Juk jį pagimdė tavo marti, kuri myli tave, ir yra tau daugiau negu septyni sūnūs”."},
	{16, "16 Noomė paėmė vaiką į savo prieglobstį ir buvo jo aukle."},
	{17, "17 Kaimynės jį pavadino Jobedu, sakydamos: “Sūnus gimė Noomei”. Jobedas buvo Jesės tėvas, karaliaus Dovydo senelis."},
	{18, "18 Šitie yra Pereco palikuonys: Perecs buvo Esromo tėvas,"},
	{19, "19 Esromas­Aramo, Aramas­ Aminadabo,"},
	{20, "20 Aminadabas­Naasono, Naasonas­Salmono,"},
	{21, "21 Salmonas­Boozo, Boozas­Jobedo,"},
	{22, "22 Jobedas­Jesės, o Jesė­Dovydo."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};