#include <map>
#include <string>
class Bible37
{
	struct jap1	{ int val; const char *msg; };
	struct jap2	{ int val; const char *msg; };
public:
static void view1() {
struct jap1 poems[] = {
	{1, "1 ダリヨス王の二年六月、その月の一日に、主の言葉が預言者ハガイによって、シャルテルの子、ユダの総督ゼルバベル、およびヨザダクの子、大祭司ヨシュアに臨んだ、"},
	{2, "2 「万軍の主はこう言われる、この民は、主の家を再び建てる時は、まだこないと言っている」。"},
	{3, "3 そこで、主の言葉はまた預言者ハガイに臨んだ、"},
	{4, "4 「主の家はこのように荒れはてているのに、あなたがたは、みずから板で張った家に住んでいる時であろうか。"},
	{5, "5 それで今、万軍の主はこう言われる、あなたがたは自分のなすべきことをよく考えるがよい。"},
	{6, "6 あなたがたは多くまいても、取入れは少なく、食べても、飽きることはない。飲んでも、満たされない。着ても、暖まらない。賃銀を得ても、これを破れた袋に入れているようなものである。"},
	{7, "7 万軍の主はこう言われる、あなたがたは、自分のなすべきことを考えるがよい。"},
	{8, "8 山に登り、木を持ってきて主の家を建てよ。そうすればわたしはこれを喜び、かつ栄光のうちに現れると主は言われる。"},
	{9, "9 あなたがたは多くを望んだが、見よ、それは少なかった。あなたがたが家に持ってきたとき、わたしはそれを吹き払った。これは何ゆえであるかと、万軍の主は言われる。これはわたしの家が荒れはてているのに、あなたがたは、おのおの自分の家の事だけに、忙しくしている。"},
	{10, "10 それゆえ、あなたがたの上の天は露をさし止め、地はその産物をさし止めた。"},
	{11, "11 また、わたしは地にも、山にも、穀物にも、新しい酒にも、油にも、地に生じるものにも、人間にも、家畜にも、手で作るすべての作物にも、ひでりを呼び寄せた」。"},
	{12, "12 そこで、シャルテルの子ゼルバベルとヨザダクの子、大祭司ヨシュアおよび残りのすべての民は、その神、主の声と、その神、主のつかわされた預言者ハガイの言葉とに聞きしたがい、そして民は、主の前に恐れかしこんだ。"},
	{13, "13 時に、主の使者ハガイは主の命令により、民に告げて言った、「わたしはあなたがたと共にいると主は言われる」。"},
	{14, "14 そして主は、シャルテルの子、ユダの総督ゼルバベルの心と、ヨザダクの子、大祭司ヨシュアの心、および残りのすべての民の心を、振り動かされたので、彼らは来て、その神、万軍の主の家の作業にとりかかった。"},
	{15, "15 これは六月二十四日のことであった。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct jap2 poems[] = {
	{1, "1 ダリヨス王の二年の七月二十一日に、主の言葉が預言者ハガイに臨んだ、"},
	{2, "2 「シャルテルの子、ユダの総督ゼルバベルと、ヨザダクの子、大祭司ヨシュア、および残りのすべての民に告げて言え、"},
	{3, "3 『あなたがた残りの者のうち、以前の栄光に輝く主の家を見た者はだれか。あなたがたは今、この状態をどう思うか。これはあなたがたの目には、無にひとしいではないか。"},
	{4, "4 主は言われる、ゼルバベルよ、勇気を出せ。ヨザダクの子、大祭司ヨシュアよ、勇気を出せ。主は言われる。この地のすべての民よ、勇気を出せ。働け。わたしはあなたがたと共にいると、万軍の主は言われる。"},
	{5, "5 これはあなたがたがエジプトから出た時、わたしがあなたがたに、約束した言葉である。わたしの霊が、あなたがたのうちに宿っている。恐れるな。"},
	{6, "6 万軍の主はこう言われる、しばらくして、いま一度、わたしは天と、地と、海と、かわいた地とを震う。"},
	{7, "7 わたしはまた万国民を震う。万国民の財宝は、はいって来て、わたしは栄光をこの家に満たすと、万軍の主は言われる。"},
	{8, "8 銀はわたしのもの、金もわたしのものであると、万軍の主は言われる。"},
	{9, "9 主の家の後の栄光は、前の栄光よりも大きいと、万軍の主は言われる。わたしはこの所に繁栄を与えると、万軍の主は言われる』」。"},
	{10, "10 ダリヨスの二年の九月二十四日に、主の言葉が預言者ハガイに臨んだ、"},
	{11, "11 「万軍の主はこう言われる、律法について祭司たちに尋ねて言え、"},
	{12, "12 『人がその衣服のすそで聖なる肉を運んで行き、そのすそがもし、パンまたはあつもの、または酒、または油、またはどんな食物にでもさわったなら、それらは聖なるものとなるか』と」。祭司たちは「ならない」と答えた。"},
	{13, "13 ハガイはまた言った、「もし、死体によって汚れた人が、これらの一つにさわったなら、それは汚れるか」。祭司たちは「汚れる」と答えた。"},
	{14, "14 そこで、ハガイは言った、「主は言われる、この民も、この国も、わたしの前では、そのようである。またその手のわざもそのようである。その所で彼らのささげるものは、汚れたものである。"},
	{15, "15 今、あなたがたはこの日から、後の事を思うがよい。主の宮で石の上に石が積まれなかった前、あなたがたは、どんなであったか。"},
	{16, "16 あの時には、二十枡の麦の積まれる所に行ったが、わずかに十枡を得、また五十桶をくもうとして、酒ぶねに行ったが、二十桶を得たのみであった。"},
	{17, "17 わたしは立ち枯れと、腐り穂と、ひょうをもってあなたがたと、あなたがたのすべての手のわざを撃った。しかし、あなたがたは、わたしに帰らなかったと主は言われる。"},
	{18, "18 あなたがたはこの日より後、すなわち、九月二十四日よりの事を思うがよい。また主の宮の基をすえた日から後の事を心にとめるがよい。"},
	{19, "19 種はなお、納屋にあるか。ぶどうの木、いちじくの木、ざくろの木、オリブの木もまだ実を結ばない。しかし、わたしはこの日から、あなたがたに恵みを与える」。"},
	{20, "20 この月の二十四日に、主の言葉がふたたびハガイに臨んだ、"},
	{21, "21 「ユダの総督ゼルバベルに告げて言え、わたしは天と地を震う。"},
	{22, "22 わたしは国々の王位を倒し、異邦の国々の力を滅ぼし、また戦車、およびこれに乗る者を倒す。馬およびこれに乗る者は、たがいにその仲間のつるぎによって倒れる。"},
	{23, "23 万軍の主は言われる、シャルテルの子、わがしもべゼルバベルよ、主は言われる、その日、わたしはあなたを立て、あなたを印章のようにする。わたしはあなたを選んだからであると、万軍の主は言われる」。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};