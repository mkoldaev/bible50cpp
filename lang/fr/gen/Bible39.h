#include <map>
#include <string>
class Bible39
{
	struct fr1	{ int val; const char *msg; };
	struct fr2	{ int val; const char *msg; };
	struct fr3	{ int val; const char *msg; };
	struct fr4	{ int val; const char *msg; };
public:
static void view1() {
struct fr1 poems[] = {
	{1, "1 Oracle, parole de l'Éternel à Israël par Malachie. "},
	{2, "2 Je vous ai aimés, dit l'Éternel. Et vous dites: En quoi nous as-tu aimés? Ésaü n'est-il pas frère de Jacob? dit l'Éternel. Cependant j'ai aimé Jacob, "},
	{3, "3 Et j'ai eu de la haine pour Ésaü, J'ai fait de ses montagnes une solitude, J'ai livré son héritage aux chacals du désert. "},
	{4, "4 Si Édom dit: Nous sommes détruits, Nous relèverons les ruines! Ainsi parle l'Éternel des armées: Qu'ils bâtissent, je renverserai, Et on les appellera pays de la méchanceté, Peuple contre lequel l'Éternel est irrité pour toujours. "},
	{5, "5 Vos yeux le verront, Et vous direz: Grand est l'Éternel Par delà les frontières d'Israël! "},
	{6, "6 Un fils honore son père, et un serviteur son maître. Si je suis père, où est l'honneur qui m'est dû? Si je suis maître, où est la crainte qu'on a de moi? Dit l'Éternel des armées à vous, sacrificateurs, Qui méprisez mon nom, Et qui dites: En quoi avons-nous méprisé ton nom? "},
	{7, "7 Vous offrez sur mon autel des aliments impurs, Et vous dites: En quoi t'avons-nous profané? C'est en disant: La table de l'Éternel est méprisable! "},
	{8, "8 Quand vous offrez en sacrifice une bête aveugle, n'est-ce pas mal? Quand vous en offrez une boiteuse ou infirme, n'est-ce pas mal? Offre-la donc à ton gouverneur! Te recevra-t-il bien, te fera-t-il bon accueil? Dit l'Éternel des armées. "},
	{9, "9 Priez Dieu maintenant, pour qu'il ait pitié de nous! C'est de vous que cela vient: Vous recevra-t-il favorablement? Dit l'Éternel des armées. "},
	{10, "10 Lequel de vous fermera les portes, Pour que vous n'allumiez pas en vain le feu sur mon autel? Je ne prends aucun plaisir en vous, dit l'Éternel des armées, Et les offrandes de votre main ne me sont point agréables. "},
	{11, "11 Car depuis le lever du soleil jusqu'à son couchant, Mon nom est grand parmi les nations, Et en tout lieu on brûle de l'encens en l'honneur de mon nom Et l'on présente des offrandes pures; Car grand est mon nom parmi les nations, Dit l'Éternel des armées. "},
	{12, "12 Mais vous, vous le profanez, En disant: La table de l'Éternel est souillée, Et ce qu'elle rapporte est un aliment méprisable. "},
	{13, "13 Vous dites: Quelle fatigue! et vous le dédaignez, Dit l'Éternel des armées; Et cependant vous amenez ce qui est dérobé, boiteux ou infirme, Et ce sont les offrandes que vous faites! Puis-je les agréer de vos mains? dit l'Éternel. "},
	{14, "14 Maudit soit le trompeur qui a dans son troupeau un mâle, Et qui voue et sacrifie au Seigneur une bête chétive! Car je suis un grand roi, dit l'Éternel des armées, Et mon nom est redoutable parmi les nations. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct fr2 poems[] = {
	{1, "1 Maintenant, à vous cet ordre, sacrificateurs! "},
	{2, "2 Si vous n'écoutez pas, si vous ne prenez pas à coeur De donner gloire à mon nom, dit l'Éternel des armées, J'enverrai parmi vous la malédiction, et je maudirai vos bénédictions; Oui, je les maudirai, parce que vous ne l'avez pas à coeur. "},
	{3, "3 Voici, je détruirai vos semences, Et je vous jetterai des excréments au visage, Les excréments des victimes que vous sacrifiez, Et on vous emportera avec eux. "},
	{4, "4 Vous saurez alors que je vous ai adressé cet ordre, Afin que mon alliance avec Lévi subsiste, Dit l'Éternel des armées. "},
	{5, "5 Mon alliance avec lui était une alliance de vie et de paix, Ce que je lui accordai pour qu'il me craignît; Et il a eu pour moi de la crainte, Il a tremblé devant mon nom. "},
	{6, "6 La loi de la vérité était dans sa bouche, Et l'iniquité ne s'est point trouvée sur ses lèvres; Il a marché avec moi dans la paix et dans la droiture, Et il a détourné du mal beaucoup d'hommes. "},
	{7, "7 Car les lèvres du sacrificateur doivent garder la science, Et c'est à sa bouche qu'on demande la loi, Parce qu'il est un envoyé de l'Éternel des armées. "},
	{8, "8 Mais vous, vous vous êtes écartés de la voie, Vous avez fait de la loi une occasion de chute pour plusieurs, Vous avez violé l'alliance de Lévi, Dit l'Éternel des armées. "},
	{9, "9 Et moi, je vous rendrai méprisables et vils Aux yeux de tout le peuple, Parce que vous n'avez pas gardé mes voies, Et que vous avez égard à l'apparence des personnes Quand vous interprétez la loi. "},
	{10, "10 N'avons-nous pas tous un seul père? N'est-ce pas un seul Dieu qui nous a créés? Pourquoi donc sommes-nous infidèles l'un envers l'autre, En profanant l'alliance de nos pères? "},
	{11, "11 Juda s'est montré infidèle, Et une abomination a été commise en Israël et à Jérusalem; Car Juda a profané ce qui est consacré à l'Éternel, ce qu'aime l'Éternel, Il s'est uni à la fille d'un dieu étranger. "},
	{12, "12 L'Éternel retranchera l'homme qui fait cela, celui qui veille et qui répond, Il le retranchera des tentes de Jacob, Et il retranchera celui qui présente une offrande A l'Éternel des armées. "},
	{13, "13 Voici encore ce que vous faites: Vous couvrez de larmes l'autel de l'Éternel, De pleurs et de gémissements, En sorte qu'il n'a plus égard aux offrandes Et qu'il ne peut rien agréer de vos mains. "},
	{14, "14 Et vous dites: Pourquoi?... Parce que l'Éternel a été témoin entre toi et la femme de ta jeunesse, A laquelle tu es infidèle, Bien qu'elle soit ta compagne et la femme de ton alliance. "},
	{15, "15 Nul n'a fait cela, avec un reste de bon sens. Un seul l'a fait, et pourquoi? Parce qu'il cherchait la postérité que Dieu lui avait promise. Prenez donc garde en votre esprit, Et qu'aucun ne soit infidèle à la femme de sa jeunesse! "},
	{16, "16 Car je hais la répudiation, Dit l'Éternel, le Dieu d'Israël, Et celui qui couvre de violence son vêtement, Dit l'Éternel des armées. Prenez donc garde en votre esprit, Et ne soyez pas infidèles! "},
	{17, "17 Vous fatiguez l'Éternel par vos paroles, Et vous dites: En quoi l'avons-nous fatigué? C'est en disant: Quiconque fait le mal est bon aux yeux de l'Éternel, Et c'est en lui qu'il prend plaisir! Ou bien: Où est le Dieu de la justice? "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct fr3 poems[] = {
	{1, "1 Voici, j'enverrai mon messager; Il préparera le chemin devant moi. Et soudain entrera dans son temple le Seigneur que vous cherchez; Et le messager de l'alliance que vous désirez, voici, il vient, Dit l'Éternel des armées. "},
	{2, "2 Qui pourra soutenir le jour de sa venue? Qui restera debout quand il paraîtra? Car il sera comme le feu du fondeur, Comme la potasse des foulons. "},
	{3, "3 Il s'assiéra, fondra et purifiera l'argent; Il purifiera les fils de Lévi, Il les épurera comme on épure l'or et l'argent, Et ils présenteront à l'Éternel des offrandes avec justice. "},
	{4, "4 Alors l'offrande de Juda et de Jérusalem sera agréable à l'Éternel, Comme aux anciens jours, comme aux années d'autrefois. "},
	{5, "5 Je m'approcherai de vous pour le jugement, Et je me hâterai de témoigner contre les enchanteurs et les adultères, Contre ceux qui jurent faussement, Contre ceux qui retiennent le salaire du mercenaire, Qui oppriment la veuve et l'orphelin, Qui font tort à l'étranger, et ne me craignent pas, Dit l'Éternel des armées. "},
	{6, "6 Car je suis l'Éternel, je ne change pas; Et vous, enfants de Jacob, vous n'avez pas été consumés. "},
	{7, "7 Depuis le temps de vos pères, vous vous êtes écartés de mes ordonnances, Vous ne les avez point observées. Revenez à moi, et je reviendrai à vous, dit l'Éternel des armées. Et vous dites: En quoi devons-nous revenir? "},
	{8, "8 Un homme trompe-t-il Dieu? Car vous me trompez, Et vous dites: En quoi t'avons-nous trompé? Dans les dîmes et les offrandes. "},
	{9, "9 Vous êtes frappés par la malédiction, Et vous me trompez, La nation tout entière! "},
	{10, "10 Apportez à la maison du trésor toutes les dîmes, Afin qu'il y ait de la nourriture dans ma maison; Mettez-moi de la sorte à l'épreuve, Dit l'Éternel des armées. Et vous verrez si je n'ouvre pas pour vous les écluses des cieux, Si je ne répands pas sur vous la bénédiction en abondance. "},
	{11, "11 Pour vous je menacerai celui qui dévore, Et il ne vous détruira pas les fruits de la terre, Et la vigne ne sera pas stérile dans vos campagnes, Dit l'Éternel des armées. "},
	{12, "12 Toutes les nations vous diront heureux, Car vous serez un pays de délices, Dit l'Éternel des armées. "},
	{13, "13 Vos paroles sont rudes contre moi, dit l'Éternel. Et vous dites: Qu'avons-nous dit contre toi? "},
	{14, "14 Vous avez dit: C'est en vain que l'on sert Dieu; Qu'avons-nous gagné à observer ses préceptes, Et à marcher avec tristesse A cause de l'Éternel des armées? "},
	{15, "15 Maintenant nous estimons heureux les hautains; Oui, les méchants prospèrent; Oui, ils tentent Dieu, et ils échappent! "},
	{16, "16 Alors ceux qui craignent l'Éternel se parlèrent l'un à l'autre; L'Éternel fut attentif, et il écouta; Et un livre de souvenir fut écrit devant lui Pour ceux qui craignent l'Éternel Et qui honorent son nom. "},
	{17, "17 Ils seront à moi, dit l'Éternel des armées, Ils m'appartiendront, au jour que je prépare; J'aurai compassion d'eux, Comme un homme a compassion de son fils qui le sert. "},
	{18, "18 Et vous verrez de nouveau la différence Entre le juste et le méchant, Entre celui qui sert Dieu Et celui qui ne le sert pas. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct fr4 poems[] = {
	{1, "1 Car voici, le jour vient, Ardent comme une fournaise. Tous les hautains et tous les méchants seront comme du chaume; Le jour qui vient les embrasera, Dit l'Éternel des armées, Il ne leur laissera ni racine ni rameau. "},
	{2, "2 Mais pour vous qui craignez mon nom, se lèvera Le soleil de la justice, Et la guérison sera sous ses ailes; Vous sortirez, et vous sauterez comme les veaux d'une étable, "},
	{3, "3 Et vous foulerez les méchants, Car ils seront comme de la cendre Sous la plante de vos pieds, Au jour que je prépare, Dit l'Éternel des armées. "},
	{4, "4 Souvenez-vous de la loi de Moïse, mon serviteur, Auquel j'ai prescrit en Horeb, pour tout Israël, Des préceptes et des ordonnances. "},
	{5, "5 Voici, je vous enverrai Élie, le prophète, Avant que le jour de l'Éternel arrive, Ce jour grand et redoutable. "},
	{6, "6 Il ramènera le coeur des pères à leurs enfants, Et le coeur des enfants à leurs pères, De peur que je ne vienne frapper le pays d'interdit. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};