#include <map>
#include <string>
class Bible32
{
	struct ur1	{ int val; const char *msg; };
	struct ur2	{ int val; const char *msg; };
	struct ur3	{ int val; const char *msg; };
	struct ur4	{ int val; const char *msg; };
public:
static void view1() {
struct ur1 poems[] = {
	{1, "1  خُداوند کا کلام یُوناہ بن امتی پر نازل ہُوا۔ "},
	{2, "2  کہ اُٹھ اُس بڑے شہر نینوہ کو جا اور اُس کے خلاف مُنادی کر کیونکہ اُن کی شرارت میرے حُضور پُہنچی ہے۔ "},
	{3, "3  لیکن یُوناہ خُداوند کے حضُور سے ترسیس کو بھاگا اور یافا میں پُینچا اور وہاں اُسے ترسیس کو جانے والا جہاز ملا اور وہ کرایہ دے کر اُس میں سوار ہُوا تاکہ خُداوند کے حُضور سے ترسیس کو اہل جہاز کے ساتھ جائے۔ "},
	{4, "4  لیکن خُداوند نے سُمندر پر بڑی آندھی بھیجی اور سُمند میں سخت طُوفان برپا ہُوا اور اندیشہ تھا کہ جہاز تباہ ہو جائے ۔ "},
	{5, "5  تب ملاح ہراسان ہُوئے اور ہر ایک نے اپنے دیوتا کو پُکارا اور وہ اجناس جو جہاز میں تھیں سُمندر میں ڈال دیں تاکہ اُسے ہلکا کریں لیکن یُوناہ جہاز کے اندر پڑا سو رہا تھا۔ "},
	{6, "6  تب نا خُدا اُس کے پاس جا کے کہنے لگا تو کیوں پڑا سو رہا ہے؟ اُٹھ اپنے معبُود کو پکار! شاید وہ ہم کو یاد کرے اور ہم ہلاک نہ ہوں۔ "},
	{7, "7  اور اُنہوں نے آپس میں کہا آو ہم قرعہ ڈال کر دیکھیں کہ یہ آفت ہم پر کس کے سبب سے آئی۔ چُنانچہ اُنہوں نے قرعہ ڈالا اور یُوناہ کا نام نکلا۔ "},
	{8, "8  تب اُنہوں نے کہا تو ہم کو بتا کہ یہ آفت ہم پر کس کے سبب سے آئی ہے؟ تیرا کیا پیشہ ہے اور تو کہاں سے آیا ہے ؟ تیرا وطن کہاں ہے اور تو کس قوم کا ہے؟۔ "},
	{9, "9  اُس نےاُن سے کہا میں عبرانی ہوں اور خُداوند آسمان کے خُدا بحروبر کر خالق سے ڈرتا ہُوں۔ "},
	{10, "10  تب وُہ خُوف زدہ ہر کر اُس سے کہنے لگے تو نے یہ کیا کیا؟ کیونکہ اُن کو معلوم تھا کہ وہ خُداوند کے حُضور سے بھاگا ہے اس لے کہ اُس نے خُود اُن سے کہا تھا۔ "},
	{11, "11  تب اُنہوں نے اُس سے پُوچھا ہم تُجھ سے کیا کریں کہ سُمندر ہمارے لئے ساکن ہو جائے؟ کیونکہ سُمندر زیاہ طُوفانی ہوتا جاتا تھا۔ "},
	{12, "12  تب اُس نے اُن سے کہا مُجھ کو اُٹھا کر سُمندر میں پینک دُو تو تُمہارے لئے سُمندر ساکن ہو جائے گا کیونکہ میں جانتا ہُوں کہ یہ بڑا طُوفان تم پر میرے سبب سے آیا ہے۔ "},
	{13, "13  تو بھی ملاحوں نے ڈانڈ چلانے میں بڑی محنت کی کہ کنارہ پر پُہنچیں لیکن نہ پُہنچ سکے کیونکہ سُمندر اُن کے خلاف اور بھی زیادہ موجزن ہوتا جاتا تھا۔ "},
	{14, "14  تب اُنہوں نے خُداوند کے حضُور گڑ گڑا کر کہا اے خداوند ہم تیری منت کرتے ہیں کہ ہم اس آدمی کی جان کے سبب سے ہلاک نہ ہوں اور تو خُون ناحق کو ہماری گردن پر نہ ڈالے کیونکہ اے خُداوند تو نے جو چاہا سو کیا۔ "},
	{15, "15  اور اُنہوں نے یُوناہ کو اُٹھا کر سُمندر میں پھینک دیا اور سُمندر کا تلاطم موقوف ہوگیا۔ "},
	{16, "16  تب وہ خُداوند سے بُہت ڈر گے اور اُنہوں نے اُس کے حُضور قُربانی گُزرانی اور نذریں مانیں۔ "},
	{17, "17  لیکن خُداوند نے ایک بڑی مچھلی مقرر کر رکھی تھی کہ یُوناہ کو نگل جائے اور یُوناہ تین دن تین رات مچھلی کے پیٹ میں رہا۔ "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct ur2 poems[] = {
	{1, "1  تب یُوناہ نے مچھلی کے پیٹ میں خُداوند اپنے خُدا سے یہ دُعا کی۔ "},
	{2, "2  میں نے اپنی مُصیبت میں خُداوند سے دُعا کی اور اُس نے میری سُنی۔میں نے پاتال کی تہ سے دُہائی دی۔ تونے میری فریاد سُنی۔ "},
	{3, "3  تونے مُجھے گہرے سمندر کی تہ میں پھینک دیا اور سیلاب نے مُجھے گھیر لیا۔تیری سب موجیں اور لہریں مُجھ پر سے گُزر گیئیں۔ "},
	{4, "4  اور میں نے سمجھا کہ تیرے حُضور سے دُور ہو گیا ہُوں لیکن میں پھر تیری مُقدس ہیکل کو دیکھوں گا۔ "},
	{5, "5  سیلاب نے میری جان کا مُحاصرہ کیا۔سُمندر میرے چاروں طرف تھا۔ بحری نبات میرے سر پر لپٹ گئی۔ "},
	{6, "6  میں پہاڑوں کی تہ تک غرق ہو گیا۔زمین کے اڑبنگے ہمیشہ کے لے مُجھ پر بند ہوگئے۔تو بھی اے خُداوند میرے خُدا تو نے میری جان پاتال سے بچائی۔ "},
	{7, "7  جب میرا دل بے تاب ہُوا تو میں نے خُداوند کو یاد کیا اور میری دُعا تیری مُقدس ہیکل میں تیرےحُضور پُہنچی۔ "},
	{8, "8  جو لوگ جھوٹے معبُودوں کو مانتے ہیں وہ شفقت سے محروُم ہو جاتے ہیں۔ "},
	{9, "9  میں حمد کرتا ہُوا تیرے حُضور قربانی گُزرانوں گا۔ میں اپنی نذریں ادا کُروں گا۔ نجات خُداوند کی طرف سے ہے۔ "},
	{10, "10  اور خُداوند نے مچھلی کو حُکم دیا اور اُس نے یُوناہ کو خُشکی پر اُگل دیا۔ "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct ur3 poems[] = {
	{1, "1  اور خُداوند کا کلام دُوسری بار یُوناہ پر نازل ہُوا۔ "},
	{2, "2  کہ اُٹھ اُس بڑے شہر نینوہ کو جا اور وہاں اُس بات کی مُنادی کر جس کا میں تُجھے حُکم دیتا یُوں۔ "},
	{3, "3  تب یُوناہ خُداوند کے کلام کے مُطابق اُٹھ کر نینوہ کو گیا اور نینوہ بُہت بڑا شہر تھا۔ اُس کی مُسافت تین دن کی راہ تھی۔ "},
	{4, "4  اور یُوناہ شہر میں داخل ہوا اور ایک دن کی راہ چلا۔ اُس نے مُنادی کی اور کہا چالیس روزے کے بعد نینوہ برباد کیا جائے گا۔ "},
	{5, "5  تب نینوہ کے باشندوں نے خُدا پر ایمان لا کر روزہ کی مُنادی کی اور ادنیٰ و اعلیٰ سب ٹاٹ اوڑھا۔ "},
	{6, "6  اور یہ خبر نینوہ کے بادشاہ کو پُہنچی اور وہ اپنے تخت پر سے اُٹھا اور بادشاہی لباس کو اُتار ڈالا اور ٹاٹ اوڑھ کر راکھ پر بیٹھ گیا۔ "},
	{7, "7  اور بادشاہ اور اُس کے ارکان دولت کے فرمان سے نینوہ میں یہ اعلان کیا گیا اور اس بات کی مُنادی ہوئی کہ کوئی انسان یا حیوان گلہ یا رمہ کُچھ نہ چکھے اور نہ کھائے پئے۔ "},
	{8, "8  لیکن انسان اور حیوان ٹاٹ سے مُلبس ہوں اور خُدا کے حُضور گریہ و زاری کریں بلکہ ہر شخص اپنی بُری روش اور اپنے ہاتھ کے ظُلم سے باز آئے ۔ "},
	{9, "9  شاید خُدا رحم کرے اور اپنا ارادہ بدلے اور اپنے قہر شدید سے باز آئے اور ہم ہلاک نہ ہوں۔ "},
	{10, "10  جب خُدا نے اُن کی یہ حالت دیکھی کہ وہ اپنی اپنی بُری روش سے باز آئے تو وہ اُس عذاب سے جو اُس نے اُن پر نازل کرنے کو کہا تھا باز آیا اُسے نازل نہ کیا۔ "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct ur4 poems[] = {
	{1, "1  لیکن یُوناہ اس سے نہایت ناخُوش اور ناراض ہُوا۔ "},
	{2, "2  اور اُس نے خُداوند سے یُوں دُعا کی کہ اے خُداوند جب میں اپنے وطن ہی میںتھا اور ترسیس کو بھاگنے والا تھا تو کیا میں نے یہی نہ کہا تھا؟ میں جانتا تھا کہ تو رحیم و کریم خُدا ہے جو قیر کرنے میں دھیما اور شفقت میں گنی ہے اور عذاب نازل کرنے سے باز رہتا ہے۔ "},
	{3, "3  اب اے خُداوند میں تیری منت کرتا ہوں کہ میری جان لے لے کیونکہ میرے اس کینے سے مر جانا بہتر ہے۔ "},
	{4, "4  تب خُداوند نے فرمایا کیا تو ایسا ناراض ہے؟۔ "},
	{5, "5  اور یُوناہ شہر سے باہر مشرق کی طرف جا بیٹھا اور وہاں اپنے لئے ایک چھپر بنا کر اُس کے سایہ میں بیٹھ رہا کہ دیکھے شہر کا کیا حال ہوتا ہے۔ "},
	{6, "6  تب خُداوند نے کُدو کی بیل اُگائی اور اُسے یُوناہ کے اُوپر پھیلایا کہ اُس کے سر پر سایہ ہو اور وہ تکلیف سے بچے اور یُوناہ اُس بیل کے سبب سے نہایت خُوش ہوا۔ "},
	{7, "7  لیکن دُوسرے دن صُبح کے وقت خُداوند نے ایک کیڑا بھیجا جس نے اس بیل کو کاٹ ڈالا اور وہ سُوکھ گئی۔ "},
	{8, "8  اور جب آفتاب بُلند ہوا تو خُداوند نے مشرق سے ایک لُو لائی اور آفتاب کی گرمی نے یُوناہ کے سر میں اثر کیا اور وہ بیتاب ہو گیا اور موت کا آرزُو مند ہو کر کہنے لگا کہ میرے اس جینے سے مرجانا بہتر ہے۔ "},
	{9, "9  اور خُدا نے یُوناہ سے فرمایا کیا تو اس بیل کے سبب سے ایسا ناراض ہے؟اس نے کہا میں یہاں تک ناراض ہوں کہ مرنا چاہتاہُوں۔ "},
	{10, "10  تب خُداوند نے فرمایا کہ تجھے اس بیل کا اتنا خیال ہے جس کے لئے تو نے نہ کُچھ محنت کی اور نہ اُسے اُگایا۔ جو ایک ہی رات میں اُگی اور ایک ہی رات میں سُوکھ گی۔ "},
	{11, "11  اور کیا مُجھے لازم نہ تھا کہ میں اتنے بڑے شہر نینوہ کا خیال کُروں جس میں ایک لاکھ بیس ہزار سے زیادہ ایسے ہیں جو اپنے دہنے اور بائیں ہاتھ میں امتیاز نہیں کر سکتے اور بے شُمار مویشی ہیں؟+ "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};