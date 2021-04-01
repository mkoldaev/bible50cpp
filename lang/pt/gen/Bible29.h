#include <map>
#include <string>
class Bible29
{
	struct pt1	{ int val; const char *msg; };
	struct pt2	{ int val; const char *msg; };
	struct pt3	{ int val; const char *msg; };
public:
static void view1() {
struct pt1 poems[] = {
	{1, "1 Palavra do Senhor, que foi dirigida a Joel, filho de Petuel."},
	{2, "2 Ouvi isto, vós anciãos, e escutai, todos os moradores da terra: Aconteceu isto em vossos dias, ou nos dias de vossos pais?"},
	{3, "3 Fazei sobre isto uma narração a vossos filhos, e vossos filhos a transmitam a seus filhos, e os filhos destes à geração seguinte."},
	{4, "4 O que a locusta cortadora deixou, a voadora o comeu; e o que a voadora deixou, a devoradora o comeu; e o que a devoradora deixou, a destruidora o comeu."},
	{5, "5 Despertai, bêbedos, e chorai; gemei, todos os que bebeis vinho, por causa do mosto; porque tirado é da vossa boca."},
	{6, "6 Porque sobre a minha terra é vinda uma nação poderosa e inumerável. os seus dentes são dentes de leão, e têm queixadas de uma leoa."},
	{7, "7 Fez da minha vide uma assolação, e tirou a casca à minha figueira; despiu-a toda, e a lançou por terra; os seus sarmentos se embranqueceram."},
	{8, "8 Lamenta como a virgem que está cingida de saco, pelo marido da sua mocidade."},
	{9, "9 Está cortada da casa do Senhor a oferta de cereais e a libação; os sacerdotes, ministros do Senhor, estão entristecidos."},
	{10, "10 O campo está assolado, e a terra chora; porque o trigo está destruído, o mosto se secou, o azeite falta."},
	{11, "11 Envergonhai-vos, lavradores, uivai, vinhateiros, sobre o trigo e a cevada; porque a colheita do campo pereceu."},
	{12, "12 A vide se secou, a figueira se murchou; a romeira também, e a palmeira e a macieira, sim, todas as árvores do campo se secaram; e a alegria esmoreceu entre os filhos dos homens."},
	{13, "13 Cingi-vos de saco e lamentai-vos, sacerdotes; uivai, ministros do altar; entrai e passai a noite vestidos de saco, ministros do meu Deus; porque foi cortada da casa do vosso Deus a oferta de cereais e a libação."},
	{14, "14 Santificai um jejum, convocai uma assembléia solene, congregai os anciãos, e todos os moradores da terra, na casa do Senhor vosso Deus, e clamai ao Senhor."},
	{15, "15 Ai do dia! pois o dia do senhor está perto, e vem como assolação da parte do Todo-Poderoso."},
	{16, "16 Porventura não está cortado o mantimento de diante de nossos olhos? a alegria e o regozijo da casa do nosso Deus?"},
	{17, "17 A semente mirrou debaixo dos seus torrões; os celeiros estão desolados, os armazéns arruinados; porque falharam os cereais."},
	{18, "18 Como geme o gado! As manadas de vacas estão confusas, porque não têm pasto; também os rebanhos de ovelhas estão desolados."},
	{19, "19 A ti clamo, ó Senhor; porque o fogo consumiu os pastos do deserto, e a chama abrasou todas as árvores do campo."},
	{20, "20 Até os animais do campo suspiram por ti; porque as correntes d'água se secaram, e o fogo consumiu os pastos do deserto."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pt2 poems[] = {
	{1, "1 Tocai a trombeta em Sião, e dai o alarma no meu santo monte. Tremam todos os moradores da terra, porque vem vindo o dia do Senhor; já está perto;"},
	{2, "2 dia de trevas e de escuridão, dia de nuvens e de negrume! Como a alva, está espalhado sobre os montes um povo grande e poderoso, qual nunca houve, nem depois dele haverá pelos anos adiante, de geração em geração:"},
	{3, "3 Diante dele um fogo consome, e atrás dele uma chama abrasa; a terra diante dele é como o jardim do Édem mas atrás dele um desolado deserto; sim, nada lhe escapa."},
	{4, "4 A sua aparência é como a de cavalos; e como cavaleiros, assim correm."},
	{5, "5 Como o estrondo de carros sobre os cumes dos montes vão eles saltando, como o ruído da chama de fogo que consome o restelho, como um povo poderoso, posto em ordem de batalha."},
	{6, "6 Diante dele estão angustiados os povos; todos os semblantes empalidecem."},
	{7, "7 Correm como valentes, como homens de guerra sobem os muros; e marcham cada um nos seus caminhos e não se desviam da sua fileira."},
	{8, "8 Não empurram uns aos outros; marcham cada um pelo seu carreiro; abrem caminho por entre as armas, e não se detêm."},
	{9, "9 Pulam sobre a cidade, correm pelos muros; sobem nas casas; entram pelas janelas como o ladrão."},
	{10, "10 Diante deles a terra se abala; tremem os céus; o sol e a lua escurecem, e as estrelas retiram o seu resplendor."},
	{11, "11 E o Senhor levanta a sua voz diante do seu exército, porque muito grande é o seu arraial; e poderoso é quem executa a sua ordem; pois o dia do Senhor é grande e muito terrível, e quem o poderá suportar?"},
	{12, "12 Todavia ainda agora diz o Senhor: Convertei-vos a mim de todo o vosso coração; e isso com jejuns, e com choro, e com pranto."},
	{13, "13 E rasgai o vosso coração, e não as vossas vestes; e convertei-vos ao Senhor vosso Deus; porque ele é misericordioso e compassivo, tardio em irar-se e grande em benignidade, e se arrepende do mal."},
	{14, "14 Quem sabe se não se voltará e se arrependerá, e deixará após si uma bênção, em oferta de cereais e libação para o Senhor vosso Deus?"},
	{15, "15 Tocai a trombeta em Sião, santificai um jejum, convocai uma assembléia solene;"},
	{16, "16 congregai o povo, santificai a congregação, ajuntai os anciãos, congregai os meninos, e as crianças de peito; saia o noivo da sua recâmara, e a noiva do seu tálamo."},
	{17, "17 Chorem os sacerdotes, ministros do Senhor, entre o alpendre e o altar, e digam: Poupa a teu povo, ó Senhor, e não entregues a tua herança ao opróbrio, para que as nações façam escárnio dele. Por que diriam entre os povos: Onde está o seu Deus?"},
	{18, "18 Então o Senhor teve zelo da sua terra, e se compadeceu do seu povo."},
	{19, "19 E o Senhor, respondende, disse ao seu povo: Eis que vos envio o trigo, o vinho e o azeite, e deles sereis fartos; e vos não entregarei mais ao opróbrio entre as nações;"},
	{20, "20 e removerei para longe de vós o exército do Norte, e o lançarei para uma terra seca e deserta, a sua frente para o mar oriental, e a sua retaguarda para o mar ocidental; subirá o seu mau cheiro, e subirá o seu fedor, porque ele tem feito grandes coisas."},
	{21, "21 Não temas, ó terra; regozija-te e alegra-te, porque o Senhor tem feito grandes coisas."},
	{22, "22 Não temais, animais do campo; porque os pastos do deserto já reverdecem, porque a árvore dá o seu fruto, e a vide e a figueira dão a sua força."},
	{23, "23 Alegrai-vos, pois, filhos de Sião, e regozijai-vos no Senhor vosso Deus; porque ele vos dá em justa medida a chuva temporã, e faz descer abundante chuva, a temporã e a serôdia, como dantes."},
	{24, "24 E as eiras se encherão de trigo, e os lagares trasbordarão de mosto e de azeite."},
	{25, "25 Assim vos restituirei os anos que foram consumidos pela locusta voadora, a devoradora, a destruidora e a cortadora, o meu grande exército que enviei contra vós."},
	{26, "26 Comereis abundantemente e vos fartareis, e louvareis o nome do Senhor vosso Deus, que procedeu para convosco maravilhosamente; e o meu povo nunca será envergonhado."},
	{27, "27 Vós, pois, sabereis que eu estou no meio de Israel, e que eu sou o Senhor vosso Deus, e que não há outro; e o meu povo nunca mais será envergonhado."},
	{28, "28 Acontecerá depois que derramarei o meu Espírito sobre toda a carne; vossos filhos e vossas filhas profetizarão, os vossos anciãos terão sonhos, os vossos mancebos terão visões;"},
	{29, "29 e também sobre os servos e sobre as servas naqueles dias derramarei o meu Espírito."},
	{30, "30 E mostrarei prodígios no céu e na terra, sangue e fogo, e colunas de fumaça."},
	{31, "31 O sol se converterá em trevas, e a lua em sangue, antes que venha o grande e terrível dia do Senhor."},
	{32, "32 E há de ser que todo aquele que invocar o nome do Senhor será salvo; pois no monte Sião e em Jerusalém estarão os que escaparem, como disse o Senhor, e entre os sobreviventes aqueles que o Senhor chamar."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pt3 poems[] = {
	{1, "1 Pois eis que naqueles dias, e naquele tempo, em que eu restaurar os exilados de Judá e de Jerusalém,"},
	{2, "2 congregarei todas as nações, e as farei descer ao vale de Jeosafá; e ali com elas entrarei em juízo, por causa do meu povo, e da minha herança, Israel, a quem elas espalharam por entre as nações; repartiram a minha terra,"},
	{3, "3 e lançaram sortes sobre o meu povo; deram um menino por uma meretriz, e venderam uma menina por vinho, para beberem."},
	{4, "4 E também que tendes vós comigo, Tiro e Sidom, e todas as regiões da Filístia? Acaso quereis vingar-vos de mim? Se assim vos quereis vingar, bem depressa retribuirei o vosso feito sobre a vossa cabeça."},
	{5, "5 Visto como levastes a minha prata e o meu ouro, e os meus ricos tesouros metestes nos vossos templos;"},
	{6, "6 também vendestes os filhos de Judá e os filhos de Jerusalém aos filhos dos gregos, para os apartar para longe dos seus termos;"},
	{7, "7 eis que eu os suscitarei do lugar para onde os vendestes, e retribuirei o vosso feito sobre a vossa cabeça;"},
	{8, "8 pois venderei vossos filhos e vossas filhas na mão dos filhos de Judá, e estes os venderão aos sabeus, a uma nação remota, porque o Senhor o disse."},
	{9, "9 Proclamai isto entre as nações: Preparai a guerra, suscitai os valentes. Cheguem-se todos os homens de guerra, subam eles todos."},
	{10, "10 Forjai espadas das relhas dos vossos arados, e lanças das vossas podadeiras; diga o fraco: Eu sou forte."},
	{11, "11 Apressai-vos, e vinde, todos os povos em redor, e ajuntai- vos; para ali, ó Senhor, faze descer os teus valentes."},
	{12, "12 Suscitem-se as nações, e subam ao vale de Jeosafá; pois ali me assentarei, para julgar todas as nações em redor."},
	{13, "13 Lançai a foice, porque já está madura a seara; vinde, descei, porque o lagar está cheio, os vasos dos lagares trasbordam, porquanto a sua malícia é grande."},
	{14, "14 Multidões, multidões no vale da decisão! porque o dia do Senhor está perto, no vale da decisão."},
	{15, "15 O sol e a lua escurecem, e as estrelas retiram o seu resplendor."},
	{16, "16 E o Senhor brama de Sião, e de Jerusalém faz ouvir a sua voz; os céus e a terra tremem, mas o Senhor é o refúgio do seu povo, e a fortaleza dos filhos de Israel."},
	{17, "17 Assim vós sabereis que eu sou o Senhor vosso Deus, que habito em Sião, o meu santo monte; Jerusalém será santa, e estranhos não mais passarão por ela."},
	{18, "18 E naquele dia os montes destilarão mosto, e os outeiros manarão leite, e todos os ribeiros de Judá estarão cheios de águas; e sairá uma fonte da casa do Senhor, e regará o vale de Sitim."},
	{19, "19 O Egito se tornará uma desolação, e Edom se fará um deserto assolado, por causa da violência que fizeram aos filhos de Judá, em cuja terra derramaram sangue inocente."},
	{20, "20 Mas Judá será habitada para sempre, e Jerusalém de geração em geração."},
	{21, "21 E purificarei o sangue que eu não tinha purificado; porque o Senhor habita em Sião."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};