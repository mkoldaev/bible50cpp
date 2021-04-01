#include <map>
#include <string>
class Bible8
{
	struct heb1	{ int val; const char *msg; };
	struct heb2	{ int val; const char *msg; };
	struct heb3	{ int val; const char *msg; };
	struct heb4	{ int val; const char *msg; };
public:
static void view1() {
struct heb1 poems[] = {
	{1, "1 ויהי בימי שפט השפטים ויהי רעב בארץ וילך איש מבית לחם יהודה לגור בשדי מואב הוא ואשתו ושני בניו׃"},
	{2, "2 ושם האיש אלימלך ושם אשתו נעמי ושם שני בניו מחלון וכליון אפרתים מבית לחם יהודה ויבאו שדי מואב ויהיו שם׃"},
	{3, "3 וימת אלימלך איש נעמי ותשאר היא ושני בניה׃"},
	{4, "4 וישאו להם נשים מאביות שם האחת ערפה ושם השנית רות וישבו שם כעשר שנים׃"},
	{5, "5 וימותו גם שניהם מחלון וכליון ותשאר האשה משני ילדיה ומאישה׃"},
	{6, "6 ותקם היא וכלתיה ותשב משדי מואב כי שמעה בשדה מואב כי פקד יהוה את עמו לתת להם לחם׃"},
	{7, "7 ותצא מן המקום אשר היתה שמה ושתי כלתיה עמה ותלכנה בדרך לשוב אל ארץ יהודה׃"},
	{8, "8 ותאמר נעמי לשתי כלתיה לכנה שבנה אשה לבית אמה יעשה יהוה עמכם חסד כאשר עשיתם עם המתים ועמדי׃"},
	{9, "9 יתן יהוה לכם ומצאן מנוחה אשה בית אישה ותשק להן ותשאנה קולן ותבכינה׃"},
	{10, "10 ותאמרנה לה כי אתך נשוב לעמך׃"},
	{11, "11 ותאמר נעמי שבנה בנתי למה תלכנה עמי העוד לי בנים במעי והיו לכם לאנשים׃"},
	{12, "12 שבנה בנתי לכן כי זקנתי מהיות לאיש כי אמרתי יש לי תקוה גם הייתי הלילה לאיש וגם ילדתי בנים׃"},
	{13, "13 הלהן תשברנה עד אשר יגדלו הלהן תעגנה לבלתי היות לאיש אל בנתי כי מר לי מאד מכם כי יצאה בי יד יהוה׃"},
	{14, "14 ותשנה קולן ותבכינה עוד ותשק ערפה לחמותה ורות דבקה בה׃"},
	{15, "15 ותאמר הנה שבה יבמתך אל עמה ואל אלהיה שובי אחרי יבמתך׃"},
	{16, "16 ותאמר רות אל תפגעי בי לעזבך לשוב מאחריך כי אל אשר תלכי אלך ובאשר תליני אלין עמך עמי ואלהיך אלהי׃"},
	{17, "17 באשר תמותי אמות ושם אקבר כה יעשה יהוה לי וכה יסיף כי המות יפריד ביני ובינך׃"},
	{18, "18 ותרא כי מתאמצת היא ללכת אתה ותחדל לדבר אליה׃"},
	{19, "19 ותלכנה שתיהם עד באנה בית לחם ויהי כבאנה בית לחם ותהם כל העיר עליהן ותאמרנה הזאת נעמי׃"},
	{20, "20 ותאמר אליהן אל תקראנה לי נעמי קראן לי מרא כי המר שדי לי מאד׃"},
	{21, "21 אני מלאה הלכתי וריקם השיבני יהוה למה תקראנה לי נעמי ויהוה ענה בי ושדי הרע לי׃"},
	{22, "22 ותשב נעמי ורות המואביה כלתה עמה השבה משדי מואב והמה באו בית לחם בתחלת קציר שערים׃"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct heb2 poems[] = {
	{1, "1 ולנעמי מידע לאישה איש גבור חיל ממשפחת אלימלך ושמו בעז׃"},
	{2, "2 ותאמר רות המואביה אל נעמי אלכה נא השדה ואלקטה בשבלים אחר אשר אמצא חן בעיניו ותאמר לה לכי בתי׃"},
	{3, "3 ותלך ותבוא ותלקט בשדה אחרי הקצרים ויקר מקרה חלקת השדה לבעז אשר ממשפחת אלימלך׃"},
	{4, "4 והנה בעז בא מבית לחם ויאמר לקוצרים יהוה עמכם ויאמרו לו יברכך יהוה׃"},
	{5, "5 ויאמר בעז לנערו הנצב על הקוצרים למי הנערה הזאת׃"},
	{6, "6 ויען הנער הנצב על הקוצרים ויאמר נערה מואביה היא השבה עם נעמי משדה מואב׃"},
	{7, "7 ותאמר אלקטה נא ואספתי בעמרים אחרי הקוצרים ותבוא ותעמוד מאז הבקר ועד עתה זה שבתה הבית מעט׃"},
	{8, "8 ויאמר בעז אל רות הלוא שמעת בתי אל תלכי ללקט בשדה אחר וגם לא תעבורי מזה וכה תדבקין עם נערתי׃"},
	{9, "9 עיניך בשדה אשר יקצרון והלכת אחריהן הלוא צויתי את הנערים לבלתי נגעך וצמת והלכת אל הכלים ושתית מאשר ישאבון הנערים׃"},
	{10, "10 ותפל על פניה ותשתחו ארצה ותאמר אליו מדוע מצאתי חן בעיניך להכירני ואנכי נכריה׃"},
	{11, "11 ויען בעז ויאמר לה הגד הגד לי כל אשר עשית את חמותך אחרי מות אישך ותעזבי אביך ואמך וארץ מולדתך ותלכי אל עם אשר לא ידעת תמול שלשום׃"},
	{12, "12 ישלם יהוה פעלך ותהי משכרתך שלמה מעם יהוה אלהי ישראל אשר באת לחסות תחת כנפיו׃"},
	{13, "13 ותאמר אמצא חן בעיניך אדני כי נחמתני וכי דברת על לב שפחתך ואנכי לא אהיה כאחת שפחתיך׃"},
	{14, "14 ויאמר לה בעז לעת האכל גשי הלם ואכלת מן הלחם וטבלת פתך בחמץ ותשב מצד הקוצרים ויצבט לה קלי ותאכל ותשבע ותתר׃"},
	{15, "15 ותקם ללקט ויצו בעז את נעריו לאמר גם בין העמרים תלקט ולא תכלימוה׃"},
	{16, "16 וגם של תשלו לה מן הצבתים ועזבתם ולקטה ולא תגערו בה׃"},
	{17, "17 ותלקט בשדה עד הערב ותחבט את אשר לקטה ויהי כאיפה שערים׃"},
	{18, "18 ותשא ותבוא העיר ותרא חמותה את אשר לקטה ותוצא ותתן לה את אשר הותרה משבעה׃"},
	{19, "19 ותאמר לה חמותה איפה לקטת היום ואנה עשית יהי מכירך ברוך ותגד לחמותה את אשר עשתה עמו ותאמר שם האיש אשר עשיתי עמו היום בעז׃"},
	{20, "20 ותאמר נעמי לכלתה ברוך הוא ליהוה אשר לא עזב חסדו את החיים ואת המתים ותאמר לה נעמי קרוב לנו האיש מגאלנו הוא׃"},
	{21, "21 ותאמר רות המואביה גם כי אמר אלי עם הנערים אשר לי תדבקין עד אם כלו את כל הקציר אשר לי׃"},
	{22, "22 ותאמר נעמי אל רות כלתה טוב בתי כי תצאי עם נערותיו ולא יפגעו בך בשדה אחר׃"},
	{23, "23 ותדבק בנערות בעז ללקט עד כלות קציר השערים וקציר החטים ותשב את חמותה׃"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct heb3 poems[] = {
	{1, "1 ותאמר לה נעמי חמותה בתי הלא אבקש לך מנוח אשר ייטב לך׃"},
	{2, "2 ועתה הלא בעז מדעתנו אשר היית את נערותיו הנה הוא זרה את גרן השערים הלילה׃"},
	{3, "3 ורחצת וסכת ושמת שמלתך עליך וירדתי הגרן אל תודעי לאיש עד כלתו לאכל ולשתות׃"},
	{4, "4 ויהי בשכבו וידעת את המקום אשר ישכב שם ובאת וגלית מרגלתיו ושכבתי והוא יגיד לך את אשר תעשין׃"},
	{5, "5 ותאמר אליה כל אשר תאמרי אעשה׃"},
	{6, "6 ותרד הגרן ותעש ככל אשר צותה חמותה׃"},
	{7, "7 ויאכל בעז וישת וייטב לבו ויבא לשכב בקצה הערמה ותבא בלט ותגל מרגלתיו ותשכב׃"},
	{8, "8 ויהי בחצי הלילה ויחרד האיש וילפת והנה אשה שכבת מרגלתיו׃"},
	{9, "9 ויאמר מי את ותאמר אנכי רות אמתך ופרשת כנפך על אמתך כי גאל אתה׃"},
	{10, "10 ויאמר ברוכה את ליהוה בתי היטבת חסדך האחרון מן הראשון לבלתי לכת אחרי הבחורים אם דל ואם עשיר׃"},
	{11, "11 ועתה בתי אל תיראי כל אשר תאמרי אעשה לך כי יודע כל שער עמי כי אשת חיל את׃"},
	{12, "12 ועתה כי אמנם כי אם גאל אנכי וגם יש גאל קרוב ממני׃"},
	{13, "13 ליני הלילה והיה בבקר אם יגאלך טוב יגאל ואם לא יחפץ לגאלך וגאלתיך אנכי חי יהוה שכבי עד הבקר׃"},
	{14, "14 ותשכב מרגלתו עד הבקר ותקם בטרום יכיר איש את רעהו ויאמר אל יודע כי באה האשה הגרן׃"},
	{15, "15 ויאמר הבי המטפחת אשר עליך ואחזי בה ותאחז בה וימד שש שערים וישת עליה ויבא העיר׃"},
	{16, "16 ותבוא אל חמותה ותאמר מי את בתי ותגד לה את כל אשר עשה לה האיש׃"},
	{17, "17 ותאמר שש השערים האלה נתן לי כי אמר אל תבואי ריקם אל חמותך׃"},
	{18, "18 ותאמר שבי בתי עד אשר תדעין איך יפל דבר כי לא ישקט האיש כי אם כלה הדבר היום׃"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct heb4 poems[] = {
	{1, "1 ובעז עלה השער וישב שם והנה הגאל עבר אשר דבר בעז ויאמר סורה שבה פה פלני אלמני ויסר וישב׃"},
	{2, "2 ויקח עשרה אנשים מזקני העיר ויאמר שבו פה וישבו׃"},
	{3, "3 ויאמר לגאל חלקת השדה אשר לאחינו לאלימלך מכרה נעמי השבה משדה מואב׃"},
	{4, "4 ואני אמרתי אגלה אזנך לאמר קנה נגד הישבים ונגד זקני עמי אם תגאל גאל ואם לא יגאל הגידה לי ואדע כי אין זולתך לגאול ואנכי אחריך ויאמר אנכי אגאל׃"},
	{5, "5 ויאמר בעז ביום קנותך השדה מיד נעמי ומאת רות המואביה אשת המת קניתי להקים שם המת על נחלתו׃"},
	{6, "6 ויאמר הגאל לא אוכל לגאול לי פן אשחית את נחלתי גאל לך אתה את גאלתי כי לא אוכל לגאל׃"},
	{7, "7 וזאת לפנים בישראל על הגאולה ועל התמורה לקים כל דבר שלף איש נעלו ונתן לרעהו וזאת התעודה בישראל׃"},
	{8, "8 ויאמר הגאל לבעז קנה לך וישלף נעלו׃"},
	{9, "9 ויאמר בעז לזקנים וכל העם עדים אתם היום כי קניתי את כל אשר לאלימלך ואת כל אשר לכליון ומחלון מיד נעמי׃"},
	{10, "10 וגם את רות המאביה אשת מחלון קניתי לי לאשה להקים שם המת על נחלתו ולא יכרת שם המת מעם אחיו ומשער מקומו עדים אתם היום׃"},
	{11, "11 ויאמרו כל העם אשר בשער והזקנים עדים יתן יהוה את האשה הבאה אל ביתך כרחל וכלאה אשר בנו שתיהם את בית ישראל ועשה חיל באפרתה וקרא שם בבית לחם׃"},
	{12, "12 ויהי ביתך כבית פרץ אשר ילדה תמר ליהודה מן הזרע אשר יתן יהוה לך מן הנערה הזאת׃"},
	{13, "13 ויקח בעז את רות ותהי לו לאשה ויבא אליה ויתן יהוה לה הריון ותלד בן׃"},
	{14, "14 ותאמרנה הנשים אל נעמי ברוך יהוה אשר לא השבית לך גאל היום ויקרא שמו בישראל׃"},
	{15, "15 והיה לך למשיב נפש ולכלכל את שיבתך כי כלתך אשר אהבתך ילדתו אשר היא טובה לך משבעה בנים׃"},
	{16, "16 ותקח נעמי את הילד ותשתהו בחיקה ותהי לו לאמנת׃"},
	{17, "17 ותקראנה לו השכנות שם לאמר ילד בן לנעמי ותקראנה שמו עובד הוא אבי ישי אבי דוד׃"},
	{18, "18 ואלה תולדות פרץ פרץ הוליד את חצרון׃"},
	{19, "19 וחצרון הוליד את רם ורם הוליד את עמינדב׃"},
	{20, "20 ועמינדב הוליד את נחשון ונחשון הוליד את שלמה׃"},
	{21, "21 ושלמון הוליד את בעז ובעז הוליד את עובד׃"},
	{22, "22 ועבד הוליד את ישי וישי הוליד את דוד׃"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};