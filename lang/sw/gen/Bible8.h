#include <map>
#include <string>
class Bible8
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
	struct sw4	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Ikawa zamani za Waamuzi walipoamua, kulikuwa na njaa katika nchi. Akaondoka mtu mmoja wa Bethlehemu ya Yuda, akaenda kukaa katika nchi ya Moabu, yeye na mkewe na wanawe wawili. "},
	{2, "2 Na jina la mtu huyo aliitwa Elimeleki, na jina la mkewe Naomi, na majina ya wanawe wawili Maloni na Kilioni, Waefrathi wa Bethlehemu ya Yuda. Wakafika nchi ya Moabu, wakakaa huko. "},
	{3, "3 Akafa Elimeleki, mumewe Naomi; na yule mwanamke akasalia na wanawe wawili. "},
	{4, "4 Nao wakaoa wake katika wanawake wa Moabu; na jina la mmoja aliitwa Orpa, na jina la wa pili Ruthuu. Wakakaa huko yapata miaka kumi. "},
	{5, "5 Wakafa na Maloni na Kilioni wote wawili; na huyo mwanamke akawa amefiwa na wanawe wawili, na mumewe pia. "},
	{6, "6 Ndipo alipoondoka, yeye na wakweze, ili kurudi kutoka nchi ya Moabu; maana huko katika nchi ya Moabu amesikia ya kwamba Bwana amewajilia watu wake na kuwapa chakula. "},
	{7, "7 Basi akatoka pale alipokuwapo, na wakweze wawili pamoja naye; wakashika njia ili kurudi mpaka nchi ya Yuda. "},
	{8, "8 Kisha Naomi akawaambia wakweze wawili, Nendeni sasa mkarejee kila mmoja nyumbani kwa mamaye; Bwana na awatendee mema ninyi, kama ninyi mlivyowatendea mema hao waliofariki na mimi pia. "},
	{9, "9 Bwana na awajalie kuona raha kila mmoja nyumbani kwa mumewe. Kisha akawabusu; nao wakapaza sauti zao wakalia. "},
	{10, "10 Wakamwambia, La, sivyo; lakini tutarudi pamoja nawe kwa watu wako. "},
	{11, "11 Naye Naomi akasema, Enyi wanangu, mrejee; kwani kufuatana na mimi? Je! Mimi ninao watoto wa kiume tena tumboni mwangu, hata wawe waume zenu? "},
	{12, "12 Enyi wanangu, mrejee; nendeni zenu; kwa kuwa mimi ni mzee, siwezi kupata mume tena. Kama ningesema, Natumaini; kama ningepata mume hata usiku huu, na kuzaa watoto wa kiume; "},
	{13, "13 je! Mngesubiri hata watakapokuwa watu wazima? Mngejizuia msiwe na waume? La, sivyo, wanangu; maana ni vigumu kwangu kuliko kwenu, kwa sababu mkono wa Bwana umetoka juu yangu. "},
	{14, "14 Nao wakapaza sauti zao, wakalia tena, na Orpa akambusu mkwewe, lakini Ruthuu akaambatana naye. "},
	{15, "15 Naye akasema, Tazama, shemeji yako amerejea kwa watu wake, na kwa mungu wake; basi urejee wewe umfuate shemeji yako. "},
	{16, "16 Naye Ruthuu akasema, Usinisihi nikuache, Nirejee nisifuatane nawe; Maana wewe uendako nitakwenda, Na wewe ukaapo nitakaa. Watu wako watakuwa watu wangu, Na Mungu wako atakuwa Mungu wangu; "},
	{17, "17 Pale utakapokufa nitakufa nami, Na papo hapo nitazikwa; Bwana anitende vivyo na kuzidi, Ila kufa tu kutatutenga wewe nami. "},
	{18, "18 Basi alipomwona kuwa amekaza nia yake kufuatana naye, aliacha kusema naye. "},
	{19, "19 Hivyo hao wakaendelea wote wawili hata walipofika Bethlehemu. Na ikawa walipofika Bethlehemu, mji wote ulitaharuki kwa habari zao. Nao wanawake wakasema, Je! Huyu ni Naomi? "},
	{20, "20 Akawaambia, Msiniite Naomi niiteni Mara,kwa sababu Mwenyezi Mungu amenitenda mambo machungu sana. "},
	{21, "21 Mimi nalitoka hali nimejaa, naye Bwana amenirudisha sina kitu, kwani kuniita Naomi, ikiwa Bwana ameshuhudia juu yangu, na Mwenyezi Mungu amenitesa? "},
	{22, "22 Basi Naomi akarudi; pamoja na Ruthuu Mmoabi, mkwewe; ambao walirudi kutoka nchi ya Moabu; nao wakafika Bethlehemu mwanzo wa mavuno ya shayiri. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Basi huyo Naomi alikuwa na ndugu ya mumewe, mtu mkuu mwenye mali, wa jamaa yake Elimeleki, na jina lake aliitwa Boazi. "},
	{2, "2 Naye Ruthuu Mmoabi akamwambia Naomi, Sasa niende kondeni, niokote masazo ya masuke nyuma yake yule ambaye nitaona kibali machoni pake. Akamwambia, Haya, mwanangu, nenda. "},
	{3, "3 Basi akaenda, akaja akaokota masazo kondeni nyuma ya wavunaji; na bahati yake ikamtukia kwamba akaifika sehemu ya shamba iliyokuwa mali yake huyo Boazi, ambaye alikuwa wa jamaa yake Elimeleki. "},
	{4, "4 Na tazama, Boazi akaja kutoka Bethlehemu kawaamkia wavunaji, akasema, Bwana akae nanyi. Nao wakamwitikia, Bwana na akubariki. "},
	{5, "5 Kisha Boazi akamwuliza mtumishi aliyewasimamia wavunaji, Na huyu je! Ni msichana wa nani? "},
	{6, "6 Yule msimamizi aliyewasimamia wavunaji akajibu, akasema, Ni yule msichana Mmoabi aliyerudi pamoja na Naomi, kutoka nchi ya Moabu; "},
	{7, "7 naye akasema, Tafadhali niruhusu kuokota masazo, na kukusanya nyuma ya wavunaji kati ya miganda; basi akaja, naye ameshinda tangu asubuhi hata sasa, isipokuwa alikaa nyumbani kitambo kidogo. "},
	{8, "8 Basi Boazi akamwambia Ruthuu, Mwanangu, sikiliza; wewe usiende kuokota masazo katika shamba lingine, wala usiondoke hapa, lakini ukae papa hapa karibu na wasichana wangu. "},
	{9, "9 Macho yako na yaelekee konde walivunalo, ufuatane nao; je! Sikuwaagiza vijana wasikuguse? Tena, ukiona kiu, uende kwenye vyombo, nawe uyanywe waliyoyateka hao vijana. "},
	{10, "10 Ndipo aliposujudia, akainama mpaka nchi, akamwambia, Jinsi gani nimepata kibali machoni pako, hata ukanifahamu, mimi niliye mgeni? "},
	{11, "11 Naye Boazi akajibu, akamwambia, Nimeelezwa sana yote uliyomfanyia mkweo, tangu alipokufa mumeo; na jinsi ulivyowaacha baba yako na mama yako, na nchi yako uliyozaliwa, ukawafikilia watu usiowajua tangu hapo. "},
	{12, "12 Bwana akujazi kwa kazi yako, nawe upewe thawabu kamili na Bwana, Mungu wa Israeli, ambaye umekuja kukimbilia chini ya mabawa yake. "},
	{13, "13 Ndipo aliposema, Bwana wangu, na nipate kibali machoni pako; kwa sababu wewe umeniburudisha moyo, na kumwambia mema mjakazi wako, ingawa mimi si kama mmojawapo wa wajakazi wako. "},
	{14, "14 Tena wakati wa chakula huyo Boazi akamwambia, Karibu kwetu, ule katika mkate wetu, na ulichovye tonge lako katika siki yetu. Basi akaketi pamoja na wavunaji, nao wakampitishia bisi, naye akala akashiba, hata akasaza. "},
	{15, "15 Naye alipoinuka tena ili aende kuokota masazo, huyo Boazi aliwaagiza vijana wake akisema, Mwacheni aokote hata kati ya miganda, wala msimkemee. "},
	{16, "16 Tena mtoleeni kidogo katika matita na kukiacha, na akiokote, wala msimkataze. "},
	{17, "17 Basi Ruthuu akaokota masazo kondeni hata jioni; kisha akazipura zile nafaka alizoziokota, zikawa yapata efa moja ya shayiri. "},
	{18, "18 Akajitwika, akaenda zake mjini. Akamwonyesha mkwewe zile alizoziokota; akavitoa vile vyakula alivyovisaza alipokwisha kushiba, akampa. "},
	{19, "19 Basi mkwewe akamwuliza, Je! Umeokota wapi leo? Umefanya kazi wapi? Na abarikiwe yeye aliyekufahamu. Naye akamwarifu mkwewe ni nani ambaye alifanya kazi kwake, akasema, Yule mtu niliyefanya kazi kwake leo jina lake aitwa Boazi. "},
	{20, "20 Naye Naomi akamwambia mkwewe, Na abarikiwe huyo na Bwana, ambaye hakuuacha wema wake, wala kwa hao walio hai wala kwao waliokufa. Kisha Naomi akamwambia, Mtu huyu ni wa mbari yetu, mmojawapo wa jamaa yetu aliye karibu. "},
	{21, "21 Naye Ruthuu Mmoabi akasema, Naam, akaniambia, Ukae papa hapa karibu na vijana wangu, hata watakapomaliza mavuno yangu yote. "},
	{22, "22 Kisha Naomi akamwambia Ruthuu mkwewe, Mwanangu, ni vizuri wewe ufuatane na wasichana wake, wala watu wasikukute katika konde linginelo lote. "},
	{23, "23 Hivyo yeye akafuatana na wasichana wake Boazi na kuokota, hata mwisho wa mavuno ya shayiri na mavuno ya ngano pia; naye alikuwa akikaa kwa mkwewe. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Kisha Naomi akamwambia mkwewe, Je! Mwanangu, si vizuri nikutafutie raha, ili upate mema? "},
	{2, "2 Basi na huyu Boazi, je! Siye wa mbari yetu, ambaye ulikuwapo pamoja na wasichana wake? Tazama, usiku wa leo atakuwa akipepeta shayiri pale ugani. "},
	{3, "3 Basi wewe oga, ujipake mafuta ujivike mavazi yako, kisha uende kwenye uga; walakini usijionyeshe kwake mtu yule, ila atakapokwisha kula na kunywa. "},
	{4, "4 Nayo itakuwa wakati atakapolala, utapaangalia mahali alalapo, nawe uingie, uifunue miguu yake ujilaze hapo; na yeye atakuambia utakalofanya. "},
	{5, "5 Akamwambia, Hayo yote unenayo mimi nitayafanya. "},
	{6, "6 Basi akashuka mpaka ugani; akafanya yote kama vile mkwewe alivyomwagiza. "},
	{7, "7 Ikawa huyo Boazi alipokwisha kula na kunywa, na moyo wake umekunjuka, alikwenda kulala penye mwisho wa chungu ya nafaka; na huyo mwanamke akaja taratibu, akaifunua miguu yake, akajilaza papo hapo. "},
	{8, "8 Na ikawa usiku wa manane yule mtu akasituka, akajigeuza; na kumbe! Yupo mwanamke amelala miguuni pake. "},
	{9, "9 Akasema, Ama! Ni nani wewe? Akamjibu, Ni mimi, Ruthuu, mjakazi wako; uitande nguo yako juu ya mjakazi wako; kwa kuwa ndiwe wa jamaa aliye karibu. "},
	{10, "10 Akamwambia, Mwanangu, ubarikiwe na Bwana; umezidi kuonyesha fadhili zako mwisho kuliko mwanzo, kwa vile usivyowafuata vijana, kama ni maskini kama ni matajiri. "},
	{11, "11 Basi, mwanangu, usiogope; mimi nitakufanyia yote uyanenayo; kwa maana mji wote pia wa watu wangu wanakujua ya kwamba u mwanamke mwema. "},
	{12, "12 Tena ndiyo kweli ya kuwa mimi ni wa jamaa yako aliye karibu; lakini kuna mtu wa jamaa aliye karibu kuliko mimi. "},
	{13, "13 Wewe ungoje usiku huu; kisha, asubuhi, kama akikubali kukufanyia impasavyo jamaa, haya, na akufanyie; lakini ikiwa hataki yeye, basi mimi nitakufanyia impasavyo jamaa; Bwana aishivyo. Ulale wewe hata asubuhi. "},
	{14, "14 Hivyo huyo mwanamke akalala miguuni pake hata asubuhi; akaondoka mapema asijaweza mtu kumtambua mwenziwe; maana Boazi amesema, Isijulikane kabisa ya kuwa mwanamke alifika penye uga. "},
	{15, "15 Tena alisema, Lete hapa shela yako uliyoivaa, uishike; naye akaishika; naye akampimia vipimo sita vya shayiri akamtwika; kisha huyo mwanamke akaenda zake mjini. "},
	{16, "16 Basi alipofika kwa mkwewe, huyo akamwuliza, Je! Mwanangu, imekuwaje? Akamwambia yote yule mtu aliyomfanyia. "},
	{17, "17 Akasema, Na vipimo hivi sita vya shayiri amenipa; maana akaniambia, Usiende kwa mkweo mikono mitupu. "},
	{18, "18 Naye mkwewe akasema, Basi, mwanangu, tulia; hata utakapojua jinsi litakavyotukia jambo hili; kwa sababu mtu huyu hataridhika, asipolimaliza jambo hilo leo. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sw4 poems[] = {
	{1, "1 Basi Boazi akakwea kwenda mpaka langoni, akaketi pale; na tazama, yule mtu wa jamaa aliyekuwa karibu, ambaye Boazi amemnena, akapita. Naye akamwita, Haya! Wewe, karibu, uketi hapa. Naye akaja akaketi. "},
	{2, "2 Kisha akatwaa watu kumi miongoni mwa wazee wa mji, akawaambia, Ninyi nanyi, ketini hapa. Wakaketi. "},
	{3, "3 Kisha akamwambia yule jamaa, Huyu Naomi, aliyerudi hapa kutoka nchi ya Moabu, anauza sehemu ya ardhi aliyokuwa nayo ndugu yetu, Elimeleki; "},
	{4, "4 nami ilikuwa nia yangu nikujulishe wewe, na kukuambia, Uinunue mbele ya hawa waliopo na mbele ya wazee wa watu wangu. Kama wewe utaikomboa, haya, uikomboe; lakini kama hutaikomboa, uniambie ili nijue mimi; kwa kuwa hakuna mtu wa kuikomboa ila wewe, na baada yako ni mimi. Naye akasema, Nitaikomboa mimi. "},
	{5, "5 Ndipo Boazi aliposema, Siku ile utakapolinunua shamba mkononi mwa Naomi, unamnunua Ruthuu pia, huyu Mmoabi, mkewe marehemu, ili makusudi umwinulie marehemu jina katika urithi wake. "},
	{6, "6 Basi yule jamaa aliyekuwa wa karibu akasema, Mimi sitaweza kulikomboa kwa nafsi yangu, nisije nikauharibu urithi wangu mwenyewe; basi haki yangu ya kulikomboa ujichukulie wewe, maana mimi sitaweza kulikomboa. "},
	{7, "7 Basi hii ilikuwa desturi zamani za kale katika Israeli, kwa habari ya kukomboa na kubadiliana, ili kuyahakikisha yote; mtu huvua kiatu chake na kumpa mwenziwe; ndivyo walivyohakikisha neno katika Israeli. "},
	{8, "8 Basi yule jamaa akamwambia Boazi, Wewe ujinunulie mwenyewe. Akavua kiatu chake. "},
	{9, "9 Naye Boazi akawaambia wale wazee na watu wote, Leo hivi ninyi ni mashahidi ya kwamba mimi nimenunua yote yaliyokuwa ya Elimeleki, na yote yaliyokuwa ya Kilioni na Maloni, mkononi mwa Naomi. "},
	{10, "10 Tena, huyu Ruthuu Mmoabi, mkewe Maloni, nimemnunua awe mke wangu, makusudi nipate kumwinulia marehemu jina katika urithi wake, jina lake marehemu lisikatike miongoni mwa ndugu zake, wala langoni pa mji wake; leo hivi ninyi ni mashahidi. "},
	{11, "11 Na watu wote waliokuwapo langoni, na wale wazee, wakasema, Naam, sisi ni mashahidi. Bwana na amfanye mwanamke huyu aingiaye nyumbani mwako kuwa kama Raheli na kama Lea, wale wawili walioijenga nyumba ya Israeli. Nawe ufanikiwe katika Efrata, na kuwa mashuhuri katika Bethlehemu. "},
	{12, "12 Nyumba yako na ifanane na nyumba yake Peresi, ambaye kwamba Tamari alimzalia Yuda, kwa wazao atakaokupa Bwana katika mwanamke huyu. "},
	{13, "13 Basi Boazi akamtwaa Ruthuu, naye akawa mke wake; naye akaingia kwake, na Bwana akamjalia kuchukua mimba, naye akazaa mtoto wa kiume. "},
	{14, "14 Nao wale wanawake wakamwambia Naomi, Na ahimidiwe Bwana, asiyekuacha leo hali huna wa jamaa aliye karibu; jina lake huyu na liwe kuu katika Israeli. "},
	{15, "15 Naye atakurejezea uhai wako, na kukuangalia katika uzee wako; kwa maana mkweo, ambaye akupenda, naye anakufaa kuliko watoto saba, ndiye aliyemzaa. "},
	{16, "16 Basi Naomi akamtwaa yule mtoto, akamweka kifuani pake, akawa mlezi wake. "},
	{17, "17 Nao wale wanawake waliokuwa jirani zake wakampa jina, wakisema, Naomi amezaliwa mwana; wakamwita jina lake Obedi; yeye ndiye baba yake Yese, aliye baba yake Daudi. "},
	{18, "18 Hivi ndivyo vizazi vya Peresi; Peresi alimzaa Hesroni; "},
	{19, "19 na Hesroni akamzaa Ramu; na Ramu akamzaa Aminadabu; "},
	{20, "20 na Aminadabu akamzaa Nashoni; na Nashoni akamzaa Salmoni; "},
	{21, "21 na Salmoni akamzaa Boazi; na Boazi akamzaa Obedi; "},
	{22, "22 na Obedi akamzaa Yese; na Yese akamzaa Daudi. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};