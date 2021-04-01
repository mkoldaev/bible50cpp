#include <map>
#include <string>
class Bible53
{
	struct pl1	{ int val; const char *msg; };
	struct pl2	{ int val; const char *msg; };
	struct pl3	{ int val; const char *msg; };
public:
static void view1() {
struct pl1 poems[] = {
	{1, "1 Paweł i Sylwan, i Tymoteusz zborowi Tesaloniceńskiemu w Bogu, Ojcu naszym, i w Panu Jezusie Chrystusie."},
	{2, "2 Łaska wam i pokój niech będzie od Boga, Ojca naszego, i Pana Jezusa Chrystusa."},
	{3, "3 Powinniśmy Bogu zawsze dziękować za was, bracia! tak jako się godzi, iż bardzo rośnie wiara wasza i pomnaża się miłość każdego z was, jednych przeciwko drugim,"},
	{4, "4 Tak iż i my sami chlubimy się z was we zborach Bożych z waszej cierpliwości i wiary we wszystkich prześladowaniach waszych i w uciskach, które ponosicie."},
	{5, "5 Co jest jawnym dowodem sprawiedliwego sądu Bożego, abyście godnymi byli poczytani królestwa Bożego, dla którego też cierpicie,"},
	{6, "6 Ponieważ sprawiedliwa jest u Boga, żeby wzajem oddał uciśnienie tym, którzy was uciskają;"},
	{7, "7 A wam, którzyście uciśnieni, odpocznienie z nami przy objawieniu Pana Jezusa z nieba z Aniołami mocy jego,"},
	{8, "8 W ogniu płomienistym oddawając pomstę tym, którzy Boga nie znają i tym, którzy nie są posłuszni Ewangielii Pana naszego, Jezusa Chrystusa;"},
	{9, "9 Którzy pomstę odniosą, wieczne zatracenie od obliczności Pańskiej i od chwały mocy jego."},
	{10, "10 Gdy przyjdzie, aby był uwielbiony w świętych swoich i aby się dziwnym okazał we wszystkich wierzących (dlatego iż uwierzono naszemu świadectwu u was) w on dzień."},
	{11, "11 Dlaczego też modlimy się zawsze za was, aby Bóg nasz godnymi was uczynił powołania tego i wypełnił wszystko upodobanie dobrotliwości swojej, i skutek wiary w mocy."},
	{12, "12 Aby było uwielbione imię Pana naszego, Jezusa Chrystusa w was, a wy w nim, według łaski Boga naszego i Pana Jezusa Chrystusa."},
	{13, "1 Paweł i Sylwan, i Tymoteusz zborowi Tesaloniceńskiemu w Bogu, Ojcu naszym, i w Panu Jezusie Chrystusie."},
	{14, "2 Łaska wam i pokój niech będzie od Boga, Ojca naszego, i Pana Jezusa Chrystusa."},
	{15, "3 Powinniśmy Bogu zawsze dziękować za was, bracia! tak jako się godzi, iż bardzo rośnie wiara wasza i pomnaża się miłość każdego z was, jednych przeciwko drugim,"},
	{16, "4 Tak iż i my sami chlubimy się z was we zborach Bożych z waszej cierpliwości i wiary we wszystkich prześladowaniach waszych i w uciskach, które ponosicie."},
	{17, "5 Co jest jawnym dowodem sprawiedliwego sądu Bożego, abyście godnymi byli poczytani królestwa Bożego, dla którego też cierpicie,"},
	{18, "6 Ponieważ sprawiedliwa jest u Boga, żeby wzajem oddał uciśnienie tym, którzy was uciskają;"},
	{19, "7 A wam, którzyście uciśnieni, odpocznienie z nami przy objawieniu Pana Jezusa z nieba z Aniołami mocy jego,"},
	{20, "8 W ogniu płomienistym oddawając pomstę tym, którzy Boga nie znają i tym, którzy nie są posłuszni Ewangielii Pana naszego, Jezusa Chrystusa;"},
	{21, "9 Którzy pomstę odniosą, wieczne zatracenie od obliczności Pańskiej i od chwały mocy jego."},
	{22, "10 Gdy przyjdzie, aby był uwielbiony w świętych swoich i aby się dziwnym okazał we wszystkich wierzących (dlatego iż uwierzono naszemu świadectwu u was) w on dzień."},
	{23, "11 Dlaczego też modlimy się zawsze za was, aby Bóg nasz godnymi was uczynił powołania tego i wypełnił wszystko upodobanie dobrotliwości swojej, i skutek wiary w mocy."},
	{24, "12 Aby było uwielbione imię Pana naszego, Jezusa Chrystusa w was, a wy w nim, według łaski Boga naszego i Pana Jezusa Chrystusa."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pl2 poems[] = {
	{1, "1 A prosimy was, bracia! przez przyjście Pana naszego Jezusa Chrystusa i nasze zgromadzenie do niego,"},
	{2, "2 Abyście się nie zaraz dali zrażać z zmysłu waszego, ani sobą trwożyć, lub przez ducha lub przez mowę, lub przez list, jakoby od nas pisany, jakoby nadchodził dzień Chrystusowy."},
	{3, "3 Niech was nikt nie zwodzi żadnym sposobem; albowiem nie przyjdzie on dzień, ażby pierwej przyszło odstąpienie i byłby objawiony człowiek on grzechu, on syn zatracenia."},
	{4, "4 Który się sprzeciwia i wynosi nad to wszystko, co się zowie Bogiem, albo co ma Boską cześć, tak iż on w kościele Bożym jako Bóg usiądzie, udawając się za Boga."},
	{5, "5 Izali nie pamiętacie, iż jeszcze z wami będąc, o temem wam powiadał?"},
	{6, "6 A teraz wiecie, co przeszkadza, aby był objawiony czasu swego."},
	{7, "7 Albowiem się już sprawuje tajemnica nieprawości, tylko że ten, który teraz przeszkadza, przeszkadzać będzie, ażby był z pośrodku odjęty."},
	{8, "8 A tedy objawiony będzie on niezbożnik, którego Pan zabije duchem ust swoich i zniesie objawieniem przyjścia swego."},
	{9, "9 Którego niezbożnika przyjście jest podług skutku szatańskiego, ze wszelką mocą i znakami, i cudami kłamliwemi,"},
	{10, "10 I ze wszystkiem oszukaniem nieprawości w tych, którzy giną, przeto iż miłości prawdy nie przyjęli, aby byli zbawieni."},
	{11, "11 A przetoż pośle im Bóg skutek błędów, aby wierzyli kłamstwu,"},
	{12, "12 Aby byli osądzeni wszyscy, którzy nie uwierzyli prawdzie, ale sobie upodobali niesprawiedliwość."},
	{13, "13 Lecz my powinniśmy Bogu dziękować zawsze za was, bracia umiłowani od Pana! iż was Bóg od początku wybrał ku zbawieniu w poświęceniu Ducha i w wierze prawdy,"},
	{14, "14 Do czego was powołał przez Ewangieliję naszę ku dostąpieniu chwały Pana naszego, Jezusa Chrystusa."},
	{15, "15 Przetoż, bracia! stójcie, a trzymajcie się nauki podanej, którejście się nauczyli lub przez mowę, lub przez list nasz."},
	{16, "16 A sam Pan nasz, Jezus Chrystus i Bóg a Ojciec nasz, który nas umiłował i dał pociechę wieczną, i nadzieję dobrą przez łaskę,"},
	{17, "17 Niech cieszy serca wasze i utwierdza was w każdej mowie i w uczynku dobrym."},
	{18, "1 A prosimy was, bracia! przez przyjście Pana naszego Jezusa Chrystusa i nasze zgromadzenie do niego,"},
	{19, "2 Abyście się nie zaraz dali zrażać z zmysłu waszego, ani sobą trwożyć, lub przez ducha lub przez mowę, lub przez list, jakoby od nas pisany, jakoby nadchodził dzień Chrystusowy."},
	{20, "3 Niech was nikt nie zwodzi żadnym sposobem; albowiem nie przyjdzie on dzień, ażby pierwej przyszło odstąpienie i byłby objawiony człowiek on grzechu, on syn zatracenia."},
	{21, "4 Który się sprzeciwia i wynosi nad to wszystko, co się zowie Bogiem, albo co ma Boską cześć, tak iż on w kościele Bożym jako Bóg usiądzie, udawając się za Boga."},
	{22, "5 Izali nie pamiętacie, iż jeszcze z wami będąc, o temem wam powiadał?"},
	{23, "6 A teraz wiecie, co przeszkadza, aby był objawiony czasu swego."},
	{24, "7 Albowiem się już sprawuje tajemnica nieprawości, tylko że ten, który teraz przeszkadza, przeszkadzać będzie, ażby był z pośrodku odjęty."},
	{25, "8 A tedy objawiony będzie on niezbożnik, którego Pan zabije duchem ust swoich i zniesie objawieniem przyjścia swego."},
	{26, "9 Którego niezbożnika przyjście jest podług skutku szatańskiego, ze wszelką mocą i znakami, i cudami kłamliwemi,"},
	{27, "10 I ze wszystkiem oszukaniem nieprawości w tych, którzy giną, przeto iż miłości prawdy nie przyjęli, aby byli zbawieni."},
	{28, "11 A przetoż pośle im Bóg skutek błędów, aby wierzyli kłamstwu,"},
	{29, "12 Aby byli osądzeni wszyscy, którzy nie uwierzyli prawdzie, ale sobie upodobali niesprawiedliwość."},
	{30, "13 Lecz my powinniśmy Bogu dziękować zawsze za was, bracia umiłowani od Pana! iż was Bóg od początku wybrał ku zbawieniu w poświęceniu Ducha i w wierze prawdy,"},
	{31, "14 Do czego was powołał przez Ewangieliję naszę ku dostąpieniu chwały Pana naszego, Jezusa Chrystusa."},
	{32, "15 Przetoż, bracia! stójcie, a trzymajcie się nauki podanej, którejście się nauczyli lub przez mowę, lub przez list nasz."},
	{33, "16 A sam Pan nasz, Jezus Chrystus i Bóg a Ojciec nasz, który nas umiłował i dał pociechę wieczną, i nadzieję dobrą przez łaskę,"},
	{34, "17 Niech cieszy serca wasze i utwierdza was w każdej mowie i w uczynku dobrym."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pl3 poems[] = {
	{1, "1 Na ostatek, bracia! módlcie się za nas, aby się słowo Pańskie szerzyło i rozsławiało, jako i u was;"},
	{2, "2 I abyśmy byli wyrwani od niezbędnych i złych ludzi; albowiem nie wszystkich jest wiara."},
	{3, "3 Aleć wierny jest Pan, który was utwierdzi i strzec będzie od złego."},
	{4, "4 A ufamy w Panu o was, iż to, co wam rozkazujemy, i czynicie i czynić będziecie."},
	{5, "5 A Pan niech sprawuje serca wasze ku miłości Bożej i ku cierpliwemu oczekiwaniu Chrystusa."},
	{6, "6 A rozkazujemy wam, bracia! w imieniu Pana naszego, Jezusa Chrystusa, abyście się odłączyli od każdego brata nieporządnie chodzącego, a nie według podanej nauki, którą wziął od nas."},
	{7, "7 Albowiem sami wiecie, jako nas potrzeba naśladować, ponieważeśmy nie żyli między wami nieporządnie;"},
	{8, "8 Aniśmy darmo chleba jedli u kogo, ale z pracą i z kłopotem we dnie i w nocy robiąc, abyśmy nikomu z was ciężkimi nie byli;"},
	{9, "9 Nie iżbyśmy tej mocy nie mieli, ale żebyśmy wam sami siebie za przykład podali, abyście nas naśladowali."},
	{10, "10 Albowiem gdyśmy byli u was, tośmy wam rozkazali, że jeźli kto nie chce robić, niechajże też nie je."},
	{11, "11 Bo słyszymy, iż niektórzy między wami nieporządnie chodzą, nic nie robiąc, ale się niepotrzebnemi rzeczami bawiąc."},
	{12, "12 Przetoż takowym rozkazujemy i napominamy ich przez Pana naszego, Jezusa Chrystusa, aby w pokoju robiąc, swój własny chleb jedli."},
	{13, "13 A wy, bracia! nie słabiejcie, dobrze czyniąc."},
	{14, "14 A jeźli kto jest nieposłuszny słowu naszemu przez list pisanemu, tego naznaczcie, a nie mieszajcie się z nim, aby się zawstydził;"},
	{15, "15 Wszakże nie miejcie go za nieprzyjaciela, ale napominajcie jako brata."},
	{16, "16 A sam Pan pokoju niech wam da pokój zawsze i wszelkim sposobem. Pan niech będzie z wami wszystkimi."},
	{17, "17 Pozdrowienie ręką moją Pawłową, co jest znakiem w każdym liście; tak piszę."},
	{18, "18 Łaska Pana naszego, Jezusa Chrystusa, niech będzie z wami wszystkimi. Amen."},
	{19, "1 Na ostatek, bracia! módlcie się za nas, aby się słowo Pańskie szerzyło i rozsławiało, jako i u was;"},
	{20, "2 I abyśmy byli wyrwani od niezbędnych i złych ludzi; albowiem nie wszystkich jest wiara."},
	{21, "3 Aleć wierny jest Pan, który was utwierdzi i strzec będzie od złego."},
	{22, "4 A ufamy w Panu o was, iż to, co wam rozkazujemy, i czynicie i czynić będziecie."},
	{23, "5 A Pan niech sprawuje serca wasze ku miłości Bożej i ku cierpliwemu oczekiwaniu Chrystusa."},
	{24, "6 A rozkazujemy wam, bracia! w imieniu Pana naszego, Jezusa Chrystusa, abyście się odłączyli od każdego brata nieporządnie chodzącego, a nie według podanej nauki, którą wziął od nas."},
	{25, "7 Albowiem sami wiecie, jako nas potrzeba naśladować, ponieważeśmy nie żyli między wami nieporządnie;"},
	{26, "8 Aniśmy darmo chleba jedli u kogo, ale z pracą i z kłopotem we dnie i w nocy robiąc, abyśmy nikomu z was ciężkimi nie byli;"},
	{27, "9 Nie iżbyśmy tej mocy nie mieli, ale żebyśmy wam sami siebie za przykład podali, abyście nas naśladowali."},
	{28, "10 Albowiem gdyśmy byli u was, tośmy wam rozkazali, że jeźli kto nie chce robić, niechajże też nie je."},
	{29, "11 Bo słyszymy, iż niektórzy między wami nieporządnie chodzą, nic nie robiąc, ale się niepotrzebnemi rzeczami bawiąc."},
	{30, "12 Przetoż takowym rozkazujemy i napominamy ich przez Pana naszego, Jezusa Chrystusa, aby w pokoju robiąc, swój własny chleb jedli."},
	{31, "13 A wy, bracia! nie słabiejcie, dobrze czyniąc."},
	{32, "14 A jeźli kto jest nieposłuszny słowu naszemu przez list pisanemu, tego naznaczcie, a nie mieszajcie się z nim, aby się zawstydził;"},
	{33, "15 Wszakże nie miejcie go za nieprzyjaciela, ale napominajcie jako brata."},
	{34, "16 A sam Pan pokoju niech wam da pokój zawsze i wszelkim sposobem. Pan niech będzie z wami wszystkimi."},
	{35, "17 Pozdrowienie ręką moją Pawłową, co jest znakiem w każdym liście; tak piszę."},
	{36, "18 Łaska Pana naszego, Jezusa Chrystusa, niech będzie z wami wszystkimi. Amen."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};