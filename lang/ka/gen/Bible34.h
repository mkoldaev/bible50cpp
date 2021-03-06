#include <map>
#include <string>
class Bible34
{
	struct ka1	{ int val; const char *msg; };
	struct ka2	{ int val; const char *msg; };
	struct ka3	{ int val; const char *msg; };
public:
static void view1() {
struct ka1 poems[] = {
	{1, "1 ნინევეს განაჩენი. ელკოშელი ნაუმის ხილვის წიგნი. "},
	{2, "2 იჭვიანი და შურისმგებელი ღმერთია უფალი; შურისმგებელია უფალი და რისხვიანი; შურს მიაგებს უფალი თავის მოწინააღმდეგეთ და ჯავრს არ შეარჩენს თავის მტრებს. "},
	{3, "3 სულგრძელია უფალი და დიდძალოვანი, დაუსჯელს არავის გაუშვებს; გრიგალშია უფალი და ქარბორბალაშია მისი სავალი; ღრუბელი მის ფერხთა მტვერია. "},
	{4, "4 დაემუქრება ზღვას და ამოაშრობს, და დაშრეტს ყველა მდინარეს; გადახმება ბაშანი და ქარმელი, დაჭკნება ლიბანის ყვავილი. "},
	{5, "5 მის ქვეშ იდრიკებიან მთები და ლღვებიან ბორცვები; წამოიმართება მის წინაშე დედამიწა, სამყარო და ყოველი მისი მკვიდრი. "},
	{6, "6 ვინ გაუძლებს მის წყრომას, ვინ აიტანს მის მძვინვარებას? ცეცხლად იღვრება მისი რისხვა, კლდეები ირღვევიან მისგან. "},
	{7, "7 კეთილია უფალი - ციხე-სიმაგრე გასაჭირში - და ცნობს თავის მოიმედეთ. "},
	{8, "8 მოვარდნილი ნიაღვარივით წალეკავს მის ადგილს და თავის მტრებს ჩარეკავს წყვდიადში. "},
	{9, "9 რა განუზრახავთ უფლის წინააღმდეგ? ბოლოს მოუღებს ყველაფერს და ვეღარ აღდგება მტერი. "},
	{10, "10 რადგან ეკალ-ბარდებივით ჩახლართულნი და ლოთებივით გალეშილნი ერთიანად გადაიბუგებიან ხმელ ჩალასავით. "},
	{11, "11 შენგან გამოვიდა უფლის წინააღმდეგ ავისმზრახველი, ბელიარის მრჩეველი. "},
	{12, "12 ასე თქვა უფალმა: თუნდაც ჯანით სავსენი იყვნენ და უამრავნიც, მაინც გაწყდებიან, გადაშენდებიან. ხომ გაგტანჯე, მაგრამ მეტად აღარ გაგტანჯავ. "},
	{13, "13 ახლა კი დავლეწავ მის უღელს, ქედზე რომ გადევს, და დავწყვეტ შენს ბორკილებს. "},
	{14, "14 ასე ბრძანა შენზე უფალმა: აღარ მოშენდება შენი სახელი; გავაქრობ კერპსა და ქანდაკს შენი ღმერთის სახლიდან; საფლავს გაგიმზადებ, რადგან არარაობა ხარ. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct ka2 poems[] = {
	{1, "1 აჰა, გაისმა მთებზე მახარობლის ფეხის ხმა მშვიდობის მაცნედ! გამართე დღესასწაულები, იუდა, აღთქმები შეასრულე, რადგან აღარ დაგეცემა თავს ბელიარი; საბოლოოდ განადგურდა. "},
	{2, "2 შემართულია შენს თავზე ურო, ნინევე! დაიცავი ციხე-სიმაგრე, გზისკენ იყურე, წელი გაიმაგრე, ძალა მოიკრიფე! "},
	{3, "3 რადგან დააბრუნა უფალმა იაკობის დიდება, როგორც დიდება ისრაელისა! რადგან გაძარცული ჰყავდათ ისინი მძარცველებს, აჩანაგებდნენ მათ ვენახებს. "},
	{4, "4 წითლად შეიღება გმირთა ფარები, მეწამული მოსავთ მეომრებს; ცეცხლს აკვესებს ეტლების ფოლადი, როცა მზადაა საბრძოლველად, და ირხევიან კვიპაროსის შუბები. "},
	{5, "5 დაქრიან ქუჩებში ეტლები, მოედნებზე დაგრიალებენ, ჩირაღდნის ალივით ლაპლაპებენ, ელვასავით ელავენ. "},
	{6, "6 გაიხსენებს თავის ძლიერებს, მაგრამ სრბოლისას წაიფორხილებენ, მიაწყდებიან კედლებს და საფარს მოაწყობენ. "},
	{7, "7 გაიღება მდინარეთა ჭიშკრები და აირ-დაირევა სასახლე. "},
	{8, "8 გადაწყდა: გასახლდება, გაიტაცებენ! მისი მხევლები მტრედის ხმაზე მოთქვამენ, გულში ხელს იცემენ. "},
	{9, "9 წყლისგან დაიცალა ნინევე - წყალსატევი; ისინი კი გარბიან. დადექით! დადექით! მაგრამ არავინ ბრუნდება უკან. "},
	{10, "10 დაიტაცეთ ოქრო, დაიტაცეთ ვერცხლი! არ დაილევა მდიდრული ნახელავი, ძვირფასი ნივთები. "},
	{11, "11 გატიალდა, გაოხრდა, გაპარტახდა! დადნა გული და კანკალებს მუხლები, მოწყდათ წელი, ფერი წაუვიდათ. "},
	{12, "12 სად არის ლომთა ბუნაგი და ბოკვერთა სანავარდო, სადაც დადიოდნენ ხვადი, ძუ ლომი და მათი ლეკვი, და არავინ იყო დამაფრთხობელი? "},
	{13, "13 ლომი გლეჯს თავისი ლეკვებისთვის და აღრჩობს თავისი ძუსთვის; ნატაცებით ავსებს თავის ბუნაგს და გამოქვაბულს - დაგლეჯილი ნადავლით. "},
	{14, "14 აჰა, მითქვამს შენთვის, ამბობს ცაბაოთ უფალი, ცეცხლში დავწვავ შენს ეტლს, მახვილი შეჭამს შენს ბოკვერებს; შენს მტაცებლობას აღვკვეთავ ქვეყანაზე და აღარ გაისმება შენს მოციქულთა ხმა. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct ka3 poems[] = {
	{1, "1 ვაი სისხლიან ქალაქს! სიცრუით არის გატენილი, სავსეა ძალადობით და არ ეშვება მტაცებლობას. "},
	{2, "2 შოლტის ხმა და ბორბლების გრიალი, ცხენების ჭიხვინი და ეტლების დგანდგარი, "},
	{3, "3 მხედართა კვეთება და მახვილთა კვესება, შუბების ელვა, უამრავი დახოცილი გვამების გროვა! არ დაილია ცხედრები, ფორხილობენ მათ ცხედრებზე. "},
	{4, "4 ბოზი დიაცის უზომო ბოზობის გამოა, მომხიბვლელისა და ჯადოქრისა, რომელიც თავის ბოზობით ჰყიდის ხალხებს და ჯადოქრობით - ტომებს. "},
	{5, "5 აჰა, მითქვამს შენთვის, ამბობს ცაბაოთ უფალი, ბოლომდე აგიწევ კალთას, რომ ხალხებს დავანახო შენი სიშიშვლე, სამეფოებს - შენი სირცხვილი. "},
	{6, "6 მოგაყრი ნაგავს, წაგბილწავ და სასეიროდ გაგხდი. "},
	{7, "7 ვინც კი შეგხედავს, გაგეცლება და იტყვის: გაძარცულია ნინევე, ვინ შეიბრალებსო? სად მოგიძებნო ნუგეშისმცემელი? "},
	{8, "8 რითი სჯობიხარ ნო-ამონს, მდინარეთა შორის რომ ცხოვრობდა და წყლები ევლებოდა გარშემო? რომლის დოვლათი ზღვა იყო და ზღვისგანვე იყო მისი კედელი? "},
	{9, "9 ქუშის ქვეყანა გამაგრებდა და უსაზღვრო ეგვიპტე, ფუტი და ლუბიელნი გიჭერდნენ მხარს. "},
	{10, "10 ისიც გადაასახლეს, ტყვედ წაიყვანეს, მის ბავშვებსაც თავები დაუჭეჭყეს გზაჯვარედინებზე; მის დიდებულებზე წილს ყრიდნენ და წარჩინებულებს ბორკილს ადებდნენ. "},
	{11, "11 დათვრები და დაიმალები, მტრებისგან თავშესაფრს დაუწყებ ძებნას. "},
	{12, "12 შენი ციხე-კოშკები მწიფენაყოფიანი ლეღვის ხეა - თუ შეარხიე, პირში ჩაუცვივა მჭამელს. "},
	{13, "13 აჰა, შენი ერი საქალეთია შენს წიაღში! ფართედ გაეღება შენს მტრებს შენი ქვეყნის კარიბჭეები, ცეცხლი შეჭამს შენს ურდულებს. "},
	{14, "14 მოიმარაგე საალყოდ წყალი, გაამაგრე ციხე-კოშკები; მოჭერი თიხა, მოზილე ალიზი, შეაკეთე სააგურე ქურა. "},
	{15, "15 იქ შეგჭამს ცეცხლი, გაგწყვეტს მახვილი; შეგჭამს, როგორც კალია. შექუჩდი კალიასავით, მოზღვავდი ბოცომკალივით! "},
	{16, "16 მოვაჭრეები ცის ვარსკვლავებზე მეტად გაგიმრავლებია - კალია ფრთებს გაშლის და გაფრინდება. "},
	{17, "17 შენი მოხელეები ბოცომკალივითაა, შენი იასაულები; მოჭერი თიხა, მოზილე ალიზი, შეაკეთე სააგურე ძირას რომ იბუდებენ: მზე ამოვა და გაიფანტებიან, მათ კვალს ვეღარავინ მიაგნებს. "},
	{18, "18 ჩასძინებიათ შენს მწყემსებს, განისვენებენ შენი დიდებულები, მთებში გაფანტულა შენი ხალხი და არავინაა შემკრები. "},
	{19, "19 არ გიშუშდება ჭრილობა, გაგიარჯლდა წყლული. ვინც კი გაიგებს შენს ამბავს, ტაშს დაგცემს, რადგან ვის არ მისწვდენია შენი გამუდმებული სიავე? "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};