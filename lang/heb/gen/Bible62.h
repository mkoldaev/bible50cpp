#include <map>
#include <string>
class Bible62
{
	struct heb1	{ int val; const char *msg; };
	struct heb2	{ int val; const char *msg; };
	struct heb3	{ int val; const char *msg; };
	struct heb4	{ int val; const char *msg; };
	struct heb5	{ int val; const char *msg; };
public:
static void view1() {
struct heb1 poems[] = {
	{1, "1 את אשר היה מראש אשר שמענו ובעינינו ראינו אשר הבטנו ואשר מששו ידינו על דבר החיים׃"},
	{2, "2 והחיים נגלו ונרא ומעידים אנחנו ומודיעים לכם את חיי העולם אשר היו עם האב ונגלו לנו׃"},
	{3, "3 את אשר ראינו ושמענו נודיעה לכם למען תתחברו לנו גם אתם והתחברותנו היא עם האב ועם בנו ישוע המשיח׃"},
	{4, "4 ואת זאת כתבים אנחנו לכם למען תהיה שמחתכם שלמה׃"},
	{5, "5 וזאת היא השמועה אשר שמענו ממנו ונגד לכם כי האלהים אור הוא וכל חשך אין בו׃"},
	{6, "6 אם נאמר כי יש לנו התחברות עמו ונתהלך בחשך הננו כזבים ופעלתנו איננה אמת׃"},
	{7, "7 אך אם באור נלך כאשר הוא באור הנה נתחברנו יחד ודם ישוע המשיח בנו יטהרנו מכל חטא׃"},
	{8, "8 אם נאמר כי אין בנו חטא הננו מתעים את נפשתינו והאמת אין בנו׃"},
	{9, "9 ואם נתודה את חטאתינו נאמן הוא וצדיק לסלח לנו את חטאתינו ולטהרנו מכל עון׃"},
	{10, "10 ואם נאמר כי לא חטאנו לכזב נשימנו ודברו אין בנו׃"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct heb2 poems[] = {
	{1, "1 בני הנני כתב אליכם את זאת לבלתי תחטאו ואם יחטא איש יש לנו מליץ לפני אבינו ישוע המשיח הצדיק׃"},
	{2, "2 והוא כפרה על חטאתינו ולא על חטאתינו לבד כי גם על חטאת כל העולם׃"},
	{3, "3 ובזאת נדע כי הכרנו אותו אם נשמר את מצותיו׃"},
	{4, "4 האמר הכרתיו ואת מצותיו לא ישמר כזב הוא והאמת אין בו׃"},
	{5, "5 אבל השמר את דברו בו נשלמה באמת אהבת אלהים ובזאת נדע כי בו אנחנו׃"},
	{6, "6 האמר כי בו יעמד עליו להתהלך בדרך אשר גם הוא הלך׃"},
	{7, "7 אחי אינני כתב לכם מצוה חדשה כי אם מצוה ישנה אשר היתה לכם מראש והמצוה הישנה היא הדבר אשר שמעתם מראש׃"},
	{8, "8 ועוד מצוה חדשה אני כתב לכם אשר היא אמת גם בו גם בכם כי החשך עבר והאור האמתי כבר זורח׃"},
	{9, "9 האומר כי ישנו באור והוא שנא את אחיו עודנו בחשך׃"},
	{10, "10 האהב את אחיו יעמד באור ומכשול אין בו׃"},
	{11, "11 והשנא את אחיו בחשך הוא ובחשך יתהלך ולא ידע אנה הוא הלך כי החשך עור את עיניו׃"},
	{12, "12 הנני כתב אליכם הבנים יען כי נסלחו לכם חטאתיכם למען שמו׃"},
	{13, "13 כתב אני אליכם האבות יען כי הכרתם אתו אשר הוא מראש כתב אני אליכם הבחורים יען כי התגברתם על הרע כתב אני אליכם הילדים יען כי הכרתם את האב׃"},
	{14, "14 כתבתי אליכם האבות יען כי הכרתם אתו אשר הוא מראש כתבתי אליכם הבחורים יען כי חזקתם ודבר האלהים שכן בקרבכם והתגברתם על הרע׃"},
	{15, "15 אל תאהבו את החלד ואת דברי החלד אם יאהב איש את החלד אין בו אהבת האב׃"},
	{16, "16 כי כל אשר בחלד תאות הבשר ותאות העינים וגאות ההון איננו מן אבינו כי אם מן החלד׃"},
	{17, "17 והחלד עבור יעבר עם תאותיו והעשה רצון אלהים יעמד לעד׃"},
	{18, "18 ילדי הנה השעה האחרונה באה וכאשר שמעתם כי יבא צר המשיח כן עתה רבו צרי המשיח ובזאת נדע כי היא השעה האחרונה׃"},
	{19, "19 מאתנו יצאו אך לא משלנו היו כי אלו היו משלנו כי אז היו עמדים עמנו אבל למען יגלו כי לא כלם משלנו המה׃"},
	{20, "20 ואתם המשחה לכם מאת הקדוש וידעתם הכל׃"},
	{21, "21 לא כתבתי אליכם יען כי לא ידעתם את האמת אך יען כי ידעתם אתה ואשר כל כזב איננו מן האמת׃"},
	{22, "22 מי הוא הכזב אם לא המכחש בישוע לאמר כי איננו המשיח זה הוא צר המשיח המכחש באב ובבן׃"},
	{23, "23 כל המכחש בבן גם האב אין לו׃"},
	{24, "24 ואתם יקם נא בכם הדבר אשר שמעתם מראש ואם יקום בכם אשר שמעתם מראש אז גם אתם תקומו בבן ובאב׃"},
	{25, "25 וההבטחה אשר הבטיחנו היא חיי עולמים׃"},
	{26, "26 זאת כתבתי אליכם מפני המתעים אתכם׃"},
	{27, "27 ואתם המשחה אשר קבלתם מאתו עמדת בכם ולא תצטרכו לאיש אשר ילמדכם כי אם כאשר תלמד אתכם המשחה בכל דבר היא האמת ואיננה כזב וכאשר למדה אתכם כן תעמדו בו׃"},
	{28, "28 ועתה בנים עמדו בו למען יאמץ לבנו בהראותו ולא נבוש מפניו בבואו׃"},
	{29, "29 אם ידעתם כי צדיק הוא דעו כי כל עשה צדקה נולד ממנו׃"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct heb3 poems[] = {
	{1, "1 ראו מה גדלה אהבת האב הנתונה לנו אשר נקרא בני האלהים על כן העולם איננו ידע אתנו יען כי אותו לא ידע׃"},
	{2, "2 אהובי עתה בנים לאלהים אנחנו ועוד לא נגלה מה נהיה אך ידענו כי בהגלותו נדמה לו כי נראהו כאשר הוא׃"},
	{3, "3 וכל אשר לו תקוה כזאת יטהר את עצמו כאשר טהור גם הוא׃"},
	{4, "4 כל העשה חטא גם פשע בתורה הוא והחטא הוא פשע בתורה׃"},
	{5, "5 וידעתם כי הוא נגלה לשאת את חטאינו ובו אין חטא׃"},
	{6, "6 כל העמד בו לא יחטא כל החוטא לא ראהו גם לא ידעו׃"},
	{7, "7 בני אל יתעה אתכם איש העשה צדקה צדיק הוא כאשר הוא צדיק׃"},
	{8, "8 והעשה חטא מן השטן הוא כי השטן חטא מראש לזאת נגלה בן האלהים להפר את פעלות השטן׃"},
	{9, "9 כל הנולד מאלהים לא יחטא כי זרעו בו יקום ולא יוכל לחטא כי מאלהים נולד׃"},
	{10, "10 ונודעו בזאת בני האלהים ובני השטן כל איש אשר לא יעשה צדקה איננו מאלהים וכן כל אשר לא יאהב את אחיו׃"},
	{11, "11 כי זאת היא השמועה אשר שמעתם מראש לאהבה איש את רעהו׃"},
	{12, "12 לא כקין אשר היה מן הרע והרג את אחיו ומדוע הרגו יען כי מעשיו היו רעים ומעשי אחיו מעשי צדק׃"},
	{13, "13 אל תתמהו אחי אם ישנא אתכם העולם׃"},
	{14, "14 אנחנו ידענו כי עברנו מן המות אל החיים על כי נאהב את אחינו איש אשר לא יאהב את אחיו ישאר במות׃"},
	{15, "15 כל השנא את אחיו רצח נפש הוא וידעתם כי כל רצח נפש לא יתקימו בו חיי עולמים׃"},
	{16, "16 בזאת הכרנו את האהבה כי הוא נתן את נפשו בעדנו גם אנחנו חיבים לתת את נפשתינו בעד אחינו׃"},
	{17, "17 ואיש אשר לו נכסי העולם והוא ראה את אחיו חסר לחם וקפץ את רחמיו ממנו איך תעמד בו אהבת אלהים׃"},
	{18, "18 בני אל נא נאהב במלין ובלשון כי אם בפעל ובאמת׃"},
	{19, "19 ובזאת נדעה כי מן האמת אנחנו ולפניו נשקיט את לבותינו׃"},
	{20, "20 כי אם לבבנו ירשיע אתנו האלהים נשגב הוא מלבבנו וידע את כל׃"},
	{21, "21 אהובי אם לבבנו לא ירשיענו בטחון לנו באלהים׃"},
	{22, "22 וכל אשר נשאל מאתו נקבל כי נשמר את מצותיו ונעשה את הרצוי לפניו׃"},
	{23, "23 וזאת היא מצותו להאמין בשם בנו ישוע המשיח ולאהבה איש את רעהו כאשר צונו׃"},
	{24, "24 והשמר את מצותיו יקום בו והוא בו ובזאת נדע כי הוא שכן בנו ברוח אשר נתן לנו׃"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct heb4 poems[] = {
	{1, "1 אהובי אל תאמינו לכל רוח כי אם בחנו הרוחות אם מאלהים המה כי נביאי שקר רבים יצאו לעולם׃"},
	{2, "2 בזאת תכירו את רוח אלהים כל רוח המודה בישוע המשיח כי בא בבשר מאלהים הוא׃"},
	{3, "3 וכל רוח אשר איננו מודה בישוע האדון כי בא בבשר לא מאלהים הוא וזה הוא רוח צר המשיח אשר שמעתם עליו כי בוא יבא ועתה הנה הוא בעולם׃"},
	{4, "4 אתם הבנים הנכם מאלהים ונצחתם אתם כי אשר בכם גדול הוא מאשר בעולם׃"},
	{5, "5 המה מן העולם על כן מהעולם ידברו והעולם ישמע אליהם׃"},
	{6, "6 ואנחנו מאלהים הננו היודע את האלהים ישמע אלינו ואשר איננו מאלהים לא ישמע אלינו בזאת נכיר את רוח האמת ואת רוח התועה׃"},
	{7, "7 אהובי נאהב נא איש את רעהו כי האהבה מאלהים היא וכל אשר יאהב נולד מאלהים וידע את האלהים׃"},
	{8, "8 ואשר איננו אהב לא ידע את האלהים כי האלהים הוא אהבה׃"},
	{9, "9 בזאת נראתה אהבת האלהים לנו כי שלח האלהים את בנו את יחידו לעולם למען נחיה על ידו׃"},
	{10, "10 בזאת היא האהבה לא שאנחנו אהבנו את האלהים כי אם הוא אהב אותנו וישלח את בנו לכפרה על חטאתינו׃"},
	{11, "11 אהובי אם ככה אהב אתנו האלהים גם אנחנו חיבים לאהבה איש את רעהו׃"},
	{12, "12 את האלהים לא ראה איש מעולם ואם נאהב איש את רעהו האלהים יעמד בקרבנו ואהבתו נשלמה בנו׃"},
	{13, "13 בזאת נדע אשר בו נקום והוא בנו כי נתן לנו מרוחו׃"},
	{14, "14 ואנחנו חזינו ונעידה כי האב שלח את הבן מושיע העולם׃"},
	{15, "15 כל המודה כי ישוע הוא בן האלהים האלהים שכן בו והוא באלהים׃"},
	{16, "16 ואנחנו ידענו ונאמן באהבה אשר אלהים אהב אתנו האלהים הוא אהבה והעמד באהבה עמד באלהים והאלהים עמד בו׃"},
	{17, "17 ובזאת נשלמה בנו האהבה בהיות לנו בטחון ביום הדין כי כמהו כן גם אנחנו בעולם הזה׃"},
	{18, "18 אין אימה באהבה כי אם האהבה השלמה תגרש את האימה כי באימה מעצבה ואשר באימה איננו שלם באהבה׃"},
	{19, "19 אנחנו אהבים אתו כי הוא קדם לאהבה אתנו׃"},
	{20, "20 כי יאמר איש אהב אני את האלהים והוא שנא את אחיו כזב הוא כי אשר לא יאהב את אחיו אשר הוא ראה איככה יוכל לאהב את האלהים אשר איננו ראה אתו׃"},
	{21, "21 וזאת המצוה יש לנו מאתו כי האהב את האלהים יאהב גם את אחיו׃"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct heb5 poems[] = {
	{1, "1 כל המאמין כי ישוע הוא המשיח הנה זה ילד מאלהים וכל האהב את מולידו יאהב גם את הנולד מאתו׃"},
	{2, "2 בזאת נדע כי נאהב את בני האלהים באהבתנו את האלהים ובשמרנו את מצותיו׃"},
	{3, "3 כי זאת אהבת אלהים היא אשר נשמר את מצותיו ומצותיו אינן כבדות׃"},
	{4, "4 כי כל הנולד מאת האלהים מנצח את העולם ואמונתנו הנצחון המנצח את העולם׃"},
	{5, "5 מי הוא זה המנצח את העולם אם לא המאמין בישוע שהוא בן האלהים׃"},
	{6, "6 זה הוא אשר בא במים ובדם ישוע המשיח לא במים לבד כי אם במים ובדם והרוח הוא המעיד כי הרוח הוא האמת׃"},
	{7, "7 כי שלשה המה המעידים בשמים האב הדבר ורוח הקדש ושלשתם אחד המה׃"},
	{8, "8 ושלשה המה המעידים בארץ הרוח המים והדם ושלשתם לאחת המה׃"},
	{9, "9 אם נקבל עדות בני אדם הנה עדות האלהים גדולה ממנה כי זאת היא עדות האלהים אשר העיד על בנו׃"},
	{10, "10 המאמין בבן האלהים יש לו העדות בנפשו ואשר לא יאמין לאלהים לכזב שמהו יען לא האמין בעדות אשר העיד האלהים על בנו׃"},
	{11, "11 וזאת היא העדות כי חיי עולמים נתן לנו האלהים והחיים האלה בבנו המה׃"},
	{12, "12 אשר יש לו הבן יש לו החיים ואשר אין לו בן האלהים אין לו החיים׃"},
	{13, "13 זאת כתבתי אליכם המאמינים בשם בן האלהים למען תדעון שיש לכם חיי עולם ולמען תאמינו בשם בן האלהים׃"},
	{14, "14 וזה הוא בטחוננו אליו אשר אם נשאל דבר כפי רצונו ישמענו׃"},
	{15, "15 ומדעתנו כי ישמענו לכל אשר נשאל נדע גם זאת כי נשיג את המשאלות אשר שאלנו ממנו׃"},
	{16, "16 איש כי יראה את אחיו חוטא חטאת אשר לא למות שאל ישאל בעדו ויתן לו חיים לכל אשר חטאו לא למות הן יש חטא למות על זה לא אמר לשאל בעדו׃"},
	{17, "17 כל מעשה שלא כמשפט חטא היא ויש חטא שלא למות׃"},
	{18, "18 ידענו כי כל הנולד מאת האלהים לא יחטא כי אשר ילד מאת האלהים ישמר את נפשו והרע לא יגע בו׃"},
	{19, "19 ידענו כי מאלהים אנחנו וכל העולם ברע הוא׃"},
	{20, "20 וידענו כי בא בן אלהים ויתן לנו בינה לדעת את האמתי ובאמתי אנחנו בבנו ישוע המשיח זה הוא האל האמתי וחיי העולם׃"},
	{21, "21 בני השמרו לכם מן האלילים אמן׃"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};