#include <map>
#include <string>
class Bible50
{
	struct pl1	{ int val; const char *msg; };
	struct pl2	{ int val; const char *msg; };
	struct pl3	{ int val; const char *msg; };
	struct pl4	{ int val; const char *msg; };
public:
static void view1() {
struct pl1 poems[] = {
	{1, "1 Paweł i Tymoteusz, słudzy Jezusa Chrystusa, wszystkim świętym w Chrystusie Jezusie, którzy są w mieście Filipis, z biskupami i z dyjakonami."},
	{2, "2 Łaska wam i pokój niech będzie od Boga, Ojca naszego, i od Pana Jezusa Chrystusa."},
	{3, "3 Dziękuję Bogu memu, ilekroć na was wspominam,"},
	{4, "4 (Zawsze w każdej modlitwie mojej za wszystkich was z radością prośbę czyniąc)."},
	{5, "5 Za społeczność waszę w Ewangielii, od pierwszego dnia aż dotąd;"},
	{6, "6 Pewien tego będąc, iż ten, który począł w was dobrą sprawę, dokona aż do dnia Jezusa Chrystusa."},
	{7, "7 Jakoż sprwiedliwa jest, abym ja to rozumiał o was wszystkich, dlatego iż was mam w sercu mojem i w więzieniu mojem, i w obronie, i w utwierdzeniu Ewangielii, was, mówię, wszystkich, którzy jesteście ze mną uczestnikami łaski."},
	{8, "8 Albowiem świadkiem mi jest Bóg, jako was wszystkich pragnę we wnętrznościach Jezusa Chrystusa."},
	{9, "9 I o to się modlę, aby miłość wasza im dalej tem więcej pomnażała się w znajomości i we wszelkim zmyśle,"},
	{10, "10 Abyście mogli rozeznać rzeczy różne, żebyście byli szczerymi i bez obrażenia na dzień Chrystusowy,"},
	{11, "11 Będąc napełnieni owocami sprawiedliwości, które przynosicie przez Jezusa Chrystusa ku sławie i chwale Bożej."},
	{12, "12 A chcę, bracia! abyście wiedzieli, iż to, co się ze mną dzieje, na większe pomnożenie Ewangielii wyszło."},
	{13, "13 Tak iż związki moje dla Chrystusa rozgłoszone są po wszystkim pałacu cesarskim i u wszystkich inszych."},
	{14, "14 A wiele ich z braci w Panu serca nabywszy z moich związek, śmielszymi są, bez bojaźni mówić słowo."},
	{15, "15 Wszakże niektórzy z zazdrości i z sporu, a niektórzy też z dobrej woli Chrystusa każą."},
	{16, "16 A ci, którzy z sporu Chrystusa opowiadają nieszczerze, mniemają, iż przydawają ucisku związkom moim;"},
	{17, "17 A którzy z miłości, wiedzą, żem jest wystawiony ku obronie Ewangielii,"},
	{18, "18 Ale cóż na tem? Owszem jakimkolwiek sposobem, lub postawnie, lub w prawdzie Chrystus bywa opowiadany, i z tego się raduję, i jeszcze się radować będę;"},
	{19, "19 Gdyż wiem, iż mi to wynijdzie na zbawienie przez modlitwę waszę i pomoc Ducha Jezusa Chrystusa,"},
	{20, "20 Według troskliwego oczekiwania i nadziei mojej, iż się w niczem nie zawstydzę; ale z wszelakiem bezpieczeństwem, jako zawsze, tak i teraz, uwielbionym będzie Chrystus w ciele mojem, lub przez żywot, lub przez śmierć."},
	{21, "21 Albowiem mnie życiem jest Chrystus, a umrzeć zysk."},
	{22, "22 A jeźliż żyć w ciele jest mi to owocem pracy mojej, jednak nie wiem, co bym obrać miał."},
	{23, "23 Albowiem jestem ściśniony od tego obojga, pragnąc być rozwiązany, a być z Chrystusem, bo to daleko lepiej:"},
	{24, "24 Ale zostać w ciele potrzebniej jest dla was."},
	{25, "25 A będąc tego pewien, wiem, iż zostanę i z wami wszystkimi pomieszkam ku waszemu pomnożeniu i weselu wiary,"},
	{26, "26 Aby obfitowała chluba wasza w Chrystusie Jezusie ze mnie, gdy do was zasię przybędę."},
	{27, "27 Tylko się tak sprawujcie, jako przystoi Ewangielii Chrystusowej, abym, lub przyjdę i oglądam was, lub nie przyjdę, słyszał o was, iż stoicie w jednym duchu, jednomyślnie bojując w wierze Ewangielii."},
	{28, "28 Ani w czem nie strachając się przeciwników, co onym jest pewnym znakiem zginienia, a wam zbawienia, a to od Boga;"},
	{29, "29 Gdyż wam to dane dla Chrystusa, abyście nie tylko weń wierzyli, ale abyście też dla niego cierpieli,"},
	{30, "30 Tenże bój mając, jakiście widzieli we mnie, i jaki teraz o mnie słyszycie."},
	{31, "1 Paweł i Tymoteusz, słudzy Jezusa Chrystusa, wszystkim świętym w Chrystusie Jezusie, którzy są w mieście Filipis, z biskupami i z dyjakonami."},
	{32, "2 Łaska wam i pokój niech będzie od Boga, Ojca naszego, i od Pana Jezusa Chrystusa."},
	{33, "3 Dziękuję Bogu memu, ilekroć na was wspominam,"},
	{34, "4 (Zawsze w każdej modlitwie mojej za wszystkich was z radością prośbę czyniąc)."},
	{35, "5 Za społeczność waszę w Ewangielii, od pierwszego dnia aż dotąd;"},
	{36, "6 Pewien tego będąc, iż ten, który począł w was dobrą sprawę, dokona aż do dnia Jezusa Chrystusa."},
	{37, "7 Jakoż sprwiedliwa jest, abym ja to rozumiał o was wszystkich, dlatego iż was mam w sercu mojem i w więzieniu mojem, i w obronie, i w utwierdzeniu Ewangielii, was, mówię, wszystkich, którzy jesteście ze mną uczestnikami łaski."},
	{38, "8 Albowiem świadkiem mi jest Bóg, jako was wszystkich pragnę we wnętrznościach Jezusa Chrystusa."},
	{39, "9 I o to się modlę, aby miłość wasza im dalej tem więcej pomnażała się w znajomości i we wszelkim zmyśle,"},
	{40, "10 Abyście mogli rozeznać rzeczy różne, żebyście byli szczerymi i bez obrażenia na dzień Chrystusowy,"},
	{41, "11 Będąc napełnieni owocami sprawiedliwości, które przynosicie przez Jezusa Chrystusa ku sławie i chwale Bożej."},
	{42, "12 A chcę, bracia! abyście wiedzieli, iż to, co się ze mną dzieje, na większe pomnożenie Ewangielii wyszło."},
	{43, "13 Tak iż związki moje dla Chrystusa rozgłoszone są po wszystkim pałacu cesarskim i u wszystkich inszych."},
	{44, "14 A wiele ich z braci w Panu serca nabywszy z moich związek, śmielszymi są, bez bojaźni mówić słowo."},
	{45, "15 Wszakże niektórzy z zazdrości i z sporu, a niektórzy też z dobrej woli Chrystusa każą."},
	{46, "16 A ci, którzy z sporu Chrystusa opowiadają nieszczerze, mniemają, iż przydawają ucisku związkom moim;"},
	{47, "17 A którzy z miłości, wiedzą, żem jest wystawiony ku obronie Ewangielii,"},
	{48, "18 Ale cóż na tem? Owszem jakimkolwiek sposobem, lub postawnie, lub w prawdzie Chrystus bywa opowiadany, i z tego się raduję, i jeszcze się radować będę;"},
	{49, "19 Gdyż wiem, iż mi to wynijdzie na zbawienie przez modlitwę waszę i pomoc Ducha Jezusa Chrystusa,"},
	{50, "20 Według troskliwego oczekiwania i nadziei mojej, iż się w niczem nie zawstydzę; ale z wszelakiem bezpieczeństwem, jako zawsze, tak i teraz, uwielbionym będzie Chrystus w ciele mojem, lub przez żywot, lub przez śmierć."},
	{51, "21 Albowiem mnie życiem jest Chrystus, a umrzeć zysk."},
	{52, "22 A jeźliż żyć w ciele jest mi to owocem pracy mojej, jednak nie wiem, co bym obrać miał."},
	{53, "23 Albowiem jestem ściśniony od tego obojga, pragnąc być rozwiązany, a być z Chrystusem, bo to daleko lepiej:"},
	{54, "24 Ale zostać w ciele potrzebniej jest dla was."},
	{55, "25 A będąc tego pewien, wiem, iż zostanę i z wami wszystkimi pomieszkam ku waszemu pomnożeniu i weselu wiary,"},
	{56, "26 Aby obfitowała chluba wasza w Chrystusie Jezusie ze mnie, gdy do was zasię przybędę."},
	{57, "27 Tylko się tak sprawujcie, jako przystoi Ewangielii Chrystusowej, abym, lub przyjdę i oglądam was, lub nie przyjdę, słyszał o was, iż stoicie w jednym duchu, jednomyślnie bojując w wierze Ewangielii."},
	{58, "28 Ani w czem nie strachając się przeciwników, co onym jest pewnym znakiem zginienia, a wam zbawienia, a to od Boga;"},
	{59, "29 Gdyż wam to dane dla Chrystusa, abyście nie tylko weń wierzyli, ale abyście też dla niego cierpieli,"},
	{60, "30 Tenże bój mając, jakiście widzieli we mnie, i jaki teraz o mnie słyszycie."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pl2 poems[] = {
	{1, "1 Jeźli tedy macie jaką pociechę w Chrystusie, jeźli jaką uciechę miłości, jeźli jaką społeczność ducha, jeźli są jakie wnętrzności i zlitowania w was,"},
	{2, "2 Dopełnijcież wesela mojego, abyście jednoż rozumieli, jednostajną miłość mając, będąc jednomyślni i jednoż rozumiejący;"},
	{3, "3 Nic nie czyniąc spornie, albo przez próżną chwałę, ale w pokorze jedni drugich mając za wyższych nad się."},
	{4, "4 Nie upatrujcie każdy tylko, co jest jego, ale każdy też, co jest drugich."},
	{5, "5 Tego tedy bądźcie o sobie rozumienia, które było i w Chrystusie Jezusie."},
	{6, "6 Który, będąc w kształcie Bożym, nie poczytał sobie tego za drapiestwo równym być Bogu,"},
	{7, "7 Ale wyniszczył samego siebie, przyjąwszy kształt niewolnika, stawszy się podobny ludziom;"},
	{8, "8 I postawą znaleziony jako człowiek, sam się poniżył, będąc posłusznym aż do śmierci, a to śmierci krzyżowej."},
	{9, "9 Dlatego też Bóg nader go wywyższył i darował mu imię, które jest nad wszystkie imię;"},
	{10, "10 Aby w imieniu Jezusowem wszelkie się kolano skłaniało, tych, którzy są na niebiesiech i tych, którzy są na ziemi, i tych, którzy są pod ziemią."},
	{11, "11 A wszelki język aby wyznawał, że Jezus Chrystus jest Panem ku chwale Boga Ojca."},
	{12, "12 Przetoż, moi mili! jakoście zawsze posłuszni byli, nie tylko w przytomności mojej, ale teraz daleko więcej w niebytności mojej, z bojaźnią i ze drżeniem zbawienie swoje sprawujcie."},
	{13, "13 Albowiem Bóg jest, który sprawuje w was chcenie i skuteczne wykonanie według upodobania swego."},
	{14, "14 Wszystko czyńcie bez szemrania i poswarków,"},
	{15, "15 Abyście byli bez nagany i szczeremi dziatkami Bożemi, nienaganionymi w pośrodku narodu złego i przewrotnego, między którymi świecicie jako światła na świecie."},
	{16, "16 Zachowywując słowa żywota ku chlubie mojej w dzień Chrystusowy, żem darmo nie bieżał i darmo nie pracował."},
	{17, "17 Ale choćbym ofiarowany był dla ofiary i usługi wiary waszej, weselę się i spółweselę się ze wszystkimi wami;"},
	{18, "18 Z tegoż tedy i wy weselcie się i spółweselcie się ze mną."},
	{19, "19 A mam nadzieję w Panu Jezusie, iż Tymoteusza w rychle poślę do was, abym się i ja ucieszył, dowiedziawszy się, co się z wami dzieje."},
	{20, "20 Albowiem nie mam nikogo w umyśle jemu równego, który by się uprzejmie o rzeczy wasze starać chciał;"},
	{21, "21 Bo wszyscy swoich rzeczy szukają, a nie tych, które są Jezusa Chrystusa."},
	{22, "22 Ale wiecie, iż on jest doświadczonym, a iż jako syn z ojcem ze mną służył w Ewangielii."},
	{23, "23 Mam tedy nadzieję, że tego do was poślę, skoro obaczę, co się ze mną dalej dziać będzie;"},
	{24, "24 A mam ufność w Panu, że i sam w rychle do was przyjdę."},
	{25, "25 Alem rozumiał rzeczą potrzebną, Epafrodyta, brata i pomocnika i spółbojownika mego, a waszego Apostoła i sługę w potrzebie mojej, posłać do was,"},
	{26, "26 Ponieważ pragnął was wszystkich i bardzo się frasował, żeście słyszeli, iż zachorował."},
	{27, "27 Bo wprawdzie chorował mało nie na śmierć; ale się Bóg zmiłował nad nim, a nie tylko nad nim, ale i nade mną, abym nie miał smutku na smutek."},
	{28, "28 Przetoż tem ochotniej posłałem go, abyście zasię ujrzawszy go, uweselili się, a ja abym miał mniej smutku."},
	{29, "29 Przyjmijcież go tedy w Panu ze wszystkiem weselem; a takich w poczciwości miejcie;"},
	{30, "30 Boć dla dzieła Chrystusowego bliskim był śmierci, odważywszy zdrowie swoje, aby dopełnił tego, czego nie dostawało w usłudze waszej przeciwko mnie."},
	{31, "1 Jeźli tedy macie jaką pociechę w Chrystusie, jeźli jaką uciechę miłości, jeźli jaką społeczność ducha, jeźli są jakie wnętrzności i zlitowania w was,"},
	{32, "2 Dopełnijcież wesela mojego, abyście jednoż rozumieli, jednostajną miłość mając, będąc jednomyślni i jednoż rozumiejący;"},
	{33, "3 Nic nie czyniąc spornie, albo przez próżną chwałę, ale w pokorze jedni drugich mając za wyższych nad się."},
	{34, "4 Nie upatrujcie każdy tylko, co jest jego, ale każdy też, co jest drugich."},
	{35, "5 Tego tedy bądźcie o sobie rozumienia, które było i w Chrystusie Jezusie."},
	{36, "6 Który, będąc w kształcie Bożym, nie poczytał sobie tego za drapiestwo równym być Bogu,"},
	{37, "7 Ale wyniszczył samego siebie, przyjąwszy kształt niewolnika, stawszy się podobny ludziom;"},
	{38, "8 I postawą znaleziony jako człowiek, sam się poniżył, będąc posłusznym aż do śmierci, a to śmierci krzyżowej."},
	{39, "9 Dlatego też Bóg nader go wywyższył i darował mu imię, które jest nad wszystkie imię;"},
	{40, "10 Aby w imieniu Jezusowem wszelkie się kolano skłaniało, tych, którzy są na niebiesiech i tych, którzy są na ziemi, i tych, którzy są pod ziemią."},
	{41, "11 A wszelki język aby wyznawał, że Jezus Chrystus jest Panem ku chwale Boga Ojca."},
	{42, "12 Przetoż, moi mili! jakoście zawsze posłuszni byli, nie tylko w przytomności mojej, ale teraz daleko więcej w niebytności mojej, z bojaźnią i ze drżeniem zbawienie swoje sprawujcie."},
	{43, "13 Albowiem Bóg jest, który sprawuje w was chcenie i skuteczne wykonanie według upodobania swego."},
	{44, "14 Wszystko czyńcie bez szemrania i poswarków,"},
	{45, "15 Abyście byli bez nagany i szczeremi dziatkami Bożemi, nienaganionymi w pośrodku narodu złego i przewrotnego, między którymi świecicie jako światła na świecie."},
	{46, "16 Zachowywując słowa żywota ku chlubie mojej w dzień Chrystusowy, żem darmo nie bieżał i darmo nie pracował."},
	{47, "17 Ale choćbym ofiarowany był dla ofiary i usługi wiary waszej, weselę się i spółweselę się ze wszystkimi wami;"},
	{48, "18 Z tegoż tedy i wy weselcie się i spółweselcie się ze mną."},
	{49, "19 A mam nadzieję w Panu Jezusie, iż Tymoteusza w rychle poślę do was, abym się i ja ucieszył, dowiedziawszy się, co się z wami dzieje."},
	{50, "20 Albowiem nie mam nikogo w umyśle jemu równego, który by się uprzejmie o rzeczy wasze starać chciał;"},
	{51, "21 Bo wszyscy swoich rzeczy szukają, a nie tych, które są Jezusa Chrystusa."},
	{52, "22 Ale wiecie, iż on jest doświadczonym, a iż jako syn z ojcem ze mną służył w Ewangielii."},
	{53, "23 Mam tedy nadzieję, że tego do was poślę, skoro obaczę, co się ze mną dalej dziać będzie;"},
	{54, "24 A mam ufność w Panu, że i sam w rychle do was przyjdę."},
	{55, "25 Alem rozumiał rzeczą potrzebną, Epafrodyta, brata i pomocnika i spółbojownika mego, a waszego Apostoła i sługę w potrzebie mojej, posłać do was,"},
	{56, "26 Ponieważ pragnął was wszystkich i bardzo się frasował, żeście słyszeli, iż zachorował."},
	{57, "27 Bo wprawdzie chorował mało nie na śmierć; ale się Bóg zmiłował nad nim, a nie tylko nad nim, ale i nade mną, abym nie miał smutku na smutek."},
	{58, "28 Przetoż tem ochotniej posłałem go, abyście zasię ujrzawszy go, uweselili się, a ja abym miał mniej smutku."},
	{59, "29 Przyjmijcież go tedy w Panu ze wszystkiem weselem; a takich w poczciwości miejcie;"},
	{60, "30 Boć dla dzieła Chrystusowego bliskim był śmierci, odważywszy zdrowie swoje, aby dopełnił tego, czego nie dostawało w usłudze waszej przeciwko mnie."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pl3 poems[] = {
	{1, "1 Dalej mówiąc, bracia moi! radujcie się w Panu. Jedneż rzeczy wam pisać mnie nie mierzi, a wam jest bezpiecznie."},
	{2, "2 Upatrujcie psy, upatrujcie złych robotników, upatrujcie rozerwanie."},
	{3, "3 Albowiem my jesteśmy obrzezaniem, którzy duchem służymy Bogu i chlubimy się w Chrystusie Jezusie, a w ciele nie ufamy."},
	{4, "4 Aczci i ja w ciele mam ufanie; jeźli kto inszy zda się mieć ufanie w ciele, bardziej ja,"},
	{5, "5 Obrzezany będąc ósmego dnia, z narodu Izraelskiego, z pokolenia Benjaminowego, Żyd z Żydów, według zakonu Faryzeusz;"},
	{6, "6 Według gorliwości prześladowca kościoła, według sprawiedliwości onej, która jest z zakonu, będąc bez przygany."},
	{7, "7 Ale to, co mi było zyskiem, tom poczytał dla Chrystusa za szkodę."},
	{8, "8 Owszem i wszystko poczytam sobie za szkodę dla zacności znajomości Chrystusa Jezusa, Pana mojego, dla któregom wszystko utracił i mam to sobie za gnój, abym Chrystusa zyskał,"},
	{9, "9 I był znaleziony w nim, nie mając sprawiedliwości mojej, tej która jest z zakonu, ale tę, która jest przez wiarę Chrystusową, to jest sprawiedliwość z Boga, która jest przez wiarę;"},
	{10, "10 Żebym go poznał i moc zmartwychwstania jego, i społeczność ucierpienia jego, przykształtowany będąc śmierci jego,"},
	{11, "11 Owabym jakimkolwiek sposobem doszedł do powstania z martwych."},
	{12, "12 Nie iżbym już uchwycił, albo już doskonałym był; ale ścigam, ażbym też uchwycił to, na com też od Chrystusa Jezusa uchwycony."},
	{13, "13 Bracia! jać o sobie nie rozumiem, żebym już uchwycił."},
	{14, "14 Ale jedno czynię, że tego, co za mną jest, zapamiętywając, a do tego się, co przede mną jest, spiesząc, bieżę do kresu ku zakładowi powołania onego Bożego, które jest z góry w Chrystusie Jezusie."},
	{15, "15 Ile tedy nas doskonałych, toż rozumiejmy; a jeźli co inaczej rozumiecie, i toć wam Bóg objawi."},
	{16, "16 Wszakże w tem, czegośmy doszli, według jednegoż sznuru postępujmy i jednoż rozumiejmy."},
	{17, "17 Bądźcież wespół naśladowcami moimi, bracia! a upatrujcie tych, którzy tak chodzą, jako nas za wzór macie."},
	{18, "18 Albowiem wiele ich chodzi, o którychem wam często powiadał, a teraz i z płaczem mówię, iż są nieprzyjaciołmi krzyża Chrystusowego;"},
	{19, "19 Których koniec jest zatracenie, których Bóg jest brzuch, a chwała w hańbie ich, którzy się o rzeczy ziemskie starają."},
	{20, "20 Aleć nasza rzeczpospolita jest w niebiesiech, skąd też zbawiciela oczekujemy, Pana Jezusa Chrystusa."},
	{21, "21 Który przemieni ciało nasze podłe, aby się podobne stało chwalebnemu ciału jego, według skutecznej mocy, którą też wszystkie rzeczy sobie podbić może."},
	{22, "1 Dalej mówiąc, bracia moi! radujcie się w Panu. Jedneż rzeczy wam pisać mnie nie mierzi, a wam jest bezpiecznie."},
	{23, "2 Upatrujcie psy, upatrujcie złych robotników, upatrujcie rozerwanie."},
	{24, "3 Albowiem my jesteśmy obrzezaniem, którzy duchem służymy Bogu i chlubimy się w Chrystusie Jezusie, a w ciele nie ufamy."},
	{25, "4 Aczci i ja w ciele mam ufanie; jeźli kto inszy zda się mieć ufanie w ciele, bardziej ja,"},
	{26, "5 Obrzezany będąc ósmego dnia, z narodu Izraelskiego, z pokolenia Benjaminowego, Żyd z Żydów, według zakonu Faryzeusz;"},
	{27, "6 Według gorliwości prześladowca kościoła, według sprawiedliwości onej, która jest z zakonu, będąc bez przygany."},
	{28, "7 Ale to, co mi było zyskiem, tom poczytał dla Chrystusa za szkodę."},
	{29, "8 Owszem i wszystko poczytam sobie za szkodę dla zacności znajomości Chrystusa Jezusa, Pana mojego, dla któregom wszystko utracił i mam to sobie za gnój, abym Chrystusa zyskał,"},
	{30, "9 I był znaleziony w nim, nie mając sprawiedliwości mojej, tej która jest z zakonu, ale tę, która jest przez wiarę Chrystusową, to jest sprawiedliwość z Boga, która jest przez wiarę;"},
	{31, "10 Żebym go poznał i moc zmartwychwstania jego, i społeczność ucierpienia jego, przykształtowany będąc śmierci jego,"},
	{32, "11 Owabym jakimkolwiek sposobem doszedł do powstania z martwych."},
	{33, "12 Nie iżbym już uchwycił, albo już doskonałym był; ale ścigam, ażbym też uchwycił to, na com też od Chrystusa Jezusa uchwycony."},
	{34, "13 Bracia! jać o sobie nie rozumiem, żebym już uchwycił."},
	{35, "14 Ale jedno czynię, że tego, co za mną jest, zapamiętywając, a do tego się, co przede mną jest, spiesząc, bieżę do kresu ku zakładowi powołania onego Bożego, które jest z góry w Chrystusie Jezusie."},
	{36, "15 Ile tedy nas doskonałych, toż rozumiejmy; a jeźli co inaczej rozumiecie, i toć wam Bóg objawi."},
	{37, "16 Wszakże w tem, czegośmy doszli, według jednegoż sznuru postępujmy i jednoż rozumiejmy."},
	{38, "17 Bądźcież wespół naśladowcami moimi, bracia! a upatrujcie tych, którzy tak chodzą, jako nas za wzór macie."},
	{39, "18 Albowiem wiele ich chodzi, o którychem wam często powiadał, a teraz i z płaczem mówię, iż są nieprzyjaciołmi krzyża Chrystusowego;"},
	{40, "19 Których koniec jest zatracenie, których Bóg jest brzuch, a chwała w hańbie ich, którzy się o rzeczy ziemskie starają."},
	{41, "20 Aleć nasza rzeczpospolita jest w niebiesiech, skąd też zbawiciela oczekujemy, Pana Jezusa Chrystusa."},
	{42, "21 Który przemieni ciało nasze podłe, aby się podobne stało chwalebnemu ciału jego, według skutecznej mocy, którą też wszystkie rzeczy sobie podbić może."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct pl4 poems[] = {
	{1, "1 Przetoż, bracia moi mili i pożądani! radości i korono moja! tak stójcie w Panu, najmilsi moi!"},
	{2, "2 Ewodyi proszę i Syntychy proszę, aby jednegoż rozumienia były w Panu."},
	{3, "3 Proszę też i cię, towarzyszu wierny! bądź tym na pomoc, które w Ewangielii wespół ze mną pracowały, i z Klemensem i z innymi pomocnikami moimi, których imiona są w księgach żywota."},
	{4, "4 Radujcie się zawsze w Panu; znowu mówię, radujcie się."},
	{5, "5 Skromność wasza niech będzie wiadoma wszystkim ludziom; Pan blisko jest."},
	{6, "6 Nie troszczcie się o żadną rzecz, ale we wszystkiem przez modlitwę i prośbę z dziękowaniem żądności wasze niech będą znajome u Boga."},
	{7, "7 A pokój Boży, który przewyższa wszelki rozum, będzie strzegł serc waszych i myśli waszych w Chrystusie Jezusie."},
	{8, "8 A dalej mówiąc, bracia, cokolwiek jest prawdziwego, cokolwiek poczciwego, cokolwiek sprawiedliwego, cokolwiek czystego, cokolwiek przyjemnego, cokolwiek chwalebnego, jeźli która cnota i jeźli która chwała, o tem przemyślajcie."},
	{9, "9 Czegoście się też nauczyli i coście przyjęli, i słyszeli, i widzieli przy mnie, to czyńcie, a Bóg pokoju będzie z wami."},
	{10, "10 A uradowałem się wielce w Panu, żeście się już wżdy znowu zazielenili w swojem staraniu o mię, jakoż i staraliście się o to, lecz wam na sposobnym czasie schodziło."},
	{11, "11 Nie żebym to mówił dla niedostatku; bomci się ja nauczył, na tem przestawać, co mam."},
	{12, "12 Umiem i uniżać się, umiem i obfitować; wszędy i we wszystkich rzeczach jestem wyćwiczony i nasyconym być, i łaknąć, i obfitować, i niedostatek cierpieć;"},
	{13, "13 Wszystko mogę w Chrystusie, który mię posila."},
	{14, "14 Wszakże dobrzeście uczynili, żeście społecznie dogodzili uciskowi mojemu."},
	{15, "15 A wiecie i wy Filipensowie, iż na początku Ewangielii, gdym wyszedł z Macedonii, żaden mi zbór nie udzielił na rachunek dawania i brania, tylko wy sami;"},
	{16, "16 Ponieważ i do Tesaloniki raz i drugi, czego potrzeba było, posłaliście mi,"},
	{17, "17 Nie przeto, żebym datku szukał; ale szukam pożytku, który by obfitował na rachunku waszym."},
	{18, "18 Gdyżem odebrał wszystko i mam dostatek, pełenem, wziąwszy od Epafrodyta, co posłano od was, wonność dobrego zapachu, ofiarę przyjemną i Bogu się podobającą."},
	{19, "19 A Bóg mój napełni wszelką potrzebę waszę według bogactwa swego, chwalebnie, w Chrystusie Jezusie."},
	{20, "20 A Bogu i Ojcu naszemu niech będzie chwała na wieki wieków. Amen."},
	{21, "21 Pozdrówcie wszystkich świętych w Chrystusie Jezusie. Pozdrawiają was bracia, którzy są ze mną."},
	{22, "22 Pozdrawiają was wszyscy święci; ale osobliwie, którzy są z cesarskiego domu."},
	{23, "23 Łaska Pana naszego Jezusa Chrystusa niech będzie z wami wszystkimi. Amen."},
	{24, "1 Przetoż, bracia moi mili i pożądani! radości i korono moja! tak stójcie w Panu, najmilsi moi!"},
	{25, "2 Ewodyi proszę i Syntychy proszę, aby jednegoż rozumienia były w Panu."},
	{26, "3 Proszę też i cię, towarzyszu wierny! bądź tym na pomoc, które w Ewangielii wespół ze mną pracowały, i z Klemensem i z innymi pomocnikami moimi, których imiona są w księgach żywota."},
	{27, "4 Radujcie się zawsze w Panu; znowu mówię, radujcie się."},
	{28, "5 Skromność wasza niech będzie wiadoma wszystkim ludziom; Pan blisko jest."},
	{29, "6 Nie troszczcie się o żadną rzecz, ale we wszystkiem przez modlitwę i prośbę z dziękowaniem żądności wasze niech będą znajome u Boga."},
	{30, "7 A pokój Boży, który przewyższa wszelki rozum, będzie strzegł serc waszych i myśli waszych w Chrystusie Jezusie."},
	{31, "8 A dalej mówiąc, bracia, cokolwiek jest prawdziwego, cokolwiek poczciwego, cokolwiek sprawiedliwego, cokolwiek czystego, cokolwiek przyjemnego, cokolwiek chwalebnego, jeźli która cnota i jeźli która chwała, o tem przemyślajcie."},
	{32, "9 Czegoście się też nauczyli i coście przyjęli, i słyszeli, i widzieli przy mnie, to czyńcie, a Bóg pokoju będzie z wami."},
	{33, "10 A uradowałem się wielce w Panu, żeście się już wżdy znowu zazielenili w swojem staraniu o mię, jakoż i staraliście się o to, lecz wam na sposobnym czasie schodziło."},
	{34, "11 Nie żebym to mówił dla niedostatku; bomci się ja nauczył, na tem przestawać, co mam."},
	{35, "12 Umiem i uniżać się, umiem i obfitować; wszędy i we wszystkich rzeczach jestem wyćwiczony i nasyconym być, i łaknąć, i obfitować, i niedostatek cierpieć;"},
	{36, "13 Wszystko mogę w Chrystusie, który mię posila."},
	{37, "14 Wszakże dobrzeście uczynili, żeście społecznie dogodzili uciskowi mojemu."},
	{38, "15 A wiecie i wy Filipensowie, iż na początku Ewangielii, gdym wyszedł z Macedonii, żaden mi zbór nie udzielił na rachunek dawania i brania, tylko wy sami;"},
	{39, "16 Ponieważ i do Tesaloniki raz i drugi, czego potrzeba było, posłaliście mi,"},
	{40, "17 Nie przeto, żebym datku szukał; ale szukam pożytku, który by obfitował na rachunku waszym."},
	{41, "18 Gdyżem odebrał wszystko i mam dostatek, pełenem, wziąwszy od Epafrodyta, co posłano od was, wonność dobrego zapachu, ofiarę przyjemną i Bogu się podobającą."},
	{42, "19 A Bóg mój napełni wszelką potrzebę waszę według bogactwa swego, chwalebnie, w Chrystusie Jezusie."},
	{43, "20 A Bogu i Ojcu naszemu niech będzie chwała na wieki wieków. Amen."},
	{44, "21 Pozdrówcie wszystkich świętych w Chrystusie Jezusie. Pozdrawiają was bracia, którzy są ze mną."},
	{45, "22 Pozdrawiają was wszyscy święci; ale osobliwie, którzy są z cesarskiego domu."},
	{46, "23 Łaska Pana naszego Jezusa Chrystusa niech będzie z wami wszystkimi. Amen."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};