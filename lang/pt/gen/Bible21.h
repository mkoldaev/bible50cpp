#include <map>
#include <string>
class Bible21
{
	struct pt1	{ int val; const char *msg; };
	struct pt2	{ int val; const char *msg; };
	struct pt3	{ int val; const char *msg; };
	struct pt4	{ int val; const char *msg; };
	struct pt5	{ int val; const char *msg; };
	struct pt6	{ int val; const char *msg; };
	struct pt7	{ int val; const char *msg; };
	struct pt8	{ int val; const char *msg; };
	struct pt9	{ int val; const char *msg; };
	struct pt10	{ int val; const char *msg; };
	struct pt11	{ int val; const char *msg; };
	struct pt12	{ int val; const char *msg; };
public:
static void view1() {
struct pt1 poems[] = {
	{1, "1 Palavras do pregador, filho de Davi, rei em Jerusalém."},
	{2, "2 Vaidade de vaidades, diz o pregador; vaidade de vaidades, tudo é vaidade."},
	{3, "3 Que proveito tem o homem, de todo o seu trabalho, com que se afadiga debaixo do sol?"},
	{4, "4 Uma geração vai-se, e outra geração vem, mas a terra permanece para sempre."},
	{5, "5 O sol nasce, e o sol se põe, e corre de volta ao seu lugar donde nasce."},
	{6, "6 O vento vai para o sul, e faz o seu giro vai para o norte; volve-se e revolve-se na sua carreira, e retoma os seus circuitos."},
	{7, "7 Todos os ribeiros vão para o mar, e contudo o mar não se enche; ao lugar para onde os rios correm, para ali continuam a correr."},
	{8, "8 Todas as coisas estão cheias de cansaço; ninguém o pode exprimir: os olhos não se fartam de ver, nem os ouvidos se enchem de ouvir."},
	{9, "9 O que tem sido, isso é o que há de ser; e o que se tem feito, isso se tornará a fazer; nada há que seja novo debaixo do sol."},
	{10, "10 Há alguma coisa de que se possa dizer: Voê, isto é novo? ela já existiu nos séculos que foram antes de nós."},
	{11, "11 Já não há lembrança das gerações passadas; nem das gerações futuras haverá lembrança entre os que virão depois delas."},
	{12, "12 Eu, o pregador, fui rei sobre Israel em Jerusalém."},
	{13, "13 E apliquei o meu coração a inquirir e a investigar com sabedoria a respeito de tudo quanto se faz debaixo do céu; essa enfadonha ocupação deu Deus aos filhos dos homens para nela se exercitarem."},
	{14, "14 Atentei para todas as obras que se e fazem debaixo do sol; e eis que tudo era vaidade e desejo vão."},
	{15, "15 O que é torto não se pode endireitar; o que falta não se pode enumerar."},
	{16, "16 Falei comigo mesmo, dizendo: Eis que eu me engrandeci, e sobrepujei em sabedoria a todos os que houve antes de mim em Jerusalém; na verdade, tenho tido larga experiência da sabedoria e do conhecimento."},
	{17, "17 E apliquei o coração a conhecer a sabedoria e a conhecer os desvarios e as loucuras; e vim a saber que também isso era desejo vao."},
	{18, "18 Porque na muita sabedoria há muito enfado; e o que aumenta o conhecimento aumenta a tristeza."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pt2 poems[] = {
	{1, "1 Disse eu a mim mesmo: Ora vem, eu te provarei com a alegria; portanto goza o prazer; mas eis que também isso era vaidade."},
	{2, "2 Do riso disse: Está doido; e da alegria: De que serve estar."},
	{3, "3 Busquei no meu coração como estimular com vinho a minha carne, sem deixar de me guiar pela sabedoria, e como me apoderar da estultícia, até ver o que era bom que os filhos dos homens fizessem debaixo do céu, durante o número dos dias de sua vida."},
	{4, "4 Fiz para mim obras magníficas: edifiquei casas, plantei vinhas;"},
	{5, "5 fiz hortas e jardins, e plantei neles árvores frutíferas de todas as espécies."},
	{6, "6 Fiz tanques de águas, para deles regar o bosque em que reverdeciam as árvores."},
	{7, "7 Comprei servos e servas, e tive servos nascidos em casa; também tive grandes possessões de gados e de rebanhos, mais do que todos os que houve antes de mim em Jerusalém."},
	{8, "8 Ajuntei também para mim prata e ouro, e tesouros dos reis e das províncias; provi-me de cantores e cantoras, e das delícias dos filhos dos homens, concubinas em grande número."},
	{9, "9 Assim me engrandeci, e me tornei mais rico do que todos os que houve antes de mim em Jerusalém; perseverou também comigo a minha sabedoria."},
	{10, "10 E tudo quanto desejaram os meus olhos não lho neguei, nem privei o meu coração de alegria alguma; pois o meu coração se alegrou por todo o meu trabalho, e isso foi o meu proveito de todo o meu trabalho."},
	{11, "11 Então olhei eu para todas as obras que as minhas mãos haviam feito, como também para o trabalho que eu aplicara em fazê-las; e eis que tudo era vaidade e desejo vão, e proveito nenhum havia debaixo do sol."},
	{12, "12 Virei-me para contemplar a sabedoria, e a loucura, e a estultícia; pois que fará o homem que seguir ao rei? O mesmo que já se fez!"},
	{13, "13 Então vi eu que a sabedoria é mais excelente do que a estultícia, quanto a luz é mais excelente do que as trevas."},
	{14, "14 Os olhos do sábio estão na sua cabeça, mas o louco anda em trevas; contudo percebi que a mesma coisa lhes sucede a ambos."},
	{15, "15 Pelo que eu disse no meu coração: Como acontece ao estulto, assim me sucederá a mim; por que então busquei eu mais a sabedoria; Então respondi a mim mesmo que também isso era vaidade."},
	{16, "16 Pois do sábio, bem como do estulto, a memória não durará para sempre; porquanto de tudo, nos dias futuros, total esquecimento haverá. E como morre o sábio, assim morre o estulto!"},
	{17, "17 Pelo que aborreci a vida, porque a obra que se faz debaixo do sol me era penosa; sim, tudo é vaidade e desejo vão."},
	{18, "18 Também eu aborreci todo o meu trabalho em que me afadigara debaixo do sol, visto que tenho de deixá-lo ao homem que virá depois de mim."},
	{19, "19 E quem sabe se será sábio ou estulto? Contudo, ele se assenhoreará de todo o meu trabalho em que me afadiguei, e em que me houve sabiamente debaixo do sol; também isso é vaidade."},
	{20, "20 Pelo que eu me volvi e entreguei o meu coração ao desespero no tocante a todo o trabalho em que me afadigara debaixo do sol."},
	{21, "21 Porque há homem cujo trabalho é feito com sabedoria, e ciência, e destreza; contudo, deixará o fruto do seu labor para ser porção de quem não trabalhou nele; também isso é vaidade e um grande mal."},
	{22, "22 Pois, que alcança o homem com todo o seu trabalho e com a fadiga em que ele anda trabalhando debaixo do sol?"},
	{23, "23 Porque todos os seus dias são dores, e o seu trabalho é vexação; nem de noite o seu coração descansa. Também isso é vaidade."},
	{24, "24 Não há nada melhor para o homem do que comer e beber, e fazer que a sua alma goze do bem do seu trabalho. Vi que também isso vem da mão de Deus."},
	{25, "25 Pois quem pode comer, ou quem pode gozar. melhor do que eu?"},
	{26, "26 Porque ao homem que lhe agrada, Deus dá sabedoria, e conhecimento, e alegria; mas ao pecador dá trabalho, para que ele ajunte e amontoe, a fim de dá-lo àquele que agrada a Deus: Também isso é vaidade e desejo vão."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pt3 poems[] = {
	{1, "1 Tudo tem a sua ocasião própria, e há tempo para todo propósito debaixo do céu."},
	{2, "2 Há tempo de nascer, e tempo de morrer; tempo de plantar, e tempo de arrancar o que se plantou;"},
	{3, "3 tempo de matar, e tempo de curar; tempo de derribar, e tempo de edificar;"},
	{4, "4 tempo de chorar, e tempo de rir; tempo de prantear, e tempo de dançar;"},
	{5, "5 tempo de espalhar pedras, e tempo de ajuntar pedras; tempo de abraçar, e tempo de abster-se de abraçar;"},
	{6, "6 tempo de buscar, e tempo de perder; tempo de guardar, e tempo de deitar fora;"},
	{7, "7 tempo de rasgar, e tempo de coser; tempo de estar calado, e tempo de falar;"},
	{8, "8 tempo de amar, e tempo de odiar; tempo de guerra, e tempo de paz."},
	{9, "9 Que proveito tem o trabalhador naquilo em que trabalha?"},
	{10, "10 Tenho visto o trabalho penoso que Deus deu aos filhos dos homens para nele se exercitarem."},
	{11, "11 Tudo fez formoso em seu tempo; também pôs na mente do homem a idéia da eternidade, se bem que este não possa descobrir a obra que Deus fez desde o princípio até o fim."},
	{12, "12 Sei que não há coisa melhor para eles do que se regozijarem e fazerem o bem enquanto viverem;"},
	{13, "13 e também que todo homem coma e beba, e goze do bem de todo o seu trabalho é dom de Deus."},
	{14, "14 Eu sei que tudo quanto Deus faz durará eternamente; nada se lhe pode acrescentar, e nada se lhe pode tirar; e isso Deus faz para que os homens temam diante dele:"},
	{15, "15 O que é, já existiu; e o que há de ser, também já existiu; e Deus procura de novo o que ja se passou."},
	{16, "16 Vi ainda debaixo do sol que no lugar da retidão estava a impiedade; e que no lugar da justiça estava a impiedade ainda."},
	{17, "17 Eu disse no meu coração: Deus julgará o justo e o ímpio; porque há um tempo para todo propósito e para toda obra."},
	{18, "18 Disse eu no meu coração: Isso é por causa dos filhos dos homens, para que Deus possa prová-los, e eles possam ver que são em si mesmos como os brutos."},
	{19, "19 Pois o que sucede aos filhos dos homens, isso mesmo também sucede aos brutos; uma e a mesma coisa lhes sucede; como morre um, assim morre o outro; todos têm o mesmo fôlego; e o homem não tem vantagem sobre os brutos; porque tudo é vaidade."},
	{20, "20 Todos vão para um lugar; todos são pó, e todos ao pó tornarão."},
	{21, "21 Quem sabe se o espírito dos filhos dos homens vai para cima, e se o espírito dos brutos desce para a terra?"},
	{22, "22 Pelo que tenho visto que não há coisa melhor do que alegrar-se o homem nas suas obras; porque esse é o seu quinhão; pois quem o fará voltar para ver o que será depois dele?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct pt4 poems[] = {
	{1, "1 Depois volvi-me, e atentei para todas as opressões que se fazem debaixo do sol; e eis as lágrimas dos oprimidos, e eles não tinham consolador; do lado dos seus opressores havia poder; mas eles não tinham consolador."},
	{2, "2 Pelo que julguei mais felizes os que já morreram, do que os que vivem ainda."},
	{3, "3 E melhor do que uns e outros é aquele que ainda não é, e que não viu as más obras que se fazem debaixo do sol."},
	{4, "4 Também vi eu que todo trabalho e toda destreza em obras provêm da inveja que o homem tem do seu próximo. Também isso é e vaidade e desejo vão."},
	{5, "5 O tolo cruza as mãos, e come a sua; própria carne."},
	{6, "6 Melhor é um punhado com tranqüilidade do que ambas as mãos cheias com trabalho e vão desejo."},
	{7, "7 Outra vez me volvi, e vi vaidade debaixo do sol."},
	{8, "8 Há um que é só, não tendo parente; não tem filho nem irmão e, contudo, de todo o seu trabalho não há fim, nem os seus olhos se fartam de riquezas. E ele não pergunta: Para quem estou trabalhando e privando do bem a minha alma? Também isso é vaidade a e enfadonha ocupação."},
	{9, "9 Melhor é serem dois do que um, porque têm melhor paga do seu trabalho."},
	{10, "10 Pois se caírem, um levantará o seu companheiro; mas ai do que estiver só, pois, caindo, não haverá outro que o levante."},
	{11, "11 Também, se dois dormirem juntos, eles se aquentarão; mas um só como se aquentará?"},
	{12, "12 E, se alguém quiser prevalecer contra um, os dois lhe resistirão; e o cordão de três dobras não se quebra tão depressa."},
	{13, "13 Melhor é o mancebo pobre e sábio do que o rei velho e insensato, que não se deixa mais admoestar,"},
	{14, "14 embora tenha saído do cárcere para reinar, ou tenha nascido pobre no seu próprio reino."},
	{15, "15 Vi a todos os viventes que andavam debaixo do sol, e eles estavam com o mancebo, o sucessor, que havia de ficar no lugar do rei."},
	{16, "16 Todo o povo, à testa do qual se achava, era inumerável; contudo os que lhe sucederam não se regozijarão a respeito dele. Na verdade também isso é vaidade e desejo vão."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct pt5 poems[] = {
	{1, "1 Guarda o teu pé, quando fores à casa de Deus; porque chegar-se para ouvir é melhor do que oferecer sacrifícios de tolos; pois não sabem que fazem mal."},
	{2, "2 Não te precipites com a tua boca, nem o teu coração se apresse a pronunciar palavra alguma na presença de Deus; porque Deus está no céu, e tu estás sobre a terra; portanto sejam poucas as tuas palavras."},
	{3, "3 Porque, da multidão de trabalhos vêm os sonhos, e da multidão de palavras, a voz do tolo."},
	{4, "4 Quando a Deus fizeres algum voto, não tardes em cumpri-lo; porque não se agrada de tolos. O que votares, paga-o."},
	{5, "5 Melhor é que não votes do que votares e nao pagares."},
	{6, "6 Não consintas que a tua boca faça pecar a tua carne, nem digas na presença do anjo que foi erro; por que razão se iraria Deus contra a tua voz, e destruiria a obra das tuas mãos?"},
	{7, "7 Porque na multidão dos sonhos há vaidades e muitas palavras; mas tu teme a Deus."},
	{8, "8 Se vires em alguma província opressão de pobres, e a perversão violenta do direito e da justiça, não te maravilhes de semelhante caso. Pois quem está altamente colocado tem superior que o vigia; e há mais altos ainda sobre eles."},
	{9, "9 O proveito da terra é para todos; até o rei se serve do campo."},
	{10, "10 Quem ama o dinheiro não se fartará de dinheiro; nem o que ama a riqueza se fartará do ganho; também isso é vaidade."},
	{11, "11 Quando se multiplicam os bens, multiplicam-se também os que comem; e que proveito tem o seu dono senão o de vê-los com os seus olhos?"},
	{12, "12 Doce é o sono do trabalhador, quer coma pouco quer muito; mas a saciedade do rico não o deixa dormir."},
	{13, "13 Há um grave mal que vi debaixo do sol: riquezas foram guardadas por seu donó para o seu próprio dano;"},
	{14, "14 e as mesmas riquezas se perderam por qualquer má aventura; e havendo algum filho nada fica na sua mão."},
	{15, "15 Como saiu do ventre de sua mãe, assim também se irá, nu como veio; e nada tomará do seu trabalho, que possa levar na mão."},
	{16, "16 Ora isso é um grave mal; porque justamente como veio, assim há de ir; e que proveito lhe vem de ter trabalhado para o vento,"},
	{17, "17 e de haver passado todos os seus dias nas trevas, e de haver padecido muito enfado, enfermidades e aborrecimento?"},
	{18, "18 Eis aqui o que eu vi, uma boa e bela coisa: alguém comer e beber, e gozar cada um do bem de todo o seu trabalho, com que se afadiga debaixo do sol, todos os dias da vida que Deus lhe deu; pois esse é o seu quinhão."},
	{19, "19 E quanto ao homem a quem Deus deu riquezas e bens, e poder para desfrutá-los, receber o seu quinhão, e se regozijar no seu trabalho, isso é dom de Deus."},
	{20, "20 Pois não se lembrará muito dos dias da sua vida; porque Deus lhe enche de alegria o coração."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct pt6 poems[] = {
	{1, "1 Há um mal que tenho visto debaixo do sol, e que pesa muito sobre o homem:"},
	{2, "2 um homem a quem Deus deu riquezas, bens e honra, de maneira que nada lhe falta de tudo quanto ele deseja, contudo Deus não lhe dá poder para daí comer, antes o estranho lho come; também isso é vaidade e grande mal."},
	{3, "3 Se o homem gerar cem filhos, e viver muitos anos, de modo que os dias da sua vida sejam muitos, porém se a sua alma não se fartar do bem, e além disso não tiver sepultura, digo que um aborto é melhor do que ele;"},
	{4, "4 porquanto debalde veio, e em trevas se vai, e de trevas se cobre o seu nome;"},
	{5, "5 e ainda que nunca viu o sol, nem o conheceu, mais descanso tem do que o tal;"},
	{6, "6 e embora vivesse duas vezes mil anos, mas não gozasse o bem, - não vão todos para um mesmo lugar?"},
	{7, "7 Todo o trabalho do homem é para a sua boca, e contudo não se satisfaz o seu apetite."},
	{8, "8 Pois, que vantagem tem o sábio sobre o tolo? e que tem o pobre que sabe andar perante os vivos?"},
	{9, "9 Melhor é a vista dos olhos do que o vaguear da cobiça; também isso é vaidade, e desejo vão."},
	{10, "10 Seja qualquer o que for, já há muito foi chamado pelo seu nome; e sabe-se que é homem; e ele não pode contender com o que é mais forte do que ele."},
	{11, "11 Visto que as muitas palavras aumentam a vaidade, que vantagem tira delas o homem?"},
	{12, "12 Porque, quem sabe o que é bom nesta vida para o homem, durante os poucos dias da sua vida vã, os quais gasta como sombra? pois quem declarará ao homem o que será depois dele debaixo do sol?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct pt7 poems[] = {
	{1, "1 Melhor é o bom nome do que o melhor ungüento, e o dia da morte do que o dia do nascimento."},
	{2, "2 Melhor é ir à casa onde há luto do que ir a casa onde há banquete; porque naquela se vê o fim de todos os homens, e os vivos o aplicam ao seu coração."},
	{3, "3 Melhor é a mágoa do que o riso, porque a tristeza do rosto torna melhor o coração."},
	{4, "4 O coração dos sábios está na casa do luto, mas o coração dos tolos na casa da alegria."},
	{5, "5 Melhor é ouvir a repreensão do sábio do que ouvir alguém a canção dos tolos."},
	{6, "6 Pois qual o crepitar dos espinhos debaixo da panela, tal é o riso do tolo; também isso é vaidade."},
	{7, "7 Verdadeiramente a opressão faz endoidecer até o sábio, e a peita corrompe o coração."},
	{8, "8 Melhor é o fim duma coisa do que o princípio; melhor é o paciente do que o arrogante."},
	{9, "9 Não te apresses no teu espírito a irar-te, porque a ira abriga-se no seio dos tolos."},
	{10, "10 Não digas: Por que razão foram os dias passados melhores do que estes; porque não provém da sabedoria esta pergunta."},
	{11, "11 Tão boa é a sabedoria como a herança, e mesmo de mais proveito para os que vêem o sol."},
	{12, "12 Porque a sabedoria serve de defesa, como de defesa serve o dinheiro; mas a excelência da sabedoria é que ela preserva a vida de quem a possui."},
	{13, "13 Considera as obras de Deus; porque quem poderá endireitar o que ele fez torto?"},
	{14, "14 No dia da prosperidade regozija-te, mas no dia da adversidade considera; porque Deus fez tanto este como aquele, para que o homem nada descubra do que há de vir depois dele."},
	{15, "15 Tudo isto vi nos dias da minha vaidade: há justo que perece na sua justiça, e há ímpio que prolonga os seus dias na sua maldade."},
	{16, "16 Não sejas demasiadamente justo, nem demasiadamente sábio; por que te destruirias a ti mesmo?"},
	{17, "17 Não sejas demasiadamente ímpio, nem sejas tolo; por que morrerias antes do teu tempo?"},
	{18, "18 Bom é que retenhas isso, e que também daquilo não retires a tua mão; porque quem teme a Deus escapa de tudo isso."},
	{19, "19 A sabedoria fortalece ao sábio mais do que dez governadores que haja na cidade."},
	{20, "20 Pois não há homem justo sobre a terra, que faça o bem, e nunca peque."},
	{21, "21 Não escutes a todas as palavras que se disserem, para que não venhas a ouvir o teu servo amaldiçoar-te;"},
	{22, "22 pois tu sabes também que muitas vezes tu amaldiçoaste a outros."},
	{23, "23 Tudo isto provei-o pela sabedoria; e disse: Far-me-ei sábio; porém a sabedoria ainda ficou longe de mim."},
	{24, "24 Longe está o que já se foi, e profundíssimo; quem o poderá achar?"},
	{25, "25 Eu me volvi, e apliquei o meu coração para saber, e inquirir, e buscar a sabedoria e a razão de tudo, e para conhecer que a impiedade é insensatez e que a estultícia é loucura."},
	{26, "26 E eu achei uma coisa mais amarga do que a morte, a mulher cujo coração são laços e redes, e cujas mãos são grilhões; quem agradar a Deus escapará dela; mas o pecador virá a ser preso por ela."},
	{27, "27 Vedes aqui, isto achei, diz o pregador, conferindo uma coisa com a outra para achar a causa;"},
	{28, "28 causa que ainda busco, mas não a achei; um homem entre mil achei eu, mas uma mulher entre todas, essa não achei."},
	{29, "29 Eis que isto tão-somente achei: que Deus fez o homem reto, mas os homens buscaram muitos artifícios."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct pt8 poems[] = {
	{1, "1 Quem é como o sábio? e quem sabe a interpretação das coisas? A sabedoria do homem faz brilhar o seu rosto, e com ela a dureza do seu rosto se transforma."},
	{2, "2 Eu digo: Observa o mandamento do rei, e isso por causa do juramento a Deus."},
	{3, "3 Não te apresses a sair da presença dele; nem persistas em alguma coisa má; porque ele faz tudo o que lhe agrada."},
	{4, "4 Porque a palavra do rei é suprema; e quem lhe dirá: que fazes?"},
	{5, "5 Quem guardar o mandamento não experimentará nenhum mal; e o coração do sábio discernirá o tempo e o juízo."},
	{6, "6 Porque para todo propósito há tempo e juízo; porquanto a miséria do homem pesa sobre ele."},
	{7, "7 Porque não sabe o que há de suceder; pois quem lho dará a entender como há de ser?"},
	{8, "8 Nenhum homem há que tenha domínio sobre o espírito, para o reter; nem que tenha poder sobre o dia da morte; nem há licença em tempo de guerra; nem tampouco a impiedade livrará aquele que a ela está entregue."},
	{9, "9 Tudo isto tenho observado enquanto aplicava o meu coração a toda obra que se faz debaixo do sol; tempo há em que um homem tem domínio sobre outro homem para o seu próprio dano."},
	{10, "10 Vi também os ímpios sepultados, os que antes entravam e saíam do lugar santo; e foram esquecidos na cidade onde haviam assim procedido; também isso é vaidade."},
	{11, "11 Porquanto não se executa logo o juízo sobre a má obra, o coração dos filhos dos homens está inteiramente disposto para praticar o mal."},
	{12, "12 Ainda que o pecador faça o mal cem vezes, e os dias se lhe prolonguem, contudo eu sei com certeza que bem sucede aos que temem a Deus, porque temem diante dele;"},
	{13, "13 ao ímpio, porém, não irá bem, e ele não prolongará os seus dias, que são como a sombra; porque ele não teme diante de Deus."},
	{14, "14 Ainda há outra vaidade que se faz sobre a terra: há justos a quem sucede segundo as obras dos ímpios, e há ímpios a quem sucede segundo as obras dos justos. Eu disse que também isso é vaidade."},
	{15, "15 Exalto, pois, a alegria, porquanto o homem nenhuma coisa melhor tem debaixo do sol do que comer, beber e alegrar-se; porque isso o acompanhará no seu trabalho nos dias da sua vida que Deus lhe dá debaixo do sol."},
	{16, "16 Quando apliquei o meu coração a conhecer a sabedoria, e a ver o trabalho que se faz sobre a terra (pois homens há que nem de dia nem de noite conseguem dar sono aos seus olhos),"},
	{17, "17 então contemplei toda obra de Deus, e vi que o homem não pode compreender a obra que se faz debaixo do sol; pois por mais que o homem trabalhe para a descobrir, não a achará; embora o sábio queira conhecê-la, nem por isso a poderá compreender."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct pt9 poems[] = {
	{1, "1 Deveras a tudo isto apliquei o meu coração, para claramente entender tudo isto: que os justos, e os sábios, e as suas obras, estão nas mãos de Deus; se é amor ou se é ódio, não o sabe o homem; tudo passa perante a sua face."},
	{2, "2 Tudo sucede igualmente a todos: o mesmo sucede ao justo e ao ímpio, ao bom e ao mau, ao puro e ao impuro; assim ao que sacrifica como ao que não sacrifica; assim ao bom como ao pecador; ao que jura como ao que teme o juramento."},
	{3, "3 Este é o mal que há em tudo quanto se faz debaixo do sol: que a todos sucede o mesmo. Também o coração dos filhos dos homens está cheio de maldade; há desvarios no seu coração durante a sua vida, e depois se vão aos mortos."},
	{4, "4 Ora, para aquele que está na companhia dos vivos há esperança; porque melhor é o cão vivo do que o leão morto."},
	{5, "5 Pois os vivos sabem que morrerão, mas os mortos não sabem coisa nenhuma, nem tampouco têm eles daí em diante recompensa; porque a sua memória ficou entregue ao esquecimento."},
	{6, "6 Tanto o seu amor como o seu ódio e a sua inveja já pereceram; nem têm eles daí em diante parte para sempre em coisa alguma do que se faz debaixo do sol."},
	{7, "7 Vai, pois, come com alegria o teu pão .e bebe o teu vinho com coração contente; pois há muito que Deus se agrada das tuas obras."},
	{8, "8 Sejam sempre alvas as tuas vestes, e nunca falte o óleo sobre a tua cabeça."},
	{9, "9 Goza a vida com a mulher que amas, todos os dias da tua vida vã, os quais Deus te deu debaixo do sol, todos os dias da tua vida vã; porque este é o teu quinhão nesta vida, e do teu trabalho, que tu fazes debaixo do sol."},
	{10, "10 Tudo quanto te vier à mão para fazer, faze-o conforme as tuas forças; porque no Seol, para onde tu vais, não há obra, nem projeto, nem conhecimento, nem sabedoria alguma."},
	{11, "11 Observei ainda e vi que debaixo do sol não é dos ligeiros a carreira, nem dos fortes a peleja, nem tampouco dos sábios o pão, nem ainda dos prudentes a riqueza, nem dos entendidos o favor; mas que a ocasião e a sorte ocorrem a todos."},
	{12, "12 Pois o homem não conhece a sua hora. Como os peixes que se apanham com a rede maligna, e como os passarinhos que se prendem com o laço, assim se enlaçam também os filhos dos homens no mau tempo, quando este lhes sobrevém de repente."},
	{13, "13 Também vi este exemplo de sabedoria debaixo do sol, que me pareceu grande:"},
	{14, "14 Houve uma pequena cidade em que havia poucos homens; e veio contra ela um grande rei, e a cercou e levantou contra ela grandes tranqueiras."},
	{15, "15 Ora, achou-se nela um sábio pobre, que livrou a cidade pela sua sabedoria; contudo ninguém se lembrou mais daquele homem pobre."},
	{16, "16 Então disse eu: Melhor é a sabedoria do que a força; todavia a sabedoria do pobre é desprezada, e as suas palavras não são ouvidas."},
	{17, "17 As palavras dos sábios ouvidas em silêncio valem mais do que o clamor de quem governa entre os tolos."},
	{18, "18 Melhor é a sabedoria do que as armas de guerra; mas um só pecador faz grande dano ao bem."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view10() {
struct pt10 poems[] = {
	{1, "1 As moscas mortas fazem com que o ungüento do perfumista emita mau cheiro; assim um pouco de estultícia pesa mais do que a sabedoria e a honra."},
	{2, "2 O coração do sábio o inclina para a direita, mas o coração do tolo o inclina para a esquerda."},
	{3, "3 E, até quando o tolo vai pelo caminho, falta-lhe o entendimento, e ele diz a todos que é tolo."},
	{4, "4 Se se levantar contra ti o espírito do governador, não deixes o teu lugar; porque a deferência desfaz grandes ofensas."},
	{5, "5 Há um mal que vi debaixo do sol, semelhante a um erro que procede do governador:"},
	{6, "6 a estultícia está posta em grande dignidade, e os ricos estão assentados em lugar humilde."},
	{7, "7 Tenho visto servos montados a cavalo, e príncipes andando a pé como servos."},
	{8, "8 Aquele que abrir uma cova, nela cairá; e quem romper um muro, uma cobra o morderá."},
	{9, "9 Aquele que tira pedras é maltratado por elas, e o que racha lenha corre perigo nisso."},
	{10, "10 Se estiver embotado o ferro, e não se afiar o corte, então se deve pôr mais força; mas a sabedoria é proveitosa para dar prosperidade."},
	{11, "11 Se a cobra morder antes de estar encantada, não há vantagem no encantador."},
	{12, "12 As palavras da boca do sábio são cheias de graça, mas os lábios do tolo o devoram."},
	{13, "13 O princípio das palavras da sua boca é estultícia, e o fim do seu discurso é loucura perversa."},
	{14, "14 O tolo multiplica as palavras, todavia nenhum homem sabe o que há de ser; e quem lhe poderá declarar o que será depois dele?"},
	{15, "15 O trabalho do tolo o fatiga, de sorte que não sabe ir à cidade."},
	{16, "16 Ai de ti, ó terra, quando o teu rei é criança, e quando os teus príncipes banqueteiam de manhã!"},
	{17, "17 Bem-aventurada tu, ó terra, quando o teu rei é filho de nobres, e quando os teus príncipes comem a tempo, para refazerem as forças, e não para bebedice!"},
	{18, "18 Pela preguiça se enfraquece o teto, e pela frouxidão das mãos a casa tem goteiras."},
	{19, "19 Para rir é que se dá banquete, e o vinho alegra a vida; e por tudo o dinheiro responde."},
	{20, "20 Nem ainda no teu pensamento amaldições o rei; nem tampouco na tua recâmara amaldiçoes o rico; porque as aves dos céus levarão a voz, e uma criatura alada dará notícia da palavra."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view11() {
struct pt11 poems[] = {
	{1, "1 Lança o teu pão sobre as águas, porque depois de muitos dias o acharás."},
	{2, "2 Reparte com sete, e ainda até com oito; porque não sabes que mal haverá sobre a terra."},
	{3, "3 Estando as nuvens cheias de chuva, derramam-na sobre a terra. Caindo a árvore para o sul, ou para o norte, no lugar em que a árvore cair, ali ficará."},
	{4, "4 Quem observa o vento, não semeará, e o que atenta para as nuvens não segará."},
	{5, "5 Assim como tu não sabes qual o caminho do vento, nem como se formam os ossos no ventre da que está grávida, assim também não sabes as obras de Deus, que faz todas as coisas."},
	{6, "6 Pela manhã semeia a tua semente, e à tarde não retenhas a tua mão; pois tu não sabes qual das duas prosperará, se esta, se aquela, ou se ambas serão, igualmente boas."},
	{7, "7 Doce é a luz, e agradável é aos olhos ver o sol."},
	{8, "8 Se, pois, o homem viver muitos anos, regozije-se em todos eles; contudo lembre-se dos dias das trevas, porque hão de ser muitos. Tudo quanto sucede é vaidade."},
	{9, "9 Alegra-te, mancebo, na tua mocidade, e anime-te o teu coração nos dias da tua mocidade, e anda pelos caminhos do teu coração, e pela vista dos teus olhos; sabe, porém, que por todas estas coisas Deus te trará a juízo."},
	{10, "10 Afasta, pois, do teu coração o desgosto, remove da tua carne o mal; porque a mocidade e a aurora da vida são vaidade."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view12() {
struct pt12 poems[] = {
	{1, "1 Lembra-te também do teu Criador nos dias da tua mocidade, antes que venham os maus dias, e cheguem os anos em que dirás: Não tenho prazer neles;"},
	{2, "2 antes que se escureçam o sol e a luz, e a lua, e as estrelas, e tornem a vir as nuvens depois da chuva;"},
	{3, "3 no dia em que tremerem os guardas da casa, e se curvarem os homens fortes, e cessarem os moedores, por já serem poucos, e se escurecerem os que olham pelas janelas,"},
	{4, "4 e as portas da rua se fecharem; quando for baixo o ruído da moedura, e nos levantarmos à voz das aves, e todas as filhas da música ficarem abatidas;"},
	{5, "5 como também quando temerem o que é alto, e houver espantos no caminho; e florescer a amendoeira, e o gafanhoto for um peso, e falhar o desejo; porque o homem se vai à sua casa eterna, e os pranteadores andarão rodeando pela praça;"},
	{6, "6 antes que se rompa a cadeia de prata, ou se quebre o copo de ouro, ou se despedace o cântaro junto à fonte, ou se desfaça a roda junto à cisterna,"},
	{7, "7 e o pó volte para a terra como o era, e o espírito volte a Deus que o deu."},
	{8, "8 Vaidade de vaidades, diz o pregador, tudo é vaidade."},
	{9, "9 Além de ser sábio, o pregador também ensinou ao povo o conhecimento, meditando, e estudando, e pondo em ordem muitos provérbios."},
	{10, "10 Procurou o pregador achar palavras agradáveis, e escreveu com acerto discursos plenos de verdade."},
	{11, "11 As palavras dos sábios são como aguilhões; e como pregos bem fixados são as palavras coligidas dos mestres, as quais foram dadas pelo único pastor."},
	{12, "12 Além disso, filho meu, sê avisado. De fazer muitos livros não há fim; e o muito estudar é enfado da carne."},
	{13, "13 Este é o fim do discurso; tudo já foi ouvido: Teme a Deus, e guarda os seus mandamentos; porque isto é todo o dever do homem."},
	{14, "14 Porque Deus há de trazer a juízo toda obra, e até tudo o que está encoberto, quer seja bom, quer seja mau."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};