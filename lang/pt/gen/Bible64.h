#include <map>
#include <string>
class Bible64
{
	struct pt1	{ int val; const char *msg; };
public:
static void view1() {
struct pt1 poems[] = {
	{1, "1 O ancião ao amado Gaio, a quem eu amo em verdade."},
	{2, "2 Amado, desejo que te vá bem em todas as coisas, e que tenhas saúde, assim como bem vai à tua alma."},
	{3, "3 Porque muito me alegrei quando os irmãos vieram e testificaram da tua verdade, como tu andas na verdade."},
	{4, "4 Não tenho maior gozo do que este: o de ouvir que os meus filhos andam na verdade."},
	{5, "5 Amado, procedes fielmente em tudo o que fazes para com os irmãos, especialmente para com os estranhos,"},
	{6, "6 os quais diante da igreja testificaram do teu amor; aos quais, se os encaminhares na sua viagem de um modo digno de Deus, bem farás;"},
	{7, "7 porque por amor do Nome saíram, sem nada aceitar dos gentios."},
	{8, "8 Portanto aos tais devemos acolher, para que sejamos cooperadores da verdade."},
	{9, "9 Escrevi alguma coisa à igreja; mas Diótrefes, que gosta de ter entre eles a primazia, não nos recebe."},
	{10, "10 Pelo que, se eu aí for, trarei à memoria as obras que ele faz, proferindo contra nós palavras maliciosas; e, não contente com isto, ele não somente deixa de receber os irmãos, mas aos que os querem receber ele proíbe de o fazerem e ainda os exclui da igreja."},
	{11, "11 Amado, não imites o mal, mas o bem. Quem faz o bem é de Deus; mas quem faz o mal não tem visto a Deus."},
	{12, "12 De Demétrio, porém, todos, e até a própria verdade, dão testemunho; e nós também damos testemunho; e sabes que o nosso testemunho é verdadeiro."},
	{13, "13 Tinha eu muitas coisas que te escrever, mas não o quero fazer com tinta e pena."},
	{14, "14 Espero, porém, ver-te brevemente, e falaremos face a face."},
	{15, "15 Paz seja contigo. Os amigos te saúdam. Saúda os amigos nominalmente."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};