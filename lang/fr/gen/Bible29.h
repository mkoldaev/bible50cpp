#include <map>
#include <string>
class Bible29
{
	struct fr1	{ int val; const char *msg; };
	struct fr2	{ int val; const char *msg; };
	struct fr3	{ int val; const char *msg; };
public:
static void view1() {
struct fr1 poems[] = {
	{1, "1 La parole de l'Éternel qui fut adressée à Joël, fils de Pethuel. "},
	{2, "2 Écoutez ceci, vieillards! Prêtez l'oreille, vous tous, habitants du pays! Rien de pareil est-il arrivé de votre temps, Ou du temps de vos pères? "},
	{3, "3 Racontez-le à vos enfants, Et que vos enfants le racontent à leurs enfants, Et leurs enfants à la génération qui suivra! "},
	{4, "4 Ce qu'a laissé le gazam, la sauterelle l'a dévoré; Ce qu'a laissé la sauterelle, le jélek l'a dévoré; Ce qu'a laissé le jélek, le hasil l'a dévoré. "},
	{5, "5 Réveillez-vous, ivrognes, et pleurez! Vous tous, buveurs de vin, gémissez, Parce que le moût vous est enlevé de la bouche! "},
	{6, "6 Car un peuple est venu fondre sur mon pays, Puissant et innombrable. Il a les dents d'un lion, Les mâchoires d'une lionne. "},
	{7, "7 Il a dévasté ma vigne; Il a mis en morceaux mon figuier, Il l'a dépouillé, abattu; Les rameaux de la vigne ont blanchi. "},
	{8, "8 Lamente-toi, comme la vierge qui se revêt d'un sac Pour pleurer l'ami de sa jeunesse! "},
	{9, "9 Offrandes et libations disparaissent de la maison de l'Éternel; Les sacrificateurs, serviteurs de l'Éternel, sont dans le deuil. "},
	{10, "10 Les champs sont ravagés, La terre est attristée; Car les blés sont détruits, Le moût est tari, l'huile est desséchée. "},
	{11, "11 Les laboureurs sont consternés, les vignerons gémissent, A cause du froment et de l'orge, Parce que la moisson des champs est perdue. "},
	{12, "12 La vigne est confuse, Le figuier languissant; Le grenadier, le palmier, le pommier, Tous les arbres des champs sont flétris... La joie a cessé parmi les fils de l'homme! "},
	{13, "13 Sacrificateurs, ceignez-vous et pleurez! Lamentez-vous, serviteurs de l'autel! Venez, passez la nuit revêtus de sacs, Serviteurs de mon Dieu! Car offrandes et libations ont disparu de la maison de votre Dieu. "},
	{14, "14 Publiez un jeûne, une convocation solennelle! Assemblez les vieillards, tous les habitants du pays, Dans la maison de l'Éternel, votre Dieu, Et criez à l'Éternel! "},
	{15, "15 Ah! quel jour! Car le jour de l'Éternel est proche: Il vient comme un ravage du Tout-Puissant. "},
	{16, "16 La nourriture n'est-elle pas enlevée sous nos yeux? La joie et l'allégresse n'ont-elles pas disparu de la maison de notre Dieu? "},
	{17, "17 Les semences ont séché sous les mottes; Les greniers sont vides, Les magasins sont en ruines, Car il n'y a point de blé. "},
	{18, "18 Comme les bêtes gémissent! Les troupeaux de boeufs sont consternés, Parce qu'ils sont sans pâturage; Et même les troupeaux de brebis sont en souffrance. "},
	{19, "19 C'est vers toi que je crie, ô Éternel! Car le feu a dévoré les plaines du désert, Et la flamme a brûlé tous les arbres des champs. "},
	{20, "20 Les bêtes des champs crient aussi vers toi; Car les torrents sont à sec, Et le feu a dévoré les plaines du désert. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct fr2 poems[] = {
	{1, "1 Sonnez de la trompette en Sion! Faites-la retentir sur ma montagne sainte! Que tous les habitants du pays tremblent! Car le jour de l'Éternel vient, car il est proche, "},
	{2, "2 Jour de ténèbres et d'obscurité, Jour de nuées et de brouillards, Il vient comme l'aurore se répand sur les montagnes. Voici un peuple nombreux et puissant, Tel qu'il n'y en a jamais eu, Et qu'il n'y en aura jamais dans la suite des âges. "},
	{3, "3 Devant lui est un feu dévorant, Et derrière lui une flamme brûlante; Le pays était auparavant comme un jardin d'Éden, Et depuis, c'est un désert affreux: Rien ne lui échappe. "},
	{4, "4 A les voir, on dirait des chevaux, Et ils courent comme des cavaliers. "},
	{5, "5 A les entendre, on dirait un bruit de chars Sur le sommet des montagnes où ils bondissent, On dirait un pétillement de la flamme du feu, Quand elle consume le chaume. C'est comme une armée puissante Qui se prépare au combat. "},
	{6, "6 Devant eux les peuples tremblent, Tous les visages pâlissent. "},
	{7, "7 Ils s'élancent comme des guerriers, Ils escaladent les murs comme des gens de guerre; Chacun va son chemin, Sans s'écarter de sa route. "},
	{8, "8 Ils ne se pressent point les uns les autres, Chacun garde son rang; Ils se précipitent au travers des traits Sans arrêter leur marche. "},
	{9, "9 Ils se répandent dans la ville, Courent sur les murailles, Montent sur les maisons, Entrent par les fenêtres comme un voleur. "},
	{10, "10 Devant eux la terre tremble, Les cieux sont ébranlés, Le soleil et la lune s'obscurcissent, Et les étoiles retirent leur éclat. "},
	{11, "11 L'Éternel fait entendre sa voix devant son armée; Car son camp est immense, Et l'exécuteur de sa parole est puissant; Car le jour de l'Éternel est grand, il est terrible: Qui pourra le soutenir? "},
	{12, "12 Maintenant encore, dit l'Éternel, Revenez à moi de tout votre coeur, Avec des jeûnes, avec des pleurs et des lamentations! "},
	{13, "13 Déchirez vos coeurs et non vos vêtements, Et revenez à l'Éternel, votre Dieu; Car il est compatissant et miséricordieux, Lent à la colère et riche en bonté, Et il se repent des maux qu'il envoie. "},
	{14, "14 Qui sait s'il ne reviendra pas et ne se repentira pas, Et s'il ne laissera pas après lui la bénédiction, Des offrandes et des libations pour l'Éternel, votre Dieu? "},
	{15, "15 Sonnez de la trompette en Sion! Publiez un jeûne, une convocation solennelle! "},
	{16, "16 Assemblez le peuple, formez une sainte réunion! Assemblez les vieillards, Assemblez les enfants, Même les nourrissons à la mamelle! Que l'époux sorte de sa demeure, Et l'épouse de sa chambre! "},
	{17, "17 Qu'entre le portique et l'autel Pleurent les sacrificateurs, Serviteurs de l'Éternel, Et qu'ils disent: Éternel, épargne ton peuple! Ne livre pas ton héritage à l'opprobre, Aux railleries des nations! Pourquoi dirait-on parmi les peuples: Où est leur Dieu? "},
	{18, "18 L'Éternel est ému de jalousie pour son pays, Et il épargne son peuple. "},
	{19, "19 L'Éternel répond, il dit à son peuple: Voici, je vous enverrai du blé, Du moût et de l'huile, Et vous en serez rassasiés; Et je ne vous livrerai plus à l'opprobre parmi les nations. "},
	{20, "20 J'éloignerai de vous l'ennemi du nord, Je le chasserai vers une terre aride et déserte, Son avant-garde dans la mer orientale, Son arrière-garde dans la mer occidentale; Et son infection se répandra, Sa puanteur s'élèvera dans les airs, Parce qu'il a fait de grandes choses. "},
	{21, "21 Terre, ne crains pas, Sois dans l'allégresse et réjouis-toi, Car l'Éternel fait de grandes choses! "},
	{22, "22 Bêtes des champs, ne craignez pas, Car les plaines du désert reverdiront, Car les arbres porteront leurs fruits, Le figuier et la vigne donneront leurs richesses. "},
	{23, "23 Et vous, enfants de Sion, soyez dans l'allégresse et réjouissez-vous En l'Éternel, votre Dieu, Car il vous donnera la pluie en son temps, Il vous enverra la pluie de la première et de l'arrière-saison, Comme autrefois. "},
	{24, "24 Les aires se rempliront de blé, Et les cuves regorgeront de moût et d'huile. "},
	{25, "25 Je vous remplacerai les années Qu'ont dévorées la sauterelle, Le jélek, le hasil et le gazam, Ma grande armée que j'avais envoyée contre vous. "},
	{26, "26 Vous mangerez et vous vous rassasierez, Et vous célébrerez le nom de l'Éternel, votre Dieu, Qui aura fait pour vous des prodiges; Et mon peuple ne sera plus jamais dans la confusion. "},
	{27, "27 Et vous saurez que je suis au milieu d'Israël, Que je suis l'Éternel, votre Dieu, et qu'il n'y en a point d'autre, Et mon peuple ne sera plus jamais dans la confusion. "},
	{28, "28 Après cela, je répandrai mon esprit sur toute chair; Vos fils et vos filles prophétiseront, Vos vieillards auront des songes, Et vos jeunes gens des visions. "},
	{29, "29 Même sur les serviteurs et sur les servantes, Dans ces jours-là, je répandrai mon esprit. "},
	{30, "30 Je ferai paraître des prodiges dans les cieux et sur la terre, Du sang, du feu, et des colonnes de fumée; "},
	{31, "31 Le soleil se changera en ténèbres, Et la lune en sang, Avant l'arrivée du jour de l'Éternel, De ce jour grand et terrible. "},
	{32, "32 Alors quiconque invoquera le nom de l'Éternel sera sauvé; Le salut sera sur la montagne de Sion et à Jérusalem, Comme a dit l'Éternel, Et parmi les réchappés que l'Éternel appellera. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct fr3 poems[] = {
	{1, "1 Car voici, en ces jours, en ce temps-là, Quand je ramènerai les captifs de Juda et de Jérusalem, "},
	{2, "2 Je rassemblerai toutes les nations, Et je les ferai descendre dans la vallée de Josaphat; Là, j'entrerai en jugement avec elles, Au sujet de mon peuple, d'Israël, mon héritage, Qu'elles ont dispersé parmi les nations, Et au sujet de mon pays qu'elles se sont partagé. "},
	{3, "3 Ils ont tiré mon peuple au sort; Ils ont donné le jeune garçon pour une prostituée, Ils ont vendu la jeune fille pour du vin, et ils ont bu. "},
	{4, "4 Que me voulez-vous, Tyr et Sidon, Et vous tous, districts des Philistins? Voulez-vous tirer vengeance de moi? Si vous voulez vous venger, Je ferai bien vite retomber votre vengeance sur vos têtes. "},
	{5, "5 Vous avez pris mon argent mon or; Et ce que j'avais de plus précieux et de plus beau, Vous l'avez emporté dans vos temples. "},
	{6, "6 Vous avez vendu les enfants de Juda et de Jérusalem aux enfants de Javan, Afin de les éloigner de leur territoire. "},
	{7, "7 Voici, je les ferai revenir du lieu où vous les avez vendus, Et je ferai retomber votre vengeance sur vos têtes. "},
	{8, "8 Je vendrai vos fils et vos filles aux enfants de Juda, Et ils les vendront aux Sabéens, nation lointaine; Car l'Éternel a parlé. "},
	{9, "9 Publiez ces choses parmi les nations! Préparez la guerre! Réveillez les héros! Qu'ils s'approchent, qu'ils montent, Tous les hommes de guerre! "},
	{10, "10 De vos hoyaux forgez des épées, Et de vos serpes des lances! Que le faible dise: Je suis fort! "},
	{11, "11 Hâtez-vous et venez, vous toutes, nations d'alentour, Et rassemblez-vous! Là, ô Éternel, fais descendre tes héros! "},
	{12, "12 Que les nations se réveillent, et qu'elles montent Vers la vallée de Josaphat! Car là je siégerai pour juger toutes les nations d'alentour. "},
	{13, "13 Saisissez la faucille, Car la moisson est mûre! Venez, foulez, Car le pressoir est plein, Les cuves regorgent! Car grande est leur méchanceté, "},
	{14, "14 C'est une multitude, une multitude, Dans la vallée du jugement; Car le jour de l'Éternel est proche, Dans la vallée du jugement. "},
	{15, "15 Le soleil et la lune s'obscurcissent, Et les étoiles retirent leur éclat. "},
	{16, "16 De Sion l'Éternel rugit, De Jérusalem il fait entendre sa voix; Les cieux et la terre sont ébranlés. Mais l'Éternel est un refuge pour son peuple, Un abri pour les enfants d'Israël. "},
	{17, "17 Et vous saurez que je suis l'Éternel, votre Dieu, Résidant à Sion, ma sainte montagne. Jérusalem sera sainte, Et les étrangers n'y passeront plus. "},
	{18, "18 En ce temps-là, le moût ruissellera des montagnes, Le lait coulera des collines, Et il y aura de l'eau dans tous les torrents de Juda; Une source sortira aussi de la maison de l'Éternel, Et arrosera la vallée de Sittim. "},
	{19, "19 L'Égypte sera dévastée, Édom sera réduit en désert, A cause des violences contre les enfants de Juda, Dont ils ont répandu le sang innocent dans leur pays. "},
	{20, "20 Mais Juda sera toujours habité, Et Jérusalem, de génération en génération. "},
	{21, "21 Je vengerai leur sang que je n'ai point encore vengé, Et L'Éternel résidera dans Sion. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};