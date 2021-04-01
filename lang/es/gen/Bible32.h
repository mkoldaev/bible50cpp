#include <map>
#include <string>
class Bible32
{
	struct es1	{ int val; const char *msg; };
	struct es2	{ int val; const char *msg; };
	struct es3	{ int val; const char *msg; };
	struct es4	{ int val; const char *msg; };
public:
static void view1() {
struct es1 poems[] = {
	{1, "1 Vino palabra de Jehová a Jonás hijo de Amitai, diciendo: "},
	{2, "2 Levántate y ve a Nínive, aquella gran ciudad, y pregona contra ella; porque ha subido su maldad delante de mí. "},
	{3, "3 Y Jonás se levantó para huir de la presencia de Jehová a Tarsis, y descendió a Jope, y halló una nave que partía para Tarsis; y pagando su pasaje, entró en ella para irse con ellos a Tarsis, lejos de la presencia de Jehová. "},
	{4, "4 Pero Jehová hizo levantar un gran viento en el mar, y hubo en el mar una tempestad tan grande que se pensó que se partiría la nave. "},
	{5, "5 Y los marineros tuvieron miedo, y cada uno clamaba a su dios; y echaron al mar los enseres que había en la nave, para descargarla de ellos. Pero Jonás había bajado al interior de la nave, y se había echado a dormir. "},
	{6, "6 Y el patrón de la nave se le acercó y le dijo: їQué tienes, dormilón? Levántate, y clama a tu Dios; quizá él tendrá compasión de nosotros, y no pereceremos. "},
	{7, "7 Y dijeron cada uno a su compañero: Venid y echemos suertes, para que sepamos por causa de quién nos ha venido este mal. Y echaron suertes, y la suerte cayó sobre Jonás. "},
	{8, "8 Entonces le dijeron ellos: Decláranos ahora por qué nos ha venido este mal. їQué oficio tienes, y de dónde vienes? їCuál es tu tierra, y de qué pueblo eres? "},
	{9, "9 Y él les respondió: Soy hebreo, y temo a Jehová, Dios de los cielos, que hizo el mar y la tierra. "},
	{10, "10 Y aquellos hombres temieron sobremanera, y le dijeron: їPor qué has hecho esto? Porque ellos sabían que huía de la presencia de Jehová, pues él se lo había declarado. "},
	{11, "11 Y le dijeron: їQué haremos contigo para que el mar se nos aquiete? Porque el mar se iba embraveciendo más y más. "},
	{12, "12 Él les respondió: Tomadme y echadme al mar, y el mar se os aquietará; porque yo sé que por mi causa ha venido esta gran tempestad sobre vosotros. "},
	{13, "13 Y aquellos hombres trabajaron para hacer volver la nave a tierra; mas no pudieron, porque el mar se iba embraveciendo más y más contra ellos. "},
	{14, "14 Entonces clamaron a Jehová y dijeron: Te rogamos ahora, Jehová, que no perezcamos nosotros por la vida de este hombre, ni pongas sobre nosotros la sangre inocente; porque tú, Jehová, has hecho como has querido. "},
	{15, "15 Y tomaron a Jonás, y lo echaron al mar; y el mar se aquietó de su furor. "},
	{16, "16 Y temieron aquellos hombres a Jehová con gran temor, y ofrecieron sacrificio a Jehová, e hicieron votos. "},
	{17, "17 Pero Jehová tenía preparado un gran pez que tragase a Jonás; y estuvo Jonás en el vientre del pez tres días y tres noches. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct es2 poems[] = {
	{1, "1 Entonces oró Jonás a Jehová su Dios desde el vientre del pez, "},
	{2, "2 y dijo: Invoqué en mi angustia a Jehová, y él me oyó; Desde el seno del Seol clamé, Y mi voz oíste. "},
	{3, "3 Me echaste a lo profundo, en medio de los mares, Y me rodeó la corriente; Todas tus ondas y tus olas pasaron sobre mí. "},
	{4, "4 Entonces dije: Desechado soy de delante de tus ojos; Mas aún veré tu santo templo. "},
	{5, "5 Las aguas me rodearon hasta el alma, Rodeóme el abismo; El alga se enredó a mi cabeza. "},
	{6, "6 Descendí a los cimientos de los montes; La tierra echó sus cerrojos sobre mí para siempre; Mas tú sacaste mi vida de la sepultura, oh Jehová Dios mío. "},
	{7, "7 Cuando mi alma desfallecía en mí, me acordé de Jehová, Y mi oración llegó hasta ti en tu santo templo. "},
	{8, "8 Los que siguen vanidades ilusorias, Su misericordia abandonan. "},
	{9, "9 Mas yo con voz de alabanza te ofreceré sacrificios; Pagaré lo que prometí. La salvación es de Jehová. "},
	{10, "10 Y mandó Jehová al pez, y vomitó a Jonás en tierra. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct es3 poems[] = {
	{1, "1 Vino palabra de Jehová por segunda vez a Jonás, diciendo: "},
	{2, "2 Levántate y ve a Nínive, aquella gran ciudad, y proclama en ella el mensaje que yo te diré. "},
	{3, "3 Y se levantó Jonás, y fue a Nínive conforme a la palabra de Jehová. Y era Nínive ciudad grande en extremo, de tres días de camino. "},
	{4, "4 Y comenzó Jonás a entrar por la ciudad, camino de un día, y predicaba diciendo: De aquí a cuarenta días Nínive será destruida. "},
	{5, "5 Y los hombres de Nínive creyeron a Dios, y proclamaron ayuno, y se vistieron de cilicio desde el mayor hasta el menor de ellos. "},
	{6, "6 Y llegó la noticia hasta el rey de Nínive, y se levantó de su silla, se despojó de su vestido, y se cubrió de cilicio y se sentó sobre ceniza. "},
	{7, "7 E hizo proclamar y anunciar en Nínive, por mandato del rey y de sus grandes, diciendo: Hombres y animales, bueyes y ovejas, no gusten cosa alguna; no se les dé alimento, ni beban agua; "},
	{8, "8 sino cúbranse de cilicio hombres y animales, y clamen a Dios fuertemente; y conviértase cada uno de su mal camino, de la rapiña que hay en sus manos. "},
	{9, "9 їQuién sabe si se volverá y se arrepentirá Dios, y se apartará del ardor de su ira, y no pereceremos? "},
	{10, "10 Y vio Dios lo que hicieron, que se convirtieron de su mal camino; y se arrepintió del mal que había dicho que les haría, y no lo hizo. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct es4 poems[] = {
	{1, "1 Pero Jonás se apesadumbró en extremo, y se enojó. "},
	{2, "2 Y oró a Jehová y dijo: Ahora, oh Jehová, їno es esto lo que yo decía estando aún en mi tierra? Por eso me apresuré a huir a Tarsis; porque sabía yo que tú eres Dios clemente y piadoso, tardo en enojarte, y de grande misericordia, y que te arrepientes del mal. "},
	{3, "3 Ahora pues, oh Jehová, te ruego que me quites la vida; porque mejor me es la muerte que la vida. "},
	{4, "4 Y Jehová le dijo: їHaces tú bien en enojarte tanto? "},
	{5, "5 Y salió Jonás de la ciudad, y acampó hacia el oriente de la ciudad, y se hizo allí una enramada, y se sentó debajo de ella a la sombra, hasta ver qué acontecería en la ciudad. "},
	{6, "6 Y preparó Jehová Dios una calabacera, la cual creció sobre Jonás para que hiciese sombra sobre su cabeza, y le librase de su malestar; y Jonás se alegró grandemente por la calabacera. "},
	{7, "7 Pero al venir el alba del día siguiente, Dios preparó un gusano, el cual hirió la calabacera, y se secó. "},
	{8, "8 Y aconteció que al salir el sol, preparó Dios un recio viento solano, y el sol hirió a Jonás en la cabeza, y se desmayaba, y deseaba la muerte, diciendo: Mejor sería para mí la muerte que la vida. "},
	{9, "9 Entonces dijo Dios a Jonás: їTanto te enojas por la calabacera? Y él respondió: Mucho me enojo, hasta la muerte. "},
	{10, "10 Y dijo Jehová: Tuviste tú lástima de la calabacera, en la cual no trabajaste, ni tú la hiciste crecer; que en espacio de una noche nació, y en espacio de otra noche pereció. "},
	{11, "11 їY no tendré yo piedad de Nínive, aquella gran ciudad donde hay más de ciento veinte mil personas que no saben discernir entre su mano derecha y su mano izquierda, y muchos animales? "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};