#include <map>
#include <string>
class Bible52
{
	struct fa1	{ int val; const char *msg; };
	struct fa2	{ int val; const char *msg; };
	struct fa3	{ int val; const char *msg; };
	struct fa4	{ int val; const char *msg; };
	struct fa5	{ int val; const char *msg; };
public:
static void view1() {
struct fa1 poems[] = {
	{1, "1  پولُس و سِلْوانُس و تیموتاؤس، به کلیسای تَسّالونیکیان که در خدای پدر و عیسی مسیح خداوند می‌باشید. فیض و سلامتی از جانب پدر ما خدا و عیسی مسیح خداوند با شما باد. "},
	{2, "2  پیوسته دربارهٔ جمیع شما خدا را شکر می‌کنیم و دائماً در دعاهای خود شما را ذکر می‌نماییم، "},
	{3, "3  چون اعمالِ ایمانِ شما و محنتِ محبّت و صبر امید شما را در خداوند ما عیسی مسیح در حضور خدا و پدر خود یاد می‌کنیم. "},
	{4, "4  زیرا که ای برادران و ای عزیزانِ خدا، از برگزیده‌شدنِ شما مطلّع هستیم، "},
	{5, "5  زیرا که انجیل ما بر شما محض سخن وارد نشده، بلکه با قوّت و روح‌القدس و یقین کامل، چنانکه می‌دانید که در میان شما بخاطر شما چگونه مردمان شدیم. "},
	{6, "6  و شما به ما و به خداوند اقتدا نمودید و کلام را در زحمتِ شَدید، با خوشیِ روح‌القدس پذیرفتید، "},
	{7, "7  به حدّی که شما جمیع ایمانداران مکادونیه و اَخائیه را نمونه شدید، "},
	{8, "8  به نوعی که از شما کلام خداوند نه فقط در مَکادونیه و اَخائیه نواخته شد، بلکه در هرجا ایمان شما به خدا شیوع یافت، به قسمی که احتیاج نیست که ما چیزی بگوییم "},
	{9, "9  زیرا خود ایشان دربارهٔ ما خبر می‌دهند که چه قسم وارد به شما شدیم و به چه نوع شما از بتها به سوی خدا بازگشت کردید تا خدای حیِّ حقیقی را بندگی نمایید، "},
	{10, "10  و تا پسر او را از آسمان انتظار بکشید که او را از مردگان برخیزانید، یعنی عیسی که ما را از غضب آینده می‌رهاند. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct fa2 poems[] = {
	{1, "1  زیرا ای برادران، خود می‌دانید که ورود ما در میان شما باطل نبود. "},
	{2, "2  بلکه هرچند قبل از آن در فیلپی زحمت کشیده و بی‌احترامی دیده بودیم، چنانکه اطّلاع دارید، لیکن در خدای خود دلیری کردیم تا انجیل خدا را با جدّ و جهدِ شَدید به شما اعلام نماییم. "},
	{3, "3  زیرا که نصیحت ما از گمراهی و خباثت و ریا نیست، "},
	{4, "4  بلکه چنانکه مقبول خدا گشتیم که وکلای انجیل بشویم، همچنین سخن می‌گوییم و طالب رضامندی مردم نیستیم، بلکه رضامندی خدایی که دلهای ما را می‌آزماید. "},
	{5, "5  زیرا هرگز سخن تملّق‌آمیز نگفتیم، چنانکه می‌دانید، و نه بهانهٔ طمع کردیم، خدا شاهد است؛ "},
	{6, "6  و نه بزرگی از خلق جستیم، نه از شما و نه از دیگران، هرچند چون رسولان مسیح بودیم، می‌توانستیم سنگین باشیم، "},
	{7, "7  بلکه در میان شما به ملایمت بسر می‌بردیم، مثل دایه‌ای که اطفال خود را می‌پرورد. "},
	{8, "8  بدین طرز شایق شما شده، راضی می‌بودیم که نه همان انجیل خدا را به شما دهیم، بلکه جانهای خود را نیز از بس که عزیز ما بودید. "},
	{9, "9  زانرو که ای برادران محنت و مشقّت ما را یاد می‌دارید زیرا که شبانه‌روز در کار مشغول شده، به انجیل خدا شما را موعظه می‌کردیم که مبادا بر کسی از شما بار نهیم. "},
	{10, "10  شما شاهد هستید و خدا نیز که به چه نوع با قدّوسیّت و عدالت و بی‌عیبی نزد شما که ایماندار هستید رفتار نمودیم. "},
	{11, "11  چنانکه می‌دانید که هر یکی از شما را چون پدر، فرزندان خود را نصیحت و دلداری می‌نمودیم، "},
	{12, "12  و وصیّت می‌کردیم که رفتار بکنید بطور شایستهٔ خدایی که شما را به ملکوت و جلال خود می‌خواند. "},
	{13, "13  و از این جهت ما نیز دائماً خدا را شکر می‌کنیم که چون کلام خدا را که از ما شنیده بودید یافتید، آن را کلام انسانی نپذیرفتید، بلکه چنانکه فی‌الحقیقۀ است، کلام خدا که در شما که ایماندار هستید عمل می‌کند. "},
	{14, "14  زیرا که ای برادران، شما اقتدا نمودید به کلیساهای خدا که در یهودیه در مسیح عیسی می‌باشند، زیرا که شما از قوم خود همان زحمات را کشیدید که ایشان نیز از یهود دیدند، "},
	{15, "15  که عیسی خداوند و انبیای خود را کشتند و بر ما جفا کردند؛ و ایشان ناپسند خدا هستند و مخالف جمیع مردم، "},
	{16, "16  و ما را منع می‌کنند که به امّت‌ها سخن بگوییم تا نجات یابند و همیشه گناهان خود را لبریز می‌کنند، امّا مُنتهای غضبْ ایشان را فرو گرفته است. "},
	{17, "17  لیکن ما ای برادران، چون به قدر ساعتی در ظاهر نه در دل از شما مهجور شدیم، به اشتیاق بسیار زیادتر کوشیدیم تا روی شما را ببینیم. "},
	{18, "18  و بدین جهت یک دو دفعه خواستیم نزد شما بیاییم، یعنی من، پولُس، لیکن شیطان ما را نگذاشت. "},
	{19, "19  زیرا که چیست امید و سرور و تاج فخر ما؟ مگر شما نیستید در حضور خداوند ما عیسی در هنگام ظهور او؟ "},
	{20, "20  زیرا که شما جلال و خوشی ما هستید. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct fa3 poems[] = {
	{1, "1  پس چون دیگر شکیبایی نداشتیم، رضا بدین دادیم که ما را در اَتِینا تنها واگذارند. "},
	{2, "2  و تیموتاؤس را که برادر ما و خادم خدا در انجیل مسیح است، فرستادیم تا شما را استوار سازد و در خصوص ایمانتان شما را نصیحت کند. "},
	{3, "3  تا هیچ‌کس از این مصائب متزلزل نشود، زیرا خود می‌دانید که برای همین مقرّر شده‌ایم. "},
	{4, "4  زیرا هنگامی که نزد شما بودیم، شما را پیش خبر دادیم که می‌باید زحمت بکشیم، چنانکه واقع شد و می‌دانید. "},
	{5, "5  لهذا من نیز چون دیگر شکیبایی نداشتم، فرستادم تا ایمان شما را تحقیق کنم مبادا که آن تجربه‌کننده، شما را تجربه کرده باشد و محنت ما باطل گردد. "},
	{6, "6  امّا الحال چون تیموتاؤس از نزد شما به ما رسید و مژدهٔ ایمان و محبّت شما را به ما رسانید و اینکه شما پیوسته ما را نیکو یاد می‌کنید و مشتاق ملاقات ما می‌باشید، چنانکه ما نیز شایق شما هستیم، "},
	{7, "7  لهذا ای برادران، در همهٔ ضیق و مصیبتی که داریم، از شما به‌سبب ایمانتان تسلّی یافتیم. "},
	{8, "8  چونکه الآن زیست می‌کنیم، اگر شما در خداوند استوار هستید. "},
	{9, "9  زیرا چه شکرگزاری به خدا توانیم نمود به‌سبب این همه خوشی که به حضور خدا دربارهٔ شما داریم؛ "},
	{10, "10  که شبانه‌روز بی‌شمار دعا می‌کنیم تا شما را روبرو ملاقات کنیم و نقص ایمان شما را به کمال رسانیم. "},
	{11, "11  امّا خود خدا، یعنی پدر ما و خداوند ما عیسی مسیح راه ما را به سوی شما راست بیاورد. "},
	{12, "12  و خداوند شما را نمّو دهد و در محبّت با یکدیگر و با همه افزونی بخشد، چنانکه ما شما را محبّت می‌نماییم، "},
	{13, "13  تا دلهای شما را استوار سازد، بی‌عیب در قدّوسیّت، به حضور خدا و پدر ما در هنگام ظهور خداوند ما عیسی مسیح، با جمیع مقدّسین خود. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct fa4 poems[] = {
	{1, "1  خلاصه ای برادران، از شما در عیسی خداوند استدعا و التماس می‌کنیم که چنانکه از ما یافته‌اید که به چه نوع باید رفتار کنید و خدا را راضی سازید، به همانطور زیادتر ترقی نمایید. "},
	{2, "2  زیرا می‌دانید چه احکام از جانب عیسی خداوند به شما دادیم. "},
	{3, "3  زیرا که این است ارادهٔ خدا یعنی قدّوسیّت شما تا از زنا بپرهیزید. "},
	{4, "4  تا هرکسی از شما بداند چگونه باید ظرف خویشتن را در قدّوسیّت و عزّت دریابد، "},
	{5, "5  و نه در هوسِ شهوت، مثل امّت‌هایی که خدا را نمی‌شناسند. "},
	{6, "6  و تا کسی در این امر دست تطاول یا طمع بر برادر خود دراز نکند، زیرا خداوند از تمامی چنین کارها انتقام کشنده است. "},
	{7, "7  چنانکه سابقاً نیز به شما گفته و حکم کرده‌ایم، زیرا خدا ما را به ناپاکی نخوانده است، بلکه به قدّوسیّت. "},
	{8, "8  لهذا هرکه حقیر شمارد، انسان را حقیر نمی‌شمارد، بلکه خدا را که روح قدّوس خود را به شما عطا کرده است. "},
	{9, "9  امّا در خصوص محبّت برادرانه، لازم نیست که به شما بنویسم، زیرا خود شما از خدا آموخته شده‌اید که یکدیگر را محبّت نمایید؛ "},
	{10, "10  و چنین هم می‌کنید با همهٔ برادرانی که در تمام مَکادونیه می‌باشند. لیکن ای برادران از شما التماس داریم که زیادتر ترقّی کنید. "},
	{11, "11  و حریص باشید در اینکه آرام شوید و به کارهای خود مشغول شده، به دستهای خویش کسب نمایید، چنانکه شما را حکم کردیم، "},
	{12, "12  تا نزد آنانی که خارج‌اند بطور شایسته رفتار کنید و به هیچ چیز محتاج نباشید. "},
	{13, "13  امّا ای برادران نمی‌خواهیم شما از حالت خوابیدگان بی‌خبر باشید که مبادا مثل دیگران که امید ندارند، محزون شوید. "},
	{14, "14  زیرا اگر باور می‌کنیم که عیسی مرد و برخاست، به همینطور نیز خدا آنانی را که در عیسی خوابیده‌اند با وی خواهد آورد. "},
	{15, "15  زیرا این را به شما از کلام خدا می‌گوییم که، ما که زنده و تا آمدن خداوند باقی باشیم، بر خوابیدگان سبقت نخواهیم جست. "},
	{16, "16  زیرا خود خداوند با صدا و با آواز رئیس فرشتگان و با صور خدا از آسمان نازل خواهد شد و مردگانِ در مسیح اوّل خواهند برخاست. "},
	{17, "17  آنگاه ما که زنده و باقی باشیم، با ایشان در ابرها ربوده خواهیم شد تا خداوند را در هوا استقبال کنیم و همچنین همیشه با خداوند خواهیم بود. "},
	{18, "18  پس بدین سخنان همدیگر را تسلی دهید. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct fa5 poems[] = {
	{1, "1  امّا ای برادران در خصوص وقتها و زمانها، احتیاج ندارید که به شما بنویسم. "},
	{2, "2  زیرا خود شما به تحقیق آگاهید که روز خداوند چون دزد در شب می‌آید. "},
	{3, "3  زیرا هنگامی که می‌گویند سلامتی و امان است، آنگاه هلاکتْ ایشان را ناگهان فرو خواهد گرفت، چون درد زه زن حامله را و هرگز رستگار نخواهند شد. "},
	{4, "4  لیکن شما ای برادران، در ظلمت نیستید تا آن روز چون دزد بر شما آید، "},
	{5, "5  زیرا جمیع شما پسران نور و پسران روز هستید، از شب و ظلمت نیستیم. "},
	{6, "6  بنابراین مثل دیگران به خواب نرویم، بلکه بیدار و هشیار باشیم. "},
	{7, "7  زیرا خوابیدگان در شب می‌خوابند و مستان در شب مست می‌شوند. "},
	{8, "8  لیکن ما که از روز هستیم، هشیار بوده، جوشن ایمان و محبّت و خودِ امید نجات را بپوشیم. "},
	{9, "9  زیرا خدا ما را تعیین نکرد برای غضب، بلکه بجهت تحصیل نجات، به‌وسیلهٔ خداوند ما عیسی مسیح، "},
	{10, "10  که برای ما مرد تا خواه بیدار باشیم و خواه خوابیده، همراه وی زیست کنیم. "},
	{11, "11  پس همدیگر را تسلی دهید و یکدیگر را بنا کنید، چنانکه هم می‌کنید. "},
	{12, "12  امّا ای برادران به شما التماس داریم که بشناسید آنانی را که در میان شما زحمت می‌کشند و پیشوایان شما در خداوند بوده، شما را نصیحت می‌کنند. "},
	{13, "13  و ایشان را در نهایت محبّت، به‌سبب عملشان محترم دارید و با یکدیگر صلح کنید. "},
	{14, "14  لیکن ای برادران، از شما استدعا داریم که سرکشان را تنبیه نمایید و کوتاه‌دلان را دلداری دهید و ضعفا را حمایت کنید و با جمیع مردم تحمّل کنید. "},
	{15, "15  زنهار کسی با کسی به سزای بدی بدی نکند، بلکه دائماً با یکدیگر و با جمیع مردم در پی نیکویی بکوشید. "},
	{16, "16  پیوسته شادمان باشید. "},
	{17, "17  همیشه دعا کنید. "},
	{18, "18  در هر امری شاکر باشید که این است ارادهٔ خدا در حقّ شما در مسیح عیسی. "},
	{19, "19  روح را اطفا مکنید. "},
	{20, "20  نبوّتها را خوار مشمارید. "},
	{21, "21  همه‌چیز را تحقیق کنید، و به آنچه نیکو است متمسّک باشید. "},
	{22, "22  از هر نوع بدی احتراز نمایید. "},
	{23, "23  امّا خودِ خدای سلامتی، شما را بالکّل مقدّس گرداند و روح و نَفْس و بدن شما تماماً بی‌عیب محفوظ باشد در وقت آمدن خداوند ما عیسی مسیح. "},
	{24, "24  امین است دعوت‌کنندهٔ شما که این را هم خواهد کرد. "},
	{25, "25  ای برادران، برای ما دعا کنید. "},
	{26, "26  جمیع برادران را به بوسهٔ مقدّسانه تحیّت نمایید. "},
	{27, "27  شما را به خداوند قسم می‌دهم که این رساله برای جمیع برادرانِ مقدّس خوانده شود. "},
	{28, "28  فیض خداوند ما عیسی مسیح با شما باد. آمین. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};