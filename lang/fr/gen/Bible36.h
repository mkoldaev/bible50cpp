#include <map>
#include <string>
class Bible36
{
	struct fr1	{ int val; const char *msg; };
	struct fr2	{ int val; const char *msg; };
	struct fr3	{ int val; const char *msg; };
public:
static void view1() {
struct fr1 poems[] = {
	{1, "1 La parole de l'Éternel qui fut adressée à Sophonie, fils de Cuschi, fils de Guedalia, fils d'Amaria, fils d'Ézéchias, au temps de Josias, fils d'Amon, roi de Juda. "},
	{2, "2 Je détruirai tout sur la face de la terre, Dit l'Éternel. "},
	{3, "3 Je détruirai les hommes et les bêtes, Les oiseaux du ciel et les poissons de la mer, Les objets de scandale, et les méchants avec eux; J'exterminerai les hommes de la face de la terre, Dit l'Éternel. "},
	{4, "4 J'étendrai ma main sur Juda, Et sur tous les habitants de Jérusalem; J'exterminerai de ce lieu les restes de Baal, Le nom de ses ministres et les prêtres avec eux, "},
	{5, "5 Ceux qui se prosternent sur les toits devant l'armée des cieux, Ceux qui se prosternent en jurant par l'Éternel Et en jurant par leur roi, "},
	{6, "6 Ceux qui se sont détournés de l'Éternel, Et ceux qui ne cherchent pas l'Éternel, Qui ne le consultent pas. "},
	{7, "7 Silence devant le Seigneur, l'Éternel! Car le jour de l'Éternel est proche, Car l'Éternel a préparé le sacrifice, Il a choisi ses conviés. "},
	{8, "8 Au jour du sacrifice de l'Éternel, Je châtierai les princes et les fils du roi, Et tous ceux qui portent des vêtements étrangers. "},
	{9, "9 En ce jour-là, je châtierai tous ceux qui sautent par-dessus le seuil, Ceux qui remplissent de violence et de fraude la maison de leur maître. "},
	{10, "10 En ce jour-là, dit l'Éternel, Il y aura des cris à la porte des poissons, Des lamentations dans l'autre quartier de la ville, Et un grand désastre sur les collines. "},
	{11, "11 Gémissez, habitants de Macthesch! Car tous ceux qui trafiquent sont détruits, Tous les hommes chargés d'argent sont exterminés. "},
	{12, "12 En ce temps-là, je fouillerai Jérusalem avec des lampes, Et je châtierai les hommes qui reposent sur leurs lies, Et qui disent dans leur coeur: L'Éternel ne fait ni bien ni mal. "},
	{13, "13 Leurs biens seront au pillage, Et leurs maisons seront dévastées; Ils auront bâti des maisons, qu'ils n'habiteront plus, Ils auront planté des vignes, dont ils ne boiront plus le vin. "},
	{14, "14 Le grand jour de l'Éternel est proche, Il est proche, il arrive en toute hâte; Le jour de l'Éternel fait entendre sa voix, Et le héros pousse des cris amers. "},
	{15, "15 Ce jour est un jour de fureur, Un jour de détresse et d'angoisse, Un jour de ravage et de destruction, Un jour de ténèbres et d'obscurité, Un jour de nuées et de brouillards, "},
	{16, "16 Un jour où retentiront la trompette et les cris de guerre Contre les villes fortes et les tours élevées. "},
	{17, "17 Je mettrai les hommes dans la détresse, Et ils marcheront comme des aveugles, Parce qu'ils ont péché contre l'Éternel; Je répandrai leur sang comme de la poussière, Et leur chair comme de l'ordure. "},
	{18, "18 Ni leur argent ni leur or ne pourront les délivrer, Au jour de la fureur de l'Éternel; Par le feu de sa jalousie tout le pays sera consumé; Car il détruira soudain tous les habitants du pays. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct fr2 poems[] = {
	{1, "1 Rentrez en vous-mêmes, examinez-vous, Nation sans pudeur, "},
	{2, "2 Avant que le décret s'exécute Et que ce jour passe comme la balle, Avant que la colère ardente de l'Éternel fonde sur vous, Avant que le jour de la colère de l'Éternel fonde sur vous! "},
	{3, "3 Cherchez l'Éternel, vous tous, humbles du pays, Qui pratiquez ses ordonnances! Recherchez la justice, recherchez l'humilité! Peut-être serez-vous épargnés au jour de la colère de l'Éternel. "},
	{4, "4 Car Gaza sera délaissée, Askalon sera réduite en désert, Asdod sera chassée en plein midi, Ékron sera déracinée. "},
	{5, "5 Malheur aux habitants des côtes de la mer, à la nation des Kéréthiens! L'Éternel a parlé contre toi, Canaan, pays des Philistins! Je te détruirai, tu n'auras plus d'habitants. "},
	{6, "6 Les côtes de la mer seront des pâturages, des demeures pour les bergers, Et des parcs pour les troupeaux. "},
	{7, "7 Ces côtes seront pour les restes de la maison de Juda; C'est là qu'ils paîtront; Ils reposeront le soir dans les maisons d'Askalon; Car l'Éternel, leur Dieu, ne les oubliera pas, Et il ramènera leurs captifs. "},
	{8, "8 J'ai entendu les injures de Moab Et les outrages des enfants d'Ammon, Quand ils insultaient mon peuple Et s'élevaient avec arrogance contre ses frontières. "},
	{9, "9 C'est pourquoi, je suis vivant! dit l'Éternel des armées, le Dieu d'Israël, Moab sera comme Sodome, et les enfants d'Ammon comme Gomorrhe, Un lieu couvert de ronces, une mine de sel, un désert pour toujours; Le reste de mon peuple les pillera, Le reste de ma nation les possédera. "},
	{10, "10 Cela leur arrivera pour leur orgueil, Parce qu'ils ont insulté et traité avec arrogance Le peuple de l'Éternel des armées. "},
	{11, "11 L'Éternel sera terrible contre eux, Car il anéantira tous les dieux de la terre; Et chacun se prosternera devant lui dans son pays, Dans toutes les îles des nations. "},
	{12, "12 Vous aussi, Éthiopiens, Vous serez frappés par mon épée. "},
	{13, "13 Il étendra sa main sur le septentrion, Il détruira l'Assyrie, Et il fera de Ninive une solitude, Une terre aride comme le désert. "},
	{14, "14 Des troupeaux se coucheront au milieu d'elle, Des animaux de toute espèce; Le pélican et le hérisson Habiteront parmi les chapiteaux de ses colonnes; Des cris retentiront aux fenêtres; La dévastation sera sur le seuil, Car les lambris de cèdre seront arrachés. "},
	{15, "15 Voilà donc cette ville joyeuse, Qui s'assied avec assurance, Et qui dit en son coeur: Moi, et rien que moi! Eh quoi! elle est en ruines, C'est un repaire pour les bêtes! Tous ceux qui passeront près d'elle Siffleront et agiteront la main. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct fr3 poems[] = {
	{1, "1 Malheur à la ville rebelle et souillée, A la ville pleine d'oppresseurs! "},
	{2, "2 Elle n'écoute aucune voix, Elle n'a point égard à la correction, Elle ne se confie pas en l'Éternel, Elle ne s'approche pas de son Dieu. "},
	{3, "3 Ses chefs au milieu d'elle sont des lions rugissants; Ses juges sont des loups du soir qui ne gardent rien pour le matin. "},
	{4, "4 Ses prophètes sont téméraires, infidèles; Ses sacrificateurs profanent les choses saintes, violent la loi. "},
	{5, "5 L'Éternel est juste au milieu d'elle, Il ne commet point d'iniquité; Chaque matin il produit à la lumière ses jugements, Sans jamais y manquer; Mais celui qui est inique ne connaît pas la honte. "},
	{6, "6 J'ai exterminé des nations; leurs tours sont détruites; J'ai dévasté leurs rues, plus de passants! Leurs villes sont ravagées, plus d'hommes, plus d'habitants! "},
	{7, "7 Je disais: Si du moins tu voulais me craindre, Avoir égard à la correction, Ta demeure ne serait pas détruite, Tous les châtiments dont je t'ai menacée n'arriveraient pas; Mais ils se sont hâtés de pervertir toutes leurs actions. "},
	{8, "8 Attendez-moi donc, dit l'Éternel, Au jour où je me lèverai pour le butin, Car j'ai résolu de rassembler les nations, De rassembler les royaumes, Pour répandre sur eux ma fureur, Toute l'ardeur de ma colère; Car par le feu de ma jalousie tout le pays sera consumé. "},
	{9, "9 Alors je donnerai aux peuples des lèvres pures, Afin qu'ils invoquent tous le nom de l'Éternel, Pour le servir d'un commun accord. "},
	{10, "10 D'au delà des fleuves de l'Éthiopie Mes adorateurs, mes dispersés, m'apporteront des offrandes. "},
	{11, "11 En ce jour-là, tu n'auras plus à rougir de toutes tes actions Par lesquelles tu as péché contre moi; Car alors j'ôterai du milieu de toi ceux qui triomphaient avec arrogance, Et tu ne t'enorgueilliras plus sur ma montagne sainte. "},
	{12, "12 Je laisserai au milieu de toi un peuple humble et petit, Qui trouvera son refuge dans le nom de l'Éternel. "},
	{13, "13 Les restes d'Israël ne commettront point d'iniquité, Ils ne diront point de mensonges, Et il ne se trouvera pas dans leur bouche une langue trompeuse; Mais ils paîtront, ils se reposeront, et personne ne les troublera. "},
	{14, "14 Pousse des cris de joie, fille de Sion! Pousse des cris d'allégresse, Israël! Réjouis-toi et triomphe de tout ton coeur, fille de Jérusalem! "},
	{15, "15 L'Éternel a détourné tes châtiments, Il a éloigné ton ennemi; Le roi d'Israël, l'Éternel, est au milieu de toi; Tu n'as plus de malheur à éprouver. "},
	{16, "16 En ce jour-là, on dira à Jérusalem: Ne crains rien! Sion, que tes mains ne s'affaiblissent pas! "},
	{17, "17 L'Éternel, ton Dieu, est au milieu de toi, comme un héros qui sauve; Il fera de toi sa plus grande joie; Il gardera le silence dans son amour; Il aura pour toi des transports d'allégresse. "},
	{18, "18 Je rassemblerai ceux qui sont dans la tristesse, loin des fêtes solennelles, Ceux qui sont sortis de ton sein; L'opprobre pèse sur eux. "},
	{19, "19 Voici, en ce temps-là, j'agirai contre tous tes oppresseurs; Je délivrerai les boiteux et je recueillerai ceux qui ont été chassés, Je ferai d'eux un sujet de louange et de gloire Dans tous les pays où ils sont en opprobre. "},
	{20, "20 En ce temps-là, je vous ramènerai; En ce temps-là, je vous rassemblerai; Car je ferai de vous un sujet de gloire et de louange Parmi tous les peuples de la terre, Quand je ramènerai vos captifs sous vos yeux, Dit l'Éternel. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};