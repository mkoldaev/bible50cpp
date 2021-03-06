#include <map>
#include <string>
class Bible56
{
	struct tl1	{ int val; const char *msg; };
	struct tl2	{ int val; const char *msg; };
	struct tl3	{ int val; const char *msg; };
public:
static void view1() {
struct tl1 poems[] = {
	{1, "1 Si Pablo, na alipin ng Dios, at apostol ni Jesucristo, ayon sa pananampalataya ng mga hinirang ng Dios, at sa pagkaalam ng katotohanan na ayon sa kabanalan, "},
	{2, "2 Sa pagasa sa buhay na walang hanggan, na ipinangako ng Dios na di makapagsisinungaling buhat pa ng mga panahong walang hanggan; "},
	{3, "3 Nguni't sa kaniyang mga panahon ay ipinahayag ang kaniyang salita sa pangangaral, na sa akin ay ipinagkatiwala ayon sa utos ng Dios na ating Tagapagligtas; "},
	{4, "4 Kay Tito na aking tunay na anak ayon sa pananampalataya ng lahat: Biyaya at kapayapaan nawang mula sa Dios Ama at kay Cristo Jesus na Tagapagligtas natin. "},
	{5, "5 Dahil dito'y iniwan kita sa Creta, upang husayin mo ang mga bagay na nagkukulang, at maghalal ng mga matanda sa bawa't bayan, na gaya ng ipinagbilin ko sa iyo; "},
	{6, "6 Kung ang sinoman ay walang kapintasan, asawa ng isang babae lamang, na may mga anak na nagsisisampalataya, na hindi maisusumbong sa pangliligalig o suwail. "},
	{7, "7 Sapagka't dapat na ang obispo ay walang kapintasan, palibhasa siya'y katiwala ng Dios; hindi mapagsariling kalooban, hindi magagalitin, hindi manggugulo, hindi palaaway, hindi masakim sa mahalay na kapakinabangan; "},
	{8, "8 Kundi mapagpatuloy, maibigin sa mabuti, mahinahon ang pagiisip, matuwid, banal, mapagpigil; "},
	{9, "9 Na nananangan sa tapat na salita na ayon sa turo, upang umaral ng magaling na aral, at papaniwalain ang nagsisisalangsang. "},
	{10, "10 Sapagka't may maraming mga suwail, na mapagsalita ng walang kabuluhan at mga magdaraya, lalong lalo na yaong mga sa pagtutuli, "},
	{11, "11 Na ang kanilang mga bibig ay nararapat matikom; mga taong nagsisipanggulo sa buong mga sangbahayan, na nangagtuturo ng mga bagay na di nararapat, dahil sa mahalay na kapakinabangan. "},
	{12, "12 Sinabi ng isa sa kanila rin, ng isang propetang sarili nila, Ang mga taga Creta kailan pa man ay mga sinungaling, masasamang hayop, matatakaw na mga tamad. "},
	{13, "13 Ang patotoong ito ay tunay. Dahil dito'y sawayin mong may kabagsikan sila, upang mangapakagaling sa pananampalataya, "},
	{14, "14 Na huwag mangakinig sa mga katha ng mga Judio, at sa mga utos ng mga tao na nangagsisisinsay sa katotohanan. "},
	{15, "15 Sa malinis ang lahat ng mga bagay ay malinis: datapuwa't sa nangahawa at di nagsisisampalataya ay walang anomang malinis; kundi pati ng kanilang pagiisip at kanilang budhi ay pawang nangahawa. "},
	{16, "16 Sila'y nangagpapanggap na nakikilala nila ang Dios; nguni't ikinakaila sa pamamagitan ng kanilang mga gawa, palibhasa'y mga malulupit, at mga masuwayin, at mga itinakuwil sa bawa't gawang mabuti. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct tl2 poems[] = {
	{1, "1 Nguni't magsalita ka ng mga bagay na nauukol sa aral na magaling: "},
	{2, "2 Na ang matatandang lalake ay maging mapagpigil, mahusay, mahinahon ang pagiisip, magagaling sa pananampalataya, sa pagibig, sa pagtitiis: "},
	{3, "3 Na gayon din ang matatandang babae ay maging magalang sa kanilang kilos, hindi palabintangin ni paalipin man sa maraming alak, mga guro ng kabutihan; "},
	{4, "4 Upang kanilang maturuan ang mga babaing may kabataan na magsiibig sa kanikaniyang asawa, magsiibig sa kanilang mga anak, mangagpakahinahon, "},
	{5, "5 Mangagpakahinahon, mangagpakalinis, mangagpakasipag sa bahay, magagandang-loob, pasakop sa kanikaniyang asawa, upang huwag lapastanganin ang salita ng Dios: "},
	{6, "6 Iaral mo rin naman sa mga bagong tao na sila'y mangagpakahinahon ng pagiisip: "},
	{7, "7 Sa lahat ng mga bagay ay magpakilala kang ikaw ay isang uliran sa mabubuting gawa; at sa iyong aral ay ipakilala mo ang walang kamalian ang kahusayan, "},
	{8, "8 Pangungusap na magaling, na di mahahatulan; upang sila na nasa kabilang panig ay mahiya, nang walang anomang masamang masabi tungkol sa atin. "},
	{9, "9 Iaral mo sa mga alipin na sila'y pasakop sa kanikaniyang Panginoon, at kanilang kalugdan sa lahat ng mga bagay; at huwag mga masagutin; "},
	{10, "10 Huwag mangagdaya, kundi mangagpakita ng buong buting pagtatapat; upang pamutihan sa lahat ng mga bagay ang aral ng Dios na ating Tagapagligtas. "},
	{11, "11 Sapagka't napakita ang biyaya ng Dios, na may dalang kaligtasan sa lahat ng mga tao, "},
	{12, "12 Na nagtuturo sa atin, upang, pagtanggi natin sa kalikuan at sa mga kahalayan ng sanglibutan, ay marapat mabuhay tayong may pagpipigil at matuwid at banal sa panahong kasalukuyan ng sanglibutang ito; "},
	{13, "13 Na hintayin yaong mapalad na pagasa at ang pagpapakita ng kaluwalhatian ng ating dakilang Dios at Tagapagligtas na si Jesucristo; "},
	{14, "14 Na siyang nagbigay ng kaniyang sarili dahil sa atin, upang tayo'y matubos niya sa lahat ng mga kasamaan, at malinis niya sa kaniyang sarili ang bayang masikap sa mabubuting gawa, upang maging kaniyang sariling pag-aari. "},
	{15, "15 Ang mga bagay na ito ay iyong salitain at iaral at isaway ng buong kapangyarihan. Sinoman ay huwag humamak sa iyo. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct tl3 poems[] = {
	{1, "1 Ipaalala mo sa kanilang pasakop sa mga pinuno, sa mga may kapangyarihan, na mangagmasunurin, na humanda sa bawa't gawang mabuti, "},
	{2, "2 Na huwag magsalita ng masama tungkol sa kanino man, na huwag makipagtalo, kundi mapakahinhin, at magpakahinahon sa lahat ng mga tao. "},
	{3, "3 Sapagka't tayo rin naman nang unang panahon ay mga mangmang, mga suwail, mga nadaya, na nagsisipaglingkod sa sarisaring masamang pita at kalayawan, na nangamumuhay sa masasamang akala at kapanaghilian, mga napopoot, at tayo'y nangagkakapootan. "},
	{4, "4 Nguni't nang mahayag na ang kagandahang-loob ng Dios na ating Tagapagligtas, at ang kaniyang pagibig sa tao, "},
	{5, "5 Na hindi dahil sa mga gawa sa katuwiran na ginawa nating sarili, kundi ayon sa kaniyang kaawaan ay kaniyang iniligtas tayo, sa pamamagitan ng paghuhugas sa muling kapanganakan at ng pagbabago sa Espiritu Santo, "},
	{6, "6 Na kaniyang ibinuhos ng sagana sa atin, sa pamamagitan ni Jesucristo na ating Tagapagligtas; "},
	{7, "7 Upang, sa pagkaaring-ganap sa atin sa pamamagitan ng kaniyang biyaya, ay maging tagapagmana tayo ayon sa pagasa sa buhay na walang hanggan. "},
	{8, "8 Tapat ang pasabi, at tungkol sa mga bagay na ito ay ninanasa kong patotohanan mong may pagkakatiwala, upang ang mga nagsisipanampalataya sa Dios ay maging maingat na papanatilihin ang mabubuting gawa. Ang mga bagay na ito ay pawang mabubuti at mapapakinabangan ng mga tao: "},
	{9, "9 Nguni't ilagan mo ang mga hangal na usapan, at ang mga pagsasalaysay ng lahi, at ang mga pagtatalo, at pagtataltalan tungkol sa kautusan; sapagka't ang mga ito ay di pinakikinabangan at walang kabuluhan. "},
	{10, "10 Ang taong may maling pananampalataya pagkatapos nang una at ikalawang pagsaway ay itakuwil mo; "},
	{11, "11 Yamang nalalaman mo na ang gayon ay napahamak, at nagkakasala at siya'y hinahatulan ng kaniyang sarili. "},
	{12, "12 Pagka susuguin ko sa iyo si Artemas, o si Tiquico, ay magsikap kang pumarini sa akin sa Nicopolis: sapagka't pinasiyahan kong doon matira sa taginaw. "},
	{13, "13 Suguin mong may sikap si Zenas na tagapagtanggol ng kautusan at si Apolos sa kanilang paglalakbay, upang sila'y huwag kulangin ng ano man. "},
	{14, "14 At pagaralan din naman ng ating mga tao na manatili sa mabubuting gawa sa kagamitang kailangan, upang huwag mawalan ng bunga. "},
	{15, "15 Binabati ka ng lahat ng mga kasama ko. Batiin mo ang mga nagsisiibig sa atin sa pananampalataya. Biyaya ang sumainyo nawang lahat. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};