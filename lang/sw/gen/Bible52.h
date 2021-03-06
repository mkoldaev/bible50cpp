#include <map>
#include <string>
class Bible52
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
	struct sw4	{ int val; const char *msg; };
	struct sw5	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Paulo, na Silwano, na Timotheo, kwa kanisa la Wathesalonike, lililo katika Mungu Baba, na katika Bwana Yesu Kristo. Neema na iwe kwenu na amani. "},
	{2, "2 Twamshukuru Mungu siku zote kwa ajili yenu nyote, tukiwataja katika maombi yetu. "},
	{3, "3 Wala hatuachi kuikumbuka kazi yenu ya imani, na taabu yenu ya upendo, na saburi yenu ya tumaini lililo katika Bwana wetu Yesu Kristo, mbele za Mungu Baba yetu. "},
	{4, "4 Kwa maana, ndugu mnaopendwa na Mungu, twajua uteule wenu; "},
	{5, "5 ya kwamba injili yetu haikuwafikia katika maneno tu, bali na katika nguvu, na katika Roho Mtakatifu, na uthibitifu mwingi; kama vile mnavyojua jinsi zilivyokuwa tabia zetu kwenu, kwa ajili yenu. "},
	{6, "6 Nanyi mkawa wafuasi wetu na wa Bwana, mkiisha kulipokea neno katika dhiki nyingi, pamoja na furaha ya Roho Mtakatifu. "},
	{7, "7 Hata mkawa kielelezo kwa watu wote waaminio katika Makedonia, na katika Akaya. "},
	{8, "8 Maana kutoka kwenu neno la Mungu limevuma, si katika Makedonia na Akaya tu, ila na kila mahali imani yenu mliyo nayo kwa Mungu imeenea; hata hatuna haja sisi kunena lo lote. "},
	{9, "9 Kwa kuwa wao wenyewe wanatangaza habari zetu, jinsi kulivyokuwa kuingia kwetu kwenu; na jinsi mlivyomgeukia Mungu mkaziacha sanamu, ili kumtumikia Mungu aliye hai, wa kweli; "},
	{10, "10 na kumngojea Mwanawe kutoka mbinguni, ambaye alimfufua katika wafu, naye ni Yesu, mwenye kutuokoa na ghadhabu itakayokuja. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Maana ninyi wenyewe, ndugu, mwakujua kuingia kwetu kwenu, ya kwamba hakukuwa bure; "},
	{2, "2 lakini tukiisha kuteswa kwanza na kutendwa jeuri, kama mjuavyo, katika Filipi, twalithubutu katika Mungu kuinena Injili ya Mungu kwenu, kwa kuishindania sana. "},
	{3, "3 Kwa maana maonyo yetu siyo ya ukosefu, wala ya uchafu, wala ya hila; "},
	{4, "4 bali kama vile tulivyopata kibali kwa Mungu tuwekewe amana Injili, ndivyo tunenavyo; si kama wapendezao wanadamu, bali wampendezao Mungu anayetupima mioyo yetu. "},
	{5, "5 Maana hatukuwa na maneno ya kujipendekeza wakati wo wote, kama mjuavyo, wala maneno ya juujuu ya kuficha choyo; Mungu ni shahidi. "},
	{6, "6 Hatukutafuta utukufu kwa wanadamu, wala kwenu, wala kwa wengine tulipokuwa tukiweza kuwalemea kama mitume wa Kristo; "},
	{7, "7 bali tulikuwa wapole katikati yenu, kama vile mlezi awatunzavyo watoto wake mwenyewe. "},
	{8, "8 Vivyo hivyo nasi tukiwatumaini kwa upendo mwingi, tuliona furaha kuwapa, si Injili ya Mungu tu, bali na roho zetu pia, kwa sababu mmekuwa wapendwa wetu. "},
	{9, "9 Maana, ndugu, mnakumbuka taabu yetu na masumbufu yetu; kwa kuwa mchana na usiku tulifanya kazi tusije tukamlemea mtu wa kwenu awaye yote, tukawahubiri hivi Injili ya Mungu. "},
	{10, "10 Ninyi ni mashahidi, na Mungu pia, jinsi tulivyokaa kwenu ninyi mnaoamini, kwa utakatifu, na kwa haki, bila kulaumiwa; "},
	{11, "11 vile vile, kama mjuavyo, jinsi tulivyomwonya kila mmoja wenu kama baba awaonyavyo watoto wake mwenyewe, tukiwatia moyo na kushuhudia; "},
	{12, "12 ili mwenende kama ilivyo wajibu wenu kwa Mungu, mwenye kuwaita ninyi ili mwingie katika ufalme wake na utukufu wake. "},
	{13, "13 Kwa sababu hiyo sisi nasi twamshukuru Mungu bila kukoma, kwa kuwa, mlipopata lile neno la ujumbe la Mungu mlilolisikia kwetu, mlilipokea si kama neno la wanadamu, bali kama neno la Mungu; na ndivyo lilivyo kweli kweli; litendalo kazi pia ndani yenu ninyi mnaoamini. "},
	{14, "14 Maana ninyi, ndugu, mlikuwa wafuasi wa makanisa ya Mungu yaliyo katika Uyahudi, katika Kristo Yesu; kwa kuwa mlipata mateso yale yale kwa watu wa taifa lenu wenyewe, waliyoyapata na hao kwa Wayahudi; "},
	{15, "15 ambao walimwua Bwana Yesu, na hao manabii, na kutuudhi sisi; wala hawampendezi Mungu, wala hawapatani na watu wo wote; "},
	{16, "16 huku wakituzuia tusiseme na Mataifa wapate kuokolewa; ili watimize dhambi zao siku zote. Lakini hasira imewafikia hata mwisho. "},
	{17, "17 Lakini sisi, ndugu, tukiwa tumefarakana nanyi kwa kitambo, kwa uso si kwa moyo, tulizidi kutamani kwa shauku nyingi kuwaona nyuso zenu. "},
	{18, "18 Kwa hiyo tulitaka kuja kwenu, naam, mimi Paulo, mara ya kwanza, na mara ya pili, na Shetani akatuzuia. "},
	{19, "19 Maana tumaini letu, au furaha yetu, au taji ya kujionea fahari, ni nini? Je! Si ninyi, mbele za Bwana wetu Yesu, wakati wa kuja kwake? "},
	{20, "20 Maana ninyi ndinyi utukufu wetu, na furaha yetu. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Basi kwa hiyo, tulipokuwa hatuwezi kuvumilia zaidi, tuliona vema kuachwa Athene peke yetu. "},
	{2, "2 Tukamtuma Timotheo ndugu yetu, mtumishi wa Mungu katika Injili ya Kristo, ili kuwafanya ninyi imara na kuwafariji kwa habari ya imani yenu; "},
	{3, "3 mtu asifadhaishwe na dhiki hizi; maana ninyi wenyewe mnajua ya kuwa twawekewa hizo. "},
	{4, "4 Kwa kuwa tulipokuwapo kwenu tulitangulia kuwaambia kwamba tutapata dhiki, kama ilivyotukia, nanyi mwajua. "},
	{5, "5 Kwa hiyo mimi nami nilipokuwa siwezi kuvumilia tena, nalituma mtu ili niijue imani yenu, asije yule mjaribu akawajaribu, na taabu yetu ikawa haina faida. "},
	{6, "6 Lakini Timotheo alipotujia hivi sasa kutoka kwenu, alituletea habari njema za imani yenu na upendo wenu, na ya kwamba mnatukumbuka vema siku zote; mkitamani kutuona sisi vile vile kama sisi kuwaona ninyi. "},
	{7, "7 Kwa sababu hiyo, ndugu, tulifarijiwa kwa habari zenu, katika msiba na dhiki yetu yote, kwa imani yenu. "},
	{8, "8 Kwa kuwa sasa twaishi, ikiwa ninyi mnasimama imara katika Bwana. "},
	{9, "9 Maana ni shukrani gani tuwezayo kumlipa Mungu kwa ajili yenu, kwa furaha ile yote tunayoifurahia, kwa sababu yenu mbele za Mungu wetu; "},
	{10, "10 usiku na mchana tunapoomba kwa juhudi tupate kuwaona nyuso zenu, na kuyatengeneza mapungufu ya imani yenu? "},
	{11, "11 Basi Mungu mwenyewe, Baba yetu, na Bwana wetu Yesu, atuongoze njia yetu tufike kwenu. "},
	{12, "12 Bwana na awaongeze na kuwazidisha katika upendo, ninyi kwa ninyi, na kwa watu wote, kama vile sisi nasi tulivyo kwenu; "},
	{13, "13 apate kuifanya imara mioyo yenu iwe bila lawama katika utakatifu mbele za Mungu, Baba yetu, wakati wa kuja kwake Bwana wetu Yesu pamoja na watakatifu wake wote. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sw4 poems[] = {
	{1, "1 Iliyobaki, ndugu, tunakusihini na kuwaonya kwamba mwenende katika Bwana Yesu; kama mlivyopokea kwetu jinsi iwapasavyo kuenenda na kumpendeza Mungu, kama nanyi mnavyoenenda, vivyo hivyo mpate kuzidi sana. "},
	{2, "2 Kwa kuwa mnajua ni maagizo gani tuliyowapa kwa Bwana Yesu. "},
	{3, "3 Maana haya ndiyo mapenzi ya Mungu, kutakaswa kwenu, mwepukane na uasherati; "},
	{4, "4 kila mmoja wenu ajue kuuweza mwili wake katika utakatifu na heshima; "},
	{5, "5 si katika hali ya tamaa mbaya, kama Mataifa wasiomjua Mungu. "},
	{6, "6 Mtu asimpunje ndugu yake wala kumkosa katika jambo hili; kwa sababu Bwana ndiye alipizaye kisasi cha haya yote; kama tulivyowaambia kwanza, tukashuhudia sana. "},
	{7, "7 Maana Mungu hakutuitia uchafu, bali tuwe katika utakaso. "},
	{8, "8 Basi yeye anayekataa, hakatai mwanadamu bali Mungu, anayewapa ninyi Roho wake Mtakatifu. "},
	{9, "9 Katika habari ya upendano, hamna haja niwaandikie; maana ninyi wenyewe mmefundishwa na Mungu kupendana. "},
	{10, "10 Kwa maana mnafanya neno hili kwa ndugu wote walio katika Makedonia yote. Lakini twawasihi, ndugu, mzidi sana. "},
	{11, "11 Tena mjitahidi kutulia, na kutenda shughuli zenu, na kufanya kazi kwa mikono yenu wenyewe, kama tulivyowaagiza; "},
	{12, "12 ili mwenende kwa adabu mbele yao walio nje, wala msiwe na haja ya kitu cho chote. "},
	{13, "13 Lakini, ndugu, hatutaki msijue habari zao waliolala mauti, msije mkahuzunika kama na wengine wasio na matumaini. "},
	{14, "14 Maana, ikiwa twaamini ya kwamba Yesu alikufa akafufuka, vivyo hivyo na hao waliolala katika Yesu, Mungu atawaleta pamoja naye. "},
	{15, "15 Kwa kuwa twawaambieni haya kwa neno la Bwana, kwamba sisi tulio hai, tutakaosalia hata wakati wa kuja kwake Bwana, hakika hatutawatangulia wao waliokwisha kulala mauti. "},
	{16, "16 Kwa sababu Bwana mwenyewe atashuka kutoka mbinguni pamoja na mwaliko, na sauti ya malaika mkuu, na parapanda ya Mungu; nao waliokufa katika Kristo watafufuliwa kwanza. "},
	{17, "17 Kisha sisi tulio hai, tuliosalia, tutanyakuliwa pamoja nao katika mawingu, ili tumlaki Bwana hewani; na hivyo tutakuwa pamoja na Bwana milele. "},
	{18, "18 Basi, farijianeni kwa maneno hayo. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct sw5 poems[] = {
	{1, "1 Lakini, ndugu, kwa habari ya nyakati na majira, hamna haja niwaandikie. "},
	{2, "2 Maana ninyi wenyewe mnajua yakini ya kuwa siku ya Bwana yaja kama vile mwivi ajavyo usiku. "},
	{3, "3 Wakati wasemapo, Kuna amani na salama, ndipo uharibifu uwajiapo kwa ghafula, kama vile utungu umjiavyo mwenye mimba, wala hakika hawataokolewa. "},
	{4, "4 Bali ninyi, ndugu, hammo gizani, hata siku ile iwapate kama mwivi. "},
	{5, "5 Kwa kuwa ninyi nyote mmekuwa wana wa nuru, na wana wa mchana; sisi si wa usiku, wala wa giza. "},
	{6, "6 Basi tusilale usingizi kama wengine, bali tukeshe, na kuwa na kiasi. "},
	{7, "7 Maana walalao usingizi hulala usiku, pia na walewao hulewa usiku. "},
	{8, "8 Lakini sisi tulio wa mchana, tuwe na kiasi, hali tukijivika kifuani imani na upendo, na chapeo yetu iwe tumaini la wokovu. "},
	{9, "9 Kwa kuwa Mungu hakutuweka kwa hasira yake, bali tupate wokovu, kwa Bwana wetu Yesu Kristo; "},
	{10, "10 ambaye alikufa kwa ajili yetu, ili tuishi pamoja naye, kwamba twakesha au kwamba twalala. "},
	{11, "11 Basi, farijianeni na kujengana kila mtu na mwenzake, vile vile kama mnavyofanya. "},
	{12, "12 Lakini, ndugu, tunataka mwatambue wale wanaojitaabisha kwa ajili yenu, na kuwasimamia ninyi katika Bwana, na kuwaonyeni; "},
	{13, "13 mkawastahi sana katika upendo, kwa ajili ya kazi zao. Iweni na amani ninyi kwa ninyi. "},
	{14, "14 Ndugu, twawasihi, waonyeni wale wasiokaa kwa utaratibu; watieni moyo walio dhaifu; watieni nguvu wanyonge; vumilieni na watu wote. "},
	{15, "15 Angalieni mtu awaye yote asimlipe mwenziwe mabaya kwa mabaya; bali siku zote lifuateni lililo jema, ninyi kwa ninyi na kwa watu wote. "},
	{16, "16 Furahini siku zote; "},
	{17, "17 ombeni bila kukoma; "},
	{18, "18 shukuruni kwa kila jambo; maana hayo ni mapenzi ya Mungu kwenu katika Kristo Yesu. "},
	{19, "19 Msimzimishe Roho; "},
	{20, "20 msitweze unabii; "},
	{21, "21 jaribuni mambo yote; lishikeni lililo jema; "},
	{22, "22 jitengeni na ubaya wa kila namna. "},
	{23, "23 Mungu wa amani mwenyewe awatakase kabisa; nanyi nafsi zenu na roho zenu na miili yenu mhifadhiwe mwe kamili, bila lawama, wakati wa kuja kwake Bwana wetu Yesu Kristo. "},
	{24, "24 Yeye ni mwaminifu ambaye awaita, naye atafanya. "},
	{25, "25 Ndugu, tuombeeni. "},
	{26, "26 Wasalimuni ndugu wote kwa busu takatifu. "},
	{27, "27 Nawaapisha kwa Bwana, ndugu wote wasomewe waraka huu. "},
	{28, "28 Neema ya Bwana wetu Yesu Kristo na iwe pamoja nanyi. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};