#include <map>
#include <string>
class Bible34
{
	struct tl1	{ int val; const char *msg; };
	struct tl2	{ int val; const char *msg; };
	struct tl3	{ int val; const char *msg; };
public:
static void view1() {
struct tl1 poems[] = {
	{1, "1 Ang hula tungkol sa Ninive. Ang aklat tungkol sa pangitain ni Nahum na Elkoshita. "},
	{2, "2 Ang Panginoon ay mapanibughuing Dios at nanghihiganti; ang Panginoon ay nanghihiganti at puspos ng kapootan; ang Panginoon ay nanghihiganti sa kaniyang mga kaaway, at siya'y nagtataan ng kapootan sa kaniyang mga kaaway. "},
	{3, "3 Ang Panginoon ay banayad sa pagkagalit, at dakila sa kapangyarihan, at sa anomang paraan ay hindi aariing walang sala ang salarin: ang daan ng Panginoon ay sa ipoipo at sa bagyo, at ang mga ulap ay siyang alabok ng kaniyang mga paa. "},
	{4, "4 Kaniyang sinasaway ang dagat, at tinutuyo, at tinutuyo ang lahat na ilog: ang Basan ay nanlalata, at ang Carmelo; at ang bulaklak ng Libano ay nalalanta. "},
	{5, "5 Ang mga bundok ay nanginginig dahil sa kaniya, at ang mga burol ay nangatutunaw; at ang lupa'y lumilindol sa kaniyang harapan, oo, ang sanglibutan, at ang lahat na nagsisitahan dito. "},
	{6, "6 Sino ang makatatayo sa harap ng kaniyang pagkagalit? at sino ang makatatahan sa kabangisan ng kaniyang galit? ang kaniyang kapusukan ay sumisigalbong parang apoy, at ang mga malaking bato ay nangatitibag niya. "},
	{7, "7 Ang Panginoo'y mabuti, katibayan sa kaarawan ng kabagabagan; at nakikilala niya yaong nangaglalagak ng kanilang tiwala sa kaniya. "},
	{8, "8 Nguni't sa pamamagitan ng manggugunaw na baha ay kaniyang lubos na wawakasan ang kaniyang dako, at hahabulin ang kaniyang mga kaaway sa kadiliman. "},
	{9, "9 Ano ang inyong kinakatha laban sa Panginoon? siya'y gagawa ng lubos na kawakasan; ang pagdadalamhati ay hindi titindig na ikalawa. "},
	{10, "10 Sapagka't yamang sila'y maging gaya ng mga salasalabat na tinik, at maging napakalasing na parang manglalasing, sila'y lubos na masusupok na parang tuyong dayami. "},
	{11, "11 May lumabas na isa sa iyo, na nagiisip ng kasamaan laban sa Panginoon, na pumapayo ng masama. "},
	{12, "12 Ganito ang sabi ng Panginoon: Bagaman sila'y nangasa lubos na kalakasan, at totoong marami, gayon may sila'y nangalulugmok, at daraan siya. Bagaman pinagdalamhati kita, hindi na kita pagdadalamhatiin pa. "},
	{13, "13 At ngayo'y aking babaliin ang kaniyang pamatok na nasa iyo, at aking sisirain ang iyong mga paningkaw. "},
	{14, "14 At ang Panginoon ay nagbigay utos tungkol sa iyo, na hindi na matatatag ang iyong pangalan: sa bahay ng iyong mga dios ay aking ihihiwalay ang larawang inanyuan at ang larawang binubo; aking gagawin ang iyong libingan; sapagka't ikaw ay hamak. "},
	{15, "15 Narito, nasa ibabaw ng mga bundok ang mga paa niyang nangagdadala ng mga mabuting balita, na nangaghahayag ng kapayapaan! Ipagdiwang mo ang iyong mga kapistahan, Oh Juda, tuparin mo ang iyong mga panata; sapagka't ang masama ay hindi na dadaan pa sa iyo; siya'y lubos na nahiwalay. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct tl2 poems[] = {
	{1, "1 Siyang bumabasag ay sumampa sa harapan mo: ingatan mo ang katibayan, bantayan mo ang daan, palakasin mo ang iyong mga balakang, patibayin mo ang iyong kapangyarihan na mainam, "},
	{2, "2 Sapagka't ibinabalik ng Panginoon ang karilagan ng Jacob na gaya ng karilagan ng Israel: sapagka't ang mga tagatuyo ay nagsituyo sa kanila, at sinira ang mga sanga ng kanilang mga puno ng ubas. "},
	{3, "3 Ang kalasag ng kaniyang mga makapangyarihang lalake ay pumula, ang matapang na lalake ay nakapanamit ng matingkad na pula: ang mga karo ay nagsisikislap ng patalim sa kaarawan ng kaniyang paghahanda, at ang mga sibat na abeto ay nagsisigalaw ng kakilakilabot. "},
	{4, "4 Ang mga karo ay nagsisihagibis sa mga lansangan; nangagkakabanggang isa't isa sa mga daan: ang anyo ng mga yaon ay gaya ng mga sulo; nagsisitakbong parang mga kidlat. "},
	{5, "5 Naaalaala niya ang kaniyang mga bayani: sila'y nangatitisod sa kanilang paglakad; sila'y nangagmamadali sa kuta niyaon, at ang panakip ay handa. "},
	{6, "6 Ang mga pintuan ng mga ilog ay bukas, at ang palacio ay nalansag. "},
	{7, "7 At si Huzab ay nahubdan; siya'y dinala; at ang kaniyang mga alilang babae ay nananaghoy na parang huni ng mga kalapati, na nagsisidagok sa kanilang mga dibdib. "},
	{8, "8 Datapuwa't ang Ninive mula nang una ay naging parang lawa ng tubig: gayon ma'y nagsisitakas. Tigil kayo, tigil kayo, isinisigaw nila; nguni't walang lumilingon. "},
	{9, "9 Kunin ninyo ang samsam na pilak, kunin ninyo ang samsam na ginto; sapagka't walang katapusang kayamanan, na kaluwalhatian sa lahat ng maligayang kasangkapan. "},
	{10, "10 Siya'y tuyo, at walang laman, at wasak; at ang puso ay natutunaw, at ang mga tuhod ay nagkakaumpugan, at ang pagdaramdam ay nasa lahat ng mga balakang, at ang mga mukha nilang lahat ay nangamumutla. "},
	{11, "11 Saan nandoon ang yungib ng mga leon, at ang dakong sabsaban ng mga batang leon, na nililibutan ng leon at ng babaeng leon, ng batang leon, at walang tumatakot sa kanila? "},
	{12, "12 Ang leon ay kumakatay ng sagana para sa kaniyang mga anak, at lumalapa para sa kaniyang mga babaeng leon, at pinupuno ng huli ang kaniyang mga cueba, at ng tangay ang kaniyang mga yungib. "},
	{13, "13 Narito, ako'y laban sa iyo, sabi ng Panginoon ng mga hukbo, at aking susunugin ang kaniyang mga karo sa usok, at lalamunin ng tabak ang iyong mga batang leon; at aking ihihiwalay ang iyong huli sa lupa, at ang tinig ng iyong mga sugo ay hindi na maririnig. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct tl3 poems[] = {
	{1, "1 Sa aba ng mabagsik na bayan! siya'y puspos na lubos ng kabulaanan at mga agaw; ang panghuhuli ay hindi tumitigil. "},
	{2, "2 Ang higing ng panghagupit, at ang hugong ng pihit ng mga gulong, at ng mga madambang kabayo, at ng lukso ng mga karo, "},
	{3, "3 Ang sakay ng mga mangangabayo, at ang kinang ng tabak; at ang kislap ng sibat, at isang karamihan na patay, ay malaking bunton ng mga bangkay, at walang katapusang mga bangkay; sila'y nangatitisod sa kanilang mga bangkay; "},
	{4, "4 Dahil sa karamihan ng pagpapatutot ng minagandang patutot, na panguna ng pangeenkanto, na nagbibili ng mga bansa sa pamamagitan ng kaniyang pagpapatutot, at ng mga angkan sa pamamagitan ng kaniyang mga pangeenkanto. "},
	{5, "5 Narito, ako'y laban sa iyo, sabi ng Panginoon ng mga hukbo, at aking ilililis ang iyong laylayan sa harap mo; at aking ipakikita sa mga bansa ang iyong kahubaran, at sa mga kaharian ang iyong kahihiyan. "},
	{6, "6 At aking ihahagis sa iyo ang kasuklamsuklam na karumihan, at gagawin kitang hamak, at ilalagay kitang pinakakutya. "},
	{7, "7 At mangyayari, na ang lahat na mangakakakita sa iyo, ay iilag sa iyo, at mangagsasabi, Ang Ninive ay nahahandusay na sira: sinong mananaghoy sa kaniya? saan ako hahanap ng mga mangaaliw sa iyo? "},
	{8, "8 Ikaw baga'y mabuti pa sa Noamon, na natatayo sa gitna ng mga ilog, na may tubig sa palibot niya; na ang katibaya'y ang dagat, at ang kaniyang kuta ay nasa dagat? "},
	{9, "9 Etiopia at Egipto ang kaniyang mga naging katibayan, at walang hanggan; Phut at Lubim ang iyong mga naging katulong. "},
	{10, "10 Gayon ma'y siya'y nadala, siya'y pumasok sa pagkabihag; ang kaniyang mga anak naman ay pinagputolputol sa dulo ng lahat ng mga lansangan; at pinagsapalaran ang kaniyang mga marangal na tao, at ang lahat niyang mahal na tao ay nangasabiran ng mga tanikala. "},
	{11, "11 Ikaw naman ay malalango; ikaw ay matatago; ikaw rin naman ay hahanap ng katibayan dahil sa kaaway. "},
	{12, "12 Lahat ng iyong kuta ay magiging parang puno ng igos, na may unang hinog na mga igos: kung mga ugugin, nangalalaglag sa bibig ng kumakain. "},
	{13, "13 Narito, ang iyong mga tao sa gitna mo ay mga babae; ang mga pintuang-bayan ng iyong lupain ay nangabubukas ng maluwang sa iyong mga kaaway: nilamon ng apoy ang iyong mga halang. "},
	{14, "14 Umigib ka ng tubig sa pagkakubkob; tibayan mo ang iyong mga katibayan; pumasok ka sa putikan, at yapakan mo ang argamasa, tibayan mo ang hurno ng ladrillo. "},
	{15, "15 Doon ka sasakmalin ng apoy; ihihiwalay ka ng tabak; sasakmalin kang parang uod: magpakarami kang gaya ng uod: magpakarami kang gaya ng balang. "},
	{16, "16 Iyong pinarami ang iyong mga mangangalakal kay sa mga bituin sa langit: ang uod ay sumasamsam, at lumilipad. "},
	{17, "17 Ang iyong mga prinsipe ay parang mga balang, at ang iyong mga pinuno ay parang kawan ng lukton, na nagsisihimpil sa mga bakod sa araw na malamig, nguni't pagka ang araw ay sumikat sila'y nagsisilipad, at ang kanilang dako ay hindi alam kung saan sila nangandoon. "},
	{18, "18 Ang iyong mga pastor ay nangatutulog, Oh hari sa Asiria; ang iyong mga bayani ay nangagpapahinga; ang iyong bayan ay nangangalat sa mga bundok, at walang magpisan sa kanila. "},
	{19, "19 Walang kagamutan sa iyong sakit: ang iyong sugat ay malubha: lahat na makabalita sa iyo ay nagsisipakpak ng kamay dahil sa iyo; sapagka't sinong hindi nadaanan ng iyong kasamaan? "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};