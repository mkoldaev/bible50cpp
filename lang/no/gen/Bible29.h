#include <map>
#include <string>
class Bible29
{
	struct no1	{ int val; const char *msg; };
	struct no2	{ int val; const char *msg; };
	struct no3	{ int val; const char *msg; };
public:
static void view1() {
struct no1 poems[] = {
	{1, "1 Herrens ord som kom til Joel, Petuels sønn: "},
	{2, "2 Hør dette, I gamle! Gi akt, alle som bor i landet! Er sådant skjedd i eders dager eller i eders fedres dager? "},
	{3, "3 I skal fortelle om det til eders barn, og eders barn til sine barn, og deres barn til en kommende slekt. "},
	{4, "4 Hvad gnageren har levnet, har vrimleren ett, og hvad vrimleren har levnet, har slikkeren ett, og hvad slikkeren har levnet, har skaveren ett. "},
	{5, "5 Våkn op, I drukne, og gråt, og jamre, alle vindrikkere, fordi mosten er revet bort fra eders munn. "},
	{6, "6 For et folk har draget op over mitt land sterkt og talløst; dets tenner er som en løves tenner, og det har jeksler som en løvinne. "},
	{7, "7 Det har rent ødelagt mine vintrær og knekket mine fikentrær; det har gjort dem aldeles bare og kastet dem bort; deres grener er blitt hvite. "},
	{8, "8 Klag som en jomfru som bærer sørgedrakt for sin ungdoms brudgom! "},
	{9, "9 Matoffer og drikkoffer er revet bort fra Herrens hus; prestene, Herrens tjenere, sørger. "},
	{10, "10 Marken er ødelagt, jorden sørger; for kornet er ødelagt, mosten er tørket bort, oljen er svunnet inn. "},
	{11, "11 Akerdyrkerne er skuffet, vingårdsmennene jamrer sig; for hveten og bygget, markens grøde, er gått tapt. "},
	{12, "12 Vintreet er tørket bort, og fikentreet er visnet; granatepletreet og palmen og epletreet, alle markens trær er tørket bort; ja, all fryd er svunnet bort fra menneskenes barn. "},
	{13, "13 Klæ eder i sørgedrakt og klag, I prester! Jamre eder, I som gjør tjeneste ved alteret! Gå inn og sitt hele natten i sørgedrakt, I min Guds tjenere! For eders Guds hus må savne matoffer og drikkoffer. "},
	{14, "14 Tillys en hellig faste, utrop en festforsamling, samle de eldste, ja alle som bor i landet, til Herrens, eders Guds hus og rop til Herren! "},
	{15, "15 Ve oss, for en dag! For Herrens dag er nær og kommer som en ødeleggelse fra den Allmektige. "},
	{16, "16 Er ikke maten blitt borte for våre øine, glede og fryd fra vår Guds hus? "},
	{17, "17 Sædekornene er tørket inn under mulden som dekker dem; forrådshusene er ødelagt, ladene nedbrutt, for kornet er fordervet. "},
	{18, "18 Hvor buskapen stønner! Oksehjordene farer redde omkring, for det finnes intet beite for dem; også fårehjordene må lide. "},
	{19, "19 Til dig, Herre, roper jeg; for ild har fortært ørkenens beitemarker, og luer har forbrent alle markens trær. "},
	{20, "20 Endog markens dyr skriker op til dig; for bekkene er uttørket, og ild har fortært ørkenens beitemarker. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct no2 poems[] = {
	{1, "1 Støt i basun på Sion og blås alarm på mitt hellige berg, alle som bor i landet, beve! For Herrens dag kommer - den er nær, "},
	{2, "2 en dag med mørke og mulm, en dag med skyer og skodde, utbredt over fjellene som morgenrøde - et stort og sterkt folk, som det ikke har vært make til fra fordums tid og heller ikke siden kommer make til gjennem årene, fra slekt til slekt. "},
	{3, "3 Foran det fortærer ild, og efter det brenner lue; som Edens have er landet foran det, og efter det er det en øde ørken, og det er intet som slipper unda det. "},
	{4, "4 Som hester er det å se til, og som ryttere løper de avsted. "},
	{5, "5 Det lyder som larm av vogner når de hopper over fjelltoppene, det lyder som når ildsluen fortærer halm, de er som et sterkt folk, rustet til krig. "},
	{6, "6 Folkeslag skjelver for det; alle ansikter blir blussende røde. "},
	{7, "7 Som helter løper de avsted, som krigsmenn stiger de op på murene; de drar frem hver sin vei og bøier ikke av fra sine stier. "},
	{8, "8 De trenger ikke hverandre til side; de går frem hver på sin egen vei; mellem kastespyd styrter de frem og stanser ikke i sitt løp. "},
	{9, "9 I byen vanker de om, på muren løper de, i husene stiger de op, gjennem vinduene går de inn som tyver. "},
	{10, "10 Foran dem skjelver jorden og ryster himmelen; sol og måne sortner, og stjernene holder op å lyse. "},
	{11, "11 Og Herren lar sin røst høre foran sin fylking, for hans hær er såre stor, og sterk er den som fullbyrder hans ord; for stor er Herrens dag og såre forferdelig - hvem kan utholde den? "},
	{12, "12 Men endog nu, sier Herren, vend om til mig med hele eders hjerte og med faste og gråt og klage, "},
	{13, "13 og sønderriv eders hjerte og ikke eders klær, og vend om til Herren eders Gud! For han er nådig og barmhjertig, langmodig og rik på miskunnhet, og han angrer det onde. "},
	{14, "14 Hvem vet? Han torde vende om og angre og la en velsignelse bli igjen efter sig, til matoffer og drikkoffer for Herren eders Gud. "},
	{15, "15 Støt i basun på Sion, tillys en hellig faste, utrop en festforsamling! "},
	{16, "16 Samle folket, tillys en hellig sammenkomst, kall de gamle sammen, samle de små barn, endog dem som dier morsbryst! La brudgommen gå ut av sitt rum og bruden av sitt kammer! "},
	{17, "17 Mellem forhallen og alteret skal prestene, Herrens tjenere, stå gråtende og si: Spar, Herre, ditt folk, og overgi ikke din arv til vanære, så hedninger får råde over den! Hvorfor skal de si blandt folkene: Hvor er deres Gud? "},
	{18, "18 Da blir Herren nidkjær for sitt land, og han sparer sitt folk. "},
	{19, "19 Og Herren svarer og sier til sitt folk: Se, jeg sender eder korn og most og olje, så I blir mette; og jeg vil ikke mere overgi eder til vanære blandt hedningene. "},
	{20, "20 Og fienden fra Norden vil jeg drive langt bort fra eder og jage ham avsted til et tørt og øde land, hans fortropp til havet i øst og hans baktropp til havet i vest; og det skal stige op en stank fra ham, en motbydelig lukt; for altfor store ting har han tatt sig fore. "},
	{21, "21 Frykt ikke, du land! Fryd dig og vær glad! For store ting har Herren gjort. "},
	{22, "22 Frykt ikke, I markens dyr! For ørkenens beitemarker grønnes, trærne bærer sin frukt, fikentreet og vintreet gir sin kraft. "},
	{23, "23 Og I, Sions barn, fryd og gled eder i Herren eders Gud! For han gir eder læreren til rettferdighet; og så sender han regn ned til eder, høstregn og vårregn, først. "},
	{24, "24 Treskeplassene blir fulle av korn, og persekarene flyter over av most og olje. "},
	{25, "25 Og jeg godtgjør eder de år da vrimleren åt op alt, og slikkeren og skaveren og gnageren, min store hær, som jeg sendte mot eder. "},
	{26, "26 Og I skal ete og bli mette og prise Herrens, eders Guds navn, han som har stelt så underfullt med eder, og mitt folk skal aldri i evighet bli til skamme. "},
	{27, "27 Og I skal kjenne at jeg bor midt i Israel, og at jeg er Herren eders Gud, og ingen annen; og mitt folk skal aldri i evighet bli til skamme. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct no3 poems[] = {
	{1, "1 Og derefter skal det skje at jeg vil utgyde min Ånd over alt kjød, og eders sønner og eders døtre skal tale profetiske ord; eders oldinger skal ha drømmer, eders unge menn skal se syner; "},
	{2, "2 ja, endog over trælene og over trælkvinnene vil jeg i de dager utgyde min Ånd. "},
	{3, "3 Og jeg vil gjøre underfulle tegn på himmelen og på jorden: blod og ild og røkstøtter. "},
	{4, "4 Solen skal omskiftes til mørke, og månen til blod, før Herrens dag kommer, den store og forferdelige. "},
	{5, "5 Og det skal skje: Hver den som påkaller Herrens navn, skal bli frelst; for på Sions berg og i Jerusalem skal det være en flokk av undkomne, således som Herren har sagt, og blandt de undslopne skal de være som Herren kaller. "},
	{6, "6 For se, i de dager og på den tid, når jeg gjør ende på Judas og Jerusalems fangenskap, "},
	{7, "7 da vil jeg samle alle hedningefolk og føre dem ned i Josafats dal, og jeg vil der gå i rette med dem for mitt folks og min arvs, Israels skyld, fordi de spredte dem blandt hedningene og delte mitt land; "},
	{8, "8 om mitt folk kastet de lodd, de gav en gutt for en skjøge, de solgte en pike for vin, og den drakk de op. "},
	{9, "9 Og I, Tyrus og Sidon og alle Filisterlands bygder! Hvad vil mig? Er det noget I vil gjengjelde mig, eller vil I gjøre mig noget? Snart, i en hast, skal jeg la eders gjerning falle tilbake på eders eget hode, "},
	{10, "10 I som tok mitt sølv og gull og førte mine dyreste skatter bort til eders templer, "},
	{11, "11 og Judas barn og Jerusalems barn solgte I til Javans barn for å få dem langt bort fra sitt land. "},
	{12, "12 Se, jeg kaller dem fra det sted som I har solgt dem til, og lar eders gjerning falle tilbake på eders eget hode. "},
	{13, "13 Og jeg vil selge eders sønner og døtre til Judas barn, og de skal selge dem til sabeerne, et folk som bor langt borte; for Herren har talt. "},
	{14, "14 Rop dette ut blandt hedningefolkene, rust eder til en hellig krig, kall på heltene, la alle krigsmenn stige frem og dra ut! "},
	{15, "15 Smi eders hakker om til sverd og eders vingårdskniver til spyd! Den veke si: Jeg er en helt! "},
	{16, "16 Skynd eder og kom, alle I hedningefolk fra alle kanter, og samle eder sammen! Dit la du, Herre, dine helter stige ned! "},
	{17, "17 Hedningefolkene skal våkne op og dra til Josafats dal; for der vil jeg sitte og dømme alle hedningefolk fra alle kanter. "},
	{18, "18 Send sigden ut, for høsten er moden! Kom og tred vinpersen, for den er full, persekarene flyter over, deres ondskap er stor! "},
	{19, "19 Skare på skare samler sig i avgjørelsens dal. For nær er Herrens dag i avgjørelsens dal. "},
	{20, "20 Sol og måne sortner, og stjernene holder op å lyse. "},
	{21, "21 Og Herren skal brøle fra Sion og la sin røst høre fra Jerusalem, og himmel og jord skal skjelve; men Herren er en tilflukt for sitt folk og et vern for Israels barn. "},
	{22, "22 Og I skal kjenne at jeg er Herren eders Gud, som bor på Sion, mitt hellige berg; og Jerusalem skal være et hellig sted, og fremmede skal ikke mere trenge inn der. "},
	{23, "23 Og det skal skje på den dag at fjellene skal dryppe av most, og haugene flyte over av melk, og alle bekker i Juda strømme med vann; og det skal utgå en kilde fra Herrens hus og vanne Sittims dal. "},
	{24, "24 Egypten skal bli til en ødemark og Edom til en øde ørken for deres vold mot Judas barn, fordi de har utøst uskyldig blod i sitt land. "},
	{25, "25 Men Juda skal bli til evig tid, og Jerusalem fra slekt til slekt. "},
	{26, "26 Og jeg vil hevne deres blod, det som jeg ikke før har hevnet. Og Herren bor på Sion. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};