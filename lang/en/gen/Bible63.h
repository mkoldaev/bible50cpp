#include <map>
#include <string>
class Bible63
{
	struct en1	{ int val; const char *msg; };
public:
static void view1() {
struct en1 poems[] = {
	{1, "1 The elder unto the elect lady and her children, whom I love in the truth; and not I only, but also all they that have known the truth;"},
	{2, "2 For the truth's sake, which dwelleth in us, and shall be with us for ever."},
	{3, "3 Grace be with you, mercy, and peace, from God the Father, and from the Lord Jesus Christ, the Son of the Father, in truth and love."},
	{4, "4 I rejoiced greatly that I found of thy children walking in truth, as we have received a commandment from the Father."},
	{5, "5 And now I beseech thee, lady, not as though I wrote a new commandment unto thee, but that which we had from the beginning, that we love one another."},
	{6, "6 And this is love, that we walk after his commandments. This is the commandment, That, as ye have heard from the beginning, ye should walk in it."},
	{7, "7 For many deceivers are entered into the world, who confess not that Jesus Christ is come in the flesh. This is a deceiver and an antichrist."},
	{8, "8 Look to yourselves, that we lose not those things which we have wrought, but that we receive a full reward."},
	{9, "9 Whosoever transgresseth, and abideth not in the doctrine of Christ, hath not God. He that abideth in the doctrine of Christ, he hath both the Father and the Son."},
	{10, "10 If there come any unto you, and bring not this doctrine, receive him not into your house, neither bid him God speed:"},
	{11, "11 For he that biddeth him God speed is partaker of his evil deeds."},
	{12, "12 Having many things to write unto you, I would not write with paper and ink: but I trust to come unto you, and speak face to face, that our joy may be full."},
	{13, "13 The children of thy elect sister greet thee. Amen."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};