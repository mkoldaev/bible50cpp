#include <map>
#include <string>
class Bible22
{
	struct hu1	{ int val; const char *msg; };
	struct hu2	{ int val; const char *msg; };
	struct hu3	{ int val; const char *msg; };
	struct hu4	{ int val; const char *msg; };
	struct hu5	{ int val; const char *msg; };
	struct hu6	{ int val; const char *msg; };
	struct hu7	{ int val; const char *msg; };
	struct hu8	{ int val; const char *msg; };
public:
static void view1() {
struct hu1 poems[] = {
	{1, "1 Énekek éneke, mely Salamoné."},
	{2, "2 Csókoljon meg engem az õ szájának csókjaival;"},
	{3, "3 A te drága kenetid jók illatozásra;"},
	{4, "4 Vonj engemet te utánad, hadd fussunk!"},
	{5, "5 Fekete vagyok, de szép, Jeruzsálem leányai;"},
	{6, "6 Ne nézzetek engem, hogy én fekete vagyok, hogy a nap lesütött engem;"},
	{7, "7 Mondd meg nékem, [te,] a kit az én lelkem szeret,"},
	{8, "8 Mivelhogy nem tudod, oh asszonyok között legszebb!"},
	{9, "9 A Faraó szekereiben való paripákhoz hasonlítlak téged, én mátkám."},
	{10, "10 Szépek a te orczáid a [halántékra való] lánczokban,"},
	{11, "11 Arany lánczokat csinálunk néked,"},
	{12, "12 Mikor a király az õ asztalánál ül,"},
	{13, "13 [Olyan] az én szerelmesem nékem, mint egy kötés mirha,"},
	{14, "14 [Mint] az Engedi szõlõiben a cziprusfürt,"},
	{15, "15 Ímé, szép vagy én mátkám, ímé, szép vagy,"},
	{16, "16 Ímé, te [is] szép vagy én szerelmesem, gyönyörûséges,"},
	{17, "17 A mi házainknak gerendái czédrusfák,"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct hu2 poems[] = {
	{1, "1 Én Sáronnak rózsája [vagyok,] és a völgyek lilioma."},
	{2, "2 Mint a liliom a tövisek közt,"},
	{3, "3 Mint az almafa az erdõnek fái közt,"},
	{4, "4 Bevisz engem a borozó házba,"},
	{5, "5 Erõsítsetek engem szõlõvel,"},
	{6, "6 Az õ balkeze az én fejem alatt van,"},
	{7, "7 Kényszerítlek titeket, Jeruzsálemnek leányai,"},
	{8, "8 Az én szerelmesemnek szavát [hallom], ímé, õ jõ,"},
	{9, "9 Hasonlatos az én szerelmesem az õzhöz, vagy a szarvasoknak fiához."},
	{10, "10 Szóla az én szerelmesem nékem, és monda:"},
	{11, "11 Mert ímé a tél elmult,"},
	{12, "12 Virágok láttatnak a földön,"},
	{13, "13 A fügefa érleli elsõ gyümölcsét,"},
	{14, "14 Én galambom, a kõsziklának hasadékiban,"},
	{15, "15 Fogjátok meg nékünk a rókákat, a rókafiakat,"},
	{16, "16 Az én szerelmesem enyém, és én az övé,"},
	{17, "17 Míglen meghûsül a nap és az árnyékok elmúlnak:"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct hu3 poems[] = {
	{1, "1 Az én ágyasházamban éjjeleken keresém azt, a kit szeret az én lelkem,"},
	{2, "2 Immár felkelek és eljárom a várost,"},
	{3, "3 Megtalálának engem az õrizõk, a kik a várost kerülik. [Mondék nékik:]"},
	{4, "4 Alig mentem vala el azoktól,"},
	{5, "5 Kényszerítelek titeket, Jeruzsálemnek leányai,"},
	{6, "6 Kicsoda az, a ki feljõ a pusztából,"},
	{7, "7 Ímé, ez a Salamon gyaloghintaja,"},
	{8, "8 Mindnyájan fegyverfogók, hadakozásban bölcsek,"},
	{9, "9 Hálóágyat csinált magának Salamon király"},
	{10, "10 Oszlopait ezüstbõl csinálta,"},
	{11, "11 Jõjjetek ki, és nézzétek, Sionnak leányai,"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct hu4 poems[] = {
	{1, "1 Ímé szép vagy, én mátkám, ímé szép vagy,"},
	{2, "2 A te fogaid hasonlók a megnyirt [juhok] nyájához,"},
	{3, "3 Mint a karmazsin czérna, a te ajkaid,"},
	{4, "4 Hasonló a te nyakad a Dávid tornyához,"},
	{5, "5 A te két emlõd [olyan,] mint két vadkecske,"},
	{6, "6 Míg meghûsül a nap, és elmulnak az árnyékok,"},
	{7, "7 Mindenestõl szép vagy, én mátkám,"},
	{8, "8 Én velem a Libánusról, én jegyesem,"},
	{9, "9 Megsebesítetted az én szívemet, én húgom, jegyesem,"},
	{10, "10 Mely igen szépek a te szerelmeid, én húgom, jegyesem!"},
	{11, "11 Színmézet csepegnek a te ajkaid, én jegyesem,"},
	{12, "12 [Olyan, mint a] berekesztett kert az én húgom, jegyesem!"},
	{13, "13 A te csemetéid gránátalmás kert,"},
	{14, "14 Nárdus és sáfrány, jóillatú nád és fahéj,"},
	{15, "15 Kerteknek forrása, élõ vizeknek kútfeje,"},
	{16, "16 Serkenj fel északi szél, és jõjj el déli szél,"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct hu5 poems[] = {
	{1, "1 Bementem az én kertembe, én húgom, jegyesem,"},
	{2, "2 Én elaludtam, de lelkemben vigyázok vala,"},
	{3, "3 [Felelék én:] Levetettem ruhámat,"},
	{4, "4 Az én szerelmesem kezét benyujtá az [ajtónak] hasadékán,"},
	{5, "5 Felkelék én, hogy az én szerelmesemnek megnyissam,"},
	{6, "6 Megnyitám az én szerelmesemnek;"},
	{7, "7 Megtalálának engem az õrizõk, a kik a várost kerülik,"},
	{8, "8 Kényszerítelek titeket, Jeruzsálemnek leányai,"},
	{9, "9 Micsoda a te szerelmesed [egyéb] szerelmesek felett,"},
	{10, "10 Az én szerelmesem fejér és piros,"},
	{11, "11 Az õ feje, [mint a] választott drága megtisztított arany;"},
	{12, "12 Az õ szemei mint a vízfolyás mellett való galambok,"},
	{13, "13 Az õ orczája hasonlatos a drága füveknek táblájához,"},
	{14, "14 Az õ kezei aranyhengerek;"},
	{15, "15 Az õ szárai márványoszlopok;"},
	{16, "16 Az õ ínye édességek,"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct hu6 poems[] = {
	{1, "1 Szép vagy én mátkám, mint Tirsa [városa,]"},
	{2, "2 Fordítsd el a te szemeidet én tõlem,"},
	{3, "3 A te fogaid hasonlók a juhok nyájához,"},
	{4, "4 Mint a pomagránát darabja a te vakszemed,"},
	{5, "5 Hatvanan vannak a királynék,"},
	{6, "6 És az én galambom, az én tökéletesem,"},
	{7, "7 Kicsoda az, a ki úgy láttatik mintegy hajnal,"},
	{8, "8 A diófás kertekbe mentem vala alá,"},
	{9, "9 Nem tudtam, hogy az én elmém ültete engem"},
	{10, "10 Térj meg, oh Sulamit!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct hu7 poems[] = {
	{1, "1 Oh mely szépek a te lépéseid a sarukban,"},
	{2, "2 A te köldököd, mint a kerekded csésze,"},
	{3, "3 A te két emlõd, [mint] két õzike,"},
	{4, "4 A te nyakad, mint az elefánttetembõl csinált torony;"},
	{5, "5 A te fejed hasonló rajtad a Kármelhez,"},
	{6, "6 Mely igen szép vagy és mely kedves,"},
	{7, "7 Ez a te termeted hasonló a pálmafához,"},
	{8, "8 Azt mondám: felhágok a pálmafára,"},
	{9, "9 És a te ínyed, mint a legjobb bor,"},
	{10, "10 Én az én szerelmesemé vagyok,"},
	{11, "11 No, én szerelmesem, menjünk ki a mezõre,"},
	{12, "12 Felkelvén menjünk a szõlõkbe,"},
	{13, "13 A mandragórák illatoznak,"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct hu8 poems[] = {
	{1, "1 Vajha lennél nékem én atyámfia, ki az én anyámnak emlõjét szopta,"},
	{2, "2 Elvinnélek, bevinnélek anyámnak házába,"},
	{3, "3 Az õ balkeze az én fejem alatt,"},
	{4, "4 Kényszerítlek titeket, Jeruzsálemnek leányai,"},
	{5, "5 Kicsoda ez a ki feljõ a pusztából,"},
	{6, "6 Tégy engem mintegy pecsétet a te szívedre,"},
	{7, "7 Sok vizek el nem olthatnák e szeretetet:"},
	{8, "8 Kicsiny húgunk van nékünk,"},
	{9, "9 Ha õ kõfal,"},
	{10, "10 [Mikor] én [olyan leszek, mint] a kõfal,"},
	{11, "11 Szõlõje volt Salamonnak Baálhamonban,"},
	{12, "12 Az én szõlõmre, mely én reám néz, nékem gondom lesz:"},
	{13, "13 Oh te, a ki lakol a kertekben!"},
	{14, "14 Fuss én szerelmesem,"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};