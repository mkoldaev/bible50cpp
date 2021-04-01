#include <map>
#include <string>
class Bible29
{
	struct tr1	{ int val; const char *msg; };
	struct tr2	{ int val; const char *msg; };
	struct tr3	{ int val; const char *msg; };
public:
static void view1() {
struct tr1 poems[] = {
	{1, "2 Ey yaşlılar, dinleyin,Ülkede yaşayan herkes, kulak verin:  Sizin zamanınızda ya da atalarınızın zamanındaHiç böyle bir şey oldu mu?"},
	{2, "3 Bunu çocuklarınıza anlatın;Çocuklarınız kendi çocuklarına,  Onların çocukları da bir sonraki kuşağa anlatsınlar."},
	{3, "4 Genç çekirgeden artakalan ürünü olgunlaşmış çekirge yedi,Ondan artakalanı yumurtadan yeni çıkan çekirge yedi;  Ondan artakalanı da yavru çekirgeler yedi."},
	{4, "5 Ey sarhoşlar, ayılın ve ağlayın.Ey şarap düşkünleri, tatlı şarap için ağıt yakın.  Çünkü şarabınızı ağzınızdan kaptılar."},
	{5, "6 Güçlü ve sayılamayacak kadar büyük bir çekirge ordusu saldırdı ülkeme.Aslan dişine benzer,  Dişi aslanın kesici dişlerine benzer dişleri var."},
	{6, "7 Asmalarımı harap ettiler,İncir ağaçlarımı mahvettiler,  Kabuklarını soyup yere attılar.Soyulan dallar bembeyaz."},
	{7, "8 Sözlüsünü yitirip çul kuşanan bir genç kız gibi yas tutun."},
	{8, "10 Tarlalar harap oldu, toprak acılı.Çünkü tahıl mahvoldu,  Yeni şarap tükendi, zeytinyağı kesildi."},
	{9, "11 Arpa, buğday için dövünün, ey ırgatlar,Ağıt yakın, ey bağcılar,  Çünkü tarlaların ürünü yok oldu."},
	{10, "12 Asmalar kurudu, incir ağaçları soldu;Nar, hurma, elma, bütün meyve ağaçları kurudu.  İnsanoğlunun sevinci yok oldu."},
	{11, "13 Ey kâhinler, çul kuşanıp yas tutun.Ey sunakta hizmet edenler, ağıt yakın,  Ey Tanrımın hizmetkârları, tapınağa gelin,Çul içinde geceleyin.  Çünkü Tanrınızın Tapınağı içinTahıl ve şarap sunusu kalmadı."},
	{12, "14 Oruç için gün belirleyin, özel bir toplantı yapın;Yaşlıları ve ülkede yaşayanların tümünü  Tanrınız RABbin Tapınağına toplayıp RABbe yakarın."},
	{13, "15 Eyvahlar olsun! Çünkü RABbin günü yakındır.Her Şeye Gücü Yetenin göndereceği yıkım gibi geliyor o gün."},
	{14, "16 Yiyeceğimiz gözümüzün önünde yok edildi.Tanrımızın Tapınağında sevinç ve coşku sona erdi."},
	{15, "17 Tohumlar keseklerin altında çürüdü,Tahıl yok oldu,  Ambarlar boş kaldı, depolar yıkıldı."},
	{16, "18 Hayvanlar nasıl da inliyor!Sığır sürüleri çaresiz.  Çünkü otlaklar kurudu.Koyun sürüleri perişan oldu."},
	{17, "19 Ya RAB, sana yakarıyorum.Çünkü ateş otlakları yok etti,  Bütün ağaçları kavurdu."},
	{18, "20 Yabanıl hayvanlar bile sana sesleniyor.Çünkü akarsular kurudu,  Ateş otlakları yok etti."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct tr2 poems[] = {
	{1, "1 Siyonda boru çalın,Kutsal dağımda boru sesiyle halkı uyarın.  Ülkede yaşayan herkes korkudan titresin.Çünkü RABbin günü çok yaklaştı, geliyor."},
	{2, "2 Zifiri karanlık bir gün olacak,Bulutlu, koyu karanlık bir gün.  Dağların üzerine çöken karanlık gibiKalabalık ve güçlü bir çekirge ordusu geliyor.  Böylesi hiçbir zaman görülmedi,Kuşaklar boyu da görülmeyecek. geçiyor."},
	{3, "3 Önlerini ateş kavuruyor,Artları alev alev.  Önlerinde Aden bahçesi gibi uzanan topraklarArtlarında ıssız çöllere dönüyor.  Hiçbir şey onlardan kurtulamıyor."},
	{4, "4 Atlara benziyorlar,Savaş atları gibi koşuyorlar."},
	{5, "5 Savaş arabalarının, anızı yiyip bitiren alevlerinÇıkardığı gürültüye benzer bir sesle,  Savaşa hazırlanmış güçlü bir ordu gibiSıçraya sıçraya dağları aşıyorlar."},
	{6, "6 Uluslar onların karşısında dehşete düşüyor;Herkesin beti benzi soluyor."},
	{7, "7 Yiğitler gibi saldırıyorlar,Askerler gibi surları aşıyorlar.  Dosdoğru ilerliyorlar,Yollarından sapmadan."},
	{8, "8 İtişip kakışmadan,Her biri kendi yolundan yürüyor.  Savunma hatlarını yarıp geçiyorlar,Sırayı bozmadan."},
	{9, "9 Kente doğru koşuşuyor,Surların üzerinden aşıyorlar.  Evlere tırmanıyor ve hırsız gibiPencerelerden içeri süzülüyorlar."},
	{10, "10 Yeryüzü önlerinde sarsılıyor,Gökyüzü titriyor;  Güneş ve ay kararıyor,Yıldızların parıltısı görünmez oluyor."},
	{11, "11 RAB ordusunun başında gürlüyor.Sayısızdır Onun orduları  Ve buyruğuna uyan güçlüdür.RABbin o büyük günü ne korkunçtur!  O güne kim dayanabilir?"},
	{12, "12 RAB diyor ki,‹‹Şimdi oruç tutarak, ağlayıp yas tutarak  Bütün yüreğinizle bana dönün."},
	{13, "13 Giysilerinizi değil,Yüreklerinizi paralayın  Ve Tanrınız RABbe dönün.Çünkü RAB lütfeder, acır,  Tez öfkelenmez, sevgisi engindir,Cezalandırmaktan vazgeçer."},
	{14, "14 Kim bilir, belki size acır da kararından döner.Ardında bereket bırakır.  O zaman Ona tahıl ve şarap sunuları sunarsınız."},
	{15, "15 ‹‹Siyonda boru çalın,Oruç için gün belirleyin, özel bir toplantı yapın."},
	{16, "16 Halkı toplayın, topluluğu kutsal kılın,Yaşlıları bir araya getirin.  Çocukları, hatta emzikte olanları toplayın.Güvey odasından, gelin gerdeğinden çıkıp gelsin."},
	{17, "17 Kâhinler, RABbin hizmetkârları,Tapınağın girişiyle sunak arasında ağlaşıp,  ‹Ya RAB, halkını esirge› diye yalvarsınlar.‹Mirasın olan halkının aşağılanmasına izin verme,  Uluslar onunla alay etmesin.Halklar arasında neden,  Onların Tanrısı nerede? densin?››"},
	{18, "18 O zaman RAB halkına acıyıp ülkesini esirgeyecek."},
	{19, "19 Halkına şöyle yanıt verecek:‹‹Bakın, size tahıl, yeni şarap  Ve zeytinyağı vereceğim,Bunlara doyacaksınız.  Artık ulusların sizi aşağılamasına izin vermeyeceğim."},
	{20, "20 Kuzeyden gelen çekirge ordusunu sizden uzaklaştıracağım,Kurak ve ıssız bir ülkeye süreceğim.  Önden gidenleri Lut Gölüne,Arkadan gelenleri Akdenize süreceğim.  Leşleri kokacak,Kokuları göklere yükselecek.  Çünkü korkunç şeyler yaptılar."},
	{21, "21 ‹‹Ey toprak, korkma, sevinçle coş!Çünkü RAB büyük işler yaptı."},
	{22, "22 Ey kır hayvanları, korkmayın!Çünkü otlaklar yeşeriyor.  Ağaçlar meyvelerini yükleniyor,İncir ağaçları, asmalar ürünlerini veriyor."},
	{23, "23 Ey Siyon halkı,Tanrınız RABde sevinç bulun, coşun.  İlk yağmuru size tam ölçüsüyle veriyor;Daha önce olduğu gibi,  İlk ve son yağmurları yağdırıyor. geçiyor. doğruluğu öğretecek olan öğretmeni veriyor››."},
	{24, "24 Harman yeri tahılla dolacak.Şarap ve zeytinyağı tekneleri taşacak."},
	{25, "25 Üzerinize gönderdiğim büyük çekirge ordusunun,Olgunlaşmış ve yumurtadan yeni çıkmış çekirgenin,  Yavrunun ve genç çekirgeninSize kaybettirdiği yılları geri vereceğim."},
	{26, "26 Bol bol yiyip doyacakVe sizin için harikalar yaratan  Tanrınız RABbin adını öveceksiniz.Halkım bir daha utandırılmayacak."},
	{27, "27 Bileceksiniz ki, İsrail halkının arasındayım,Tanrınız RAB benim, başka biri yok.  Halkım bir daha utandırılmayacak.››"},
	{28, "28 ‹‹Ondan sonra bütün insanların üzerineRuhumu dökeceğim.  Oğullarınız, kızlarınız peygamberlikte bulunacaklar.Yaşlılarınız düşler,  Gençleriniz görümler görecek."},
	{29, "29 O günler kadın, erkek kullarınızın üzerine de Ruhumu dökeceğim."},
	{30, "30 Göklerde ve yeryüzünde,Kan, ateş ve duman sütunlarından belirtiler göstereceğim."},
	{31, "31 RABbin büyük ve korkunç günü gelmeden önceGüneş kararacak, ay kan rengine dönecek."},
	{32, "32 O zaman RAB'bi adıyla çağıran herkes kurtulacak.RAB'bin dediği gibi,  Siyon Dağı'nda ve Yeruşalim'de kurtulupSağ kalanlar arasında  RAB'bin çağıracağı kimseler olacak.››"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct tr3 poems[] = {
	{1, "1 ‹‹O günler Yahuda ve Yeruşalim halkınıSürgünden geri getirdiğimde,"},
	{2, "2 Bütün ulusları toplayıpYehoşafatfç Vadisine indireceğim.  Mirasım olan İsrail halkınıUluslar arasına dağıttıkları ve ülkemi bölüştükleri için  Onları orada yargılayacağım."},
	{3, "3 Çünkü halkım için kura çektiler,Erkek çocukları fahişelere ücret olarak verdiler.  İçtikleri şaraba karşılık kızları sattılar."},
	{4, "4 Ey Sur, Sayda ve bütün Filist halkı,Bana yapmak istediğiniz nedir?  Neye karşılık vermeye çalışıyorsunuz?Eğer karşılık verirseniz,  Karşılığını çarçabuk ödetirim size."},
	{5, "5 Altınımı, gümüşümü alıpDeğerli eşyalarımı tapınaklarınıza götürdünüz."},
	{6, "6 Yahuda ve Yeruşalim halkınıTopraklarından uzaklaştırmak için Greklere sattınız."},
	{7, "7 Göreceksiniz, onları, sattığınız yerdeHarekete geçireceğim.  Onlara yaptığınızı kendi başınıza getireceğim."},
	{8, "8 Oğullarınızı, kızlarınızıYahuda halkına sattıracağım.  Onları uzak bir ulusa, Sabalılara satacaklar.››RAB böyle diyor."},
	{9, "9 ‹‹Uluslar arasında şunu duyurun:Savaşa hazırlanın, yiğitlerinizi harekete geçirin.  Bütün savaşçılarınız toplanıp saldırıya geçsin."},
	{10, "10 Saban demirleriniziÇekiçle dövüp kılıç yapın,  Bağcı bıçaklarınızı mızrak yapın.Güçsüz olan ‹Güçlüyüm› desin."},
	{11, "11 Ey çevredeki uluslar,Tez gelin, bir araya toplanın.  Ya RAB, yiğitlerini oraya indir."},
	{12, "12 Uluslar harekete geçipYehoşafat Vadisinde toplansınlar.  Çünkü çevredeki bütün uluslarıYargılamak için orada olacağım."},
	{13, "13 Salın orakları, ekinler olgunlaştı.  Gelin, üzümleri çiğneyin,Sıkma çukuru üzümle dolu, şarap tekneleri taşıyor.  Ulusların kötülükleri bu denli çoktur.››"},
	{14, "14 Kalabalıklar,Yargı vadisini dolduran nice kalabalıklar...  Yargı vadisinde RABbin günü yaklaştı."},
	{15, "15 Güneş ve ay kararıyor,Yıldızların parıltısı görünmez oluyor."},
	{16, "16 RAB Siyondan kükreyecek,Yeruşalimden gürleyecek.  Gök ve yer sarsılacak.Ama RAB kendi halkı için sığınak,  İsrailliler için kale olacak."},
	{17, "17 ‹‹O zaman bileceksiniz ki,Siyonda, kutsal dağımda oturan Tanrınız RAB benim.  Yeruşalim kutsal olacak;Yabancılar bir daha orayı ele geçiremeyecek."},
	{18, "18 ‹‹O gün dağlardanTatlı şarap damlayacak;  Tepelerde süt,Yahuda derelerinde su akacak.  RABbin Tapınağından çıkan bir pınarŞittim Vadisini sulayacak."},
	{19, "19 ‹‹Ama Mısır viraneye,Edom ıssız çöle dönecek.  Çünkü Yahudalıların ülkesine saldırıpSuçsuz insanların kanını döktüler."},
	{20, "20 Oysa Yahuda sonsuza dek yaşayacak.Yeruşalim kuşaktan kuşağa sürecek."},
	{21, "21 Akan kanların öcünü alacağım,Suçluyu cezasız bırakmayacağım.›› Masoretik metin ‹‹Akan kanları cezasız bırakacağım››.  RAB Siyon'da oturur."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};