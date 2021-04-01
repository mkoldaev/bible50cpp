#include <map>
#include <string>
class Bible64
{
	struct la1	{ int val; const char *msg; };
public:
static void view1() {
struct la1 poems[] = {
	{1, "1 Presbyter Gaio carissimo, quem ego diligo in veritate."},
	{2, "2 Carissime, in omnibus exopto prospere te agere et valere, sicut prospere agit anima tua. "},
	{3, "3 Nam gavisus sum valde, venientibus fratribus et testimonium perhibentibus veritati tuae, quomodo tu in veritate ambules. "},
	{4, "4 Maius horum non habeo gaudium, quam ut audiam filios meos in veritate ambulare."},
	{5, "5 Carissime, fideliter facis, quidquid operaris in fratres et hoc in peregrinos, "},
	{6, "6 qui testimonium reddiderunt caritati tuae in conspectu ecclesiae. Bene facies subveniens illis in via digne Deo; "},
	{7, "7 pro nomine enim profecti sunt, nihil accipientes a gentilibus. "},
	{8, "8 Nos ergo debemus sublevare huiusmodi, ut cooperatores simus veritatis."},
	{9, "9 Scripsi aliquid ecclesiae; sed is qui amat primatum gerere in eis, Diotrephes, non recipit nos. "},
	{10, "10 Propter hoc, si venero, commonebo eius opera, quae facit verbis malignis garriens in nos; et quasi non ei ista sufficiant, nec ipse suscipit fratres et eos, qui cu piunt, prohibet et de ecclesia eicit."},
	{11, "11 Carissime, noli imitari malum, sed quod bonum est. Qui benefacit, ex Deo est; qui malefacit, non vidit Deum."},
	{12, "12 Demetrio testimonium redditur ab omnibus et ab ipsa veritate; sed et nos testimonium perhibemus, et scis quoniam testimonium nostrum verum est."},
	{13, "13 Multa habui scribere tibi, sed nolo per atramentum et calamum scribere tibi; "},
	{14, "14 spero autem protinus te videre, et os ad os loquemur."},
	{15, "15 Pax tibi. Salutant te amici. Saluta amicos nominatim."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};