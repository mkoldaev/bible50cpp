#include <map>
#include <string>
class Bible61
{
	struct fr1	{ int val; const char *msg; };
	struct fr2	{ int val; const char *msg; };
	struct fr3	{ int val; const char *msg; };
public:
static void view1() {
struct fr1 poems[] = {
	{1, "1 Simon Pierre, serviteur et apôtre de Jésus-Christ, à ceux qui ont reçu en partage une foi du même prix que la nôtre, par la justice de notre Dieu et du Sauveur Jésus-Christ: "},
	{2, "2 que la grâce et la paix vous soient multipliées par la connaissance de Dieu et de Jésus notre Seigneur! "},
	{3, "3 Comme sa divine puissance nous a donné tout ce qui contribue à la vie et à la piété, au moyen de la connaissance de celui qui nous a appelés par sa propre gloire et par sa vertu, "},
	{4, "4 lesquelles nous assurent de sa part les plus grandes et les plus précieuses promesses, afin que par elles vous deveniez participants de la nature divine, en fuyant la corruption qui existe dans le monde par la convoitise, "},
	{5, "5 à cause de cela même, faites tous vos efforts pour joindre à votre foi la vertu, à la vertu la science, "},
	{6, "6 à la science la tempérance, à la tempérance la patience, à la patience la piété, "},
	{7, "7 à la piété l'amour fraternel, à l'amour fraternel la charité. "},
	{8, "8 Car si ces choses sont en vous, et y sont avec abondance, elles ne vous laisseront point oisifs ni stériles pour la connaissance de notre Seigneur Jésus-Christ. "},
	{9, "9 Mais celui en qui ces choses ne sont point est aveugle, il ne voit pas de loin, et il a mis en oubli la purification de ses anciens péchés. "},
	{10, "10 C'est pourquoi, frères, appliquez-vous d'autant plus à affermir votre vocation et votre élection; car, en faisant cela, vous ne broncherez jamais. "},
	{11, "11 C'est ainsi, en effet, que l'entrée dans le royaume éternel de notre Seigneur et Sauveur Jésus-Christ vous sera pleinement accordée. "},
	{12, "12 Voilà pourquoi je prendrai soin de vous rappeler ces choses, bien que vous les sachiez et que vous soyez affermis dans la vérité présente. "},
	{13, "13 Et je regarde comme un devoir, aussi longtemps que je suis dans cette tente, de vous tenir en éveil par des avertissements, "},
	{14, "14 car je sais que je la quitterai subitement, ainsi que notre Seigneur Jésus-Christ me l'a fait connaître. "},
	{15, "15 Mais j'aurai soin qu'après mon départ vous puissiez toujours vous souvenir de ces choses. "},
	{16, "16 Ce n'est pas, en effet, en suivant des fables habilement conçues, que nous vous avons fait connaître la puissance et l'avènement de notre Seigneur Jésus-Christ, mais c'est comme ayant vu sa majesté de nos propres yeux. "},
	{17, "17 Car il a reçu de Dieu le Père honneur et gloire, quand la gloire magnifique lui fit entendre une voix qui disait: Celui-ci est mon Fils bien-aimé, en qui j'ai mis toute mon affection. "},
	{18, "18 Et nous avons entendu cette voix venant du ciel, lorsque nous étions avec lui sur la sainte montagne. "},
	{19, "19 Et nous tenons pour d'autant plus certaine la parole prophétique, à laquelle vous faites bien de prêter attention, comme à une lampe qui brille dans un lieu obscur, jusqu'à ce que le jour vienne à paraître et que l'étoile du matin se lève dans vos coeurs; "},
	{20, "20 sachant tout d'abord vous-mêmes qu'aucune prophétie de l'Écriture ne peut être un objet d'interprétation particulière, "},
	{21, "21 car ce n'est pas par une volonté d'homme qu'une prophétie a jamais été apportée, mais c'est poussés par le Saint-Esprit que des hommes ont parlé de la part de Dieu. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct fr2 poems[] = {
	{1, "1 Il y a eu parmi le peuple de faux prophètes, et il y aura de même parmi vous de faux docteurs, qui introduiront des sectes pernicieuses, et qui, reniant le maître qui les a rachetés, attireront sur eux une ruine soudaine. "},
	{2, "2 Plusieurs les suivront dans leurs dissolutions, et la voie de la vérité sera calomniée à cause d'eux. "},
	{3, "3 Par cupidité, ils trafiqueront de vous au moyen de paroles trompeuses, eux que menace depuis longtemps la condamnation, et dont la ruine ne sommeille point. "},
	{4, "4 Car, si Dieu n'a pas épargné les anges qui ont péché, mais s'il les a précipités dans les abîmes de ténèbres et les réserve pour le jugement; "},
	{5, "5 s'il n'a pas épargné l'ancien monde, mais s'il a sauvé Noé, lui huitième, ce prédicateur de la justice, lorsqu'il fit venir le déluge sur un monde d'impies; "},
	{6, "6 s'il a condamné à la destruction et réduit en cendres les villes de Sodome et de Gomorrhe, les donnant comme exemple aux impies à venir, "},
	{7, "7 et s'il a délivré le juste Lot, profondément attristé de la conduite de ces hommes sans frein dans leur dissolution "},
	{8, "8 (car ce juste, qui habitait au milieu d'eux, tourmentait journellement son âme juste à cause de ce qu'il voyait et entendait de leurs oeuvres criminelles); "},
	{9, "9 le Seigneur sait délivrer de l'épreuve les hommes pieux, et réserver les injustes pour être punis au jour du jugement, "},
	{10, "10 ceux surtout qui vont après la chair dans un désir d'impureté et qui méprisent l'autorité. Audacieux et arrogants, ils ne craignent pas d'injurier les gloires, "},
	{11, "11 tandis que les anges, supérieurs en force et en puissance, ne portent pas contre elles de jugement injurieux devant le Seigneur. "},
	{12, "12 Mais eux, semblables à des brutes qui s'abandonnent à leurs penchants naturels et qui sont nées pour être prises et détruites, ils parlent d'une manière injurieuse de ce qu'ils ignorent, et ils périront par leur propre corruption, "},
	{13, "13 recevant ainsi le salaire de leur iniquité. Ils trouvent leurs délices à se livrer au plaisir en plein jour; hommes tarés et souillés, ils se délectent dans leurs tromperies, en faisant bonne chère avec vous. "},
	{14, "14 Ils ont les yeux pleins d'adultère et insatiables de péché; ils amorcent les âmes mal affermies; ils ont le coeur exercé à la cupidité; ce sont des enfants de malédiction. "},
	{15, "15 Après avoir quitté le droit chemin, ils se sont égarés en suivant la voie de Balaam, fils de Bosor, qui aima le salaire de l'iniquité, "},
	{16, "16 mais qui fut repris pour sa transgression: une ânesse muette, faisant entendre une voix d'homme, arrêta la démence du prophète. "},
	{17, "17 Ces gens-là sont des fontaines sans eau, des nuées que chasse un tourbillon: l'obscurité des ténèbres leur est réservée. "},
	{18, "18 Avec des discours enflés de vanité, ils amorcent par les convoitises de la chair, par les dissolutions, ceux qui viennent à peine d'échapper aux hommes qui vivent dans l'égarement; "},
	{19, "19 ils leur promettent la liberté, quand ils sont eux-mêmes esclaves de la corruption, car chacun est esclave de ce qui a triomphé de lui. "},
	{20, "20 En effet, si, après s'être retirés des souillures du monde, par la connaissance du Seigneur et Sauveur Jésus-Christ, ils s'y engagent de nouveau et sont vaincus, leur dernière condition est pire que la première. "},
	{21, "21 Car mieux valait pour eux n'avoir pas connu la voie de la justice, que de se détourner, après l'avoir connue, du saint commandement qui leur avait été donné. "},
	{22, "22 Il leur est arrivé ce que dit un proverbe vrai: Le chien est retourné à ce qu'il avait vomi, et la truie lavée s'est vautrée dans le bourbier. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct fr3 poems[] = {
	{1, "1 Voici déjà, bien-aimés, la seconde lettre que je vous écris. Dans l'une et dans l'autre je cherche à éveiller par des avertissements votre saine intelligence, "},
	{2, "2 afin que vous vous souveniez des choses annoncées d'avance par les saints prophètes, et du commandement du Seigneur et Sauveur, (3:3) enseigné par vos apôtres, "},
	{3, "3 sachant avant tout que, dans les derniers jours, il viendra des moqueurs avec leurs railleries, marchant selon leurs propres convoitises, "},
	{4, "4 et disant: Où est la promesse de son avènement? Car, depuis que les pères sont morts, tout demeure comme dès le commencement de la création. "},
	{5, "5 Ils veulent ignorer, en effet, que des cieux existèrent autrefois par la parole de Dieu, de même qu'une terre tirée de l'eau et formée au moyen de l'eau, "},
	{6, "6 et que par ces choses le monde d'alors périt, submergé par l'eau, "},
	{7, "7 tandis que, par la même parole, les cieux et la terre d'à présent sont gardés et réservés pour le feu, pour le jour du jugement et de la ruine des hommes impies. "},
	{8, "8 Mais il est une chose, bien-aimés, que vous ne devez pas ignorer, c'est que, devant le Seigneur, un jour est comme mille ans, et mille ans sont comme un jour. "},
	{9, "9 Le Seigneur ne tarde pas dans l'accomplissement de la promesse, comme quelques-uns le croient; mais il use de patience envers vous, ne voulant pas qu'aucun périsse, mais voulant que tous arrivent à la repentance. "},
	{10, "10 Le jour du Seigneur viendra comme un voleur; en ce jour, les cieux passeront avec fracas, les éléments embrasés se dissoudront, et la terre avec les oeuvres qu'elle renferme sera consumée. "},
	{11, "11 Puisque donc toutes ces choses doivent se dissoudre, quelles ne doivent pas être la sainteté de votre conduite et votre piété, "},
	{12, "12 tandis que vous attendez et hâtez l'avènement du jour de Dieu, à cause duquel les cieux enflammés se dissoudront et les éléments embrasés se fondront! "},
	{13, "13 Mais nous attendons, selon sa promesse, de nouveaux cieux et une nouvelle terre, où la justice habitera. "},
	{14, "14 C'est pourquoi, bien-aimés, en attendant ces choses, appliquez-vous à être trouvés par lui sans tache et irrépréhensibles dans la paix. "},
	{15, "15 Croyez que la patience de notre Seigneur est votre salut, comme notre bien-aimé frère Paul vous l'a aussi écrit, selon la sagesse qui lui a été donnée. "},
	{16, "16 C'est ce qu'il fait dans toutes les lettres, où il parle de ces choses, dans lesquelles il y a des points difficiles à comprendre, dont les personnes ignorantes et mal affermies tordent le sens, comme celui des autres Écritures, pour leur propre ruine. "},
	{17, "17 Vous donc, bien-aimés, qui êtes avertis, mettez-vous sur vos gardes, de peur qu'entraînés par l'égarement des impies, vous ne veniez à déchoir de votre fermeté. "},
	{18, "18 Mais croissez dans la grâce et dans la connaissance de notre Seigneur et Sauveur Jésus-Christ. A lui soit la gloire, maintenant et pour l'éternité! Amen! "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};