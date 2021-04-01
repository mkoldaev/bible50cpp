#include <map>
#include <string>
class Bible8
{
	struct fr1	{ int val; const char *msg; };
	struct fr2	{ int val; const char *msg; };
	struct fr3	{ int val; const char *msg; };
	struct fr4	{ int val; const char *msg; };
public:
static void view1() {
struct fr1 poems[] = {
	{1, "1 Du temps des juges, il y eut une famine dans le pays. Un homme de Bethléhem de Juda partit, avec sa femme et ses deux fils, pour faire un séjour dans le pays de Moab. "},
	{2, "2 Le nom de cet homme était Élimélec, celui de sa femme Naomi, et ses deux fils s'appelaient Machlon et Kiljon; ils étaient Éphratiens, de Bethléhem de Juda. Arrivés au pays de Moab, ils y fixèrent leur demeure. "},
	{3, "3 Élimélec, mari de Naomi, mourut, et elle resta avec ses deux fils. "},
	{4, "4 Ils prirent des femmes Moabites, dont l'une se nommait Orpa, et l'autre Ruth, et ils habitèrent là environ dix ans. "},
	{5, "5 Machlon et Kiljon moururent aussi tous les deux, et Naomi resta privée de ses deux fils et de son mari. "},
	{6, "6 Puis elle se leva, elle et ses belles-filles, afin de quitter le pays de Moab, car elle apprit au pays de Moab que l'Éternel avait visité son peuple et lui avait donné du pain. "},
	{7, "7 Elle sortit du lieu qu'elle habitait, accompagnée de ses deux belles-filles, et elle se mit en route pour retourner dans le pays de Juda. "},
	{8, "8 Naomi dit alors à ses deux belles-filles: Allez, retournez chacune à la maison de sa mère! Que l'Éternel use de bonté envers vous, comme vous l'avez fait envers ceux qui sont morts et envers moi! "},
	{9, "9 Que l'Éternel vous fasse trouver à chacune du repos dans la maison d'un mari! Et elle les baisa. Elles élevèrent la voix, et pleurèrent; "},
	{10, "10 et elles lui dirent: Non, nous irons avec toi vers ton peuple. "},
	{11, "11 Naomi, dit: Retournez, mes filles! Pourquoi viendriez-vous avec moi? Ai-je encore dans mon sein des fils qui puissent devenir vos maris? "},
	{12, "12 Retournez, mes filles, allez! Je suis trop vieille pour me remarier. Et quand je dirais: J'ai de l'espérance; quand cette nuit même je serais avec un mari, et que j'enfanterais des fils, "},
	{13, "13 attendriez-vous pour cela qu'ils eussent grandi, refuseriez-vous pour cela de vous marier? Non, mes filles! car à cause de vous je suis dans une grande affliction de ce que la main de l'Éternel s'est étendue contre moi. "},
	{14, "14 Et elles élevèrent la voix, et pleurèrent encore. Orpa baisa sa belle-mère, mais Ruth s'attacha à elle. "},
	{15, "15 Naomi dit à Ruth: Voici, ta belle-soeur est retournée vers son peuple et vers ses dieux; retourne, comme ta belle-soeur. "},
	{16, "16 Ruth répondit: Ne me presse pas de te laisser, de retourner loin de toi! Où tu iras j'irai, où tu demeureras je demeurerai; ton peuple sera mon peuple, et ton Dieu sera mon Dieu; "},
	{17, "17 où tu mourras je mourrai, et j'y serai enterrée. Que l'Éternel me traite dans toute sa rigueur, si autre chose que la mort vient à me séparer de toi! "},
	{18, "18 Naomi, la voyant décidée à aller avec elle, cessa ses instances. "},
	{19, "19 Elles firent ensemble le voyage jusqu'à leur arrivée à Bethléhem. Et lorsqu'elles entrèrent dans Bethléhem, toute la ville fut émue à cause d'elles, et les femmes disaient: Est-ce là Naomi? "},
	{20, "20 Elle leur dit: Ne m'appelez pas Naomi; appelez-moi Mara, car le Tout-Puissant m'a remplie d'amertume. "},
	{21, "21 J'étais dans l'abondance à mon départ, et l'Éternel me ramène les mains vides. Pourquoi m'appelleriez-vous Naomi, après que l'Éternel s'est prononcé contre moi, et que le Tout-Puissant m'a affligée? "},
	{22, "22 Ainsi revinrent du pays de Moab Naomi et sa belle-fille, Ruth la Moabite. Elles arrivèrent à Bethléhem au commencement de la moisson des orges. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct fr2 poems[] = {
	{1, "1 Naomi avait un parent de son mari. C'était un homme puissant et riche, de la famille d'Élimélec, et qui se nommait Boaz. "},
	{2, "2 Ruth la Moabite dit à Naomi: Laisse-moi, je te prie, aller glaner des épis dans le champ de celui aux yeux duquel je trouverai grâce. Elle lui répondit: Va, ma fille. "},
	{3, "3 Elle alla glaner dans un champ, derrière les moissonneurs. Et il se trouva par hasard que la pièce de terre appartenait à Boaz, qui était de la famille d'Élimélec. "},
	{4, "4 Et voici, Boaz vint de Bethléhem, et il dit aux moissonneurs: Que l'Éternel soit avec vous! Ils lui répondirent: Que l'Éternel te bénisse! "},
	{5, "5 Et Boaz dit à son serviteur chargé de surveiller les moissonneurs: A qui est cette jeune femme? "},
	{6, "6 Le serviteur chargé de surveiller les moissonneurs répondit: C'est une jeune femme Moabite, qui est revenue avec Naomi du pays de Moab. "},
	{7, "7 Elle a dit: Permettez-moi de glaner et de ramasser des épis entre les gerbes, derrière les moissonneurs. Et depuis ce matin qu'elle est venue, elle a été debout jusqu'à présent, et ne s'est reposée qu'un moment dans la maison. "},
	{8, "8 Boaz dit à Ruth: Écoute, ma fille, ne va pas glaner dans un autre champ; ne t'éloigne pas d'ici, et reste avec mes servantes. "},
	{9, "9 Regarde où l'on moissonne dans le champ, et va après elles. J'ai défendu à mes serviteurs de te toucher. Et quand tu auras soif, tu iras aux vases, et tu boiras de ce que les serviteurs auront puisé. "},
	{10, "10 Alors elle tomba sur sa face et se prosterna contre terre, et elle lui dit: Comment ai-je trouvé grâce à tes yeux, pour que tu t'intéresses à moi, à moi qui suis une étrangère? "},
	{11, "11 Boaz lui répondit: On m'a rapporté tout ce que tu as fait pour ta belle-mère depuis la mort de ton mari, et comment tu as quitté ton père et ta mère et le pays de ta naissance, pour aller vers un peuple que tu ne connaissais point auparavant. "},
	{12, "12 Que l'Éternel te rende ce que tu as fait, et que ta récompense soit entière de la part de l'Éternel, le Dieu d'Israël, sous les ailes duquel tu es venue te réfugier! "},
	{13, "13 Et elle dit: Oh! que je trouve grâce à tes yeux, mon seigneur! Car tu m'as consolée, et tu as parlé au coeur de ta servante. Et pourtant je ne suis pas, moi, comme l'une de tes servantes. "},
	{14, "14 Au moment du repas, Boaz dit à Ruth: Approche, mange du pain, et trempe ton morceau dans le vinaigre. Elle s'assit à côté des moissonneurs. On lui donna du grain rôti; elle mangea et se rassasia, et elle garda le reste. "},
	{15, "15 Puis elle se leva pour glaner. Boaz donna cet ordre à ses serviteurs: Qu'elle glane aussi entre les gerbes, et ne l'inquiétez pas, "},
	{16, "16 et même vous ôterez pour elle des gerbes quelques épis, que vous la laisserez glaner, sans lui faire de reproches. "},
	{17, "17 Elle glana dans le champ jusqu'au soir, et elle battit ce qu'elle avait glané. Il y eut environ un épha d'orge. "},
	{18, "18 Elle l'emporta et rentra dans la ville, et sa belle-mère vit ce qu'elle avait glané. Elle sortit aussi les restes de son repas, et les lui donna. "},
	{19, "19 Sa belle-mère lui dit: Où as-tu glané aujourd'hui, et où as-tu travaillé? Béni soit celui qui s'est intéressé à toi! Et Ruth fit connaître à sa belle-mère chez qui elle avait travaillé: L'homme chez qui j'ai travaillé aujourd'hui, dit-elle, s'appelle Boaz. "},
	{20, "20 Naomi dit à sa belle-fille: Qu'il soit béni de l'Éternel, qui se montre miséricordieux pour les vivants comme il le fut pour ceux qui sont morts! Cet homme est notre parent, lui dit encore Naomi, il est de ceux qui ont sur nous droit de rachat. "},
	{21, "21 Ruth la Moabite ajouta: Il m'a dit aussi: Reste avec mes serviteurs, jusqu'à ce qu'ils aient achevé toute ma moisson. "},
	{22, "22 Et Naomi dit à Ruth, sa belle-fille: Il est bon, ma fille, que tu sortes avec ses servantes, et qu'on ne te rencontre pas dans un autre champ. "},
	{23, "23 Elle resta donc avec les servantes de Boaz, pour glaner, jusqu'à la fin de la moisson des orges et de la moisson du froment. Et elle demeurait avec sa belle-mère. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct fr3 poems[] = {
	{1, "1 Naomi, sa belle-mère, lui dit: Ma fille, je voudrais assurer ton repos, afin que tu fusses heureuse. "},
	{2, "2 Et maintenant Boaz, avec les servantes duquel tu as été, n'est-il pas notre parent? Voici, il doit vanner cette nuit les orges qui sont dans l'aire. "},
	{3, "3 Lave-toi et oins-toi, puis remets tes habits, et descends à l'aire. Tu ne te feras pas connaître à lui, jusqu'à ce qu'il ait achevé de manger et de boire. "},
	{4, "4 Et quand il ira se coucher, observe le lieu où il se couche. Ensuite va, découvre ses pieds, et couche-toi. Il te dira lui-même ce que tu as à faire. "},
	{5, "5 Elle lui répondit: Je ferai tout ce que tu as dit. "},
	{6, "6 Elle descendit à l'aire, et fit tout ce qu'avait ordonné sa belle-mère. "},
	{7, "7 Boaz mangea et but, et son coeur était joyeux. Il alla se coucher à l'extrémité d'un tas de gerbes. Ruth vint alors tout doucement, découvrit ses pieds, et se coucha. "},
	{8, "8 Au milieu de la nuit, cet homme eut une frayeur; il se pencha, et voici, une femme était couchée à ses pieds. "},
	{9, "9 Il dit: Qui es-tu? Elle répondit: Je suis Ruth, ta servante; étends ton aile sur ta servante, car tu as droit de rachat. "},
	{10, "10 Et il dit: Sois bénie de l'Éternel, ma fille! Ce dernier trait témoigne encore plus en ta faveur que le premier, car tu n'as pas recherché des jeunes gens, pauvres ou riches. "},
	{11, "11 Maintenant, ma fille, ne crains point; je ferai pour toi tout ce que tu diras; car toute la porte de mon peuple sait que tu es une femme vertueuse. "},
	{12, "12 Il est bien vrai que j'ai droit de rachat, mais il en existe un autre plus proche que moi. "},
	{13, "13 Passe ici la nuit. Et demain, s'il veut user envers toi du droit de rachat, à la bonne heure, qu'il le fasse; mais s'il ne lui plaît pas d'en user envers toi, j'en userai, moi, l'Éternel est vivant! Reste couchée jusqu'au matin. "},
	{14, "14 Elle resta couchée à ses pieds jusqu'au matin, et elle se leva avant qu'on pût se reconnaître l'un l'autre. Boaz dit: Qu'on ne sache pas qu'une femme est entrée dans l'aire. "},
	{15, "15 Et il ajouta: Donne le manteau qui est sur toi, et tiens-le. Elle le tint, et il mesura six mesures d'orge, qu'il chargea sur elle. Puis il rentra dans la ville. "},
	{16, "16 Ruth revint auprès de sa belle-mère, et Naomi dit: Est-ce toi, ma fille? Ruth lui raconta tout ce que cet homme avait fait pour elle. "},
	{17, "17 Elle dit: Il m'a donné ces six mesures d'orge, en disant: Tu ne retourneras pas à vide vers ta belle-mère. "},
	{18, "18 Et Naomi dit: Sois tranquille, ma fille, jusqu'à ce que tu saches comment finira la chose, car cet homme ne se donnera point de repos qu'il n'ait terminé cette affaire aujourd'hui. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct fr4 poems[] = {
	{1, "1 Boaz monta à la porte, et s'y arrêta. Or voici, celui qui avait droit de rachat, et dont Boaz avait parlé, vint à passer. Boaz lui dit: Approche, reste ici, toi un tel. Et il s'approcha, et s'arrêta. "},
	{2, "2 Boaz prit alors dix hommes parmi les anciens de la ville, et il dit: Asseyez-vous ici. Et ils s'assirent. "},
	{3, "3 Puis il dit à celui qui avait le droit de rachat: Naomi, revenue du pays de Moab, a vendu la pièce de terre qui appartenait à notre frère Élimélec. "},
	{4, "4 J'ai cru devoir t'en informer, et te dire: Acquiers-la, en présence des habitants et en présence des anciens de mon peuple. Si tu veux racheter, rachète; mais si tu ne veux pas, déclare-le-moi, afin que je le sache. Car il n'y a personne avant toi qui ait le droit de rachat, et je l'ai après toi. Et il répondit: je rachèterai. "},
	{5, "5 Boaz dit: Le jour où tu acquerras le champ de la main de Naomi, tu l'acquerras en même temps de Ruth la Moabite, femme du défunt, pour relever le nom du défunt dans son héritage. "},
	{6, "6 Et celui qui avait le droit de rachat répondit: Je ne puis pas racheter pour mon compte, crainte de détruire mon héritage; prends pour toi mon droit de rachat, car je ne puis pas racheter. "},
	{7, "7 Autrefois en Israël, pour valider une affaire quelconque relative à un rachat ou à un échange, l'un ôtait son soulier et le donnait à l'autre: cela servait de témoignage en Israël. "},
	{8, "8 Celui qui avait le droit de rachat dit donc à Boaz: Acquiers pour ton compte! Et il ôta son soulier. "},
	{9, "9 Alors Boaz dit aux anciens et à tout le peuple: Vous êtes témoins aujourd'hui que j'ai acquis de la main de Naomi tout ce qui appartenait à Élimélec, à Kiljon et à Machlon, "},
	{10, "10 et que je me suis également acquis pour femme Ruth la Moabite, femme de Machlon, pour relever le nom du défunt dans son héritage, et afin que le nom du défunt ne soit point retranché d'entre ses frères et de la porte de son lieu. Vous en êtes témoins aujourd'hui! "},
	{11, "11 Tout le peuple qui était à la porte et les anciens dirent: Nous en sommes témoins! Que l'Éternel rende la femme qui entre dans ta maison semblable à Rachel et à Léa, qui toutes les deux ont bâti la maison d'Israël! Manifeste ta force dans Éphrata, et fais-toi un nom dans Bethléhem! "},
	{12, "12 Puisse la postérité que l'Éternel te donnera par cette jeune femme rendre ta maison semblable à la maison de Pérets, qui fut enfanté à Juda par Tamar! "},
	{13, "13 Boaz prit Ruth, qui devint sa femme, et il alla vers elle. L'Éternel permit à Ruth de concevoir, et elle enfanta un fils. "},
	{14, "14 Les femmes dirent à Naomi: Béni soit l'Éternel, qui ne t'a point laissé manquer aujourd'hui d'un homme ayant droit de rachat, et dont le nom sera célébré en Israël! "},
	{15, "15 Cet enfant restaurera ton âme, et sera le soutien de ta vieillesse; car ta belle-fille, qui t'aime, l'a enfanté, elle qui vaut mieux pour toi que sept fils. "},
	{16, "16 Naomi prit l'enfant et le mit sur son sein, et elle fut sa garde. "},
	{17, "17 Les voisines lui donnèrent un nom, en disant: Un fils est né à Naomi! Et elles l'appelèrent Obed. Ce fut le père d'Isaï père de David. "},
	{18, "18 Voici la postérité de Pérets. Pérets engendra Hetsron; "},
	{19, "19 Hetsron engendra Ram; Ram engendra Amminadab; "},
	{20, "20 Amminadab engendra Nachschon; Nachschon engendra Salmon; "},
	{21, "21 Salmon engendra Boaz; Boaz engendra Obed; "},
	{22, "22 Obed engendra Isaï; et Isaï engendra David. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};