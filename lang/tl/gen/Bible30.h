#include <map>
#include <string>
class Bible30
{
	struct tl1	{ int val; const char *msg; };
	struct tl2	{ int val; const char *msg; };
	struct tl3	{ int val; const char *msg; };
	struct tl4	{ int val; const char *msg; };
	struct tl5	{ int val; const char *msg; };
	struct tl6	{ int val; const char *msg; };
	struct tl7	{ int val; const char *msg; };
	struct tl8	{ int val; const char *msg; };
	struct tl9	{ int val; const char *msg; };
public:
static void view1() {
struct tl1 poems[] = {
	{1, "1 Ang mga salita ni Amos, na nasa gitna ng mga pastor sa Tecoa, na nakita niya tungkol sa Israel, nang mga kaarawan ni Uzzia na hari sa Juda, at nang mga kaarawan ni Jeroboam na anak ni Joas na hari sa Israel, na dalawang taon bago lumindol. "},
	{2, "2 At kaniyang sinabi, Ang Panginoon ay aangal mula sa Sion, at sisigaw ng kaniyang tinig mula sa Jerusalem; at ang mga pastulan ng mga pastor ay mananambitan, at ang taluktok ng Carmelo ay matutuyo. "},
	{3, "3 Ganito ang sabi ng Panginoon: Dahil sa tatlong pagsalangsang ng Damasco, oo, dahil sa apat, hindi ko ihihiwalay ang kaparusahan sa kaniya; sapagka't kanilang giniik ang Galaad ng panggiik na bakal. "},
	{4, "4 Nguni't aking susuguin ang isang apoy sa loob ng bahay ni Hazael, at susupukin niyaon ang mga palacio ni Ben-hadad. "},
	{5, "5 At aking iwawasak ang halang ng Damasco, at aking ihihiwalay ang mananahan mula sa libis ng Aven, at siyang humahawak ng cetro mula sa bahay ng Eden; at ang bayan ng Siria ay papasok sa pagkabihag hanggang sa Chir, sabi ng Panginoon. "},
	{6, "6 Ganito ang sabi ng Panginoon: Dahil sa tatlong pagsalangsang ng Gaza, oo, dahil sa apat, hindi ko ihihiwalay ang kaparusahan sa kaniya; sapagka't kanilang dinalang bihag ang buong bayan, upang ibigay sa Edom. "},
	{7, "7 Nguni't ako'y magsusugo ng isang apoy sa kuta ng Gaza, at susupukin niyaon ang mga palacio niyaon: "},
	{8, "8 At aking ihihiwalay ang mananahan mula sa Asdod, at siyang humahawak ng cetro mula sa Ascalon; at aking ipipihit ang aking kamay laban sa Ecron, at ang nalabi sa mga Filisteo ay malilipol, sabi ng Panginoong Dios. "},
	{9, "9 Ganito ang sabi ng Panginoon: Dahil sa tatlong pagsalangsang ng Tiro, oo, dahil sa apat, hindi ko ihihiwalay ang kaparusahan sa kaniya; sapagka't kanilang ibinigay ang buong bayan sa Edom, at hindi inalaala ang tipan ng pagkakapatiran. "},
	{10, "10 Nguni't ako'y magsusugo ng isang apoy sa kuta ng Tiro, at susupukin niyaon ang mga palacio niyaon. "},
	{11, "11 Ganito ang sabi ng Panginoon: Dahil sa tatlong pagsalangsang ng Edom, oo, dahil sa apat, hindi ko ihihiwalay ang kaparusahan sa kaniya; sapagka't hinabol niya ng tabak ang kaniyang kapatid, at ipinagkait ang buong habag, at ang kaniyang galit ay laging nanglilipol, at taglay niya ang kaniyang poot magpakailan man. "},
	{12, "12 Nguni't magsusugo ako ng isang apoy sa Teman, at susupukin niyaon ang mga palacio sa Bozra. "},
	{13, "13 Ganito ang sabi ng Panginoon: Dahil sa tatlong pagsalangsang ng mga anak ni Ammon, oo, dahil sa apat, hindi ko ihihiwalay ang kaparusahan sa kanila; sapagka't kanilang pinaluwa ang bituka ng mga babaing nagdadalang tao sa Galaad, upang kanilang mapalapad ang kanilang hangganan. "},
	{14, "14 Nguni't aking papagniningasin ang isang apoy sa kuta ng Rabba, at susupukin niyaon ang mga palacio niyaon, na may hiyawan sa kaarawan ng pagbabaka, na may bagyo sa kaarawan ng ipoipo; "},
	{15, "15 At ang kanilang hari ay papasok sa pagkabihag, siya at ang kaniyang mga prinsipe na magkakasama, sabi ng Panginoon. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct tl2 poems[] = {
	{1, "1 Ganito ang sabi ng Panginoon: Dahil sa tatlong pagsalangsang ng Moab, oo, dahil sa apat, hindi ko ihihiwalay ang kaparusahan sa kaniya; sapagka't kaniyang sinunog ang mga buto ng hari sa Edom na pinapaging apog. "},
	{2, "2 Nguni't ako'y magsusugo ng isang apoy sa Moab, at susupukin niyaon ang mga palacio ng Cherioth; at ang Moab ay mamamatay na may kaingay, may hiyawan, at may tunog ng pakakak. "},
	{3, "3 At aking ihihiwalay ang hukom sa gitna niyaon, at papatayin ko ang lahat na prinsipe niyaon na kasama niya, sabi ng Panginoon. "},
	{4, "4 Ganito ang sabi ng Panginoon: Dahil sa tatlong pagsalangsang ng Juda, oo, dahil sa apat, hindi ko ihihiwalay ang kaparusahan sa kaniya; sapagka't kanilang itinakuwil ang kautusan ng Panginoon, at hindi iningatan ang kaniyang mga palatuntunan, at iniligaw sila ng kanilang mga pagbubulaan, ayon sa inilakad ng kanilang mga magulang. "},
	{5, "5 Nguni't magsusugo ako ng isang apoy sa Juda; at susupukin niyaon ang mga palacio ng Jerusalem. "},
	{6, "6 Ganito ang sabi ng Panginoon, Dahil sa tatlong pagsalangsang ng Israel, oo, dahil sa apat, hindi ko ihihiwalay ang kaparusahan sa kaniya; sapagka't kanilang ipinagbili ang matuwid dahil sa pilak, at ang mapagkailangan sa dalawang paang panyapak; "},
	{7, "7 Na iniimbot ang alabok sa lupa na nasa ulo ng dukha, at inililiko ang lakad ng maamo: at ang magama ay sumisiping sa isang dalaga, upang lapastanganin ang aking banal na pangalan: "},
	{8, "8 At sila'y nangahihiga sa tabi ng lahat na dambana, sa ibabaw ng mga kasuutang sangla; at sa bahay ng kanilang Dios ay nagsisiinom ng alak ng mga multa. "},
	{9, "9 Gayon ma'y nililipol ko ang Amorrheo sa harap nila, na ang taas ay gaya ng taas ng mga cedro, at siya'y malakas na gaya ng mga encina; gayon ma'y nilipol ko ang kaniyang bunga sa itaas, at ang kaniyang mga ugat sa ilalim. "},
	{10, "10 Iniahon ko rin kayo sa lupain ng Egipto, at pinatnubayan ko kayong apat na pung taon sa ilang, upang ariin ninyo ang lupain ng Amorrheo. "},
	{11, "11 At nagbangon ako sa inyong mga anak ng mga propeta, at sa inyong mga binata ng mga Nazareo. Di baga gayon, Oh kayong mga anak ng Israel? sabi ng Panginoon. "},
	{12, "12 Nguni't binigyan ninyo ang mga Nazareo ng alak na maiinom, at inutusan ninyo ang mga propeta, na sinasabi, Huwag kayong manganghuhula. "},
	{13, "13 Narito, aking huhutukin kayo sa inyong dako, na gaya ng isang karong nahuhutok na puno ng mga bigkis. "},
	{14, "14 At ang pagtakas ay mapapawi sa matulin; at ang malakas ay hindi makaaasa sa kaniyang kalakasan; ni ang makapangyarihan man ay makapagliligtas sa sarili; "},
	{15, "15 Ni makatitindig man siyang humahawak ng busog; at siyang matulin sa paa ay hindi makaliligtas; ni siya mang nakasakay sa kabayo ay makaliligtas: "},
	{16, "16 At siya na matapang sa mga makapangyarihan ay tatakas na hubad sa araw na yaon, sabi ng Panginoon. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct tl3 poems[] = {
	{1, "1 Dinggin ninyo ang salitang ito na sinalita ng Panginoon laban sa inyo, Oh mga anak ni Israel, laban sa buong angkan na aking iniahon mula sa lupain ng Egipto, na sinasabi, "},
	{2, "2 Kayo lamang ang aking nakilala sa lahat ng angkan sa lupa: kaya't aking dadalawin sa inyo ang lahat ninyong kasamaan. "},
	{3, "3 Makalalakad baga ang dalawa na magkasama, liban na sila'y magkasundo? "},
	{4, "4 Uungal baga ang leon sa gubat, kung wala siyang huli? sisigaw baga ang batang leon sa kaniyang yungib, kung wala siyang huling anoman? "},
	{5, "5 Malalaglag baga ang ibon sa silo sa ibabaw ng lupa, ng walang silo sa kaniya? lulukso baga ang panghuli mula sa lupa, at walang nahuling anoman? "},
	{6, "6 Tutunog baga ang pakakak sa bayan, at ang bayan ay hindi manginginig? sasapit baga ang kasamaan sa bayan, at hindi ginawa ng Panginoon? "},
	{7, "7 Tunay na ang Panginoong Dios ay walang gagawin, kundi kaniyang ihahayag ang kaniyang lihim sa kaniyang mga lingkod na mga propeta. "},
	{8, "8 Ang leon ay umungal, sinong di matatakot? Ang Panginoong Dios ay nagsalita; sinong hindi manghuhula? "},
	{9, "9 Ihayag ninyo sa mga palacio sa Asdod, at sa mga palacio sa lupain ng Egipto, at inyong sabihin, Magpipisan kayo sa mga bundok ng Samaria, at inyong masdan kung anong laking ingay ang nandoon, at kung anong pahirap ang nasa gitna niyaon. "},
	{10, "10 Sapagka't hindi sila marunong magsigawa ng matuwid, sabi ng Panginoon, na nagiimbak ng pangdadahas at pagnanakaw sa kanilang mga palacio. "},
	{11, "11 Kaya't ganito ang sabi ng Panginoong Dios: Kaaway ay paririto sa palibot ng lupain; at kaniyang ibabagsak ang lakas mo sa iyo, at ang iyong mga palacio ay sasamsaman. "},
	{12, "12 Ganito ang sabi ng Panginoon: Kung paanong inaagaw ng pastor sa bibig ng leon ang dalawang hita, o ang isang putol ng tainga; gayon ililigtas ang mga anak ni Israel na nangauupo sa Samaria sa sulok ng hiligan, at sa mga sedang colchon ng higaang malaki. "},
	{13, "13 Dinggin ninyo, at patotohanan ninyo laban sa sangbahayan ni Jacob, sabi ng Panginoong Dios, ng Dios ng mga hukbo. "},
	{14, "14 Sapagka't sa araw na aking dadalawin ang mga pagsalangsang ng Israel sa kaniya, aking dadalawin din ang mga dambana ng Beth-el, at ang mga sungay ng dambana ay mahihiwalay, at malalaglag sa lupa. "},
	{15, "15 At aking sisirain ang bahay na pangtagginaw na kasabay ng bahay na pangtaginit; at ang mga bahay na garing ay mangawawala, at ang mga malaking bahay ay magkakawakas, sabi ng Panginoon. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct tl4 poems[] = {
	{1, "1 Dinggin ninyo ang salitang ito, Oh mga baka ng Basan, na nangasa bundok ng Samaria, na nagsisipighati sa mga dukha, na nagsisigipit sa mga mapagkailangan, na nangagsasabi sa kanilang mga panginoon, Dalhin ninyo rito, at ating inumin. "},
	{2, "2 Ang Panginoong Dios ay sumumpa sa pamamagitan ng kaniyang kabanalan, na, narito, ang mga kaarawan ay darating sa inyo, na kanilang huhulihin kayo ng mga taga ng bingwit, at ang nalabi sa inyo ay ng mga pamingwit. "},
	{3, "3 At kayo'y magsisilabas sa mga sira, na bawa't isa'y tuloytuloy; at kayo'y mangagpapakatapon sa Harmon, sabi ng Panginoon. "},
	{4, "4 Magsiparoon kayo sa Beth-el, at magsisalangsang kayo; sa Gilgal, at paramihin ninyo ang pagsalangsang; at inyong dalhin ang inyong mga hain tuwing umaga, at ang inyong mga ikasangpung bahagi tuwing tatlong araw; "},
	{5, "5 At kayo'y mangaghandog ng hain ng pasasalamat na may lebadura, at kayo'y mangaghayag ng kusang mga handog at inyong itanyag; sapagka't ito'y nakalulugod sa inyo, Oh ninyong mga anak ni Israel, sabi ng Panginoong Dios. "},
	{6, "6 At binigyan ko naman kayo ng kalinisan ng mga ngipin sa lahat ninyong mga bayan, at kakulangan ng tinapay sa lahat ninyong mga dako; gayon ma'y hindi kayo nanganumbalik sa akin, sabi ng Panginoon. "},
	{7, "7 At akin namang pinigil ang ulan sa inyo, nang tatlong buwan na lamang at pagaani na; at aking pinaulan sa isang bayan, at hindi ko pinaulan sa kabilang bayan: isang bahagi ay inulanan, at ang bahagi na hindi inulanan ay natuyo. "},
	{8, "8 Sa gayo'y dalawa o tatlong bayan ay nagsigala sa isang bayan upang magsiinom ng tubig, at hindi nangapawi ang uhaw: gayon ma'y hindi kayo nanganumbalik sa akin, sabi ng Panginoon. "},
	{9, "9 Aking sinalot kayo ng pagkalanta at ng amag: ang karamihan ng inyong mga halaman, at ng inyong mga ubasan, at ng inyong mga igusan, at ng inyong mga olibohan ay nilipol ng tipaklong: gayon ma'y hindi kayo nanganumbalik sa akin, sabi ng Panginoon. "},
	{10, "10 Aking pinarating sa gitna ninyo ang salot na gaya ng sa Egipto: ang inyong mga binata ay pinatay ko ng tabak, at dinala ko ang inyong mga kabayo; at aking pinaalingasaw ang baho ng inyong kampamento hanggang sa inyong mga butas ng ilong; gayon ma'y hindi kayo nanganumbalik sa akin, sabi ng Panginoon. "},
	{11, "11 Aking ibinuwal ang iba sa inyo, gaya nang ibuwal ng Dios ang Sodoma at Gomorra, at kayo'y naging gaya ng dupong na naagaw sa apoy: gayon ma'y hindi kayo nanganumbalik sa akin, sabi ng Panginoon. "},
	{12, "12 Kaya't ganito ang gagawin ko sa iyo, Oh Israel; at yamang aking gagawin ito sa iyo, humanda kang salubungin mo ang iyong Dios, Oh Israel. "},
	{13, "13 Sapagka't, narito, siyang nagaanyo ng mga bundok, at lumilikha ng hangin, at nagpapahayag sa tao kung ano ang kaniyang pagiisip; na nagpapadilim ng umaga, at yumayapak sa mga mataas na dako ng lupa, ang Panginoon, ang Dios ng mga hukbo ay siya niyang pangalan. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct tl5 poems[] = {
	{1, "1 Dinggin ninyo ang salitang ito na aking itinataghoy sa inyo, Oh sangbahayan ni Israel. "},
	{2, "2 Ang dalaga ng Israel ay nabuwal; siya'y hindi na magbabangon pa, siya'y nahagis sa kaniyang lupain; walang magbangon sa kaniya. "},
	{3, "3 Sapagka't ganito ang sabi ng Panginoong Dios: Ang bayan na lalabas na isang libo, maiiwang isang daan, at ang lalabas na isang daan ay maiiwang sangpu, sa sangbahayan ni Israel. "},
	{4, "4 Sapagka't ganito ang sabi ng Panginoon sa sangbahayan ni Israel; Hanapin ninyo ako, at kayo'y mangabubuhay; "},
	{5, "5 Nguni't huwag ninyong hanapin ang Beth-el, ni magsipasok man sa Gilgal, at huwag kayong magsidaan sa Beer-seba: sapagka't walang pagsala ang Gilgal ay papasok sa pagkabihag, at ang Beth-el ay mauuwi sa wala. "},
	{6, "6 Inyong hanapin ang Panginoon, at kayo'y mangabubuhay; baka siya'y sumigalbong parang apoy sa sangbahayan ni Jose, at supukin yaon, at sa Beth-el ay walang makapapatay niyaon: "},
	{7, "7 Kayong nagpapaging ajenjo sa kahatulan, at nagwawaksi ng katuwiran sa lupa. "},
	{8, "8 Inyong hanapin ang lumikha ng mga Pleyades at ng Orion, at ang lilim ng kamatayan ay pinapaging umaga, pinapagdilim ang araw sa pamamagitan ng gabi; yaong tumatawag sa tubig sa dagat, at nagbubugso ng mga yaon sa ibabaw ng lupa (Panginoon ang siya niyang pangalan); "},
	{9, "9 Yaong nagdadala ng biglang kabuwalan sa malakas, na anopa't ang pagkasira ay dumarating sa katibayan. "},
	{10, "10 Kanilang kinapopootan ang nananaway sa pintuang-bayan, at kanilang kinasusuklaman ang nagsasalita ng matuwid. "},
	{11, "11 Palibhasa nga't inyong niyayapakan ang dukha, at inyong hinihingan siya ng trigo: kayo'y nangagtayo ng mga bahay na batong tinabas, nguni't hindi ninyo tatahanan; kayo'y nangagtanim ng mga maligayang ubasan, nguni't hindi kayo magsisiinom ng alak niyaon. "},
	{12, "12 Sapagka't talastas ko kung gaano karami ang inyong mga pagsalangsang, at kung gaano kalaki ang inyong mga kasalanan: kayong nagsisidalamhati sa ganap, na kinukunan ninyo ng suhol, at inyong inililigaw sa kanilang matuwid ang mapagkailangan sa pintuang-bayan. "},
	{13, "13 Kaya't siya na mabait ay tatahimik sa panahong yaon; sapagka't masamang panahon. "},
	{14, "14 Magsihanap kayo ng kabutihan, at huwag kasamaan, upang kayo'y mangabuhay; at sa gayo'y ang Panginoon, ang Dios ng mga hukbo, ay sasa inyo, gaya ng inyong sinasabi. "},
	{15, "15 Inyong kapootan ang masama, at ibigin ang mabuti, at kayo'y mangagtatatag ng kahatulan sa pintuang-bayan: marahil ang Panginoon, ang Dios ng mga hukbo ay magiging mapagbiyaya sa nalabi sa Jose. "},
	{16, "16 Kaya't ganito ang sabi ng Panginoon, ng Dios ng mga hukbo, ng Panginoon: Panaghoy ay sa lahat na daan; at sila'y mangagsasabi sa lahat na lansangan, Sa aba! sa aba! at kanilang tatawagin ang mangbubukid sa pananambitan, at ang lahat na bihasa sa pananaghoy sa pagtaghoy. "},
	{17, "17 At sa lahat ng ubasan ay magkakaroon ng panaghoy; sapagka't ako'y daraan sa gitna mo, sabi ng Panginoon. "},
	{18, "18 Sa aba ninyo na nangagnanasa ng kaarawan ng Panginoon! bakit ninyo ninanasa ang kaarawan ng Panginoon? kadiliman nga, at hindi kaliwanagan. "},
	{19, "19 Gaya ng kung ang tao ay tumatakas sa leon, at isang oso ang sumasalubong sa kaniya; o pumapasok sa bahay at ikinakapit ang kaniyang kamay sa pinid, at isang ahas ang tumutuka sa kaniya. "},
	{20, "20 Hindi baga magiging kadiliman ang kaarawan ng Panginoon, at hindi kaliwanagan? na totoong madilim, at walang ningning? "},
	{21, "21 Aking kinapopootan, aking hinahamak ang inyong mga kapistahan, at hindi ako malulugod sa inyong mga takdang kapulungan. "},
	{22, "22 Oo, bagaman inyong ihandog sa akin ang inyong mga handog na susunugin at mga handog na harina, hindi ko tatanggapin; ni akin mang kalulugdan ang mga handog tungkol sa kapayapaan na inyong mga matabang hayop. "},
	{23, "23 Ihiwalay mo sa akin ang ingay ng iyong mga awit; sapagka't hindi ko didinggin ang tinig ng iyong mga biola. "},
	{24, "24 Kundi bumugso ang katarungan na parang tubig, at ang katuwiran na parang malakas na agos. "},
	{25, "25 Nagdala baga kayo sa akin ng mga hain, at ng mga handog sa ilang na apat na pung taon, Oh sangbahayan ni Israel? "},
	{26, "26 Oo, inyong pinasan ang tabernakulo ng inyong hari at ang dambana ng inyong mga larawan, ang bituin ng inyong dios, na inyong ginawa para sa inyong sarili. "},
	{27, "27 Kaya't kayo'y aking papapasukin sa pagkabihag sa dako roon ng Damasco, sabi ng Panginoon, na ang pangala'y Dios ng mga hukbo. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct tl6 poems[] = {
	{1, "1 Sa aba nila na nangagwawalang bahala sa Sion, at nila na mga tiwasay sa bundok ng Samaria, na magigiting na lalake sa mga pangulong bansa, ng mga pinagsasadya ng sangbahayan ni Israel! "},
	{2, "2 Magsidaan kayo sa Calne, at inyong tingnan; at mula roon ay magsiparoon kayo sa Hamath na malaki; kung magkagayo'y magsibaba kayo sa Gath ng mga Filisteo: magaling baga sila kay sa mga kahariang ito? o malaki baga ang kanilang hangganan kay sa inyong hangganan? "},
	{3, "3 Kayong nangaglalayo ng masamang araw at nangagpapalit ng likmuan ng karahasan; "},
	{4, "4 Na nangahihiga sa mga higaang garing, at nagsisiunat sa kanilang mga hiligan, at nagsisikain ng mga batang tupa na mula sa kawan, at ng mga guya na mula sa gitna ng kulungan; "},
	{5, "5 Na nagsisiawit ng mga pagayongayong awit sa tinig ng biola; na nagsisikatha sa ganang kanilang sarili ng mga panugtog ng tugtugin, na gaya ni David; "},
	{6, "6 Na nagsisiinom ng alak sa mga mankok, at nagsisipagpahid ng mga mainam na pabango; nguni't hindi nangahahapis sa pagdadalamhati ng Jose. "},
	{7, "7 Sila nga ngayo'y magsisiyaong bihag na kasama ng unang nagsiyaong bihag, at ang kasayahan nila na nagsisihiga ay mapaparam. "},
	{8, "8 Ang Panginoong Dios ay sumumpa sa kaniyang sarili, sabi ng Panginoon, ng Dios ng mga hukbo: Aking kinayayamutan ang karilagan ng Jacob, at aking kinapopootan ang kaniyang mga palacio; kaya't aking ibibigay ang bayan sangpu ng lahat na nandoon. "},
	{9, "9 At mangyayari, kung may matirang sangpung tao sa isang bahay, na pawang mangamamatay. "},
	{10, "10 At pagka itataas siya ng amain, sa makatuwid baga'y ng sumusunog sa kaniya, upang ilabas ang mga buto sa bahay, at sasabihin doon sa nasa pinakaloob ng bahagi ng bahay, May kasama ka pa bagang sinoman? at kaniyang sasabihin: Wala; kung magkagayo'y kaniyang sasabihin: Tumahimik ka; sapagka't hindi natin mababanggit ang pangalan ng Panginoon. "},
	{11, "11 Sapagka't narito, naguutos ang Panginoon, at ang malaking bahay ay magkakasira, at ang munting bahay ay magkakabutas. "},
	{12, "12 Tatakbo baga ang mga kabayo sa malaking bato? magaararo baga roon ang sino man sa pamamagitan ng mga toro? inyo ngang ginagawang kapaitan ang katarungan, at ajenjo ang bunga ng katuwiran, "},
	{13, "13 Kayong nangagagalak sa isang bagay na walang kabuluhan na nangagsasabi; Di baga kami ay nagtaglay para sa amin ng mga sungay sa pamamagitan ng aming sariling kalakasan? "},
	{14, "14 Sapagka't, narito, aking ititindig laban sa inyo ang isang bansa, Oh sangbahayan ni Israel, sabi ng Panginoon, ng Dios ng mga hukbo; at kanilang pagdadalamhatiin kayo mula sa pasukan sa Hamath hanggang sa batis ng Araba. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct tl7 poems[] = {
	{1, "1 Ganito nagpakita sa akin ang Panginoong Dios: at, narito, siya'y lumikha ng mga balang sa pasimula ng huling pagsibol ng suwi; at, narito, na siyang huling suwi pagkatapos ng mga gapas para sa hari. "},
	{2, "2 At nangyari, na nang kanilang matapos makain ang pananim sa lupain, akin ngang sinabi, Oh Panginoong Dios, isinasamo ko sa iyo, na magpatawad ka: paanong tatayo ang Jacob? sapagka't siya'y maliit. "},
	{3, "3 Ang Panginoo'y nagsisi tungkol dito, Hindi mangyayari, sabi ng Panginoon. "},
	{4, "4 Ganito nagpakita sa akin ang Panginoong Dios: at, narito, ang Panginoong Dios ay tumawag, upang humatol sa pamamagitan ng apoy; at sinupok ang malaking kalaliman, at susupukin sana ang lupain. "},
	{5, "5 Nang magkagayo'y sinabi ko, Oh Panginoong Dios, itigil mo, isinasamo ko sa iyo: paanong makatatayo ang Jacob? sapagka't siya'y maliit. "},
	{6, "6 Ang Panginoo'y nagsisi tungkol dito: Ito'y hindi rin mangyayari, sabi ng Panginoong Dios. "},
	{7, "7 Ganito siya nagpakita sa akin: at, narito, ang Panginoon ay nakatayo sa tabi ng isang kuta na ang pagkayari ay ayon sa pabatong tingga, na may pabatong tingga sa kaniyang kamay. "},
	{8, "8 At sinabi ng Panginoon sa akin, Amos, anong iyong nakikita? At aking sinabi, Isang pabatong tingga. Nang magkagayo'y sinabi ng Panginoon, Narito, ako'y maglalagay ng pabatong tingga sa gitna ng aking bayang Israel; hindi na ako magdadaan pa sa kanila; "},
	{9, "9 At ang mga mataas na dako ng Isaac ay magiging sira, at ang mga santuario ng Israel ay mangahahandusay na wasak; at ako'y babangon na may tabak laban sa sangbahayan ni Jeroboam. "},
	{10, "10 Nang magkagayo'y nagsugo si Amasias na saserdote sa Beth-el kay Jeroboam na hari sa Israel, na nagsasabi, Si Amos ay nagbanta laban sa iyo sa gitna ng sangbahayan ni Israel: hindi mababata ng lupain ang lahat niyang mga salita. "},
	{11, "11 Sapagka't ganito ang sabi ni Amos, Si Jeroboam ay mamamatay sa pamamagitan ng tabak, at ang Israel ay walang pagsalang dadalhing bihag mula sa kaniyang lupain. "},
	{12, "12 Sinabi rin ni Amasias kay Amos, Oh ikaw na tagakita, yumaon ka, at tumakas ka sa lupain ng Juda, at doo'y kumain ka ng tinapay, at manghula ka roon: "},
	{13, "13 Nguni't huwag ka nang manghula pa sa Beth-el: sapagka't siyang santuario ng hari, at siyang bahay-hari. "},
	{14, "14 Nang magkagayo'y sumagot si Amos, at nagsabi kay Amasias, Ako'y hindi propeta, o anak man ng propeta; kundi ako'y pastor, at manggagawa sa mga puno ng sikomoro: "},
	{15, "15 At kinuha ako ng Panginoon mula sa pagsunod sa kawan, at sinabi ng Panginoon sa akin, Ikaw ay yumaon, manghula ka sa aking bayang Israel. "},
	{16, "16 Kaya't ngayo'y dinggin mo ang salita ng Panginoon, Iyong sinasabi, Huwag kang manghula laban sa Israel, at huwag mong ihulog ang iyong salita laban sa sangbahayan ni Isaac: "},
	{17, "17 Kaya't ganito ang sabi ng Panginoon, Ang iyong asawa ay magiging patutot sa bayan, at ang iyong mga anak na lalake at babae ay mangabubuwal sa pamamagitan ng tabak, at ang iyong lupain ay mababahagi sa pamamagitan ng pising panukat; at ikaw ay mamamatay sa isang lupaing marumi, at ang Israel ay walang pagsalang dadalhing bihag mula sa kaniyang lupain. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct tl8 poems[] = {
	{1, "1 Ganito nagpakita ang Panginoong Dios sa akin: at, narito, ang isang bakol ng bunga ng taginit. "},
	{2, "2 At kaniyang sinabi, Amos, anong iyong nakikita? At aking sinabi, Isang bakol ng bunga ng taginit. Nang magkagayo'y sinabi ng Panginoon sa akin, Ang wakas ay dumating sa aking bayang Israel; hindi na ako daraan pa uli sa kanila. "},
	{3, "3 At ang mga awit sa templo ay magiging mga pananambitan sa araw na yaon, sabi ng Panginoong Dios: ang mga bangkay ay magiging marami; sa bawa't dako ay tahimik silang itatapon. "},
	{4, "4 Pakinggan ninyo ito, Oh kayong nananakmal ng mapagkailangan, at inyong pinagkukulang ang dukha sa lupain, "},
	{5, "5 Na sinasabi, Kailan daraan ang bagong buwan, upang tayo'y makapagbili ng gugulayin at ang sabbath, upang ating mailabas ang trigo? na gawing munti ang efa, at malaki ang siklo, at gumawa ng karayaan sa magdarayang timbangan; "},
	{6, "6 Upang ating mabili ng pilak ang dukha, at ng dalawang paang panyapak ang mapagkailangan, at maipagbili ang pinagbithayan sa trigo. "},
	{7, "7 Ang Panginoon ay sumumpa alangalang sa karilagan ng Jacob, Tunay na hindi ko kalilimutan kailan man ang alin man sa kanilang mga gawa. "},
	{8, "8 Hindi baga manginginig ang lupain dahil dito, at mananaghoy ang bawa't tumatahan doon? oo, sasampang buo na gaya ng Ilog; at mababagabag at lulubog uli, gaya ng Ilog ng Egipto. "},
	{9, "9 At mangyayari sa araw na yaon, sabi ng Panginoong Dios, na aking palulubugin ang araw sa katanghaliang tapat, at aking padidilimin ang lupa sa maliwanag na araw. "},
	{10, "10 At aking papalitan ng panaghoy ang inyong mga kapistahan, at taghoy ang lahat ninyong awit; at ako'y maglalagay ng kayong magaspang sa lahat na balakang, at kakalbuhan sa bawa't ulo; at aking gagawing gaya ng pagtaghoy sa isang bugtong na anak, at ang wakas niyaon ay gaya ng mapanglaw na araw. "},
	{11, "11 Narito, ang mga araw ay dumarating, sabi ng Panginoong Dios, na ako'y magpapasapit ng kagutom sa lupain, hindi kagutom sa tinapay, o kauhawan man dahil sa tubig, kundi sa pagkarinig ng mga salita ng Panginoon. "},
	{12, "12 At sila'y magsisilaboy sa dagat at dagat, at mula sa hilagaan hanggang sa silanganan; sila'y magsisitakbo ng paroo't parito upang hanapin ang salita ng Panginoon, at hindi masusumpungan. "},
	{13, "13 Sa araw na yaon ay manglulupaypay sa uhaw ang mga magandang dalaga at ang mga binata. "},
	{14, "14 Silang nagsisisumpa sa pamamagitan ng kasalanan ng Samaria, at nagsasabi, Buhay ang Dios mo, Oh Dan; at, Buhay ang daan ng Beer-seba; sila'y mangabubuwal, at kailan may hindi na mangakababangon. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct tl9 poems[] = {
	{1, "1 Aking nakita ang Panginoon na nakatayo sa tabi ng dambana: at kaniyang sinabi, Hampasin mo ang mga kapitel, upang ang mga tungtungan ay mauga; at mangagkaputolputol sa ulo nilang lahat; at aking papatayin ng tabak ang huli sa kanila: walang makatatakas sinoman sa kanila, at walang makatatanang sinoman sa kanila. "},
	{2, "2 Bagaman sila'y humukay hanggang sa Sheol, mula roo'y kukunin sila ng aking kamay; at bagaman sila'y sumampa hanggang sa langit, mula roo'y ibababa ko sila. "},
	{3, "3 At bagaman sila'y magsipagtago sa taluktok ng Carmelo, aking hahanapin at kukunin sila mula roon; at bagaman sila'y magsikubli sa aking paningin sa gitna ng dagat, mula roo'y uutusan ko ang ahas, at tutukain niyaon sila. "},
	{4, "4 At bagaman sila'y magsipasok sa pagkabihag sa harap ng kanilang mga kaaway, mula roon ay aking uutusan ang tabak, at papatayin niyaon sila: at aking itititig ang aking mga mata sa kanila sa ikasasama, at hindi sa ikabubuti. "},
	{5, "5 Sapagka't ang Panginoon, ang Dios ng mga hukbo, ay siyang humihipo ng lupain at natutunaw, at lahat na nagsisitahan doon ay magsisitangis; at babangong samasama na gaya ng Ilog, at lulubog uli, na gaya ng Ilog ng Egipto; "},
	{6, "6 Siya na gumawa ng kaniyang mga silid sa langit, at kumatha ng kaniyang balantok sa lupa; siya na tumatawag ng tubig sa dagat at ibinubugso sa ibabaw ng lupa; Panginoon ang kaniyang pangalan. "},
	{7, "7 Di baga kayo'y parang mga anak ng mga taga Etiopia sa akin, Oh mga anak ni Israel? sabi ng Panginoon. Hindi ko baga pinasampa ang Israel mula sa lupain ng Egipto, at ang mga Filisteo, ay mula sa Caphtor, at ang mga taga Siria ay sa Chir? "},
	{8, "8 Narito, ang mga mata ng Panginoong Dios ay nasa makasalanang kaharian, at aking ipapahamak mula sa ibabaw ng lupa; liban na hindi ko lubos na ipapahamak ang sangbahayan ni Jacob, sabi ng Panginoon. "},
	{9, "9 Sapagka't, narito, ako'y maguutos, at aking sasalain ang sangbahayan ni Israel sa gitna ng lahat na bansa, gaya ng trigo na nabithay sa isang bithay, gayon ma'y hindi malalaglag sa lupa ang pinakamaliit na butil. "},
	{10, "10 Lahat na makasalanan sa aking bayan ay mangamamatay sa pamamagitan ng tabak, na nangagsasabi, Ang kasamaan ay hindi aabot sa atin o mauuna man sa atin. "},
	{11, "11 Sa araw na yaon ay ibabangon ko ang tabernakulo ni David na buwal, at tatakpan ko ang mga sira niyaon; at ibabangon ko ang mga guho niyaon, at aking itatayo na gaya ng mga araw ng una; "},
	{12, "12 Upang kanilang ariin ang nalabi sa Edom, at ang lahat na bansa na mga tinatawag sa aking pangalan, sabi ng Panginoon na gumagawa nito, "},
	{13, "13 Narito, ang mga kaarawan ay dumarating, sabi ng Panginoon, na aabutan ng mangaararo ang mangaani, at ng mamimisa ng ubas ang magtatanim ng binhi; at ang mga bundok ay papatak ng matamis na alak, at lahat na burol ay mangatutunaw. "},
	{14, "14 At akin uling ibabalik ang nangabihag sa aking bayang Israel, at kanilang itatayo ang mga wasak na bayan, at tatahanan nila; at sila'y mangaguubasan, at magsisiinom ng alak niyaon; magsisigawa rin sila ng mga halamanan, at magsisikain ng bunga ng mga yaon. "},
	{15, "15 At aking itatatag sila sa kanilang lupain; at hindi na sila mabubunot pa sa kanilang lupain, na aking ibinigay sa kanila, sabi ng Panginoon mong Dios. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};