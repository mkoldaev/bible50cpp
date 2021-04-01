#include <map>
#include <string>
class Bible32
{
	struct be1	{ int val; const char *msg; };
	struct be2	{ int val; const char *msg; };
	struct be3	{ int val; const char *msg; };
	struct be4	{ int val; const char *msg; };
public:
static void view1() {
struct be1 poems[] = {
	{1, "1 І было слова Гасподняе Ёну, сыну Амафіінаму:"},
	{2, "2 устань, ідзі ў Нінэвію - горад вялікі і прапаведуй у ім, бо зладзействы яго дайшлі да Мяне."},
	{3, "3 І ўстаў Ёна, каб бегчы ў Тарсіс ад аблічча Гасподняга, і прыйшоўшы ў Ёпію і знайшоўшы карабель, які выпраўляўся ў Тарсіс, аддаў плату за правоз і ўзышоў на яго, каб плыць зь імі ў Тарсіс ад аблічча Госпада."},
	{4, "4 Але Гасподзь падняў на моры моцны вецер, і зрабілася на моры вялікая бура, і карабель гатовы быў разьбіцца."},
	{5, "5 І спалохаліся карабельнікі і заклікалі кожны свайго бога, і пачалі кідаць у мора паклады з карабля, каб аблегчыць яго ад іх; а Ёна апусьціўся ў нутро карабля, лёг і моцна заснуў."},
	{6, "6 І прыйшоў да яго начальнік карабля і сказаў яму: чаго ты сьпіш? устань, закліч Бога твайго; можа быць, Бог успомніць пра нас, і мы не загінем."},
	{7, "7 І сказалі адзін аднаму: хадзем, кінем жэрабя, каб даведацца, за каго спасьцігае нас гэтая бяда. І кінулі жэрабя, і ўпала жэрабя на Ёну."},
	{8, "8 Тады сказалі яму: скажы нам, за каго спасьцігла нас гэтая бяда? які твой занятак, і адкуль ідзеш ты? дзе твая краіна, і зь якога ты народу?"},
	{9, "9 І ён сказаў ім: я - Габрэй, шаную Госпада Бога нябёсаў, Які стварыў мора і сушу."},
	{10, "10 І спалохаліся людзі страхам вялікім і сказалі яму: дзеля чаго ты гэта зрабіў, бо даведаліся гэтыя людзі, што ён уцякае ад аблічча Гасподняга, як ён сам абвясьціў ім."},
	{11, "11 І сказалі яму: што зрабіць нам з табою, каб мора аціхла для нас?, бо мора не пераставала хвалявацца."},
	{12, "12 Тады ён сказаў ім: вазьмеце мяне і кіньце мяне ў мора, - і мора аціхне для вас, бо я ведаю, што празь мяне спасьцігла вас гэта вялікая бура."},
	{13, "13 Але гэтыя людзі пачалі моцна веславаць, каб прыстаць да зямлі, але не маглі, бо мора ўсё бушавала і бушавала супроць іх."},
	{14, "14 Тады заклікалі яны Госпада і сказалі: молім Цябе, Госпадзе, хай не загінем за душу чалавека гэтага, і хай не залічыш на нас кроў невінаватую; бо Ты, Госпадзе, зрабіў, што заўгодна Табе!"},
	{15, "15 І ўзялі Ёну і кінулі яго ў мора; і аціхла мора ад лютасьці сваёй."},
	{16, "16 І спалохаліся гэтыя людзі Госпада вялікім страхам і прынесьлі Госпаду ахвяру і далі абяцаньні."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct be2 poems[] = {
	{1, "1 І загадаў Гасподзь вялікаму кіту праглынуць Ёну; і быў Ёна ў чэраве гэтага кіта тры дні і тры ночы."},
	{2, "2 І памаліўся Ёна Госпаду Богу свайму з чэрава кіта"},
	{3, "3 і сказаў: да Госпада заклікаў я ў смутку маім, - і Ён пачуў мяне; з чэрава апраметнай я загаласіў, - і Ты пачуў голас мой."},
	{4, "4 Ты ўкінуў мяне ў глыбіню, у сэрца мора, і патокі акружылі мяне, усе воды Твае і хвалі Твае праходзілі над мною."},
	{5, "5 І я сказаў: адкінуты я ад вачэй Тваіх, аднак я зноў убачу сьвяты храм Твой."},
	{6, "6 Абнялі мяне воды да душы маёй, бездань замкнула мяне; марскою травою абвіта была галава мая."},
	{7, "7 Да асновы гор я сышоў, зямля сваімі замкамі навек загарадзіла мяне; але Ты, Госпадзе Божа мой, душу маю выведзеш зь пекла."},
	{8, "8 Калі зьнемагла ўва мне душа мая, я ўспомніў пра Госпада, і малітва мая дайшла да Цябе, да храма сьвятога Твайго."},
	{9, "9 Пашаноўцы марных і фальшывых божышчаў пакінулі Мілажальнага свайго,"},
	{10, "10 а я голасам хвалы прынясу Табе ахвяру; што абяцаў, выканаю. У Госпада выратаваньне!"},
	{11, "11 І сказаў Гасподзь кіту, і ён выкінуў Ёну на сушу."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct be3 poems[] = {
	{1, "1 І было слова Гасподняе Ёну другі раз:"},
	{2, "2 устань, ідзі ў Нінэвію - горад вялікі і прапаведуй у ёй, што Я загадаў табе."},
	{3, "3 І ўстаў Ёна і пайшоў у Нінэвію па слове Гасподнім; а Нінэвія была горад вялікі ў Бога, на тры дні хады."},
	{4, "4 І пачаў Ёна хадзіць па горадзе, колькі можна прайсьці за адзін дзень, і прапаведаваў, кажучы: яшчэ сорак дзён, - і Нінэвія будзе разбурана!"},
	{5, "5 І паверылі Нінэвіцяне Богу: і абвясьцілі пост і апрануліся ў вярэты, ад вялікага зь іх да малога."},
	{6, "6 Гэтае слова дайшло да цара Нінэвіі, - і ён устаў з трона свайго і зьняў зь сябе царскае адзеньне сваё, і апрануўся ў вярэту і сеў на попеле,"},
	{7, "7 і загадаў абвясьціць і сказаць у Нінэвіі ад імя цара і вяльможаў ягоных, каб ні людзі, ні быдла, ні валы, ні авечкі нічога ня елі, ні хадзілі на пашу, і вады ня пілі,"},
	{8, "8 і каб пакрытыя былі вярэтай людзі і быдла і моцна галасілі да Бога, і каб кожны адвярнуўся ад ліхога шляху свайго ад гвалту рук сваіх."},
	{9, "9 Хто ведае, можа, яшчэ Бог умілажаліцца і ўхіліць ад нас полымны гнеў Свой, і мы не загінем."},
	{10, "10 І ўбачыў Бог дзеі іхнія, што яны зьвярнулі ад ліхога шляху свайго, і пашкадаваў Бог за бедства, пра якое сказаў, што навядзе на іх, і не навёў."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct be4 poems[] = {
	{1, "1 Ёна моцна засмуціўся з гэтага і быў раздражнёны."},
	{2, "2 І маліўся ён Госпаду і сказаў: о, Госпадзе! ці ж ня раз гэта казаў я, калі быў яшчэ ў краіне маёй? Таму я і пабег у Тарсіс, бо ведаў, што Ты - Бог добры і міласэрны, шматцярплівы і шматлітасьцівы, і шкадуеш за бедства."},
	{3, "3 І сёньня, Госпадзе, вазьмі душу маю ад мяне, бо лепей мне памерці, чым жыць."},
	{4, "4 І сказаў Гасподзь: няўжо гэта засмуціла цябе так моцна?"},
	{5, "5 І выйшаў Ёна з горада і сеў з усходняга боку каля горада, і зрабіў сабе там намёт і сеў пад ім у цяні, каб убачыць, што будзе з горадам,"},
	{6, "6 І вырасьціў Гасподзь Бог расьліну, і яна паднялася над Ёнам, каб над галавою ягонай быў цень і каб выбавіць яго ад засмучэньня ягонага; Ёна вельмі ўзрадаваўся расьліне гэтай."},
	{7, "7 І зрабіў Бог так, што на другі дзень з зарою чарвяк падтачыў расьліну, і яна засохла."},
	{8, "8 А калі ўзышло сонца, навёў Бог сьпякотны ўсходні вецер, і сонца пачало пячы галаву Ёны, так што ён зьнямог і прасіў сабе сьмерці і сказаў: лепей мне памерці, чым жыць."},
	{9, "9 І сказаў Бог Ёну: няўжо так моцна засмуціўся ты за расьліну? Ён сказаў: вельмі засмуціўся, нават да сьмерці."},
	{10, "10 Тады сказаў Гасподзь: ты шкадуеш за расьліну, над якою ты не працаваў і якое не гадаваў, якая за адну ноч вырасла і за адну ж ноч і прапала:"},
	{11, "11 Мне ці ж не пашкадаваць Нінэвіі, горада вялікага, у якім больш за сто дваццаць тысяч чалавек, якія ня ўмеюць адрозьніць правай рукі ад левай, і мноства быдла?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};