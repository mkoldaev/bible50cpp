#include <map>
#include <string>
class Bible25
{
	struct th1	{ int val; const char *msg; };
	struct th2	{ int val; const char *msg; };
	struct th3	{ int val; const char *msg; };
	struct th4	{ int val; const char *msg; };
	struct th5	{ int val; const char *msg; };
public:
static void view1() {
struct th1 poems[] = {
	{1, "1 กรุงที่คับคั่งด้วยพลเมืองมาอ้างว้างอยู่ได้หนอ กรุงที่รุ่งเรืองอยู่ท่ามกลางประชาชาติมากลายเป็นดั่งหญิงม่ายหนอ กรุงที่เป็นดั่งเจ้าหญิงท่ามกลางเมืองทั้งหลายก็กลับเป็นเมืองขึ้นเขาไป"},
	{2, "2 กรุงนั้นร่ำไห้สะอื้นในราตรีกาล และน้ำตาของเธอก็อาบแก้ม เธอจะหาใครท่ามกลางคนที่รักเธอให้มาปลอบเธอก็หาไม่พบ บรรดาพวกเพื่อนของเธอสิ้นทุกคนได้ทรยศต่อเธอ เขาทั้งปวงกลับเป็นศัตรูของเธอ"},
	{3, "3 ยูดาห์ได้ถูกกวาดไปเป็นเชลย ได้รับความทุกข์ใจ ต้องทำงานอย่างทาส เธอต้องพำนักอยู่ท่ามกลางประชาชาติทั้งหลาย เธอไม่พบที่หยุดพักสงบเลย บรรดาผู้ข่มเหงได้ไล่ทันเธอเมื่อเวลาเธอทุกข์ใจ"},
	{4, "4 ถนนหนทางที่เข้าเมืองศิโยนก็คร่ำครวญอยู่ เพราะไม่มีผู้ใดเดินไปในงานเทศกาลที่เคร่งครัดทั้งหลายนั้น บรรดาประตูเมืองของเธอก็รกร้างเสียแล้ว พวกปุโรหิตของเธอได้พากันถอนใจ สาวพรหมจารีทั้งหลายของเธอก็ต้องทนทุกข์ และตัวเธอเองก็ได้รับความขมขื่นยิ่งนัก"},
	{5, "5 พวกคู่อริของเธอกลายเป็นหัวหน้า พวกศัตรูของเธอได้จำเริญขึ้น ด้วยว่าพระเยโฮวาห์ได้ทรงกระทำให้เธอทนทุกข์ เพราะความทรยศอันมหันต์ของเธอ ลูกเต้าทั้งหลายของเธอตกไปเป็นเชลยต่อหน้าคู่อริ"},
	{6, "6 และความโอ่อ่าตระการได้พรากไปจากธิดาแห่งศิโยนเสียแล้ว พวกเจ้านายของเธอก็กลับเป็นดุจฝูงกวางที่หาทุ่งหญ้าเลี้ยงชีวิตไม่ได้ และได้วิ่งป้อแป้หนีไปข้างหน้าผู้ไล่ติดตาม"},
	{7, "7 เยรูซาเล็มเมื่อตกอยู่ในยามทุกข์ใจและยามลำเค็ญก็ได้หวนระลึกถึงสิ่งประเสริฐที่ตนเคยมีในครั้งกระโน้น เมื่อพลเมืองของเธอตกอยู่ในมือของคู่อริ และหามีผู้ใดจะสงเคราะห์เธอไม่ พวกคู่อริเห็นเธอแล้วก็เยาะเย้ยวันสะบาโตทั้งหลายของเธอ"},
	{8, "8 เยรูซาเล็มได้ทำบาปอย่างใหญ่หลวง เหตุฉะนี้เธอจึงถูกไล่ออก บรรดาคนที่เคยให้เกียรติเธอก็ลบหลู่เธอ เพราะเหตุเขาทั้งหลายเห็นความเปลือยเปล่าของเธอ เออ เธอเองได้ถอนใจยิ่งและหันหน้าของเธอไปเสีย"},
	{9, "9 มลทินของเธอก็กรังอยู่ในกระโปรงของเธอ และเธอหาได้คำนึงถึงอนาคตของเธอไม่ ดังนั้นเธอจึงได้เสื่อมทรามลงเร็วอย่างน่าใจหาย เธอก็ไม่มีผู้ใดจะเล้าโลม ข้าแต่พระเยโฮวาห์ ขอทอดพระเนตรความทุกข์ใจของข้าพระองค์ เพราะพวกศัตรูได้พองตัวขึ้นแล้ว"},
	{10, "10 พวกศัตรูได้ยื่นมือของเขายึดเอาบรรดาของประเสริฐของเธอ ด้วยเธอได้เห็นบรรดาประชาชาติบุกรุกเข้ามาในสถานบริสุทธิ์ของเธอ คือคนที่พระองค์ได้ทรงห้ามไม่ให้เข้ามาในชุมนุมชนของพระองค์"},
	{11, "11 บรรดาพลเมืองของเธอได้ถอนใจใหญ่ เขาทั้งหลายเสาะหาอาหาร และพวกเขาได้เอาของประเสริฐของตัวออกแลกอาหารกิน เพื่อจะได้ประทังชีวิต ข้าแต่พระเยโฮวาห์ ขอทรงทอดพระเนตรและพิจารณา เพราะข้าพระองค์เป็นที่เหยียดหยามเสียแล้ว"},
	{12, "12 ดูก่อน ท่านทั้งหลายที่เดินผ่านไป ท่านไม่เกิดความรู้สึกอะไรบ้างหรือ ดูเถิด จงดูซิว่ามีความทุกข์อันใดบ้างไหมที่เหมือนความทุกข์ที่มาสู่ข้าพเจ้า เป็นความทุกข์ซึ่งพระเยโฮวาห์ได้ทรงกระทำแก่ข้าพเจ้าในวันที่พระองค์ทรงกริ้วข้าพเจ้าอย่างเกรี้ยวกราดนั้น"},
	{13, "13 พระองค์ได้ทรงส่งเพลิงลงมาจากเบื้องบนให้เข้าไปเหนือกระดูกทั้งหลายของข้าพเจ้า และเพลิงนั้นก็มีชัยชนะต่อกระดูกเหล่านั้น พระองค์ได้ทรงกางตาข่ายไว้ดักเท้าของข้าพเจ้า พระองค์ได้ทรงกระทำให้ข้าพเจ้าต้องหันกลับ พระองค์ได้ทรงกระทำให้ข้าพเจ้าโดดเดี่ยวอ้างว้าง และอ่อนระอาตลอดทั้งวัน"},
	{14, "14 แอกแห่งการละเมิดทั้งมวลของข้าพเจ้าก็ถูกรวบเข้าโดยพระหัตถ์ของพระองค์ทรงรวบมัดไว้ แอกนั้นรัดรึงรอบคอข้าพเจ้า พระองค์ได้ทรงกระทำให้กำลังข้าพเจ้าถอยไป องค์พระผู้เป็นเจ้าได้ทรงมอบข้าพเจ้าไว้ในมือของเขาทั้งหลาย ซึ่งข้าพเจ้าไม่สามารถต่อต้านได้"},
	{15, "15 องค์พระผู้เป็นเจ้าได้ทรงเหยียบบรรดาผู้มีกำลังแข็งแกร่งของข้าพเจ้าไว้ใต้พระบาทท่ามกลางข้าพเจ้า พระองค์ได้ทรงเกณฑ์ชุมนุมชนเข้ามาต่อสู้ข้าพเจ้า เพื่อจะขยี้ชายฉกรรจ์ของข้าพเจ้าให้แหลกไป องค์พระผู้เป็นเจ้าได้ทรงย่ำบุตรสาวพรหมจารีแห่งยูดาห์ ดั่งเหยียบผลองุ่นลงในบ่อย่ำองุ่น"},
	{16, "16 เพราะเรื่องเหล่านี้ข้าพเจ้าจึงร้องไห้ นัยน์ตาของข้าพเจ้า เออ นัยน์ตาของข้าพเจ้ามีน้ำตาไหลลงมา เพราะผู้ปลอบโยนที่ควรจะปลอบประโลมใจข้าพเจ้าก็อยู่ไกลจากข้าพเจ้า ลูกๆของข้าพเจ้าก็โดดเดี่ยวอ้างว้าง เพราะพวกศัตรูได้ชัยชนะ"},
	{17, "17 เมืองศิโยนได้เหยียดมือทั้งสองออก แต่ก็ไม่มีใครที่เล้าโลมเธอได้ พระเยโฮวาห์ทรงมีพระบัญชาเรื่องยาโคบว่า ให้พวกคู่อริล้อมยาโคบไว้ เยรูซาเล็มเป็นดั่งผู้หญิงเมื่อมีประจำเดือนท่ามกลางเขาทั้งหลาย"},
	{18, "18 พระเยโฮวาห์ทรงชอบธรรมแล้ว เพราะข้าพเจ้าได้กบฏต่อพระบัญญัติของพระองค์ ดูก่อนบรรดาชนชาติทั้งหลาย ข้าพเจ้าขอท่านได้ฟังและขอมามองดูความทนทุกข์ของข้าพเจ้า สาวพรหมจารีของข้าพเจ้า และหนุ่มๆของข้าพเจ้าตกไปเป็นเชลยแล้ว"},
	{19, "19 ข้าพเจ้าได้ร้องเรียกบรรดาคนรักของข้าพเจ้า แต่เขาทั้งหลายได้หลอกลวงข้าพเจ้า พวกปุโรหิตและพวกผู้ใหญ่ของข้าพเจ้าก็ตายที่กลางเมือง ขณะเมื่อเขาออกหาอาหารเพื่อประทังชีวิตของตน"},
	{20, "20 ข้าแต่พระเยโฮวาห์ โปรดทอดพระเนตร เพราะข้าพระองค์มีความทุกข์ จิตใจของข้าพระองค์มีความทุรนทุราย จิตใจของข้าพระองค์ยุ่งเหยิงเพราะข้าพระองค์มักกบฏอย่างร้ายกาจ นอกบ้านมีคนต้องคมดาบตาย ในบ้านก็เหมือนมฤตยู"},
	{21, "21 เขาทั้งหลายได้ยินว่า ข้าพระองค์ถอนใจอย่างไร หามีผู้ใดปลอบโยนข้าพระองค์ไม่ บรรดาศัตรูของข้าพระองค์ได้ยินถึงเหตุร้ายที่ตกแก่ข้าพระองค์ เขาทั้งหลายก็พากันดีใจที่พระองค์ได้ทรงกระทำอย่างนี้ พระองค์จะทรงนำวารที่พระองค์ทรงประกาศไว้นั้นให้มาถึง และเขาทั้งหลายจะเป็นอย่างที่ข้าพระองค์เป็นอยู่นี้"},
	{22, "22 ขอให้บรรดาการชั่วของเขาทั้งหลายมาปรากฏต่อพระพักตร์พระองค์ และขอทรงกระทำแก่เขาทั้งหลาย เหมือนที่พระองค์ได้ทรงกระทำแก่ข้าพระองค์ เพราะการละเมิดทั้งสิ้นของข้าพระองค์เถิด ด้วยความสะท้อนถอนใจของข้าพระองค์นั้นมากมายหลายครั้ง และจิตใจของข้าพระองค์ก็อ่อนเพลียเต็มทีแล้ว"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct th2 poems[] = {
	{1, "1 ด้วยพระพิโรธ องค์พระผู้เป็นเจ้าทรงใช้เมฆบังธิดาของศิโยนหนอ พระองค์ได้ทรงเหวี่ยงสง่าราศีของอิสราเอลให้ตกลงจากฟ้าถึงดิน พระองค์มิได้ทรงระลึกถึงแท่นรองพระบาทของพระองค์เลยในยามที่พระองค์ทรงกริ้ว"},
	{2, "2 องค์พระผู้เป็นเจ้าทรงกลืนที่อยู่ทั้งสิ้นของยาโคบเสียแล้ว และไม่ทรงเมตตา พระองค์ได้ทรงพังป้อมปราการทั้งหลายของธิดาแห่งยูดาห์ให้ลงด้วยพระพิโรธของพระองค์ พระองค์ได้ทรงทลายป้อมปราการเหล่านั้นลงถึงดิน และทรงกระทำให้ราชอาณาจักรและเจ้านายทั้งหลายในนั้นเป็นมลทินไป"},
	{3, "3 พระองค์ได้ทรงตัดบรรดาเขาแห่งอิสราเอลให้ขาดสิ้นไปด้วยพระพิโรธอันรุนแรงของพระองค์ พระองค์ทรงดึงพระหัตถ์เบื้องขวาของพระองค์กลับมาเสียจากเขาต่อหน้าศัตรู และพระองค์ทรงเผาผลาญคนยาโคบดุจเพลิงลุกโพลงไหม้ไปรอบๆ"},
	{4, "4 พระองค์ทรงโก่งธนูของพระองค์อย่างศัตรู ทรงยกพระหัตถ์เบื้องขวาทีท่าปัจจามิตร และได้ทรงประหารบรรดาคนที่ตาของเราจะอวดได้นั้นเสียในกระโจมของธิดาแห่งศิโยน พระองค์ได้ทรงระบายพระพิโรธของพระองค์ออกมาดุจเพลิง"},
	{5, "5 องค์พระผู้เป็นเจ้าทรงเป็นเหมือนศัตรู พระองค์ได้ทรงกลืนพวกอิสราเอลเสีย พระองค์ได้ทรงกลืนบรรดาวังของเขาหมด และได้ทรงทำลายที่กำบังของเขาให้ ทรงทวีความเศร้าโศกและการคร่ำครวญในธิดาแห่งยูดาห์"},
	{6, "6 พระองค์ได้ทรงพังพลับพลาของพระองค์เสียเหมือนหนึ่งเป็นเพิงในสวน ทรงทำลายสถานที่ประชุมทั้งหลายของพระองค์ พระเยโฮวาห์ได้ทรงกระทำทั้งเทศกาลตามกำหนดและวันสะบาโตให้ลืมเลือนไปในศิโยน ด้วยพระพิโรธอันเดือดดาลพระองค์ทรงดูถูกองค์กษัตริย์และปุโรหิต"},
	{7, "7 องค์พระผู้เป็นเจ้าได้ทรงทิ้งแท่นบูชาของพระองค์เสีย พระองค์ทรงเกลียดสถานบริสุทธิ์ของพระองค์ กำแพงวังทั้งหลายนั้น พระองค์ได้ทรงมอบไว้ในเงื้อมมือศัตรู เขาทั้งหลายได้ส่งเสียงอึกทึกในพระนิเวศแห่งพระเยโฮวาห์เหมือนอย่างในวันเทศกาลตามกำหนด"},
	{8, "8 พระเยโฮวาห์ได้ทรงตั้งพระทัยไว้แล้วว่าจะทำลายกำแพงของธิดาแห่งศิโยนเสีย พระองค์ได้ทรงขึงเส้นวัดไว้แล้ว พระองค์มิได้ทรงหดพระหัตถ์เลิกการทำลาย เหตุฉะนี้พระองค์ได้ทรงกระทำให้เนินดินและกำแพงนั้นคร่ำครวญ ให้ทรุดโทรมร่วงโรยไปด้วยกัน"},
	{9, "9 ประตูเมืองศิโยนทั้งสิ้นทรุดลงในดินแล้ว พระองค์ได้ทรงทำลายและทรงหักดานประตูทั้งปวงเสียสิ้น กษัตริย์และเจ้านายทั้งหลายแห่งศิโยนก็ตกอยู่ท่ามกลางประชาชาติ ไม่มีพระราชบัญญัติอีกต่อไป บรรดาผู้พยากรณ์แห่งเมืองศิโยนหาได้รับนิมิตจากพระเยโฮวาห์อีกไม่"},
	{10, "10 พวกผู้ใหญ่ของธิดาแห่งศิโยนก็กำลังนั่งเงียบอยู่บนพื้นแผ่นดิน เขาทั้งหลายเอาผงคลีดินซัดขึ้นบนศีรษะของตัว และนุ่งห่มผ้ากระสอบ สาวพรหมจารีทั้งหลายแห่งกรุงเยรูซาเล็มคอตกไปถึงดิน"},
	{11, "11 นัยน์ตาของข้าพเจ้าก็ร่วงโรยเพราะร้องไห้ จิตวิญญาณของข้าพเจ้าก็ระทม เพราะความพินาศของธิดาแห่งชนชาติของข้าพเจ้า ตับของข้าพเจ้าเทออกบนพื้นดิน และเพราะเหล่าเด็กและเด็กที่ยังดูดนมนั้นเป็นลมสลบอยู่ตามถนนในกรุง"},
	{12, "12 ลูกทั้งหลายถามแม่ของตัวว่า แม่จ๋า ข้าวและน้ำองุ่นอยู่ที่ไหน ขณะเมื่อเขาเป็นลมดุจคนที่ถูกบาดเจ็บตามถนนในกรุง เมื่อชีวิตของเขาต้องเทออกที่อกแม่ของเขาทั้งหลาย"},
	{13, "13 โอ ธิดาแห่งเยรูซาเล็มเอ๋ย ข้าพเจ้าจะเอาอะไรมาเป็นพยานฝ่ายเจ้าได้ ข้าพเจ้าจะเปรียบเจ้ากับอะไร โอ ธิดาพรหมจารีแห่งศิโยนเอ๋ย ข้าพเจ้าจะหาอะไรที่มาเทียบกับเจ้าได้เล่า เพื่อข้าพเจ้าจะเล้าโลมเจ้าได้ เพราะความอับปางของเจ้าก็ใหญ่เทียมเท่าสมุทร ผู้ใดจะรักษาเจ้าได้เล่า"},
	{14, "14 ผู้พยากรณ์ทั้งหลายของเจ้าได้เห็นสิ่งที่โง่เขลาและไร้สาระมาบอกเจ้า แทนที่เขาจะเผยความชั่วช้าของเจ้าออกมาให้ประจักษ์ เพื่อจะให้เจ้ากลับสู่สภาพดี เขาทั้งหลายกลับได้เห็นภาระที่เทียมเท็จอันเป็นเหตุให้เกิดการเนรเทศ"},
	{15, "15 บรรดาคนที่ได้ผ่านไปมาก็ตบมือเยาะเย้ยเจ้า เขาทั้งหลายได้เย้ยหยันและได้สั่นศีรษะใส่ธิดาแห่งเยรูซาเล็มแล้วว่า นี่หรือคือกรุงที่คนทั้งหลายได้ขนานนามว่า งามหมดจด ว่า เป็นความชื่นชมยินดีของคนทั่วทั้งโลก"},
	{16, "16 บรรดาศัตรูของเจ้าได้อ้าปากตะโกนโพนทะนาเจ้า เขาทั้งหลายเย้ยหยันและขบเขี้ยวเคี้ยวฟัน เขาพากันร้องว่า พวกเราได้กลืนเมืองนี้แล้ว วันนี้แหละคือวันที่พวกเราได้จ้องมองหา พวกเราได้พบแล้ว พวกเราเห็นแล้ว"},
	{17, "17 พระเยโฮวาห์ได้ทรงกระทำตามพระประสงค์แล้ว ได้ทรงกระทำให้พระดำรัสของพระองค์สำเร็จ ตามที่พระองค์ได้บัญชาไว้นานแล้ว พระองค์ก็ได้ทรงทำลายอย่างไม่มีพระเมตตา พระองค์ทรงกระทำให้ศัตรูเปรมปรีดิ์เย้ยเจ้า พระองค์ได้ทรงชูเขาของพวกศัตรูของเจ้าขึ้น"},
	{18, "18 จิตใจของเขาทั้งหลายร้องทูลองค์พระผู้เป็นเจ้า โอ กำแพงของธิดาแห่งศิโยนเอ๋ย จงให้น้ำตาไหลลงดุจสายน้ำทั้งกลางวันและกลางคืน อย่าให้เจ้าได้หยุดพัก อย่าให้แก้วตาของเจ้าหยุดหย่อนเลย"},
	{19, "19 จงลุกขึ้นร้องไห้ในกลางคืน ในต้นยามจงระบายความในใจของเจ้าออกอย่างน้ำตรงพระพักตร์องค์พระผู้เป็นเจ้า จงชูมือทั้งสองของเจ้าขึ้นตรงไปยังพระองค์เพื่อขอชีวิตของบรรดาลูกเด็กเล็กแดงของเจ้า ที่หิวจนเป็นลมสลบไป ตามหัวถนนหนทางทุกแห่ง"},
	{20, "20 ข้าแต่พระเยโฮวาห์ ขอทอดพระเนตรและพิจารณาเถิดว่า พระองค์ได้ทรงกระทำการเช่นนี้แก่ผู้ใด ควรที่พวกผู้หญิงจะกินลูกของตนหรือ จะกินทารกที่ยังอุ้มอยู่หรือ พวกปุโรหิตและพวกผู้พยากรณ์ควรจะถูกประหารในสถานบริสุทธิ์ขององค์พระผู้เป็นเจ้าหรือ"},
	{21, "21 คนหนุ่มและคนแก่นอนเหยียดอยู่ตามพื้นดินในถนน สาวพรหมจารีและชายหนุ่มของข้าพระองค์ถูกคมดาบหวดล้มลงแล้ว พระองค์ได้ทรงประหารเขาในวันเมื่อพระองค์ทรงกริ้ว ได้ทรงสังหารเขาเสียโดยปราศจากพระกรุณา"},
	{22, "22 พระองค์ได้ทรงเรียกผู้ที่ข้าพระองค์กลัวรอบทุกด้านมาอย่างในวันเทศกาล พอถึงวันที่พระเยโฮวาห์ทรงพระพิโรธก็ไม่มีสักคนหนึ่งหนีเอาตัวรอดได้ หรือคงเหลือตกค้างรอดตายอยู่ ผู้ที่ข้าพระองค์ได้อุ้มชูและเลี้ยงดูมานั้น ศัตรูของข้าพระองค์ได้เผาผลาญเสียหมดแล้ว"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct th3 poems[] = {
	{1, "1 ข้าพเจ้าเป็นคนที่ได้เห็นความทุกข์ใจ โดยไม้เรียวแห่งพระพิโรธของพระองค์"},
	{2, "2 พระองค์ทรงนำและพาข้าพเจ้ามาในความมืดและไม่ใช่ในความสว่าง"},
	{3, "3 แท้จริงพระองค์ทรงหันมาต่อสู้ข้าพเจ้า พระองค์ทรงพลิกพระหัตถ์ของพระองค์ต่อสู้ข้าพเจ้าอยู่ตลอดวันร่ำไป"},
	{4, "4 เนื้อและหนังข้าพเจ้าพระองค์ทรงกระทำให้ซูบซีดไป พระองค์ทรงหักกระดูกข้าพเจ้าแล้ว"},
	{5, "5 พระองค์ทรงสร้างรั้วขังข้าพเจ้า ทรงเอาความขมขื่นและความทุกข์ยากลำบากล้อมข้าพเจ้าไว้"},
	{6, "6 พระองค์ได้ทรงบังคับข้าพเจ้าให้อยู่ในที่มืด ดุจคนที่ตายนานแล้ว"},
	{7, "7 พระองค์ทรงกระทำรั้วต้นไม้ล้อมข้าพเจ้าไว้เพื่อจะกักไม่ให้ออกไปได้ พระองค์ทรงตีตรวนหนักล่ามข้าพเจ้าไว้"},
	{8, "8 ยิ่งกว่านั้น เมื่อข้าพเจ้าร้องและตะโกน พระองค์มิทรงฟังคำอธิษฐานของข้าพเจ้า"},
	{9, "9 พระองค์ทรงล้อมทางทั้งหลายของข้าพเจ้าด้วยก้อนหินที่สกัด พระองค์ทรงกระทำให้หนทางข้าพเจ้าคดเคี้ยวไป"},
	{10, "10 ทีข้าพเจ้า พระองค์ทรงทำท่าดุจหมีคอยตระครุบ และดั่งสิงโตแอบซุ่มอยู่ในที่ลับ"},
	{11, "11 พระองค์ทรงหันเหทางของข้าพเจ้าไปเสีย และฉีกข้าพเจ้าเป็นชิ้นๆ พระองค์ทรงกระทำให้ข้าพเจ้าต้องโดดเดี่ยวอ้างว้าง"},
	{12, "12 พระองค์ทรงโก่งธนูของพระองค์และเอาข้าพเจ้าตั้งเป็นเป้าสำหรับลูกธนู"},
	{13, "13 พระองค์ทรงเอาลูกธนูในแหล่งของพระองค์ ยิงเข้าในหัวใจของข้าพเจ้าแล้ว"},
	{14, "14 ข้าพเจ้าได้กลายเป็นที่นินทาให้ชนชาติทั้งหลายหัวเราะเยาะ เป็นเนื้อเพลงให้เขาร้องเล่นวันยังค่ำ"},
	{15, "15 พระองค์ทรงให้ข้าพเจ้าบริโภคผักรสขมจนช่ำ พระองค์ทรงให้ข้าพเจ้าเมาไปด้วยบอระเพ็ด"},
	{16, "16 พระองค์กระทำให้ฟันข้าพเจ้าหักโดยเคี้ยวก้อนกรวด และทรงปกคลุมข้าพเจ้าด้วยขี้เถ้า"},
	{17, "17 พระองค์กระทำให้จิตวิญญาณของข้าพเจ้าขาดความสงบสุข จนข้าพเจ้าลืมความมั่งคั่งว่าเป็นอะไร"},
	{18, "18 ข้าพเจ้าจึงว่า กำลังและความหวังซึ่งข้าพเจ้าได้จากพระเยโฮวาห์ก็ดับหมด"},
	{19, "19 ขอทรงจำความทุกข์ใจและความทรมานของข้าพเจ้า อันเป็นบอระเพ็ดและดีหมี"},
	{20, "20 จิตวิญญาณของข้าพเจ้ายังนึกถึงเนืองๆ และต้องค้อมลงภายในตัวข้าพเจ้า"},
	{21, "21 ข้าพเจ้าหวนคิดขึ้นมาได้ ข้าพเจ้าจึงมีความหวัง"},
	{22, "22 เพราะเหตุพระเมตตาของพระเยโฮวาห์เราจึงไม่สูญสิ้นไป เพราะพระเมตตาของพระองค์ไม่มีสิ้นสุด"},
	{23, "23 เป็นของใหม่อยู่ทุกเวลาเช้า ความสัตย์ซื่อของพระองค์ใหญ่ยิ่งนัก"},
	{24, "24 จิตใจของข้าพเจ้าว่า พระเยโฮวาห์ทรงเป็นส่วนของข้าพเจ้า เหตุฉะนี้ข้าพเจ้าจะหวังในพระองค์"},
	{25, "25 พระเยโฮวาห์ทรงดีต่อคนทั้งปวงที่คอยท่าพระองค์อยู่ และทรงดีต่อจิตวิญญาณที่แสวงพระองค์"},
	{26, "26 เป็นการดีที่คนเราจะหวังใจและรอคอยความรอดจากพระเยโฮวาห์ด้วยความสงบ"},
	{27, "27 เป็นการดีที่คนเราจะแบกแอกในปฐมวัย"},
	{28, "28 ให้เขานั่งเงียบๆอยู่แต่ลำพัง เพราะพระองค์ทรงวางแอกนั้นเอง"},
	{29, "29 ให้เขาเอาปากจดไว้ในผงคลีดิน ถ้าทำดังนั้นชะรอยจะมีหวัง"},
	{30, "30 ให้เขาเอียงแก้มให้ผู้ที่ตบเขา ให้เขายอมรับความอับอายอย่างเต็มเปี่ยมเถิด"},
	{31, "31 ด้วยว่าองค์พระผู้เป็นเจ้าจะไม่ทรงละทิ้งเป็นนิตย์ดอก"},
	{32, "32 แม้พระองค์ทรงกระทำให้เกิดความเศร้าโศก พระองค์จะทรงพระกรุณาตามความเมตตาอันล้นเหลือของพระองค์"},
	{33, "33 เพราะพระองค์ทรงกระทำให้ใครเกิดความทุกข์ใจ หรือให้บุตรทั้งหลายของมนุษย์มีความโศกด้วยชอบพระทัยก็หามิได้"},
	{34, "34 การเหยียบย่ำบรรดาเชลยแห่งแผ่นดินโลกไว้ใต้เท้าก็ดี"},
	{35, "35 การตัดสิทธิ์ของมนุษย์ผู้หนึ่งผู้ใดต่อพระพักตร์ผู้ใหญ่ยิ่งสูงสุดก็ดี"},
	{36, "36 การตัดสินกลับสัตย์ในคดีของมนุษย์ก็ดี องค์พระผู้เป็นเจ้าไม่ทรงพอพระทัยเลย"},
	{37, "37 ผู้ใดจะสั่งและให้เป็นไปได้นอกจากเมื่อองค์พระผู้เป็นเจ้าทรงบัญชาให้เป็นไป"},
	{38, "38 จากพระโอษฐ์ของพระผู้สูงสุดนั้นไม่ใช่มีมาทั้งร้ายและดีหรือ"},
	{39, "39 มนุษย์เป็นๆจะไปบ่นเอากับใคร คือมนุษย์ที่ถูกทำโทษเพราะบาปของตน"},
	{40, "40 ให้พวกเราทดสอบและพิจารณาวิถีของพวกเรา และกลับมาหาพระเยโฮวาห์เถิด"},
	{41, "41 ให้พวกเรายกจิตใจและมือของพวกเราขึ้นต่อพระเจ้าในฟ้าสวรรค์ทูลว่า"},
	{42, "42 พวกข้าพระองค์ได้ทรยศและได้กบฏแล้ว และพระองค์ยังไม่ได้ทรงอภัยโทษ"},
	{43, "43 พระองค์ทรงห่มความกริ้วและข่มเหงพวกข้าพระองค์ ได้ทรงประหารอย่างไม่สงสาร"},
	{44, "44 พระองค์ทรงคลุมพระองค์ไว้เสียด้วยเมฆ เพื่อว่าการอธิษฐานของพวกข้าพระองค์จะไม่ทะลุไปถึงพระองค์ได้"},
	{45, "45 พระองค์ได้ทรงกระทำให้พวกข้าพระองค์เป็นเหมือนหยากเยื่อและมูลฝอยอยู่ในท่ามกลางชนชาติทั้งหลาย"},
	{46, "46 บรรดาศัตรูของพวกข้าพระองค์ได้อ้าปากตะโกนโพนทะนาว่าพวกข้าพระองค์"},
	{47, "47 ความหวาดและกับดักมาถึงข้าพระองค์ทั้งหลาย ทั้งการรกร้างว่างเปล่าและความพินาศ"},
	{48, "48 น้ำตาของข้าพระองค์ไหลเป็นแม่น้ำเนื่องด้วยความพินาศแห่งธิดาของชนชาติของข้าพระองค์"},
	{49, "49 น้ำตาของข้าพระองค์ไหลลงไม่หยุดและไม่มีเวลาสร่างเลย"},
	{50, "50 กว่าพระเยโฮวาห์จะทอดพระเนตรลงแลดูจากสวรรค์"},
	{51, "51 นัยน์ตาของข้าพระองค์ทำให้ใจข้าพระองค์ระทมเพราะเหตุบรรดาบุตรสาวแห่งกรุงข้าพระองค์"},
	{52, "52 พวกที่ตั้งตนเป็นศัตรูต่อข้าพระองค์โดยไม่มีเหตุนั้นได้ขับไล่ข้าพระองค์ดังขับไล่นก"},
	{53, "53 เขาทั้งหลายจะตัดชีวิตของข้าพระองค์เสียในคุกใต้ดิน และเอาหินก้อนหนึ่งทุ่มใส่ข้าพระองค์"},
	{54, "54 น้ำได้ท่วมศีรษะของข้าพระองค์ ข้าพระองค์ว่า `ข้าพเจ้าถูกผลาญแน่แล้ว'"},
	{55, "55 ข้าแต่พระเยโฮวาห์ ข้าพระองค์ได้ร้องออกพระนามของพระองค์จากที่ลึกในคุกใต้ดิน"},
	{56, "56 พระองค์ทรงสดับเสียงข้าพระองค์ที่ว่า `ขออย่าทรงจุกพระกรรณต่อลมหายใจและการร้องทูลของข้าพระองค์'"},
	{57, "57 พระองค์ทรงเข้ามาใกล้ในวันที่ข้าพระองค์ร้องทูลพระองค์ พระองค์ตรัสว่า `ไม่ต้องกลัว'"},
	{58, "58 ข้าแต่องค์พระผู้เป็นเจ้า พระองค์ได้ทรงเข้ากับคดีของจิตใจข้าพระองค์แล้ว พระองค์ทรงไถ่ชีวิตข้าพระองค์"},
	{59, "59 ข้าแต่พระเยโฮวาห์ พระองค์ทรงเห็นที่เขาผิดต่อข้าพระองค์แล้ว ขอทรงพิพากษาคดีของข้าพระองค์เถิด"},
	{60, "60 พระองค์ได้ทรงเห็นการแก้แค้นทั้งสิ้นของเขา และบรรดาแผนการทำร้ายข้าพระองค์แล้ว"},
	{61, "61 ข้าแต่พระเยโฮวาห์ พระองค์ทรงได้ยินคำเยาะเย้ย และบรรดาแผนการทำร้ายข้าพระองค์แล้ว"},
	{62, "62 คือริมฝีปากและความคิดของผู้ที่ได้รุกรานข้าพระองค์ ก็ต่อสู้ข้าพระองค์อยู่วันยังค่ำ"},
	{63, "63 ดูเถิด ไม่ว่าเขาจะนั่งหรือลุก ตัวข้าพระองค์ก็เป็นเนื้อเพลงให้เขาร้องเล่น"},
	{64, "64 ข้าแต่พระเยโฮวาห์ ขอพระองค์ทรงสนองเขาทั้งหลายตามการกระทำแห่งน้ำมือของเขา"},
	{65, "65 ขอพระองค์ทรงกระทำให้ใจของเขาทั้งปวงโศกเศร้า ขอให้คำสาปของพระองค์ตกเหนือเขา"},
	{66, "66 ขอพระองค์ทรงรังควานและทำลายเขาเสียด้วยพระพิโรธจากใต้ฟ้าสวรรค์ของพระเยโฮวาห์"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct th4 poems[] = {
	{1, "1 นี่อย่างไรหนอ ทองคำจึงมีสีสลัวและทองคำเนื้อดีก็เปลี่ยนไป เพชรพลอยแห่งสถานบริสุทธิ์ทิ้งอยู่เกลื่อนกลาดตามทุกหัวถนน"},
	{2, "2 บุตรชายผู้ประเสริฐของกรุงศิโยนมีค่าเปรียบได้กับทองคำเนื้อดีนั้น ถูกตีราคาเพียงเท่าหม้อดินที่ปั้นขึ้นด้วยมือของช่างหม้อเท่านั้นหนอ"},
	{3, "3 แม้แต่สัตว์ประหลาดทะเลยังได้เอานมออกให้ลูกของมันดูด แต่ธิดาแห่งชนชาติของข้าพเจ้าก็ใจร้าย ดุจนกกระจอกเทศในถิ่นทุรกันดาร"},
	{4, "4 ลิ้นของทารกที่ยังไม่หย่านมกระหายจนติดเพดาน พวกเด็กได้ขออาหาร แต่ไม่มีใครยื่นให้เขา"},
	{5, "5 คนทั้งปวงที่เคยรับประทานอาหารอย่างเลิศหรูกลับต้องโดดเดี่ยวอยู่ตามถนน คนทั้งหลายที่เติบโตมาด้วยเสื้อสีแดงสดกลับต้องกอดกองมูลสัตว์"},
	{6, "6 เพราะโทษความชั่วช้าของธิดาแห่งชนชาติข้าพเจ้านั้นก็ใหญ่โตกว่าโทษบาปของเมืองโสโดมที่ต้องคว่ำทลายลงในพริบตาเดียว โดยไม่มีมือใครได้แตะต้องเลย"},
	{7, "7 พวกนาศีร์ของเธอบริสุทธิ์กว่าหิมะและขาวกว่าน้ำนม ผิวพรรณของเขาเปล่งปลั่งยิ่งกว่ามุกดา เขามีรูปร่างงามดั่งไพทูรย์"},
	{8, "8 บัดนี้ผิวพรรณของเขาก็ดำยิ่งกว่าถ่านหิน ใครๆตามถนนก็จำเขาไม่ได้ หนังของเขาเหี่ยวหุ้มกระดูกและซูบราวกับไม้เสียบ"},
	{9, "9 คนที่ตายด้วยคมดาบยังดีกว่าคนที่ต้องอดอยากตาย เพราะคนเหล่านี้ค่อยผอมค่อยตายไป ถูกแทงทะลุเพราะขาดผลจากท้องนา"},
	{10, "10 มือของหญิงที่ใจอ่อนกลับเอาลูกของตัวต้มกิน ลูกที่ถูกต้มเป็นอาหารนั้นกินกันเมื่อยามหายนะมาสู่ธิดาแห่งชนชาติของข้าพเจ้า"},
	{11, "11 พระเยโฮวาห์ทรงบันดาลโทโสออกมาแล้ว พระองค์ทรงเทพระพิโรธอันเกรี้ยวกราดของพระองค์ลงแล้ว และได้ทรงจุดไฟขึ้นในกรุงศิโยน ซึ่งเผาผลาญรากของเมืองนั้น"},
	{12, "12 กษัตริย์ทั้งปวงแห่งแผ่นดินโลก และบรรดาชาวพิภพพากันไม่เชื่อว่าคู่อริหรือศัตรูจะได้เข้าไปในประตูกรุงเยรูซาเล็มได้"},
	{13, "13 เพราะความผิดบาปของพวกผู้พยากรณ์ของกรุงศิโยน และเพราะความชั่วช้าของพวกปุโรหิตของกรุงนั้น ที่ได้กระทำโลหิตของคนชอบธรรมให้ไหลออกในท่ามกลางกรุง"},
	{14, "14 เขาทั้งหลายเดินเปะปะและตาบอดไปตามถนน ทำตัวให้มลทินด้วยโลหิต จนคนจะจับต้องไม่ได้ที่เสื้อผ้าของเขา"},
	{15, "15 คนทั้งหลายร้องบอกเขาว่า ไปซิ มลทินจริง ไปเถอะ ไป๊ อย่ามาถูกต้องนะ เมื่อเขาเหล่านั้นหนีไป เป็นคนพเนจร พลเมืองของประชาชาติพูดกันว่า เขาต้องไม่อยู่ที่นี่อีกต่อไป"},
	{16, "16 พระพิโรธของพระเยโฮวาห์ทรงกระทำให้เขาทั้งปวงกระจัดกระจายไป พระองค์จะไม่ทรงสนพระทัยในเขาอีกเลย คนทั้งหลายจึงไม่นับถือพวกปุโรหิต ไม่ทำคุณต่อพวกผู้ใหญ่"},
	{17, "17 นัยน์ตาของพวกเรามองหาความช่วยเหลือ การช่วยเหลือนั้นไร้ประโยชน์ ส่วนการเฝ้ารอคอย พวกเราได้คอยประเทศที่ไม่อาจจะช่วยเราให้รอดได้"},
	{18, "18 มีคนสะกดรอยตามเรา จนพวกเราเดินตามถนนของพวกเราไม่ได้ เบื้องปลายของพวกเราก็ใกล้เข้ามาแล้ว วันเดือนทั้งหลายของพวกเราก็จะจบอยู่ เพราะบั้นปลายของพวกเรามาถึง"},
	{19, "19 พวกที่ข่มเหงเราก็เร็วกว่านกอินทรีในท้องฟ้า เขาทั้งหลายวิ่งไล่กวดพวกเราบนภูเขา เขาทั้งหลายซุ่มคอยจับเราในถิ่นทุรกันดาร"},
	{20, "20 ลมปราณทางจมูกของพวกข้าพเจ้า คือผู้ที่พระเยโฮวาห์ทรงเจิมไว้นั้น ก็ตกหลุมพรางของเขาทั้งหลายแล้ว คือพวกเรากล่าวถึงพระองค์ท่านว่า เราจะดำรงชีวิตของเราท่ามกลางประชาชาติได้ ก็ด้วยอาศัยร่มเงาของพระองค์ท่าน"},
	{21, "21 โอ ธิดาแห่งเมืองเอโดม ที่อาศัยอยู่ในแผ่นดินอูส จงเปรมปรีดิ์และยินดีเถิด ถ้วยนั้นจะผ่านมาถึงเจ้าด้วย เจ้าจะต้องเมามาย และจะกระทำให้ตัวเองเปลือยเปล่าไป"},
	{22, "22 โอ ธิดาแห่งกรุงศิโยนเอ๋ย การลงโทษเพราะความชั่วช้าของเจ้าก็ครบแล้ว พระองค์จะไม่ทรงพาเจ้าออกไปให้เป็นเชลยอีกต่อไป โอ ธิดาแห่งเมืองเอโดมเอ๋ย พระองค์จะทรงลงโทษเพราะความชั่วช้าของเจ้า พระองค์จะทรงเผยบาปของเจ้าให้ประจักษ์"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct th5 poems[] = {
	{1, "1 ข้าแต่พระเยโฮวาห์ ขอทรงระลึกว่ามีอะไรตกถึงข้าพระองค์ ขอทรงพิจารณาและทอดพระเนตรความอดสูของข้าพระองค์"},
	{2, "2 มรดกของพวกข้าพระองค์ได้ไปตกอยู่กับพวกต่างประเทศ บ้านเรือนของพวกข้าพระองค์เป็นของคนต่างด้าว"},
	{3, "3 พวกข้าพระองค์เป็นคนกำพร้าและคนกำพร้าพ่อ และเหล่ามารดาของข้าพระองค์เป็นดั่งหญิงม่าย"},
	{4, "4 น้ำก็ต้องซื้อเขาดื่ม ฟืนก็ต้องซื้อเขาใช้"},
	{5, "5 ผู้ข่มขี่ได้ขี่คอพวกข้าพระองค์ไว้ พวกข้าพระองค์ทำงานหนักและไม่มีเวลาพักเลย"},
	{6, "6 พวกข้าพระองค์พนมมือให้คนอียิปต์และคนอัสซีเรีย เพื่อจะได้อาหารรับประทานอิ่มหนึ่ง"},
	{7, "7 บรรพบุรุษของพวกข้าพระองค์ได้กระทำบาป และก็ตายหมดแล้ว พวกข้าพระองค์ต้องถูกโทษเพราะความชั่วช้าของเขา"},
	{8, "8 ทาสกลับปกครองพวกข้าพระองค์ ไม่มีผู้ใดช่วยข้าพระองค์ให้พ้นมือของเขาได้"},
	{9, "9 ข้าพระองค์ทั้งหลายได้อาหารมาโดยเอาชีวิตเข้าเสี่ยงเพราะดาบแห่งถิ่นทุรกันดาร"},
	{10, "10 ผิวหนังของพวกข้าพระองค์ก็ร้อนปานเตาอบ เพราะความเดือดร้อนของทุพภิกขภัย"},
	{11, "11 เขาทั้งหลายขืนใจพวกผู้หญิงในกรุงศิโยน และข่มใจสาวพรหมจารีในหัวเมืองแห่งยูดาห์"},
	{12, "12 พวกเจ้านายต้องถูกผูกมือแขวน ไม่มีใครแสดงความนับถือต่อหน้าพวกผู้ใหญ่"},
	{13, "13 พวกคนหนุ่มถูกบังคับให้โม่แป้ง และพวกเด็กต้องแบกฟืนหนักล้มลุกคลุกคลาน"},
	{14, "14 พวกผู้ใหญ่หายตัวไปจากประตูเมือง พวกคนหนุ่มได้หยุดดีดสีตีเป่าแล้ว"},
	{15, "15 ความปลาบปลื้มก็ประลาตไปจากใจของพวกข้าพระองค์สิ้น การเต้นรำของพวกข้าพระองค์กลายเป็นการร่ำไห้"},
	{16, "16 มงกุฎได้ร่วงหล่นจากศีรษะข้าพระองค์แล้ว วิบัติแก่พวกข้าพระองค์ เพราะพวกข้าพระองค์กระทำบาปไว้"},
	{17, "17 เหตุนี้เองใจพวกข้าพระองค์จึงอ่อนกำลัง เพราะการเหล่านี้เองนัยน์ตาข้าพระองค์จึงมัวไป"},
	{18, "18 เหตุด้วยภูเขาศิโยนซึ่งรกร้างไป พวกสุนัขจิ้งจอกจึงมาเดินเพ่นพ่านอยู่บนนั้น"},
	{19, "19 ข้าแต่พระเยโฮวาห์ แต่พระองค์ทรงสถิตอยู่เป็นนิตย์ พระที่นั่งของพระองค์ดำรงอยู่ทุกชั่วอายุ"},
	{20, "20 เป็นไฉนพระองค์ทรงลืมพวกข้าพระองค์เสียเป็นนิตย์ เป็นไฉนได้ทรงทอดทิ้งพวกข้าพระองค์เสียนานดังนี้"},
	{21, "21 ข้าแต่พระเยโฮวาห์ ขอทรงช่วยข้าพระองค์ให้กลับสู่พระองค์เถิด แล้วพวกข้าพระองค์จะกลับสู่พระองค์ ขอทรงฟื้นเดือนปีของข้าพระองค์ให้เหมือนดังก่อน"},
	{22, "22 เว้นเสียแต่พระองค์ทรงสลัดทิ้งพวกข้าพระองค์เสียแล้ว และพระองค์ทรงกริ้วพวกข้าพระองค์อย่างล้นพ้น"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};