#include <map>
#include <string>
class Bible35
{
	struct lt1	{ int val; const char *msg; };
	struct lt2	{ int val; const char *msg; };
	struct lt3	{ int val; const char *msg; };
public:
static void view1() {
struct lt1 poems[] = {
	{1, "1 Regėjimas, kurį matė pranašas Habakukas."},
	{2, "2 Viešpatie, kaip ilgai aš šauksiu, o Tu neišklausysi, šauksiu apie smurtą, o Tu negelbėsi!"},
	{3, "3 Kodėl man leidi patirti nedorybę ir vargą? Priespauda ir smurtas prieš mane, visur kyla vaidai ir barniai."},
	{4, "4 Įstatymas nusilpo, į teisingumą nekreipiama dėmesio, nedorėlis apsuka teisųjį, teisme sprendimas iškraipomas!"},
	{5, "5 “Dairykitės tarp tautų ir įsidėmėkite, didžiai stebėkitės, nes jūsų dienomis darysiu darbą, kuriuo jūs netikėtumėte, jei jums kas apie tai pasakotų."},
	{6, "6 Aš sukelsiu chaldėjus, kurie siekia užimti jiems nepriklausančias žemes, kitų gyvenvietes."},
	{7, "7 Tai žiauri ir baisi tauta, jie patys nusprendžia, kas teisu ir garbinga."},
	{8, "8 Jų žirgai greitesni už leopardus. Jie plėšresni negu stepių vilkai. Raiteliai išsiskleidžia, jie atjoja iš toli, jie skrenda kaip erelis prie grobio."},
	{9, "9 Jie visi siekia smurto, jų veidai kaip rytų vėjas, jie ima belaisvius kaip smėlio smiltis."},
	{10, "10 Jie tyčiojasi iš karalių, šaiposi iš kunigaikščių. Jie juokiasi iš tvirtovių, supylę pylimus, jie jas paima."},
	{11, "11 Jie traukia tolyn kaip vėjas, viską nualina. Jiems jėga­jų dievas”."},
	{12, "12 Argi Tu nesi amžinasis Viešpats, mano Dievas, mano Šventasis? Mes nemirsime! Viešpatie, Tu juos paskyrei teismui, galingasis Dieve, Tu juos paruošei bausmei."},
	{13, "13 Tavo akys tyros, jos negali matyti pikto, negali žiūrėti į neteisybę. Kodėl ramiai stebi piktadarius ir tyli, kai nedorėlis praryja teisesnį už save?"},
	{14, "14 Tu padarei žmones kaip jūros žuvis, kaip kirmėles, kurios neturi valdovo."},
	{15, "15 Jie iškelia juos meškere, ištraukia savo tinklu, surenka bradiniu; todėl jie patenkinti džiaugiasi."},
	{16, "16 Jie aukoja tinklui ir smilko bradiniui, nes jų dėka grobis gausus ir maistas geras."},
	{17, "17 Argi jie nuolat tuštins tinklus ir žudys tautas be pasigailėjimo?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lt2 poems[] = {
	{1, "1 Aš stovėsiu sargyboje, pakilsiu į bokštą ir stebėsiu, ką Viešpats man kalbės ir ką man atsakyti, kai esu baramas."},
	{2, "2 Viešpats atsakydamas man tarė: “Užrašyk regėjimą aiškiai ant plokščių, kad jį galėtų perskaityti prabėgantis."},
	{3, "3 Regėjimas yra skirtam laikui, bet galiausiai jis kalbės ir nemeluos. Jei jis uždelstų­lauk, nes jis tikrai išsipildys ir nevėluos."},
	{4, "4 Pasipūtėlio siela nėra dora, bet teisusis gyvens savo tikėjimu."},
	{5, "5 Kaip vynas yra apgaulingas, taip išdidus žmogus­besotis. Jo gerklė kaip mirusiųjų buveinė, nepasotinama kaip mirtis, jis pavergia tautas ir gimines."},
	{6, "6 Ar ne jie dainuos pašaipias dainas ir sugalvos patarlių apie jį: ‘Vargas tam, kuris daugina tai, kas ne jo. Kaip ilgai tai tęsis? Tu apkrauni save užstatų daugybe’."},
	{7, "7 Ar nepabus ir nepakils tie, kurie apiplėš tave, ar neprivers tavęs drebėti? Tada tu tapsi jiems grobiu."},
	{8, "8 Kadangi tu apiplėšei daug tautų, dabar tave apiplėš visos likusios tautos­dėl pralieto kraujo ir padaryto smurto miestams ir visiems jų gyventojams."},
	{9, "9 Vargas tam, kuris godžiai siekia neteisingo pelno savo namams, kad susuktų lizdą aukštybėje, kad apsisaugotų nuo nelaimės!"},
	{10, "10 Tu atnešei gėdą savo namams, naikindamas tautas, pats praradai gyvybę!"},
	{11, "11 Akmuo iš sienos šauks, o medinės sijos jam atsakys:"},
	{12, "12 ‘Vargas tam, kuris stato miestą krauju ir tvirtovę neteisybe’."},
	{13, "13 Tai ne kareivijų Viešpaties valia, kad tautos dirbtų ugniai ir giminės vargtų veltui."},
	{14, "14 Žemė bus pilna Viešpaties šlovės pažinimo kaip jūra pilna vandens."},
	{15, "15 Vargas tam, kuris pila savo artimui, ragindamas jį gerti, ir taip jį nugirdo, kad galėtų matyti jo nuogumą."},
	{16, "16 Tu prisipildei gėda vietoj garbės. Dabar gerk ir tu ir atidenk savo gėdą. Viešpats siunčia tau gėdos ir pažeminimo taurę."},
	{17, "17 Tave užgrius Libanui padarytas smurtas ir gyvulių grobimas gąsdins tave dėl žmonių kraujo ir kraštui, miestams bei visiems jų gyventojams padaryto smurto."},
	{18, "18 Kokia nauda iš drožinio, kurį drožėjas padarė? Ar iš lieto atvaizdo, melų mokytojo, kuriuo jo gamintojas pasitiki, darydamas nebylius stabus?"},
	{19, "19 Vargas tam, kuris sako medžiui: ‘Pabusk!’, nebyliam akmeniui: ‘Pajudėk!’ Tiesa, jis aptrauktas auksu ir sidabru, tačiau jame nėra kvapo."},
	{20, "20 Bet Viešpats yra savo šventykloje, tenutyla visas pasaulis prieš Jį!”"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lt3 poems[] = {
	{1, "1 Pranašo Habakuko malda:"},
	{2, "2 “Viešpatie, girdėjau tavo kalbą ir nusigandau. Atnaujink ir apreikšk savo darbą metuose, savo rūstybėje prisimink gailestingumą."},
	{3, "3 Dievas atėjo iš Temano, Šventasis­nuo Parano kalno. Jo šlovė uždengė dangų ir žemė buvo pilna Jo gyriaus."},
	{4, "4 Spinduliuojančioje šviesoje Jis pasirodė. Iš Jo rankų tvieskė šviesos spinduliai­Jo galybė."},
	{5, "5 Pirma Jo ėjo maras, degančios anglys po Jo kojomis."},
	{6, "6 Jis sustojo ir išmatavo žemę. Jis pažvelgė­išsigando tautos, susvyravo amžinieji kalnai, nusilenkė kalvos. Jo keliai amžini."},
	{7, "7 Aš mačiau Kušano palapines nelaimėje, Midjano krašto palapinių uždangos siūbavo."},
	{8, "8 Viešpatie, ar upės sukėlė Tavo kerštą, ar jūra sužadino įtūžį, ar srovės uždegė Tavo rūstybę, kad Tu važiavai žirgais ir išgelbėjimo vežimais?"},
	{9, "9 Tavo lankas buvo apnuogintas, kaip buvai prisiekęs tautoms. Tu išraižei žemę upėmis."},
	{10, "10 Tave pamatę sudrebėjo kalnai, liejosi vanduo, gelmės balsas pasigirdo, ir ji kėlė rankas į aukštybes."},
	{11, "11 Saulė ir mėnulis sustojo, kai pasipylė Tavo šviečiančios strėlės ir suspindo ietys."},
	{12, "12 Įtūžęs Tu ėjai per žemę, užsirūstinęs trypei tautas."},
	{13, "13 Tu išėjai gelbėti savo tautos, gelbėti savo pateptojo, sutrupinai nedorėlių namų galvą, apnuoginai juos nuo pamatų iki kaklo."},
	{14, "14 Tu pervėrei jo strėlėmis jo karius, kai jie kaip audra ėjo išblaškyti manęs, džiūgaudami, kad galės slaptoje praryti vargšą."},
	{15, "15 Tu su savo žirgais perėjai jūrą galingų vandenų paviršiumi."},
	{16, "16 Man tai girdint, drebėjo mano kūnas, virpėjo lūpos. Skausmas palietė kaulus, buvau labai sukrėstas. Aš ramus laukiu bausmės tiems, kurie užpuolė mano tautą."},
	{17, "17 Nors figmedis nežydėtų ir nebūtų vaisių ant vynmedžių ir alyvmedžių, nors laukai neduotų derliaus, garduose dingtų avys ir ožkos ir nebūtų gyvulių tvartuose,"},
	{18, "18 tačiau aš džiaugsiuosi Viešpačiu, džiūgausiu savo išgelbėjimo Dievu!"},
	{19, "19 Viešpats Dievas yra mano stiprybė. Jis padarys mano kojas kaip elnių ir leis man pasiekti aukštumas”. Choro vadovui. Styginiais instrumentais."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};