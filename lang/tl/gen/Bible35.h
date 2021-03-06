#include <map>
#include <string>
class Bible35
{
	struct tl1	{ int val; const char *msg; };
	struct tl2	{ int val; const char *msg; };
	struct tl3	{ int val; const char *msg; };
public:
static void view1() {
struct tl1 poems[] = {
	{1, "1 Ang hula na nakita ni Habacuc na propeta. "},
	{2, "2 Oh Panginoon, hanggang kailan dadaing ako, at hindi mo didinggin? Ako'y dadaing sa iyo dahil sa pangdadahas, at hindi ka magliligtas. "},
	{3, "3 Bakit pinagpapakitaan mo ako ng kasamaan, at iyong pinamamasdan ang kasamaan? sapagka't ang kasiraan at pangdadahas ay nasa harap ko; at may pakikipagalit, at pagtatalong bumabangon. "},
	{4, "4 Kaya't ang kautusan ay natitigil, at ang katarungan ay hindi lumalabas kailan man; sapagka't kinukulong ng masama ang matuwid; kaya't ang kahatulan ay lumalabas na liko. "},
	{5, "5 Mangagmasid kayo sa gitna ng mga bansa, at tumingin kayo at mamangha kayo ng kagilagilalas; sapagka't ako'y gumagawa ng isang gawain sa inyong mga kaarawan na hindi ninyo paniniwalaan bagaman saysayin sa inyo. "},
	{6, "6 Sapagka't narito, aking itinitindig ang mga Caldeo, yaong makapangingilabot at marahas na bansa, na lumalakad sa kaluwangan ng lupa, upang magari ng mga tahanang dako na hindi kanila. "},
	{7, "7 Sila'y kakilakilabot at nangakatatakot; ang kanilang kahatulan at ang kanilang karangalan ay mula sa kanilang sarili. "},
	{8, "8 Ang kanilang mga kabayo naman ay matutulin kay sa mga leopardo, at mababangis kay sa lobo sa gabi; at ang kanilang mga mangangabayo ay nagtutumulin na may kapalaluan: oo, ang kanilang mga mangangabayo ay nanganggagaling sa malayo; sila'y nagsisilipad na parang aguila na nagmamadali upang manakmal. "},
	{9, "9 Sila'y nagsisiparitong lahat sa pangdadahas; ang kanilang mga mukha ay nangakatitig sa silanganan; at sila'y nangagpipisan ng mga bihag na parang buhangin. "},
	{10, "10 Oo, siya'y nanunuya sa mga hari, at ang mga prinsipe ay katuyaan sa kaniya; kaniyang kinukutya ang bawa't katibayan; sapagka't nagbubunton siya ng alabok, at sinasakop. "},
	{11, "11 Kung magkagayo'y lalampas siya na parang hangin, at magdaraan, at magiging salarin, sa makatuwid baga'y siya na ang kapangyarihan ay ang kaniyang dios. "},
	{12, "12 Di baga ikaw ay mula sa walang hanggan, Oh Panginoon kong Dios, aking Banal? kami ay hindi mangamamatay. Oh Panginoon, iyong itinakda siya ukol sa kahatulan; at ikaw, Oh Malaking Bato, ay iyong itinatag siya na pinakasaway. "},
	{13, "13 Ikaw na may mga matang malinis kay sa tumingin ng kasuwailan, at hindi ka makatitingin sa kasamaan, bakit mo minamasdan ang nagsisigawa ng paglililo, at tumatahimik ka pagka sinasakmal ng masama ang tao na lalong matuwid kay sa kaniya; "},
	{14, "14 At kaniyang ginagawa ang mga tao na parang mga isda sa dagat, parang nagsisigapang na walang nagpupuno sa kanila? "},
	{15, "15 Kaniyang binubuhat ng bingwit silang lahat, kaniyang hinuhuli sila sa kaniyang dala, at kaniyang pinipisan sila sa kaniyang lambat: kaya't siya'y nagagalak at siya'y masaya. "},
	{16, "16 Kaya't siya'y naghahain sa kaniyang lambat, at nagsusunog ng kamangyan sa kaniyang lambat; sapagka't sa pamamagitan ng mga yao'y ang kaniyang bahagi ay mataba, at ang kaniyang pagkain ay sagana. "},
	{17, "17 Mawawalan nga baga ng laman ang kaniyang lambat, at hindi mahahabag na pumatay na palagi sa mga bansa. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct tl2 poems[] = {
	{1, "1 Ako'y tatayo sa aking bantayan, at lalagay ako sa moog, at tatanaw upang maalaman ko kung ano ang kaniyang sasalitain sa akin, at kung ano ang aking isasagot tungkol sa aking daing. "},
	{2, "2 At ang Panginoon ay sumagot sa akin, at nagsabi, Isulat mo ang pangitain, at iukit mo na malinaw sa mga tapyas na bato upang makatakbo ang bumabasa niyaon. "},
	{3, "3 Sapagka't ang pangitain ay sa panahong takda pa, at nagmamadali sa pagkatapos, at hindi magbubulaan: bagaman nagluluwat ay hintayin mo; sapagka't walang pagsalang darating, hindi magtatagal. "},
	{4, "4 Narito, ang kaniyang kaluluwa ay nagpapalalo, hindi tapat sa kaniya; nguni't ang ganap ay mabubuhay sa pamamagitan ng kaniyang pananampalataya. "},
	{5, "5 Oo, bukod dito'y ang alak ay magdaraya, isang taong hambog, at hindi natitira sa bahay; na lumaki ang kaniyang nasa na parang Sheol, at siya'y parang kamatayan, at hindi masisiyahan, kundi pinipisan sa kaniya ang lahat na bansa, at ibinubunton sa kaniya ang lahat na bayan. "},
	{6, "6 Hindi baga ang lahat ng ito ay magbabadya ng talinhaga laban sa kaniya, at ng nakagagalit na kawikaan laban sa kaniya, at mangagsasabi, Sa aba niya na nagpaparami ng di kaniya! hanggang kailan? at nagpapasan siya sa kaniyang sarili ng mga sangla! "},
	{7, "7 Hindi baga sila mangagtitindig, na bigla na kakagat sa iyo, at magsisigising na babagabag sa iyo, at ikaw ay magiging samsam sa kanila? "},
	{8, "8 Dahil sa iyong sinamsaman ang maraming bansa, lahat ng nalabi sa mga tao ay magsisisamsam sa iyo, dahil sa dugo ng mga tao, at dahil sa karahasang ginawa sa lupain, sa bayan at sa lahat ng nagsisitahan doon. "},
	{9, "9 Sa aba niya na nagiimpok ng masamang pakinabang para sa kaniyang sangbahayan, upang kaniyang mailagay ang pugad niya sa itaas, upang siya'y maligtas sa kamay ng kasamaan! "},
	{10, "10 Ikaw ay naghaka ng ikahihiya ng iyong sangbahayan, sa paghihiwalay ng maraming tao, at ikaw ay nagkasala laban sa iyong sarili. "},
	{11, "11 Sapagka't ang bato ay dadaing mula sa pader, at ang tahilan mula sa mga kahoy ay sasagot. "},
	{12, "12 Sa aba niya na nagtatayo ng bayan sa pamamagitan ng dugo, at nagtatatag ng bayan sa pamamagitan ng kasamaan! "},
	{13, "13 Narito, hindi baga dahil sa Panginoon ng mga hukbo na ang mga tao ay nagsisigawa para sa apoy, at ang mga bansa ay nangagpapakapagod sa walang kabuluhan? "},
	{14, "14 Sapagka't ang lupa ay mapupuno ng kaalaman ng kaluwalhatian ng Panginoon, gaya ng pagtakip ng tubig sa dagat. "},
	{15, "15 Sa aba niya na nagpapainom ng alak sa kaniyang kapuwa, na idinadagdag mo ang iyong kamandag, at nilalasing mo rin naman siya, upang iyong mamasdan ang kaniyang kahubaran! "},
	{16, "16 Ikaw ay puno ng kahihiyan, at hindi ng kaluwalhatian: uminom ka naman, at maging gaya ng isang hindi tuli; ang saro ng kanan ng Panginoon ay mababalik sa iyo, at kasuklamsuklam na kahihiyan ang mahahalili sa iyong kaluwalhatian. "},
	{17, "17 Sapagka't ang pangdadahas na ginawa sa Libano ay tatakip sa iyo, at ang panggigiba sa mga hayop na nakatakot sa kanila; dahil sa dugo ng mga tao, at dahil sa pangdadahas na ginawa sa lupain, sa bayan, at sa lahat na nagsisitahan doon. "},
	{18, "18 Anong napapakinabang ng larawang inanyuan na yao'y inanyuan ng manggagawa niyaon; ng binubong larawan, na tagapagturo ng mga kasinungalingan, na tinitiwalaan ng nagaanyo sa kaniya, na gumawa ng mga piping diosdiosan? "},
	{19, "19 Sa aba niya na nagsasabi sa kahoy, Gumising ka; sa piping bato, Bumangon ka! Magtuturo baga ito? Narito, nababalot ng ginto at pilak, at walang hinga sa loob niyaon. "},
	{20, "20 Nguni't ang Panginoo'y nasa kaniyang banal na templo: tumahimik ang buong lupa sa harap niya. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct tl3 poems[] = {
	{1, "1 Panalangin ni Habacuc na propeta, itinugma sa Sigionoth. "},
	{2, "2 Oh Panginoon, aking narinig ang kagitingan mo, at ako'y natatakot: Oh Panginoon, buhayin mo ang iyong gawa sa gitna ng mga taon; Sa gitna ng mga taon ay iyong ipabatid; Sa kapootan ay alalahanin mo ang kaawaan. "},
	{3, "3 Ang Dios ay nanggaling mula sa Tema, At ang Banal ay mula sa bundok ng Paran. (Selah) Ang kaniyang kaluwalhatia'y tumakip sa langit. At ang lupa'y napuno ng kaniyang kapurihan. "},
	{4, "4 At ang kaniyang ningning ay parang liwanag; Siya'y may mga sinag na nagbubuhat sa kaniyang kamay; At doo'y nakukubli ang kaniyang kapangyarihan. "},
	{5, "5 Sa unahan niya'y nagpapauna ang salot, At nagniningas na baga ang lumalabas sa kaniyang mga paa. "},
	{6, "6 Siya'y tumayo, at sinukat ang lupa; Siya'y tumingin, at pinaghiwalay ang mga bansa; At ang mga walang hanggang bundok ay nangalat; Ang mga burol na walang hanggan ay nagsiyukod; Ang kaniyang mga lakad ay gaya noong araw. "},
	{7, "7 Nakita ko ang mga tolda sa Cushan sa pagdadalamhati; Ang mga tabing ng lupain ng Madian ay nanginig. "},
	{8, "8 Kinasasamaan baga ng loob ng Panginoon ang mga ilog? Ang iyo bagang galit ay laban sa mga ilog, O ang iyo bagang poot ay laban sa dagat, Na ikaw ay sumakay sa iyong mga kabayo, Sa iyong mga karo ng kaligasan? "},
	{9, "9 Ang iyong busog ay nahubarang lubos; Ang mga panunumpa sa mga lipi ay tunay na salita. (Selah) Iyong pinuwangan ng mga ilog ang lupa. "},
	{10, "10 Ang mga bundok ay nangakakita sa iyo, at nangatakot; Ang unos ng tubig ay dumaan: Inilakas ng kalaliman ang kaniyang tinig, At itinaas ang kaniyang mga kamay sa itaas. "},
	{11, "11 Ang araw at buwan ay tumigil sa kanilang tahanan, Sa liwanag ng iyong mga pana habang sila'y nagsisiyaon, Sa kislap ng iyong makinang na sibat. "},
	{12, "12 Ikaw ay lumakad sa mga lupain sa pagkagalit; Iyong giniik ang mga bansa sa galit. "},
	{13, "13 Ikaw ay lumabas sa ikaliligtas ng iyong bayan, Sa ikaliligtas ng iyong pinahiran ng langis; Iyong sinugatan ang pangulo ng bahay ng masama, Na inililitaw ang patibayan hanggang sa leeg. (Selah) "},
	{14, "14 Iyong mga pinalagpasan ng kaniyang sariling mga sibat ang ulo ng kaniyang mga mangdidigma: Sila'y nagsiparitong parang ipoipo upang pangalatin ako; Ang kanilang kagalakan ay sakmaling lihim ang dukha. "},
	{15, "15 Ikaw ay nagdaan sa dagat sa iyong mga kabayo. Sa bunton ng makapangyarihang tubig. "},
	{16, "16 Aking narinig, at ang aking katawan ay nanginginig, Ang aking mga labi ay nangatal sa tinig; kabuluka'y pumapasok sa aking mga buto, at ako'y nanginginig sa aking dako; Sapagka't ako'y kailangang magtiis sa kaarawan ng kabagabagan, Sa pagsampa ng bayan na lumulusob sa atin. "},
	{17, "17 Sapagka't bagama't ang puno ng igos ay hindi namumulaklak, Ni magkakaroon man ng bunga sa mga puno ng ubas; Ang bunga ng olibo ay maglilikat. At ang mga bukid ay hindi magbibigay ng pagkain; Ang kawan ay mahihiwalay sa kulungan, At hindi na magkakaroon ng bakahan sa mga silungan: "},
	{18, "18 Gayon ma'y magagalak ako sa Panginoon, Ako'y magagalak sa Dios ng aking kaligtasan. "},
	{19, "19 Si Jehova, na Panginoon, siyang aking lakas; At ginagawa niya ang aking mga paa na gaya ng sa mga usa. At ako'y palalakarin niya sa aking mga mataas na dako. Sa Pangulong Manunugtog, sa aking mga panugtog na kawad. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};