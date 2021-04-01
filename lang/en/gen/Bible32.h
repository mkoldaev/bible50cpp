#include <map>
#include <string>
class Bible32
{
	struct en1	{ int val; const char *msg; };
	struct en2	{ int val; const char *msg; };
	struct en3	{ int val; const char *msg; };
	struct en4	{ int val; const char *msg; };
public:
static void view1() {
struct en1 poems[] = {
	{1, "1 Now the word of the LORD came unto Jonah the son of Amittai, saying,"},
	{2, "2 Arise, go to Nineveh, that great city, and cry against it; for their wickedness is come up before me."},
	{3, "3 But Jonah rose up to flee unto Tarshish from the presence of the LORD, and went down to Joppa; and he found a ship going to Tarshish: so he paid the fare thereof, and went down into it, to go with them unto Tarshish from the presence of the LORD."},
	{4, "4 But the LORD sent out a great wind into the sea, and there was a mighty tempest in the sea, so that the ship was like to be broken."},
	{5, "5 Then the mariners were afraid, and cried every man unto his god, and cast forth the wares that were in the ship into the sea, to lighten it of them. But Jonah was gone down into the sides of the ship; and he lay, and was fast asleep."},
	{6, "6 So the shipmaster came to him, and said unto him, What meanest thou, O sleeper? arise, call upon thy God, if so be that God will think upon us, that we perish not."},
	{7, "7 And they said every one to his fellow, Come, and let us cast lots, that we may know for whose cause this evil is upon us. So they cast lots, and the lot fell upon Jonah."},
	{8, "8 Then said they unto him, Tell us, we pray thee, for whose cause this evil is upon us; What is thine occupation? and whence comest thou? what is thy country? and of what people art thou?"},
	{9, "9 And he said unto them, I am an Hebrew; and I fear the LORD, the God of heaven, which hath made the sea and the dry land."},
	{10, "10 Then were the men exceedingly afraid, and said unto him, Why hast thou done this? For the men knew that he fled from the presence of the LORD, because he had told them."},
	{11, "11 Then said they unto him, What shall we do unto thee, that the sea may be calm unto us? for the sea wrought, and was tempestuous."},
	{12, "12 And he said unto them, Take me up, and cast me forth into the sea; so shall the sea be calm unto you: for I know that for my sake this great tempest is upon you."},
	{13, "13 Nevertheless the men rowed hard to bring it to the land; but they could not: for the sea wrought, and was tempestuous against them."},
	{14, "14 Wherefore they cried unto the LORD, and said, We beseech thee, O LORD, we beseech thee, let us not perish for this man's life, and lay not upon us innocent blood: for thou, O LORD, hast done as it pleased thee."},
	{15, "15 So they took up Jonah, and cast him forth into the sea: and the sea ceased from her raging."},
	{16, "16 Then the men feared the LORD exceedingly, and offered a sacrifice unto the LORD, and made vows."},
	{17, "17 Now the LORD had prepared a great fish to swallow up Jonah. And Jonah was in the belly of the fish three days and three nights."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct en2 poems[] = {
	{1, "1 Then Jonah prayed unto the LORD his God out of the fish's belly,"},
	{2, "2 And said, I cried by reason of mine affliction unto the LORD, and he heard me; out of the belly of hell cried I, and thou heardest my voice."},
	{3, "3 For thou hadst cast me into the deep, in the midst of the seas; and the floods compassed me about: all thy billows and thy waves passed over me."},
	{4, "4 Then I said, I am cast out of thy sight; yet I will look again toward thy holy temple."},
	{5, "5 The waters compassed me about, even to the soul: the depth closed me round about, the weeds were wrapped about my head."},
	{6, "6 I went down to the bottoms of the mountains; the earth with her bars was about me for ever: yet hast thou brought up my life from corruption, O LORD my God."},
	{7, "7 When my soul fainted within me I remembered the LORD: and my prayer came in unto thee, into thine holy temple."},
	{8, "8 They that observe lying vanities forsake their own mercy."},
	{9, "9 But I will sacrifice unto thee with the voice of thanksgiving; I will pay that that I have vowed. Salvation is of the LORD."},
	{10, "10 And the LORD spake unto the fish, and it vomited out Jonah upon the dry land."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct en3 poems[] = {
	{1, "1 And the word of the LORD came unto Jonah the second time, saying,"},
	{2, "2 Arise, go unto Nineveh, that great city, and preach unto it the preaching that I bid thee."},
	{3, "3 So Jonah arose, and went unto Nineveh, according to the word of the LORD. Now Nineveh was an exceeding great city of three days' journey."},
	{4, "4 And Jonah began to enter into the city a day's journey, and he cried, and said, Yet forty days, and Nineveh shall be overthrown."},
	{5, "5 So the people of Nineveh believed God, and proclaimed a fast, and put on sackcloth, from the greatest of them even to the least of them."},
	{6, "6 For word came unto the king of Nineveh, and he arose from his throne, and he laid his robe from him, and covered him with sackcloth, and sat in ashes."},
	{7, "7 And he caused it to be proclaimed and published through Nineveh by the decree of the king and his nobles, saying, Let neither man nor beast, herd nor flock, taste any thing: let them not feed, nor drink water:"},
	{8, "8 But let man and beast be covered with sackcloth, and cry mightily unto God: yea, let them turn every one from his evil way, and from the violence that is in their hands."},
	{9, "9 Who can tell if God will turn and repent, and turn away from his fierce anger, that we perish not?"},
	{10, "10 And God saw their works, that they turned from their evil way; and God repented of the evil, that he had said that he would do unto them; and he did it not."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct en4 poems[] = {
	{1, "1 But it displeased Jonah exceedingly, and he was very angry."},
	{2, "2 And he prayed unto the LORD, and said, I pray thee, O LORD, was not this my saying, when I was yet in my country? Therefore I fled before unto Tarshish: for I knew that thou art a gracious God, and merciful, slow to anger, and of great kindness, and repentest thee of the evil."},
	{3, "3 Therefore now, O LORD, take, I beseech thee, my life from me; for it is better for me to die than to live."},
	{4, "4 Then said the LORD, Doest thou well to be angry?"},
	{5, "5 So Jonah went out of the city, and sat on the east side of the city, and there made him a booth, and sat under it in the shadow, till he might see what would become of the city."},
	{6, "6 And the LORD God prepared a gourd, and made it to come up over Jonah, that it might be a shadow over his head, to deliver him from his grief. So Jonah was exceeding glad of the gourd."},
	{7, "7 But God prepared a worm when the morning rose the next day, and it smote the gourd that it withered."},
	{8, "8 And it came to pass, when the sun did arise, that God prepared a vehement east wind; and the sun beat upon the head of Jonah, that he fainted, and wished in himself to die, and said, It is better for me to die than to live."},
	{9, "9 And God said to Jonah, Doest thou well to be angry for the gourd? And he said, I do well to be angry, even unto death."},
	{10, "10 Then said the LORD, Thou hast had pity on the gourd, for the which thou hast not laboured, neither madest it grow; which came up in a night, and perished in a night:"},
	{11, "11 And should not I spare Nineveh, that great city, wherein are more than sixscore thousand persons that cannot discern between their right hand and their left hand; and also much cattle?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};