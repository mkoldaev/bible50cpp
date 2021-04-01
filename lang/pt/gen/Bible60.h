#include <map>
#include <string>
class Bible60
{
	struct pt1	{ int val; const char *msg; };
	struct pt2	{ int val; const char *msg; };
	struct pt3	{ int val; const char *msg; };
	struct pt4	{ int val; const char *msg; };
	struct pt5	{ int val; const char *msg; };
public:
static void view1() {
struct pt1 poems[] = {
	{1, "1 Pedro, apóstolo de Jesus Cristo, aos peregrinos da Dispersão no Ponto, Galácia, Capadócia, Ásia e Bitínia."},
	{2, "2 eleitos segundo a presciência de Deus Pai, na santificação do Espírito, para a obediência e aspersão do sangue de Jesus Cristo: Graça e paz vos sejam multiplicadas."},
	{3, "3 Bendito seja o Deus e Pai de nosso Senhor Jesus Cristo, que, segundo a sua grande misericórdia, nos regenerou para uma viva esperança, pela ressurreição de Jesus Cristo dentre os mortos,"},
	{4, "4 para uma herança incorruptível, incontaminável e imarcescível, reservada nos céus para vós,"},
	{5, "5 que pelo poder de Deus sois guardados, mediante a fé, para a salvação que está preparada para se revelar no último tempo;"},
	{6, "6 na qual exultais, ainda que agora por um pouco de tempo, sendo necessário, estejais contristados por várias provações,"},
	{7, "7 para que a prova da vossa fé, mais preciosa do que o ouro que perece, embora provado pelo fogo, redunde para louvor, glória e honra na revelação de Jesus Cristo;"},
	{8, "8 a quem, sem o terdes visto, amais; no qual, sem agora o verdes, mas crendo, exultais com gozo inefável e cheio de glória,"},
	{9, "9 alcançando o fim da vossa fé, a salvação das vossas almas."},
	{10, "10 Desta salvação inquiririam e indagaram diligentemente os profetas que profetizaram da graça que para vós era destinada,"},
	{11, "11 indagando qual o tempo ou qual a ocasião que o Espírito de Cristo que estava neles indicava, ao predizer os sofrimentos que a Cristo haviam de vir, e a glória que se lhes havia de seguir."},
	{12, "12 Aos quais foi revelado que não para si mesmos, mas para vós, eles ministravam estas coisas que agora vos foram anunciadas por aqueles que, pelo Espírito Santo enviado do céu, vos pregaram o evangelho; para as quais coisas os anjos bem desejam atentar."},
	{13, "13 Portanto, cingindo os lombos do vosso entendimento, sede sóbrios, e esperai inteiramente na graça que se vos oferece na revelação de Jesus Cristo."},
	{14, "14 Como filhos obedientes, não vos conformeis às concupiscências que antes tínheis na vossa ignorância;"},
	{15, "15 mas, como é santo aquele que vos chamou, sede vós também santos em todo o vosso procedimento;"},
	{16, "16 porquanto está escrito: Sereis santos, porque eu sou santo."},
	{17, "17 E, se invocais por Pai aquele que, sem acepção de pessoas, julga segundo a obra de cada um, andai em temor durante o tempo da vossa peregrinação,"},
	{18, "18 sabendo que não foi com coisas corruptíveis, como prata ou ouro, que fostes resgatados da vossa vã maneira de viver, que por tradição recebestes dos vossos pais,"},
	{19, "19 mas com precioso sangue, como de um cordeiro sem defeito e sem mancha, o sangue de Cristo,"},
	{20, "20 o qual, na verdade, foi conhecido ainda antes da fundação do mundo, mas manifesto no fim dos tempos por amor de vós,"},
	{21, "21 que por ele credes em Deus, que o ressuscitou dentre os mortos e lhe deu glória, de modo que a vossa fé e esperança estivessem em Deus."},
	{22, "22 Já que tendes purificado as vossas almas na obediência à verdade, que leva ao amor fraternal não fingido, de coração amai-vos ardentemente uns aos outros,"},
	{23, "23 tendo renascido, não de semente corruptível, mas de incorruptível, pela palavra de Deus, a qual vive e permanece."},
	{24, "24 Porque: Toda a carne é como a erva, e toda a sua glória como a flor da erva. Secou-se a erva, e caiu a sua flor;"},
	{25, "25 mas a palavra do Senhor permanece para sempre. E esta é a palavra que vos foi evangelizada."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pt2 poems[] = {
	{1, "1 Deixando, pois, toda a malícia, todo o engano, e fingimentos, e invejas, e toda a maledicência,"},
	{2, "2 desejai como meninos recém-nascidos, o puro leite espiritual, a fim de por ele crescerdes para a salvação,"},
	{3, "3 se é que já provastes que o Senhor é bom;"},
	{4, "4 e, chegando-vos para ele, pedra viva, rejeitada, na verdade, pelos homens, mas, para com Deus eleita e preciosa,"},
	{5, "5 vós também, quais pedras vivas, sois edificados como casa espiritual para serdes sacerdócio santo, a fim de oferecerdes sacrifícios espirituais, aceitáveis a Deus por Jesus Cristo."},
	{6, "6 Por isso, na Escritura se diz: Eis que ponho em Sião uma principal pedra angular, eleita e preciosa; e quem nela crer não será confundido."},
	{7, "7 E assim para vós, os que credes, é a preciosidade; mas para os descrentes, a pedra que os edificadores rejeitaram, esta foi posta como a principal da esquina,"},
	{8, "8 e: Como uma pedra de tropeço e rocha de escândalo; porque tropeçam na palavra, sendo desobedientes; para o que também foram destinados."},
	{9, "9 Mas vós sois a geração eleita, o sacerdócio real, a nação santa, o povo adquirido, para que anuncieis as grandezas daquele que vos chamou das trevas para a sua maravilhosa luz;"},
	{10, "10 vós que outrora nem éreis povo, e agora sois de Deus; vós que não tínheis alcançado misericórdia, e agora a tendes alcançado."},
	{11, "11 Amados, exorto-vos, como a peregrinos e forasteiros, que vos abstenhais das concupiscências da carne, as quais combatem contra a alma;"},
	{12, "12 tendo o vosso procedimento correto entre os gentios, para que naquilo em que falam mal de vós, como de malfeitores, observando as vossas boas obras, glorifiquem a Deus no dia da visitação."},
	{13, "13 Sujeitai-vos a toda autoridade humana por amor do Senhor, quer ao rei, como soberano,"},
	{14, "14 quer aos governadores, como por ele enviados para castigo dos malfeitores, e para louvor dos que fazem o bem."},
	{15, "15 Porque assim é a vontade de Deus, que, fazendo o bem, façais emudecer a ignorância dos homens insensatos,"},
	{16, "16 como livres, e não tendo a liberdade como capa da malícia, mas como servos de Deus."},
	{17, "17 Honrai a todos. Amai aos irmãos. Temei a Deus. Honrai ao rei."},
	{18, "18 Vós, servos, sujeitai-vos com todo o temor aos vossos senhores, não somente aos bons e moderados, mas também aos maus."},
	{19, "19 Porque isto é agradável, que alguém, por causa da consciência para com Deus, suporte tristezas, padecendo injustamente."},
	{20, "20 Pois, que glória é essa, se, quando cometeis pecado e sois por isso esbofeteados, sofreis com paciência? Mas se, quando fazeis o bem e sois afligidos, o sofreis com paciência, isso é agradável a Deus."},
	{21, "21 Porque para isso fostes chamados, porquanto também Cristo padeceu por vós, deixando-vos exemplo, para que sigais as suas pisadas."},
	{22, "22 Ele não cometeu pecado, nem na sua boca se achou engano;"},
	{23, "23 sendo injuriado, não injuriava, e quando padecia não ameaçava, mas entregava-se àquele que julga justamente;"},
	{24, "24 levando ele mesmo os nossos pecados em seu corpo sobre o madeiro, para que mortos para os pecados, pudéssemos viver para a justiça; e pelas suas feridas fostes sarados."},
	{25, "25 Porque éreis desgarrados, como ovelhas; mas agora tendes voltado ao Pastor e Bispo das vossas almas."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pt3 poems[] = {
	{1, "1 Semelhantemente vós, mulheres, sede submissas a vossos maridos; para que também, se alguns deles não obedecem à palavra, sejam ganhos sem palavra pelo procedimento de suas mulheres,"},
	{2, "2 considerando a vossa vida casta, em temor."},
	{3, "3 O vosso adorno não seja o enfeite exterior, como as tranças dos cabelos, o uso de jóias de ouro, ou o luxo dos vestidos,"},
	{4, "4 mas seja o do íntimo do coração, no incorruptível traje de um espírito manso e tranqüilo, que és, para que permaneçam as coisas"},
	{5, "5 Porque assim se adornavam antigamente também as santas mulheres que esperavam em Deus, e estavam submissas a seus maridos;"},
	{6, "6 como Sara obedecia a Abraão, chamando-lhe senhor; da qual vós sois filhas, se fazeis o bem e não temeis nenhum espanto."},
	{7, "7 Igualmente vós, maridos, vivei com elas com entendimento, dando honra à mulher, como vaso mais frágil, e como sendo elas herdeiras convosco da graça da vida, para que não sejam impedidas as vossas orações."},
	{8, "8 Finalmente, sede todos de um mesmo sentimento, compassivos, cheios de amor fraternal, misericordiosos, humildes,"},
	{9, "9 não retribuindo mal por mal, ou injúria por injúria; antes, pelo contrário, bendizendo; porque para isso fostes chamados, para herdardes uma bênção."},
	{10, "10 Pois, quem quer amar a vida, e ver os dias bons, refreie a sua língua do mal, e os seus lábios não falem engano;"},
	{11, "11 aparte-se do mal, e faça o bem; busque a paz, e siga-a."},
	{12, "12 Porque os olhos do Senhor estão sobre os justos, e os seus ouvidos atento à sua súplica; mas o rosto do Senhor é contra os que fazem o mal."},
	{13, "13 Ora, quem é o que vos fará mal, se fordes zelosos do bem?"},
	{14, "14 Mas também, se padecerdes por amor da justiça, bem-aventurados sereis; e não temais as suas ameaças, nem vos turbeis;"},
	{15, "15 antes santificai em vossos corações a Cristo como Senhor; e estai sempre preparados para responder com mansidão e temor a todo aquele que vos pedir a razão da esperança que há em vós;"},
	{16, "16 tendo uma boa consciência, para que, naquilo em que falam mal de vós, fiquem confundidos os que vituperam o vosso bom procedimento em Cristo."},
	{17, "17 Porque melhor é sofrerdes fazendo o bem, se a vontade de Deus assim o quer, do que fazendo o mal."},
	{18, "18 Porque também Cristo morreu uma só vez pelos pecados, o justo pelos injustos, para levar-nos a Deus; sendo, na verdade, morto na carne, mas vivificado no espírito;"},
	{19, "19 no qual também foi, e pregou aos espíritos em prisão;"},
	{20, "20 os quais noutro tempo foram rebeldes, quando a longanimidade de Deus esperava, nos dias de Noé, enquanto se preparava a arca; na qual poucas, isto é, oito almas se salvaram através da água,"},
	{21, "21 que também agora, por uma verdadeira figura - o batismo, vos salva, o qual não é o despojamento da imundícia da carne, mas a indagação de uma boa consciência para com Deus, pela ressurreição de Jesus Cristo,"},
	{22, "22 que está à destra de Deus, tendo subido ao céu; havendo-se-lhe sujeitado os anjos, e as autoridades, e as potestades."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct pt4 poems[] = {
	{1, "1 Ora pois, já que Cristo padeceu na carne, armai-vos também vós deste mesmo pensamento; porque aquele que padeceu na carne já cessou do pecado;"},
	{2, "2 para que, no tempo que ainda vos resta na carne não continueis a viver para as concupiscências dos homens, mas para a vontade de Deus."},
	{3, "3 Porque é bastante que no tempo passado tenhais cumprido a vontade dos gentios, andando em dissoluções, concupiscências, borrachices, glutonarias, bebedices e abomináveis idolatrias."},
	{4, "4 E acham estranho não correrdes com eles no mesmo desenfreamento de dissolução, blasfemando de vós;"},
	{5, "5 os quais hão de dar conta ao que está preparado para julgar os vivos e os mortos."},
	{6, "6 Pois é por isto que foi pregado o evangelho até aos mortos, para que, na verdade, fossem julgados segundo os homens na carne, mas vivessem segundo Deus em espírito."},
	{7, "7 Mas já está próximo o fim de todas as coisas; portanto sede sóbrios e vigiai em oração;"},
	{8, "8 tendo antes de tudo ardente amor uns para com os outros, porque o amor cobre uma multidão de pecados;"},
	{9, "9 sendo hospitaleiros uns para com os outros, sem murmuração;"},
	{10, "10 servindo uns aos outros conforme o dom que cada um recebeu, como bons despenseiros da multiforme graça de Deus."},
	{11, "11 Se alguém fala, fale como entregando oráculos de Deus; se alguém ministra, ministre segundo a força que Deus concede; para que em tudo Deus seja glorificado por meio de Jesus Cristo, ma quem pertencem a glória e o domínio para todo o sempre. Amém."},
	{12, "12 Amados, não estranheis a ardente provação que vem sobre vós para vos experimentar, como se coisa estranha vos acontecesse;"},
	{13, "13 mas regozijai-vos por serdes participantes das aflições de Cristo; para que também na revelação da sua glória vos regozijeis e exulteis."},
	{14, "14 Se pelo nome de Cristo sois vituperados, bem-aventurados sois, porque sobre vós repousa o Espírito da glória, o Espírito de Deus."},
	{15, "15 Que nenhum de vós, entretanto, padeça como homicida, ou ladrão, ou malfeitor, ou como quem se entremete em negócios alheios;"},
	{16, "16 mas, se padece como cristão, não se envergonhe, antes glorifique a Deus neste nome."},
	{17, "17 Porque já é tempo que comece o julgamento pela casa de Deus; e se começa por nós, qual será o fim daqueles que desobedecem ao evangelho de Deus?"},
	{18, "18 E se o justo dificilmente se salva, onde comparecerá o ímpio pecador?"},
	{19, "19 Portanto os que sofrem segundo a vontade de Deus confiem as suas almas ao fiel Criador, praticando o bem."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct pt5 poems[] = {
	{1, "1 Aos anciãos, pois, que há entre vós, rogo eu, que sou ancião com eles e testemunha dos sofrimentos de Cristo, e participante da glória que se há de revelar:"},
	{2, "2 Apascentai o rebanho de Deus, que está entre vós, não por força, mas espontaneamente segundo a vontade de Deus; nem por torpe ganância, mas de boa vontade;"},
	{3, "3 nem como dominadores sobre os que vos foram confiados, mas servindo de exemplo ao rebanho."},
	{4, "4 E, quando se manifestar o sumo Pastor, recebereis a imarcescível coroa da glória."},
	{5, "5 Semelhantemente vós, os mais moços, sede sujeitos aos mais velhos. E cingi-vos todos de humildade uns para com os outros, porque Deus resiste aos soberbos, mas dá graça aos humildes."},
	{6, "6 Humilhai-vos, pois, debaixo da potente mão de Deus, para que a seu tempo vos exalte;"},
	{7, "7 lançando sobre ele toda a vossa ansiedade, porque ele tem cuidado de vós."},
	{8, "8 Sede sóbrios, vigiai. O vosso adversário, o Diabo, anda em derredor, rugindo como leão, e procurando a quem possa tragar;"},
	{9, "9 ao qual resisti firmes na fé, sabendo que os mesmos sofrimentos estão-se cumprindo entre os vossos irmãos no mundo."},
	{10, "10 E o Deus de toda a graça, que em Cristo vos chamou à sua eterna glória, depois de haverdes sofrido por um pouco, ele mesmo vos há de aperfeiçoar, confirmar e fortalecer."},
	{11, "11 A ele seja o domínio para todo o sempre. Amém."},
	{12, "12 Por Silvano, nosso fiel irmão, como o considero, escravo abreviadamente, exortando e testificando que esta é a verdadeira graça de Deus; nela permanecei firmes."},
	{13, "13 A vossa co-eleita em Babilônia vos saúda, como também meu filho Marcos."},
	{14, "14 Saudai-vos uns aos outros com ósculo de amor. Paz seja com todos vós que estais em Cristo."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};