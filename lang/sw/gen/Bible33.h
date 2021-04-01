#include <map>
#include <string>
class Bible33
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
	struct sw4	{ int val; const char *msg; };
	struct sw5	{ int val; const char *msg; };
	struct sw6	{ int val; const char *msg; };
	struct sw7	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Hili ndilo neno la Bwana lililomjia Mika, Mmorashti, katika siku za Yothamu, na Ahazi, na Hezekia, wafalme wa Yuda; maono aliyoyaona katika habari za Samaria, na Yerusalemu. "},
	{2, "2 Sikilizeni, enyi watu wa kabila zote; sikiliza, Ee dunia, na vyote vilivyomo; Bwana MUNGU na ashuhudie juu yenu, yeye Bwana kutoka hekalu lake takatifu. "},
	{3, "3 Kwa maana, angalieni, Bwana anakuja akitoka mahali pake, naye atashuka, na kupakanyaga mahali pa dunia palipoinuka. "},
	{4, "4 Na hiyo milima itayeyuka chini yake, nayo mabonde yatapasuliwa, kama vile nta iliyo mbele ya moto, kama maji yaliyomwagika tena kutelemka gengeni. "},
	{5, "5 Kwa sababu ya kosa la Yakobo yametokea haya yote, na kwa sababu ya makosa ya nyumba ya Israeli. Nini kosa la Yakobo? Je, silo Samaria? Na nini mahali pa Yuda palipoinuka? Sipo Yerusalemu? "},
	{6, "6 Kwa ajili ya hayo nitafanya Samaria kuwa kama chungu katika shamba, na kama miche ya shamba la mizabibu; nami nitayatupa mawe yake bondeni, nami nitaifunua misingi yake. "},
	{7, "7 Na sanamu zake zote za kuchonga zitapondwa-pondwa, na ijara zake zote zitateketezwa kwa moto, na sanamu zake zote nitazifanya ukiwa; kwa kuwa amezikusanya kwa ujira wa kahaba, nazo zitaurudia ujira wa kahaba. "},
	{8, "8 Kwa ajili ya hayo nitaomboleza na kulia, Nitakwenda nimevua nguo, ni uchi; Nitafanya mlio kama wa mbweha, Na maombolezo kama ya mbuni. "},
	{9, "9 Kwa maana jeraha zake haziponyekani; Maana msiba umeijilia hata Yuda, Unalifikia lango la watu wangu, Naam, hata Yerusalemu. "},
	{10, "10 Msiyahubiri haya katika Gathi, msilie kamwe; Katika Beth-le-Afra ugae-gae mavumbini. "},
	{11, "11 Piteni; uende ukaaye Shafiri, hali ya uchi na aibu; Hivyo akaaye Saanani hajatokea nje; Maombolezo ya Beth-eseli yatawaondolea tegemeo lake; "},
	{12, "12 Maana akaaye Marothi ana utungu wa mema; Kwa kuwa msiba umeshuka toka kwa Bwana, Umefika mpaka lango la Yerusalemu. "},
	{13, "13 Mfungie gari la vita farasi Aliye mwepesi, ukaaye Lakishi; Alikuwa mwanzo wa dhambi kwa binti Sayuni; Maana makosa ya Israeli yameonekana kwako. "},
	{14, "14 Kwa hiyo utaipa Moresheth-Gathi zawadi ya kuagia; Nyumba za Akzibu zitakuwa kijito kidanganyacho wafalme wa Israeli. "},
	{15, "15 Bado, ukaaye Maresha, nitakuletea yeye atakayekumiliki; Utukufu wa Israeli utafika mpaka Adulamu. "},
	{16, "16 Jifanyie upaa, jikate nywele zako, Kwa ajili ya watoto waliokufurahisha; Panua upaa wako kama tai; Kwa maana wamekwenda mbali nawe utumwani. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Ole wao wakusudiao mambo maovu, na kutenda mabaya vitandani mwao! Kunapopambazuka asubuhi huyafanya, kwa sababu ya katika uwezo wa mikono yao. "},
	{2, "2 Nao hutamani mashamba, na kuyashika; na nyumba pia, nao huzichukua; nao humwonea mtu na nyumba yake, naam, mtu na urithi wake. "},
	{3, "3 Basi Bwana asema hivi, Angalia, nakusudia jambo baya juu ya jamaa hii, ambalo hamtazitoa shingo zenu, wala hamtakwenda kwa kiburi; kwa maana ni wakati mbaya. "},
	{4, "4 Siku hiyo watatunga mithali juu yenu, na kuomboleza kwa maombolezo ya huzuni nyingi, na kusema, Sisi tumeangamizwa kabisa; Yeye analibadili fungu la watu wangu; Jinsi anavyoniondolea hilo! Awagawia waasi mashamba yetu. "},
	{5, "5 Kwa hiyo hutakuwa na mtu atakayeitupa kamba kwa kura katika mkutano wa Bwana. "},
	{6, "6 Msitabiri, ndivyo watabirivyo; wasiyatabiri mambo haya; lawama hazikomi. "},
	{7, "7 Je! Litasemwa neno hili, enyi nyumba ya Yakobo, Roho ya Bwana imepunguzwa? Je! Haya ni matendo yake? Je! Maneno yangu hayamfai yeye aendaye kwa unyofu? "},
	{8, "8 Lakini siku hizi mmeinuka kama adui za watu wangu; mwaipokonya joho iliyo juu ya nguo za hao wapitao salama kama watu wasiopenda vita. "},
	{9, "9 Wanawake wa watu wangu mwawatupa nje ya nyumba zao nzuri; watoto wao wachanga mwawanyang'anya utukufu wangu milele. "},
	{10, "10 Ondokeni, mwende zenu; maana hapa sipo mahali pa raha yenu; kwa sababu ya uchafu mtaangamizwa, naam, kwa maangamizo mazito sana. "},
	{11, "11 Mtu akienda kwa roho ya uongo, akinena maneno ya uongo, akisema, Nitakutabiria habari ya mvinyo na kileo; mtu huyu atakuwa nabii wao watu hawa. "},
	{12, "12 Hakika nitakukusanya, Ee Yakobo, nyote pia; Bila shaka nitawakusanya waliobaki wa Israeli; Nitawaweka pamoja kama kondoo wa Bozra; Kama kundi la kondoo kati ya malisho yao; Watafanya mvumo kwa wingi wa watu; "},
	{13, "13 Avunjaye amekwea juu mbele yao; Wamebomoa mahali, wakapita mpaka langoni, Wakatoka nje huko; Mfalme wao naye amepita akiwatangulia, Naye Bwana ametangulia mbele yao. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Nikasema, Tafadhali sikieni, enyi vichwa vya Yakobo, mnaoitawala nyumba ya Israeli. Je! Haiwapasi ninyi kujua hukumu? "},
	{2, "2 Ninyi mnaoyachukia mema, na kuyapenda mabaya; ninyi mnaowachuna watu ngozi yao, na nyama mifupani mwao. "},
	{3, "3 Naam, mnakula nyama ya watu wangu, na kuwachuna ngozi zao, na kuivunja mifupa yao; naam, kuwakata vipande vipande kama kwa kutiwa chunguni, na kama nyama sufuriani. "},
	{4, "4 Ndipo watakapomwomba Bwana, asiwaitikie; naam, atawaficha uso wake wakati huo, kwa kadiri walivyotenda mabaya kwa matendo yao. "},
	{5, "5 Bwana asema hivi katika habari za manabii wanaowakosesha watu wangu; hao waumao kwa meno yao, na kulia, Amani; na mtu awaye yote asiyetia kitu vinywani mwao, wao humwandalia vita. "},
	{6, "6 Kwa hiyo itakuwa usiku kwenu, msipate kuona maono; tena itakuwa giza kwenu, msiweze kubashiri; nalo jua litawachwea manabii, nao mchana utakuwa mweusi juu yao. "},
	{7, "7 Na hao waonaji watatahayarika, na wenye kubashiri watafadhaika; naam, hao wote watajifunika midomo yao; kwa maana; hapana jawabu la Mungu. "},
	{8, "8 Bali mimi, hakika nimejaa nguvu kwa roho ya Bwana; nimejaa hukumu na uwezo; nimhubiri Yakobo kosa lake, na Israeli dhambi yake. "},
	{9, "9 Sikieni haya, tafadhali, enyi vichwa vya nyumba ya Yakobo, mnaoitawala nyumba ya Israeli, mnaochukia hukumu, na kuipotosha adili. "},
	{10, "10 Wanaijenga Sayuni kwa damu, na Yerusalemu kwa uovu. "},
	{11, "11 Wakuu wake huhukumu ili wapate rushwa, na makuhani wake hufundisha ili wapate ijara, na manabii wake hubashiri ili wapate fedha; ila hata hivyo watamtegemea Bwana, na kusema, Je! Hayupo Bwana katikati yetu? Hapana neno baya lo lote litakalotufikia. "},
	{12, "12 Basi, kwa ajili yenu, Sayuni utalimwa kama shamba lilimwavyo, na Yerusalemu utakuwa magofu; na mlima wa nyumba utakuwa kama mahali palipoinuka msituni. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sw4 poems[] = {
	{1, "1 Lakini itakuwa katika siku za mwisho, ya kwamba mlima wa nyumba ya Bwana utawekwa imara juu ya milima, nao utainuliwa juu ya vilima; na watu wa mataifa watauendea makundi makundi. "},
	{2, "2 Na mataifa mengi watakwenda na kusema, Njoni, twende juu mlimani kwa Bwana, na nyumbani kwa Mungu wa Yakobo; naye atatufundisha njia zake, nasi tutakwenda katika mapito yake; kwa maana katika Sayuni itatoka sheria, na neno la Bwana litatoka Yerusalemu. "},
	{3, "3 Naye atafanya hukumu kati ya watu wa kabila nyingi, naye atawakemea mataifa wenye nguvu walio mbali; nao watafua panga zao ziwe majembe, na mikuki yao iwe miundu; taifa halitainua upanga juu ya taifa lingine, wala hawatajifunza vita tena kamwe. "},
	{4, "4 Bali wataketi kila mtu chini ya mzabibu wake, na chini ya mtini wake; wala hapana mtu atakayewatia hofu; kwa kuwa kinywa cha Bwana wa majeshi kimesema hivi. "},
	{5, "5 Kwa maana mataifa yote watakwenda, kila moja kwa jina la mungu wake, na sisi tutakwenda kwa jina la Bwana, Mungu wetu, milele na milele. "},
	{6, "6 Katika siku ile, asema Bwana, nitamkusanya yeye achechemeaye, nami nitamrudisha yeye aliyefukuzwa, na yeye niliyemtesa. "},
	{7, "7 Nami nitamfanya yeye aliyechechemea kuwa mabaki, na yeye aliyetupwa mbali kuwa taifa lenye nguvu, na Bwana atawamiliki katika mlima Sayuni tangu sasa na hata milele. "},
	{8, "8 Na wewe, Ee mnara wa kundi, kilima cha binti Sayuni, utajiliwa; naam, mamlaka ya kwanza yatakuja, ufalme wa binti Yerusalemu. "},
	{9, "9 Sasa mbona unapiga kelele? Je! Hakuna mfalme kwako, mshauri wako amepotea, hata umeshikwa na utungu kama mwanamke wakati wa kuzaa? "},
	{10, "10 Uwe na utungu, utaabike ili uzae, Ee binti Sayuni, kama mwanamke mwenye utungu; maana sasa utatoka mjini, nawe utakaa katika mashamba; utafika hata Babeli; huko ndiko utakakookolewa; huko ndiko Bwana atakakokukomboa katika mikono ya adui zako. "},
	{11, "11 Na sasa mataifa mengi wamekusanyika juu yako, wasemao, Na atiwe unajisi; macho yetu na yaone shari ya Sayuni. "},
	{12, "12 Lakini wao hawayajui mawazo ya Bwana, wala hawafahamu shauri lake; kwa maana amewakusanya kama miganda sakafuni. "},
	{13, "13 Haya, simama upure, Ee binti Sayuni; kwa maana nitafanya pembe yako kuwa chuma, na kwato zako kuwa shaba; nawe utaponda-ponda mataifa mengi, na faida yao utaiweka wakfu kwa Bwana, na mali zao kwa Bwana wa dunia yote. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct sw5 poems[] = {
	{1, "1 Sasa utajikusanya vikosi vikosi, Ee binti wa vikosi; yeye amemhusuru; watampiga mwamuzi wa Israeli shavuni mwake kwa fimbo. "},
	{2, "2 Bali wewe, Bethlehemu Efrata, uliye mdogo kuwa miongoni mwa elfu za Yuda; kutoka kwako wewe atanitokea mmoja atakayekuwa mtawala katika Israeli; ambaye matokeo yake yamekuwa tangu zamani za kale, tangu milele. "},
	{3, "3 Kwa sababu hiyo atawatoa, hata wakati wa kuzaa kwake aliye na utungu; ndipo hayo mabaki ya nduguze watawarudia wana wa Israeli. "},
	{4, "4 Naye atasimama, na kulisha kundi lake kwa nguvu za Bwana, kwa enzi ya jina la Bwana, Mungu wake; nao watakaa; maana sasa atakuwa mkuu hata miisho ya dunia. "},
	{5, "5 Na mtu huyu atakuwa amani yetu; wakati Mwashuri atakapoingia katika nchi yetu, na kuyakanyaga majumba yetu, hapo mtaondokesha wachungaji saba juu yake, na wakuu wanane. "},
	{6, "6 Nao wataiharibu nchi ya Ashuru kwa upanga, na nchi ya Nimrodi katika malango yake; naye atatuokoa na Mwashuri, atakapoingia katika nchi yetu, na kukanyaga ndani ya mipaka yetu. "},
	{7, "7 Na hayo mabaki ya Yakobo yatakuwa kati ya kabila nyingi mfano wa umande utokao kwa Bwana, mfano wa manyunyu katika manyasi; yasiyomngojea mtu, wala kuwakawilia wanadamu. "},
	{8, "8 Na hayo mabaki ya Yakobo yatakuwa kati ya mataifa, kati ya kabila nyingi, mfano wa simba kati ya wanyama wa msituni, kama mwana-simba kati ya makundi ya kondoo, ambaye, akiwa anapita katikati, hukanyaga-kanyaga na kurarua-rarua, wala hakuna wa kuokoa. "},
	{9, "9 Mkono wako na uinuliwe juu ya adui zako, na adui zako wote wakauliwe mbali. "},
	{10, "10 Kisha itakuwa katika siku hiyo, asema Bwana, nitawakatilia mbali farasi zako watoke kati yako, nami nitayaharibu magari yako ya vita; "},
	{11, "11 nami nitaikatilia mbali miji ya nchi yako, na ngome zako zote nitaziangusha; "},
	{12, "12 nami nitakatilia mbali uchawi, usiwe mkononi mwako; wala hutakuwa tena na watu wenye kutabana; "},
	{13, "13 nami nitakatilia mbali sanamu zako na nguzo zako, zitoke kati yako; wala hutaiabudu tena kazi ya mikono yako. "},
	{14, "14 Nami nitayang'oa maashera yenu, yasiwe kati yako; nami nitaiangamiza miji yako. "},
	{15, "15 Nami nitajilipiza kisasi katika hasira na ghadhabu juu ya mataifa wasiosikiliza. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct sw6 poems[] = {
	{1, "1 Basi sasa, sikieni asemavyo Bwana; Simama, ujitetee mbele ya milima, vilima navyo na visikie sauti yako. "},
	{2, "2 Sikieni, enyi milima, mateto ya Bwana, na ninyi, enyi misingi ya dunia iliyo imara; kwa maana Bwana ana mateto na watu wake, naye atahojiana na Israeli. "},
	{3, "3 Enyi watu wangu, nimewatenda nini? Nami nimewachosha kwa habari gani? Shuhudieni juu yangu. "},
	{4, "4 Kwa maana nalikupandisha kutoka nchi ya Misri, na kukukomboa utoke katika nyumba ya utumwa, nami naliwapeleka Musa, na Haruni, na Miriamu, watangulie mbele yako. "},
	{5, "5 Enyi watu wangu, kumbukeni sasa alivyouliza Balaki, mfalme wa Moabu, na alivyojibu Balaamu, mwana wa Beori; kumbukeni toka Shitimu hata Gilgali, mpate kuyajua matendo ya haki ya Bwana. "},
	{6, "6 Nimkaribie Bwana na kitu gani, na kuinama mbele za Mungu aliye juu? Je! Nimkaribie na sadaka za kuteketezwa, na ndama za umri wa mwaka mmoja? "},
	{7, "7 Je! Bwana atapendezwa na elfu za kondoo waume, au na elfu kumi za mito ya mafuta? Je! Nimtoe mzaliwa wangu wa kwanza kwa kosa langu, mzao wa mwili wangu kwa dhambi ya roho yangu? "},
	{8, "8 Ee mwanadamu, yeye amekuonyesha yaliyo mema; na Bwana anataka nini kwako, ila kutenda haki, na kupenda rehema, na kwenda kwa unyenyekevu na Mungu wako! "},
	{9, "9 Sauti ya Bwana inaulilia mji, na mtu mwenye akili ataliona jina lako; isikieni hiyo fimbo na yeye aliyeiagiza. "},
	{10, "10 Je! Hata sasa hazina za uovu zingalimo nyumbani mwa wabaya, na kipimo kilichopunguka, ambacho ni chukizo? "},
	{11, "11 Je! Naweza kuwa safi nami nina mizani ya udhalimu, na mfuko wa mawe ya kupimia ya udanganyifu? "},
	{12, "12 Kwa maana matajiri wake wamejaa jeuri, na wenyeji wake wamesema uongo, na ulimi wao una udanganyifu kichwani mwao. "},
	{13, "13 Basi, kwa ajili ya hayo, mimi nami nimekupiga kwa pigo liumizalo sana; nimekufanya kuwa ukiwa, kwa sababu ya dhambi zako. "},
	{14, "14 Utakula, lakini hutashiba; na fedheha yako itakuwa kati yako; nawe utahama, lakini hutachukua kitu salama; na hicho utakachochukua nitakitoa kwa upanga. "},
	{15, "15 Utapanda, lakini hutavuna; utazikanyaga zeituni, lakini hutajipaka mafuta; na hizo zabibu, lakini hutakunywa divai. "},
	{16, "16 Kwa maana amri za Omri ndizo zishikwazo, na matendo yote ya nyumba ya Ahabu, nanyi mnakwenda katika mashauri yao; ili nikufanye kuwa ukiwa, na wenyeji waliomo humo kuwa zomeo; nanyi mtayachukua matukano waliyotukanwa watu wangu. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct sw7 poems[] = {
	{1, "1 Ole wangu! Maana mimi ni kama hapo walipokwisha kuyachuma matunda ya wakati wa hari, kama zabibu zichumwazo baada ya mavuno; hapana shada la kuliwa; roho yangu inatamani tini iivayo kwanza. "},
	{2, "2 Mtu amchaye Mungu ametoweka, asionekane katika nchi, wala hapana mtu mwenye adili katika wanadamu; wote huotea ili kumwaga damu; kila mtu humwinda ndugu yake kwa wavu. "},
	{3, "3 Mikono yao inayashika mabaya wayatende kwa bidii; mtu mkuu aomba rushwa, kadhi yu tayari kuipokea; mtu mkubwa hunena madhara yaliyomo rohoni mwake; hivyo ndivyo wayafumavyo hayo pamoja. "},
	{4, "4 Mtu aliye mwema miongoni mwao ni kama mbigili; mtu aliye mwenye adili miongoni mwao ni mbaya kuliko boma la michongoma; hiyo siku ya walinzi wako, yaani, siku ya kujiliwa kwako, imefika; sasa kutatokea kufadhaika kwao. "},
	{5, "5 Msimwamini rafiki, msimwekee kiongozi tumaini; ilinde milango ya midomo ya kinywa chako ili mkeo alalaye kifuani mwako asijue habari. "},
	{6, "6 Kwa maana mwana humwaibisha babaye, na binti huondoka ashindane na mamaye; na mwanamke aliyeolewa hushindana na mavyaaye; adui za mtu ni watu wa nyumbani mwake mwenyewe. "},
	{7, "7 Lakini mimi, nitamtazamia Bwana; nitamngojea Mungu wa wokovu wangu; Mungu wangu atanisikia. "},
	{8, "8 Usifurahi juu yangu, Ee adui yangu; niangukapo, nitasimama tena; nikaapo gizani, Bwana atakuwa nuru kwangu. "},
	{9, "9 Nitaivumilia ghadhabu ya Bwana, kwa kuwa nimemwasi; hata atakaponitetea teto langu, na kunifanyia hukumu; atanileta nje kwenye nuru, nami nitaiona haki yake. "},
	{10, "10 Ndipo adui yangu ataliona jambo hilo, na aibu itamfunika, yeye aliyeniambia, Yuko wapi Bwana, Mungu wako? Macho yangu yatamtazama; sasa atakanyagwa kama matope ya njia kuu. "},
	{11, "11 Ni siku ya kujengwa kuta zako! Siku hiyo mpaka utasongezwa mbali. "},
	{12, "12 Siku hiyo watakujia kutoka Ashuru na miji ya Misri, na kutoka Misri mpaka huo Mto, na kutoka bahari hii mpaka bahari hii, na kutoka mlima huu mpaka mlima huu. "},
	{13, "13 Hata hivyo nchi itakuwa ukiwa kwa sababu ya hao wakaao ndani yake, kwa sababu ya matunda ya matendo yao. "},
	{14, "14 Walishe watu wako kwa fimbo yako, kundi la urithi wako, wakaao peke yao, mwituni katikati ya Karmeli; na walishe katika Bashani na Gileadi, kama siku za kale. "},
	{15, "15 Kama katika siku zile za kutoka kwako katika nchi ya Misri nitamwonyesha mambo ya ajabu. "},
	{16, "16 Mataifa wataona, na kuzitahayarikia nguvu zao zote; wataweka mikono yao juu ya vinywa vyao, masikio yao yatakuwa na uziwi. "},
	{17, "17 Watayaramba mavumbi kama nyoka, kama vitu vitambaavyo juu ya nchi watatoka katika mahali walimojificha, wakitetemeka; watakuja kwa Bwana, Mungu wetu, kwa hofu, nao wataogopa kwa sababu yako. "},
	{18, "18 Ni nani aliye Mungu kama wewe, mwenye kusamehe uovu, na kuliachilia kosa la watu wa urithi wake waliosalia? Hashiki hasira yake milele, kwa maana yeye hufurahia rehema. "},
	{19, "19 Atarejea na kutuhurumia; atayakanyaga maovu yetu; nawe utazitupa dhambi zao zote katika vilindi vya bahari. "},
	{20, "20 Wewe utamtimilizia Yakobo kweli yako, na Ibrahimu rehema zako, ulizowaapia baba zetu tangu siku za kale. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};