#include <map>
#include <string>
class Bible52
{
	struct sq1	{ int val; const char *msg; };
	struct sq2	{ int val; const char *msg; };
	struct sq3	{ int val; const char *msg; };
	struct sq4	{ int val; const char *msg; };
	struct sq5	{ int val; const char *msg; };
public:
static void view1() {
struct sq1 poems[] = {
	{1, "1 Ne përherë e falënderojmë Perëndinë për ju të gjithë, duke ju kujtuar në lutjet tona,"},
	{2, "2 duke kujtuar vazhdimisht veprën tuaj të besimit, mundimin e dashurisë suaj dhe qëndrueshmërinë e shpresës në Zotin tonë Jezu Krisht përpara Perëndisë, Atit tonë,"},
	{3, "3 duke ditur, vëllezër të dashur prej Perëndisë, të zgjedhurit tuaj,"},
	{4, "4 sepse ungjilli ynë nuk erdhi deri te ju vetëm me fjalë, por edhe me fuqi dhe me Frymë të Shenjtë, dhe me shumë bindje; ju e dini se si jemi sjellë në mes tuaj për hirin tuaj."},
	{5, "5 Dhe ju u bëtë imituesit tanë dhe të Zotit, duke e pranuar fjalën në mes të një pikëllimi të madh, me gëzimin e Frymës së Shenjtë,"},
	{6, "6 për t'u bërë kështu shëmbull për të gjithë besimtarët e Maqedonisë dhe të Akaisë."},
	{7, "7 Në fakt prej jush jehoi fjala e Perëndisë jo vetëm në Maqedoni dhe në Akai, por edhe në çdo vend u përhap besimi juaj tek Perëndia, sa që ne s'kemi nevojë të themi ndonjë gjë,"},
	{8, "8 sepse vetë ata tregojnë për ne, si qe ardhja jonë ndër ju si u kthyet nga idhujt te Perëndia, për t'i shërbyer Perëndisë së gjallë e të vërtetë,"},
	{9, "9 dhe për të pritur prej qiejve Birin e tij, të cilin ai e ngjalli prej së vdekurish, Jezusin, që na çliron nga zemërim që po vjen."},
	{10, "10 Sepse ju vetë, vëllezër, e dini se ardhja jonë ndër ju nuk qe e kotë."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sq2 poems[] = {
	{1, "1 Por, mbasi hoqëm më parë dhe mbasi na shanë në Filipi, sikurse e dini, ne morëm guxim në Perëndinë tonë të shpallim ndër ju ungjillin e Perëndisë midis kaq përpjekjesh."},
	{2, "2 Sepse nxitja jonë nuk vjen nga mashtrimi, as nga qëllime të pa ndershme, as nga dredhia;"},
	{3, "3 por, duke qenë se u miratuam prej Perëndisë që të na besohet ungjilli, kështu ne flasim jo që t'u pëlqejmë njerëzve, por Perëndisë, që provon zemrat tona."},
	{4, "4 Ne, pra, nuk kemi përdorur kurrë, sikurse e dini mirë, fjalë lajkatuese, dhe as nuk jemi nisur nga motive lakmie; Perëndia është dëshmitar."},
	{5, "5 Dhe nuk kemi kërkuar lavdi prej njerëzve, as prej jush, as prej të tjerësh, megjithëse mund t'ju bëheshim barrë si apostuj të Krishtit."},
	{6, "6 Përkundrazi qemë zemërbutë midis jush, ashtu si mëndesha që rrit me dashuri fëmijët e saj."},
	{7, "7 Kështu, duke pasur një dashuri të madhe ndaj jush, ishim të kënaqur duke ju komunikuar jo vetëm ungjillin e Perëndisë, por edhe vetë jetën tonë, sepse na u bëtë të dashur."},
	{8, "8 Sepse ju, o vëllezër, e mbani mend lodhjen dhe mundimin tonë: si kemi punuar ditë e natë që të mos i bëhemi barrë asnjërit prej jush, dhe predikuam ungjillin e Perëndisë ndër ju."},
	{9, "9 Ju jeni dëshmitarë, dhe Perëndia gjithashtu, si jemi sjellë me shenjtëri, me drejtësi, pa të meta, me ju që besoni."},
	{10, "10 Ju e dini gjithashtu se ne këshilluam, ngushëlluam dhe i jemi përbetuar secilit prej jush, si bën një baba me bijtë e vet,"},
	{11, "11 që të ecni denjësisht për Perëndinë, që ju thërret në mbretërinë dhe lavdinë e tij."},
	{12, "12 Prandaj edhe ne e falenderojmë pa pushim Perëndinë, se kur ju keni marrë nga ne fjalën e Perëndisë, e pritët atë jo si fjalë njerëzish, por, sikurse është me të vërtetë, si fjalë Perëndie, që vepron ndër ju që besoni."},
	{13, "13 Sepse ju, o vëllezër, u bëtë imituesit e kishave të Perëndisë që janë në Jude në Jezu Krishtin, sepse edhe ju keni vuajtur nga ana e bashkëkombasve tuaj të njëjtat gjëra, sikurse edhe ata kanë vuajtur nga Judenjtë,"},
	{14, "14 të cilët e vranë Zotin Jezus dhe profetët e tyre, dhe na përndoqën edhe ne. Ata nuk i pëlqen Perëndia, dhe janë armiq me të gjithë njerëzit,"},
	{15, "15 duke na penguar që t'u flasim johebrenjve që ata të shpëtohen, për ta mbushur vazhdimisht masën e mëkateve të tyre; por zemërimi arriti mbi ta më në fund."},
	{16, "16 Dhe ne, o vëllezër, mbasi mbetëm pa ju për një kohë të shkurtër, trupërisht por jo me zemër, u përpoqëm edhe më shumë, nga malli i madh, të shohim përsëri fytyrën tuaj."},
	{17, "17 Prandaj deshëm, të paktën unë Pali, të vijmë te ju jo një, por dy herë, por Satani na pengoi."},
	{18, "18 Cila në fakt është shpresa jonë, a gëzimi, a kurora e lavdisë? A nuk jeni pikërisht ju, përpara Zotit tonë Jezu Krisht në ardhjen e tij?"},
	{19, "19 Ju jeni në fakt lavdia dhe gëzimi jonë."},
	{20, "20 Prandaj, mbasi nuk mundëm më të rezistonim, na u duk e pëlqyeshme të të qëndrojmë, të vetëm, në Athinë,"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sq3 poems[] = {
	{1, "1 dhe dërguam Timoteun, vëllanë tonë dhe shërbenjës të Perëndisë, dhe bashkëpunëtorin tonë në predikimin e ungjillit të Krishtit, që t'ju fuqizojë dhe t'ju japë zemër në besimin tuaj,"},
	{2, "2 që të mos lëkundet askush në këto pikëllime, sepse ju e dini vetë se për këtë jemi caktuar."},
	{3, "3 Sepse, edhe kur ishim midis jush, ju parashikuam se do të heqim vështirësi, pikërisht sikurse ndodhi, dhe ju këtë e dini."},
	{4, "4 Për këtë arsye edhe unë, mbasi nuk rezistoja më, dërgova të marr vesh për besimin tuaj, se mos ju kishte tunduar tunduesi, dhe mundimi ynë të kishte shkuar kot."},
	{5, "5 Por tani që u kthye Timoteu prej jush dhe na solli lajme të mira për besimin dhe dashurinë tuaj, dhe se ju ruani gjithnjë një kujtim të mirë për ne dhe keni mall të madh që të na shihni, sikurse edhe ne t'ju shohim juve,"},
	{6, "6 prandaj, o vëllezër, ne u ngushëlluam për ju, me gjithë pikëllimin dhe vuajtjet tona, për hir të besimit tuaj,"},
	{7, "7 sepse tani rrojmë me të vërtetë, në qoftë se ju qëndroni të patundur në Zotin."},
	{8, "8 Sepse çfarë falënderimi mund t'i drejtojmë Perëndisë për ju, për gjithë gëzimin që ndiejmë për shkakun tuaj përpara Perëndisë sonë,"},
	{9, "9 duke u lutur shumë, natë e ditë, që të shohim fytyrën tuaj dhe të plotësojmë gjërat që ende i mungojnë besimit tuaj?"},
	{10, "10 Po vetë Perëndia, Ati ynë, dhe Zoti ynë Jezu Krishti e sheshoftë rrugën tonë për te ju."},
	{11, "11 Dhe Zoti shtoftë dhe teproftë në dashurinë për njeri tjetrin dhe për të gjithë, ashtu si edhe ne ndaj jush,"},
	{12, "12 për të bërë të pa tundura zemrat tuaja, pa të meta në shenjtëri përpara Perëndisë dhe Atit tonë, në ardhjen e Perëndisë sonë Jezu Krisht bashkë me gjithë shenjtorët e tij. Amen."},
	{13, "13 Sa për të tjerat, pra, vëllezër, ju lutemi dhe ju bëjmë thirrje në Zotin Jezus që, sikundër morët prej nesh se si duhet të ecni për t'i pëlqyer Perëndisë, kështu të teproni edhe më shumë."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sq4 poems[] = {
	{1, "1 Sepse ju e dini se ç'urdhërime ju lamë nga ana e Zotit Jezus."},
	{2, "2 Sepse ky është vullneti i Perëndisë: shenjtërimi juaj; të hiqni dorë nga kurvëria;"},
	{3, "3 që secili prej jush të dijë ta mbajë enën e vet në shenjtëri dhe me nder,"},
	{4, "4 jo me pasione epshi, si johebre që nuk e njohin Perëndinë,"},
	{5, "5 dhe që askush të mos mashtrojë ose t'ia hedhë në punë vëllait të vet, sepse Perëndia është hakmarrësi për të gjitha këto gjëra, sikurse edhe ju thamë më parë dhe e dëshmuam."},
	{6, "6 Sepse Perëndia nuk na thirri në ndyrësi, por në shenjtërim."},
	{7, "7 Prandaj ai që i përbuz këto gjëra, nuk përbuz një njeri, por Perëndinë që ju dha edhe Frymën e tij të Shenjtë."},
	{8, "8 Sa për dashurinë vëllazërore, nuk keni nevojë që t'ju shkruaj, sepse ju vetë jeni të mësuar nga Perëndia që të doni njeri tjetrin."},
	{9, "9 Sepse ju e bëni këtë ndaj gjithë vëllezërve që janë në gjithë Maqedoninë; por ne ju bëjmë thirrje, vëllezër, që në këtë të shtohemi edhe më shumë."},
	{10, "10 dhe të përpiqeni me kujdes të jetoni në paqe, të merreni me gjërat tuaja dhe të punoni me duart tuaja, ashtu si ju kemi urdhëruar,"},
	{11, "11 që të silleni me nder ndaj atyre që janë jashtë dhe të mos keni nevojë për asgjë."},
	{12, "12 Tashmë, vëllezër, nuk duam që të jeni në mosdije përsa u përket atyre që flenë, që të mos trishtoheni si të tjerët që nuk kanë shpresë."},
	{13, "13 Sepse, po të besojmë se Jezusi vdiq dhe u ringjall, besojmë gjithashtu që Perëndia do të sjellë me të, me anë të Jezusit, ata që kanë fjetur."},
	{14, "14 Dhe këtë po jua themi me fjalën e Zotit: ne të gjallët, që do të mbetemi deri në ardhjen e Zotit, nuk do të jemi përpara atyre që kanë fjetur,"},
	{15, "15 sepse Zoti vetë, me një urdhër, me zë kryeengjëlli dhe me borinë e Perëndisë, do të zbresë nga qielli dhe ata që vdiqën në Krishtin do të ringjallen të parët;"},
	{16, "16 pastaj ne të gjallët, që do të kemi mbetur, do të rrëmbehemi bashkë me ata mbi retë, për të dalë përpara Zotit në ajër; dhe kështu do të jemi përherë bashkë me Zotin."},
	{17, "17 Ngushëlloni, pra, njëri-tjetrin me këto fjalë."},
	{18, "18 Sa për kohët dhe për stinët, vëllezër, nuk keni nevojë që t'ju shkruaj,"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct sq5 poems[] = {
	{1, "1 sepse ju vetë e dini shumë mirë se dita e Zotit do të vijë, si një vjedhës natën."},
	{2, "2 Sepse, kur thonë: Paqe dhe siguri, atëherë një shkatërrim i papritur do të bjerë mbi ta, ashtu si dhembjet e lindjes të gruas shtatzënë dhe nuk do të shpëtojnë."},
	{3, "3 Por ju, vëllezër, nuk jeni në errësirë, që ajo ditë t'ju zërë në befasi si një vjedhës."},
	{4, "4 Të gjithë ju jeni bij të dritës dhe bij të ditës; ne nuk jemi të natës, as të territ."},
	{5, "5 Le të mos flemë, pra, si të tjerët, por të rrimë zgjuar dhe të jemi të esëll."},
	{6, "6 Sepse ata që flejnë, flejnë natën, dhe ata që dehen, dehen natën."},
	{7, "7 Kurse ne, mbasi jemi të ditës, jemi të esëll, duke veshur parzmoren e besimit dhe të dashurisë, dhe për përkrenare shpresën e shpëtimit."},
	{8, "8 Sepse Perëndia nuk na ka caktuar për zemërim, por për të marrë shpëtimin me anë të Zotit tonë Jezu Krisht,"},
	{9, "9 i cili vdiq për ne kështu që, qofshim zgjuar qofshim fjetur, jetojmë bashkë me të."},
	{10, "10 Prandaj ngushëlloni njeri tjetrin dhe ndërtoni njeri tjetrin ashtu sikur edhe bëni."},
	{11, "11 Tashmë, vëllezër, ju lutemi të keni respekt për ata që mundohen midis jush, që janë në krye ndër ju në Zotin dhe që ju qortojnë,"},
	{12, "12 edhe t'i vlerësoni shumë në dashuri për veprën e tyre. Jetoni në paqe midis jush."},
	{13, "13 Tani, vëllezër, ju bëjmë thirrje t'i qortoni të parregulltit, të ngushëlloni zemërlëshuarit, të ndihmoni të dobëtit dhe të jeni të duruar me të gjithë."},
	{14, "14 Vështroni se mos dikush t'ia kthejë dikujt të keqen me të keqen; po kërkoni gjithmonë të mirën edhe te njeri tjetri edhe te të gjithë."},
	{15, "15 Jini gjithmonë të gëzuar."},
	{16, "16 Lutuni pa pushim."},
	{17, "17 Për çdo gjë falënderoni sepse i tillë është vullneti i Perëndisë në Krishtin Jezus për ju."},
	{18, "18 Mos e shuani Frymën."},
	{19, "19 Mos i përbuzni profecitë."},
	{20, "20 Provoni të gjitha, mbani të mirën."},
	{21, "21 Hiqni dorë nga çdo dukje e ligë."},
	{22, "22 Dhe Perëndia i paqes ju shenjtëroftë ai vetë tërësisht; dhe gjithë fryma juaj, shpirt e trup, të ruhet pa të metë për ardhjen e Zotit tonë Jezu Krisht."},
	{23, "23 Besnik është ai që ju thërret, i cili edhe do ta bëjë."},
	{24, "24 Vëllezër, lutuni për ne."},
	{25, "25 Përshëndetni të gjithë vëllezërit me puthje të shenjtë."},
	{26, "26 Ju përbetoj për Zotin që kjo letër t'u lexohet gjithë vëllezërve të shenjtë."},
	{27, "27 Hiri i Zotit tonë Jezu Krisht qoftë me ju. Amen."},
	{28, "28 Pali, Silvani dhe Timoteu, kishës së Thesalonikasve, që është në Perëndinë, Atin tonë, dhe në Zotin Jezu Krisht:"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};