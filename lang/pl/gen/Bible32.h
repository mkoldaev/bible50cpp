#include <map>
#include <string>
class Bible32
{
	struct pl1	{ int val; const char *msg; };
	struct pl2	{ int val; const char *msg; };
	struct pl3	{ int val; const char *msg; };
	struct pl4	{ int val; const char *msg; };
public:
static void view1() {
struct pl1 poems[] = {
	{1, "1 I stało się słowo Pańskie do Jonasza, syna Amaty, mówiąc:"},
	{2, "2 Wstań, idź do Niniwy miasta tego wielkiego, a wołaj przeciwko niemu; bo wstąpiła złość ich przed oblicze moje."},
	{3, "3 Ale Jonasz wstał, aby uciekł do Tarsu od oblicza Pańskiego; a przyszedłszy do Joppen, znalazł okręt, który miał iść do Tarsu, a zapłaciwszy od niego wstąpił nań, aby płynął z nimi do Tarsu od oblicza Pańskiego."},
	{4, "4 Ale Pan wzruszył wiatr wielki na morzu, i powstał wicher wielki na morzu; i zdało się, jakoby się okręt rozbić miał."},
	{5, "5 A żeglarze ulękłszy się wołali każdy do boga swego, a wyrzucali do morza to, co mieli na okręcie, aby tem lżejszy był; ale Jonasz zszedł był na stronę okrętu, a położywszy się spał twardo."},
	{6, "6 Tedy przystąpił do niego sternik, i rzekł mu: Cóż czynisz ty, ospalcze? wstań, wołaj do Boga swego, owa snać wspomni Bóg na nas, abyśmy nie zginęli."},
	{7, "7 Tedy rzekł jeden do drugiego: Chodźcie, rzućmy losy, abyśmy się dowiedzieli, dla kogo to złe na nas przyszło; rzucili tedy losy, i padł los na Jonasza."},
	{8, "8 I rzekli do niego: Powiedz nam proszę, dla kogo to złe przyszło na nas? coś za rzemiosła? skąd idziesz? z którejś ziemi i z któregoś narodu?"},
	{9, "9 I rzekł do nich: Jestem Hebrejczyk, a boję się Pana, Boga niebieskiego, który stworzył morze i ziemię."},
	{10, "10 Tedy się zlękli mężowie strachem wielkim; a dowiedziawszy się mężowie oni, że od oblicza Pańskiego ucieka, (bo im był oznajmił) rzekli do niego: Cóżeś to uczynił?"},
	{11, "11 Nadto rzekli do niego: Cóż z tobą uczynimy, aby się morze uspokoiło? Bo się morze im dalej tem bardziej burzyło."},
	{12, "12 Tedy rzekł do nich: Weźmijcie mię, a wrzućcie mię w morze, a uspokoi się morze przed wami, gdyż ja wiem, iż dla mnie to wzruszenie wielkie na was przyszło."},
	{13, "13 Ale oni mężowie robili wiosłami, chcąc się do brzegu dostać, wszakże nie mogli; bo się morze im dalej tem więcej burzyło przeciwko nim."},
	{14, "14 Wołali tedy do Pana, mówiąc: O Panie! prosimy, abyśmy nie zginęli dla śmierci męża tego, ani wkładaj na nas krwi niewinnej; bo ty, o Panie! jako chcesz, tak czynisz."},
	{15, "15 Zatem wzięli Jonasza i wrzucili go w morze; i uspokoiło się morze od wzburzenia swego."},
	{16, "16 Bali się tedy mężowie strachem wielkim Pana, i ofiarowali ofiarę Panu, i śluby czynili."},
	{17, "1 I stało się słowo Pańskie do Jonasza, syna Amaty, mówiąc:"},
	{18, "2 Wstań, idź do Niniwy miasta tego wielkiego, a wołaj przeciwko niemu; bo wstąpiła złość ich przed oblicze moje."},
	{19, "3 Ale Jonasz wstał, aby uciekł do Tarsu od oblicza Pańskiego; a przyszedłszy do Joppen, znalazł okręt, który miał iść do Tarsu, a zapłaciwszy od niego wstąpił nań, aby płynął z nimi do Tarsu od oblicza Pańskiego."},
	{20, "4 Ale Pan wzruszył wiatr wielki na morzu, i powstał wicher wielki na morzu; i zdało się, jakoby się okręt rozbić miał."},
	{21, "5 A żeglarze ulękłszy się wołali każdy do boga swego, a wyrzucali do morza to, co mieli na okręcie, aby tem lżejszy był; ale Jonasz zszedł był na stronę okrętu, a położywszy się spał twardo."},
	{22, "6 Tedy przystąpił do niego sternik, i rzekł mu: Cóż czynisz ty, ospalcze? wstań, wołaj do Boga swego, owa snać wspomni Bóg na nas, abyśmy nie zginęli."},
	{23, "7 Tedy rzekł jeden do drugiego: Chodźcie, rzućmy losy, abyśmy się dowiedzieli, dla kogo to złe na nas przyszło; rzucili tedy losy, i padł los na Jonasza."},
	{24, "8 I rzekli do niego: Powiedz nam proszę, dla kogo to złe przyszło na nas? coś za rzemiosła? skąd idziesz? z którejś ziemi i z któregoś narodu?"},
	{25, "9 I rzekł do nich: Jestem Hebrejczyk, a boję się Pana, Boga niebieskiego, który stworzył morze i ziemię."},
	{26, "10 Tedy się zlękli mężowie strachem wielkim; a dowiedziawszy się mężowie oni, że od oblicza Pańskiego ucieka, (bo im był oznajmił) rzekli do niego: Cóżeś to uczynił?"},
	{27, "11 Nadto rzekli do niego: Cóż z tobą uczynimy, aby się morze uspokoiło? Bo się morze im dalej tem bardziej burzyło."},
	{28, "12 Tedy rzekł do nich: Weźmijcie mię, a wrzućcie mię w morze, a uspokoi się morze przed wami, gdyż ja wiem, iż dla mnie to wzruszenie wielkie na was przyszło."},
	{29, "13 Ale oni mężowie robili wiosłami, chcąc się do brzegu dostać, wszakże nie mogli; bo się morze im dalej tem więcej burzyło przeciwko nim."},
	{30, "14 Wołali tedy do Pana, mówiąc: O Panie! prosimy, abyśmy nie zginęli dla śmierci męża tego, ani wkładaj na nas krwi niewinnej; bo ty, o Panie! jako chcesz, tak czynisz."},
	{31, "15 Zatem wzięli Jonasza i wrzucili go w morze; i uspokoiło się morze od wzburzenia swego."},
	{32, "16 Bali się tedy mężowie strachem wielkim Pana, i ofiarowali ofiarę Panu, i śluby czynili."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pl2 poems[] = {
	{1, "1 Lecz Pan był nagotował rybę wielką, żeby pożarła Jonasza; i był Jonasz we wnętrznościach onej ryby trzy dni i trzy nocy."},
	{2, "2 I modlił się Jonasz Panu, Bogu swemu, we wnętrznościach onej ryby,"},
	{3, "3 I rzekł: Wołałem z ucisku swego do Pana, a ozwał mi się; z głębokości grobu wołałem, a wysłuchałeś głos mój."},
	{4, "4 Boś mię wrzucił w głębokość w pośrodek morza, i rzeka ogarnęła mię; wszystkie nawałności twoje i powodzi twoje zwaliły się na mię."},
	{5, "5 Jużem był rzekł: Wygnanym jest od oczów twoich, wszakże jeszcze będę patrzał na kościół twój święty."},
	{6, "6 Ogarnęły mię wody aż do duszy, przepaść mię ogarnęła, rogożem obwiniona była głowa moja."},
	{7, "7 Zstąpiłem aż do spodku gór, ziemia się zaworami swemi zawarła nademną na wieki; tyś jednak wywiódł z dołu żywot mój, o Panie, Boże mój!"},
	{8, "8 Gdy ustawała we mnie dusza moja, wspomniałem na Pana; modlitwa moja przyszła do ciebie, do świętego kościoła twego."},
	{9, "9 Którzy pilnują marności nikczemnych, pozbawiają się miłosierdzia Bożego;"},
	{10, "10 Ale ja z głosem dziękczynienia ofiarować ci będę, com ślubował, spełnię; od Pana jest obfite wybawienie. I rozkazał Pan onej rybie, a wyrzuciła Jonasza na brzeg."},
	{11, "1 Lecz Pan był nagotował rybę wielką, żeby pożarła Jonasza; i był Jonasz we wnętrznościach onej ryby trzy dni i trzy nocy."},
	{12, "2 I modlił się Jonasz Panu, Bogu swemu, we wnętrznościach onej ryby,"},
	{13, "3 I rzekł: Wołałem z ucisku swego do Pana, a ozwał mi się; z głębokości grobu wołałem, a wysłuchałeś głos mój."},
	{14, "4 Boś mię wrzucił w głębokość w pośrodek morza, i rzeka ogarnęła mię; wszystkie nawałności twoje i powodzi twoje zwaliły się na mię."},
	{15, "5 Jużem był rzekł: Wygnanym jest od oczów twoich, wszakże jeszcze będę patrzał na kościół twój święty."},
	{16, "6 Ogarnęły mię wody aż do duszy, przepaść mię ogarnęła, rogożem obwiniona była głowa moja."},
	{17, "7 Zstąpiłem aż do spodku gór, ziemia się zaworami swemi zawarła nademną na wieki; tyś jednak wywiódł z dołu żywot mój, o Panie, Boże mój!"},
	{18, "8 Gdy ustawała we mnie dusza moja, wspomniałem na Pana; modlitwa moja przyszła do ciebie, do świętego kościoła twego."},
	{19, "9 Którzy pilnują marności nikczemnych, pozbawiają się miłosierdzia Bożego;"},
	{20, "10 Ale ja z głosem dziękczynienia ofiarować ci będę, com ślubował, spełnię; od Pana jest obfite wybawienie. I rozkazał Pan onej rybie, a wyrzuciła Jonasza na brzeg."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pl3 poems[] = {
	{1, "1 Tedy się stało słowo Pańskie do Jonasza powtóre, mówiąc:"},
	{2, "2 Wstań, idź do Niniwy, tego miasta wielkiego, a każ przeciwko niemu to, coć rozkazuję."},
	{3, "3 Wstał tedy Jonasz, i poszedł do Niniwy według słowa Pańskiego. (A Niniwe było miasto bardzo wielkie na trzy dni drogi.)"},
	{4, "4 Tedy Jonasz począł chodzić po mieście, ile mógł za jeden dzień ujść, i wołał mówiąc: Po czterdziestu dniach Niniwe będzie wywrócone."},
	{5, "5 I uwierzyli Niniwczycy Bogu; a zapowiedziawszy post oblekli się w wory, od największego z nich aż do najmniejszego z nich."},
	{6, "6 Bo gdy ta rzecz przyszła do króla Niniwskiego, powstawszy z stolicy swojej złożył z siebie odzienie swoje, a oblekłszy się w wór, siedział w popiele."},
	{7, "7 I rozkazał wywołać i opowiadać w Niniwie z dekretu królewskiego, i książąt swoich, tak mówiąc: Ludzie i bydło, woły i owce niech nic nie ukuszają, i niech się nie pasą, i wody nie piją;"},
	{8, "8 Ale się niech okryją worami ludzie i bydło, a niech do Boga gorliwie wołają, a niech się odwróci każdy od złej drogi swojej i od łupiestwa, które jest w ręku jego."},
	{9, "9 Kto wie, jeźli się nie obróci Bóg, a nie użali się tego, nie odwrócili się, mówię, od popędliwości gniewu swego, abyśmy nie zginęli."},
	{10, "10 I widział Bóg sprawy ich, iż się odwrócili od złej drogi swej i użalił się Bóg nad tem złem, które rzekł, że im miał uczynić, a nie uczynił."},
	{11, "1 Tedy się stało słowo Pańskie do Jonasza powtóre, mówiąc:"},
	{12, "2 Wstań, idź do Niniwy, tego miasta wielkiego, a każ przeciwko niemu to, coć rozkazuję."},
	{13, "3 Wstał tedy Jonasz, i poszedł do Niniwy według słowa Pańskiego. (A Niniwe było miasto bardzo wielkie na trzy dni drogi.)"},
	{14, "4 Tedy Jonasz począł chodzić po mieście, ile mógł za jeden dzień ujść, i wołał mówiąc: Po czterdziestu dniach Niniwe będzie wywrócone."},
	{15, "5 I uwierzyli Niniwczycy Bogu; a zapowiedziawszy post oblekli się w wory, od największego z nich aż do najmniejszego z nich."},
	{16, "6 Bo gdy ta rzecz przyszła do króla Niniwskiego, powstawszy z stolicy swojej złożył z siebie odzienie swoje, a oblekłszy się w wór, siedział w popiele."},
	{17, "7 I rozkazał wywołać i opowiadać w Niniwie z dekretu królewskiego, i książąt swoich, tak mówiąc: Ludzie i bydło, woły i owce niech nic nie ukuszają, i niech się nie pasą, i wody nie piją;"},
	{18, "8 Ale się niech okryją worami ludzie i bydło, a niech do Boga gorliwie wołają, a niech się odwróci każdy od złej drogi swojej i od łupiestwa, które jest w ręku jego."},
	{19, "9 Kto wie, jeźli się nie obróci Bóg, a nie użali się tego, nie odwrócili się, mówię, od popędliwości gniewu swego, abyśmy nie zginęli."},
	{20, "10 I widział Bóg sprawy ich, iż się odwrócili od złej drogi swej i użalił się Bóg nad tem złem, które rzekł, że im miał uczynić, a nie uczynił."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct pl4 poems[] = {
	{1, "1 I nie podobało się to bardzo Jonaszowi, i rozpalił się gniew jego."},
	{2, "2 Przetoż się modlił Panu, i rzekł: Proszę Panie! azażem tego nie mówił, gdym jeszcze był w ziemi mojej? Dlategom się pospieszył, abym uciekł do Tarsu, gdyżem wiedział, żeś ty Bóg łaskawy i litościwy, długo cierpliwy i wielkiego miłosierdzia, a który żałujesz złego."},
	{3, "3 A teraz, o Panie! proszę, odbierz duszę moję odemnie: bo mi lepiej umrzeć, niżeli żyć."},
	{4, "4 I rzekł Pan: A dobrzeż to, że się tak gniewasz?"},
	{5, "5 Bo wyszedł był Jonasz z miasta, i siedział na wschód słońca przeciwko miastu; a uczyniwszy tam sobie budę, usiadł pod nią w cieniu, ażby ujrzał, coby się działo z onem miastem."},
	{6, "6 A Pan Bóg był zgotował banię, która wyrosła nad Jonaszem, aby zasłaniała głowę jego, i zastawiała go od gorąca; tedy się Jonasz bardzo z onej bani radował."},
	{7, "7 Wtem nazajutrz na świtaniu nagotował Bóg robaka, który podgryzł onę banię, tak, że uschła."},
	{8, "8 I stało się, gdy weszło słońce, wzbudził Bóg wiatr suchy od wschodu słońca, i biło słońce na głowę Jonaszową, tak, iż omdlewał, i życzył sobie śmierci, mówiąc: Lepiej mi umrzeć, niżeli żyć."},
	{9, "9 I rzekł Bóg do Jonasza: Dobrzeż to, że się tak gniewasz o tę banię? I rzekł: Dobrze, że się gniewam aż na śmierć."},
	{10, "10 Tedy mu rzekł Pan: Ty żałujesz tej bani, około którejś nie pracował, aniś jej dał wzrost, która jednej nocy urosła, i jednej nocy zginęła;"},
	{11, "11 A Jabym nie miał żałować Niniwy, miasta tak wielkiego? w którem jest więcej niżeli sto i dwadzieścia tysięcy ludzi, którzy nie umieją rozeznać między prawicą swoją i lewicą swoją, i bydła wiele."},
	{12, "1 I nie podobało się to bardzo Jonaszowi, i rozpalił się gniew jego."},
	{13, "2 Przetoż się modlił Panu, i rzekł: Proszę Panie! azażem tego nie mówił, gdym jeszcze był w ziemi mojej? Dlategom się pospieszył, abym uciekł do Tarsu, gdyżem wiedział, żeś ty Bóg łaskawy i litościwy, długo cierpliwy i wielkiego miłosierdzia, a który żałujesz złego."},
	{14, "3 A teraz, o Panie! proszę, odbierz duszę moję odemnie: bo mi lepiej umrzeć, niżeli żyć."},
	{15, "4 I rzekł Pan: A dobrzeż to, że się tak gniewasz?"},
	{16, "5 Bo wyszedł był Jonasz z miasta, i siedział na wschód słońca przeciwko miastu; a uczyniwszy tam sobie budę, usiadł pod nią w cieniu, ażby ujrzał, coby się działo z onem miastem."},
	{17, "6 A Pan Bóg był zgotował banię, która wyrosła nad Jonaszem, aby zasłaniała głowę jego, i zastawiała go od gorąca; tedy się Jonasz bardzo z onej bani radował."},
	{18, "7 Wtem nazajutrz na świtaniu nagotował Bóg robaka, który podgryzł onę banię, tak, że uschła."},
	{19, "8 I stało się, gdy weszło słońce, wzbudził Bóg wiatr suchy od wschodu słońca, i biło słońce na głowę Jonaszową, tak, iż omdlewał, i życzył sobie śmierci, mówiąc: Lepiej mi umrzeć, niżeli żyć."},
	{20, "9 I rzekł Bóg do Jonasza: Dobrzeż to, że się tak gniewasz o tę banię? I rzekł: Dobrze, że się gniewam aż na śmierć."},
	{21, "10 Tedy mu rzekł Pan: Ty żałujesz tej bani, około którejś nie pracował, aniś jej dał wzrost, która jednej nocy urosła, i jednej nocy zginęła;"},
	{22, "11 A Jabym nie miał żałować Niniwy, miasta tak wielkiego? w którem jest więcej niżeli sto i dwadzieścia tysięcy ludzi, którzy nie umieją rozeznać między prawicą swoją i lewicą swoją, i bydła wiele."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};