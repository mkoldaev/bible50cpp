#include <map>
#include <string>
class Bible39
{
	struct gr1	{ int val; const char *msg; };
	struct gr2	{ int val; const char *msg; };
	struct gr3	{ int val; const char *msg; };
	struct gr4	{ int val; const char *msg; };
public:
static void view1() {
struct gr1 poems[] = {
	{1, "1 Το φορτίον του λόγου του Κυρίου διά χειρός Μαλαχίου προς Ισραήλ."},
	{2, "2 Εγώ σας ηγάπησα, λέγει Κύριος· και σεις είπετε, Εις τι μας ηγάπησας; δεν ήτο ο Ησαύ αδελφός του Ιακώβ; λέγει Κύριος· πλην ηγάπησα τον Ιακώβ,"},
	{3, "3 τον δε Ησαύ εμίσησα και κατέστησα τα όρη αυτού ερήμωσιν και την κληρονομίαν αυτού κατοικίας ερήμου."},
	{4, "4 Και εάν ο Εδώμ είπη, Ημείς εταλαιπωρήθημεν, πλην θέλομεν οικοδομήσει εκ νέου τους ηρημωμένους τόπους, ούτω λέγει ο Κύριος των δυνάμεων· Αυτοί θέλουσιν οικοδομήσει αλλ' εγώ θέλω καταστρέψει· και θέλουσιν ονομασθή, Όριον ανομίας, και, Ο λαός κατά του οποίου ο Κύριος ηγανάκτησε διαπαντός."},
	{5, "5 Και οι οφθαλμοί σας θέλουσιν ιδεί και σεις θέλετε ειπεί, Εμεγαλύνθη ο Κύριος από του ορίου του Ισραήλ."},
	{6, "6 Ο υιός τιμά τον πατέρα και ο δούλος τον κύριον αυτού· αν λοιπόν εγώ ήμαι πατήρ, που είναι η τιμή μου; και αν κύριος εγώ, που ο φόβος μου; λέγει ο Κύριος των δυνάμεων προς εσάς, ιερείς, οίτινες καταφρονείτε το όνομά μου, και λέγετε, Εις τι κατεφρονήσαμεν το όνομά σου;"},
	{7, "7 Προσεφέρετε άρτον μεμιασμένον επί του θυσιαστηρίου μου και είπετε, Εις τι σε εμιάναμεν; Εις το ότι λέγετε, Η τράπεζα του Κυρίου είναι αξιοκαταφρόνητος."},
	{8, "8 Και αν προσφέρητε τυφλόν εις θυσίαν, δεν είναι κακόν; και αν προσφέρητε χωλόν ή άρρωστον, δεν είναι κακόν; πρόσφερε τώρα τούτο εις τον αρχηγόν σου· θέλει άρα γε ευαρεστηθή εις σε ή υποδεχθή το πρόσωπόν σου; λέγει ο Κύριος των δυνάμεων."},
	{9, "9 Και τώρα λοιπόν δεήθητε του Θεού διά να ελεήση ημάς· εξ αιτίας σας έγεινε τούτο· θέλει άρα γε υποδεχθή τα πρόσωπά σας; λέγει ο Κύριος των δυνάμεων."},
	{10, "10 Τις είναι και μεταξύ σας, όστις ήθελε κλείσει τας θύρας, διά να μη ανάπτητε πυρ επί το θυσιαστήριόν μου ματαίως; δεν έχω ευχαρίστησιν εις εσάς, λέγει ο Κύριος των δυνάμεων, και δεν θέλω δεχθή προσφοράν εκ της χειρός σας."},
	{11, "11 Διότι από ανατολών ηλίου έως δυσμών αυτού το όνομά μου θέλει είσθαι μέγα μεταξύ των εθνών, και εν παντί τόπω θέλει προσφέρεσθαι θυμίαμα εις το όνομά μου και θυσία καθαρά· διότι μέγα θέλει είσθαι το όνομά μου μεταξύ των εθνών, λέγει ο Κύριος των δυνάμεων."},
	{12, "12 Σεις όμως εβεβηλώσατε αυτό, λέγοντες, Η τράπεζα του Κυρίου είναι μεμιασμένη, και τα επιτιθέμενα επ' αυτήν, το φαγητόν αυτής, αξιοκαταφρόνητον."},
	{13, "13 Σεις είπετε έτι, Ιδού, οποία ενόχλησις· και κατεφρονήσατε αυτήν, λέγει ο Κύριος των δυνάμεων· και εφέρατε το ηρπαγμένον και το χωλόν και το άρρωστον, ναι, τοιαύτην προσφοράν εφέρατε· ήθελον δεχθή αυτήν εκ της χειρός σας; λέγει Κύριος."},
	{14, "14 Όθεν επικατάρατος ο απατεών, όστις έχει εν τω ποιμνίω αυτού άρσεν και κάμνει ευχήν και θυσιάζει εις τον Κύριον πράγμα διεφθαρμένον· διότι εγώ είμαι βασιλεύς μέγας, λέγει ο Κύριος των δυνάμεων, και το όνομά μου είναι τρομερόν εν τοις έθνεσι."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct gr2 poems[] = {
	{1, "1 Και τώρα εις εσάς γίνεται η εντολή αύτη, ιερείς."},
	{2, "2 Εάν δεν ακούσητε και εάν δεν βάλητε τούτο εις την καρδίαν, διά να δώσητε δόξαν εις το όνομά μου, λέγει ο Κύριος των δυνάμεων, τότε θέλω εξαποστείλει την κατάραν εφ' υμάς και θέλω επικαταρασθή τας ευλογίας σας· ναι, μάλιστα και κατηράσθην αυτάς, διότι δεν βάλλετε τούτο εις την καρδίαν σας."},
	{3, "3 Ιδού, εγώ θέλω απορρίψει τα σπέρματά σας και θέλω σκορπίσει κόπρον επί τα πρόσωπά σας, την κόπρον των εορτών σας· και θέλει σας σηκώσει μεθ' εαυτής."},
	{4, "4 Και θέλετε γνωρίσει ότι εγώ εξαπέστειλα την εντολήν ταύτην προς εσάς, διά να ήναι η διαθήκη μου μετά του Λευΐ, λέγει ο Κύριος των δυνάμεων."},
	{5, "5 Η της ζωής και της ειρήνης διαθήκη μου ήτο μετ' αυτού· και έδωκα αυτάς εις αυτόν διά τον φόβον, τον οποίον με εφοβείτο και ευλαβείτο το όνομά μου."},
	{6, "6 Ο νόμος της αληθείας ήτο εν τω στόματι αυτού και ανομία δεν ευρέθη εν τοις χείλεσιν αυτού· περιεπάτησε μετ' εμού εν ειρήνη και ευθύτητι και πολλούς επέστρεψεν από ανομίας."},
	{7, "7 Επειδή τα χείλη του ιερέως θέλουσι φυλάττει γνώσιν, και εκ του στόματος αυτού θέλουσι ζητήσει νόμον· διότι αυτός είναι άγγελος του Κυρίου των δυνάμεων."},
	{8, "8 Αλλά σεις εξεκλίνατε από της οδού· εκάμετε πολλούς να προσκόπτωσιν εις τον νόμον· διεφθείρατε την διαθήκην του Λευΐ, λέγει ο Κύριος των δυνάμεων."},
	{9, "9 Διά τούτο και εγώ σας κατέστησα καταφρονητούς και εξουδενωμένους εις πάντα τον λαόν, καθότι δεν εφυλάξατε τας οδούς μου αλλ' ήσθε προσωπολήπται εις τον νόμον."},
	{10, "10 Δεν είναι εις ο πατήρ πάντων ημών; δεν έπλασεν ημάς εις Θεός; διά τι δολιευόμεθα έκαστος κατά του αδελφού αυτού, βεβηλούντες την διαθήκην των πατέρων ημών;"},
	{11, "11 Ο Ιούδας εφέρθη δολίως και επράχθη βδέλυγμα εν Ισραήλ και εν Ιερουσαλήμ· διότι εβεβήλωσεν ο Ιούδας το άγιον του Κυρίου, το οποίον ηγάπησε, και ενυμφεύθη θυγατέρα θεού αλλοτρίου."},
	{12, "12 Ο Κύριος θέλει εξολοθρεύσει εκ των σκηνωμάτων του Ιακώβ τον άνθρωπον τον πράττοντα τούτο, τον σκοπόν και τον αποκρινόμενον και τον προσφέροντα προσφοράν εις τον Κύριον των δυνάμεων."},
	{13, "13 Εκάμετε ότι και τούτο· εκαλύπτετε το θυσιαστήριον του Κυρίου με δάκρυα, με κλαυθμόν και με στεναγμούς· όθεν δεν αποβλέπει πλέον εις την προσφοράν και δεν δέχεται αυτήν με ευαρέστησιν εκ της χειρός σας."},
	{14, "14 Και λέγετε, Διά τι; Διότι ο Κύριος εστάθη μάρτυς μεταξύ σου και της γυναικός της νεότητός σου, προς την οποίαν συ εφέρθης δολίως· ενώ αυτή είναι η σύζυγός σου και η γυνή της συνθήκης σου."},
	{15, "15 Και δεν έκαμεν ο Θεός ένα; και όμως αυτός είχεν υπεροχήν πνεύματος. Και διά τι τον ένα; διά να ζητήση σπέρμα θείον. Διά τούτο προσέχετε εις το πνεύμά σας, και ας μη φέρηται μηδείς απίστως προς την γυναίκα της νεότητος αυτού."},
	{16, "16 Διότι ο Κύριος, ο Θεός του Ισραήλ, λέγει ότι μισεί τον αποβάλλοντα αυτήν και τον καλύπτοντα την βίαν με το ένδυμα αυτού, λέγει ο Κύριος των δυνάμεων· διά τούτο προσέχετε εις το πνεύμά σας και μη φέρεσθε δολίως."},
	{17, "17 Κατεβαρύνατε τον Κύριον με τους λόγους σας· και λέγετε, με τι κατεβαρύναμεν αυτόν; Με το να λέγητε, πας όστις πράττει κακόν είναι ευάρεστος ενώπιον του Κυρίου, και αυτός ευδοκεί εις αυτούς. Που είναι ο Θεός της κρίσεως;"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct gr3 poems[] = {
	{1, "1 Ιδού, εγώ αποστέλλω τον άγγελόν μου και θέλει κατασκευάσει την οδόν έμπροσθέν μου· και ο Κύριος, τον οποίον σεις ζητείτε, εξαίφνης θέλει ελθεί εις τον ναόν αυτού, ναι, ο άγγελος της διαθήκης, τον οποίον σεις θέλετε· ιδού, έρχεται, λέγει ο Κύριος των δυνάμεων."},
	{2, "2 Αλλά τις δύναται να υπομείνη την ημέραν της ελεύσεως αυτού; και τις δύναται να σταθή εις την παρουσίαν αυτού; διότι αυτός είναι ως πυρ χωνευτού και ως σμίγμα γναφέων."},
	{3, "3 Και θέλει καθήσει ως ο χωνεύων και καθαρίζων το αργύριον, και θέλει καθαρίσει τους υιούς του Λευΐ και θέλει στραγγίσει αυτούς ως το χρυσίον και το αργύριον, και θέλουσι προσφέρει εις τον Κύριον προσφοράν εν δικαιοσύνη."},
	{4, "4 Τότε η προσφορά του Ιούδα και της Ιερουσαλήμ θέλει είσθαι αρεστή εις τον Κύριον καθώς εν ταις ημέραις ταις αρχαίαις και καθώς εν τοις προλαβούσιν έτεσι."},
	{5, "5 Και θέλω πλησιάσει προς εσάς διά κρίσιν· και θέλω είσθαι μάρτυς σπεύδων εναντίον των μάγων και εναντίον των μοιχευόντων και εναντίον των επιόρκων και εναντίον των αποστερούντων τον μισθόν του μισθωτού, των καταδυναστευόντων την χήραν και τον ορφανόν, και των αδικούντων τον ξένον και των μη φοβουμένων με, λέγει ο Κύριος των δυνάμεων."},
	{6, "6 Διότι εγώ είμαι ο Κύριος· δεν αλλοιούμαι· διά τούτο σεις, οι υιοί του Ιακώβ, δεν απωλέσθητε."},
	{7, "7 Εκ των ημερών των πατέρων σας απεχωρίσθητε από των διαταγμάτων μου και δεν εφυλάξατε αυτά. Επιστρέψατε προς εμέ και θέλω επιστρέψει προς εσάς, λέγει ο Κύριος των δυνάμεων· πλην είπετε, Τίνι τρόπω θέλομεν επιστρέψει;"},
	{8, "8 Μήπως θέλει κλέπτει ο άνθρωπος τον Θεόν; σεις όμως με εκλέπτετε· και λέγετε, Εις τι σε εκλέψαμεν; εις τα δέκατα και εις τας προσφοράς."},
	{9, "9 Σεις είσθε κατηραμένοι με κατάραν· διότι σεις με εκλέψατε, ναι, σεις, όλον το έθνος."},
	{10, "10 Φέρετε πάντα τα δέκατα εις την αποθήκην, διά να ήναι τροφή εις τον οίκόν μου· και δοκιμάσατέ με τώρα εις τούτο, λέγει ο Κύριος των δυνάμεων, εάν δεν σας ανοίξω τους καταρράκτας του ουρανού και εκχέω την ευλογίαν εις εσάς, ώστε να μη αρκή τόπος δι' αυτήν."},
	{11, "11 Και θέλω επιτιμήσει υπέρ υμών τον καταφθείροντα, και δεν θέλει φθείρει τους καρπούς της γης σας· ουδέ η άμπελός σας θέλει απορρίψει προ καιρού τον καρπόν αυτής εν τω αγρώ, λέγει ο Κύριος των δυνάμεων."},
	{12, "12 Και θέλουσι σας μακαρίζει πάντα τα έθνη· διότι σεις θέλετε είσθαι γη επιθυμητή, λέγει ο Κύριος των δυνάμεων."},
	{13, "13 Οι λόγοι σας ήσαν σκληροί εναντίον μου, λέγει ο Κύριος· και είπετε, Τι ελαλήσαμεν εναντίον σου;"},
	{14, "14 Σεις είπετε, Μάταιον είναι να δουλεύη τις τον Θεόν· και, Τις η ωφέλεια ότι εφυλάξαμεν τα διατάγματα αυτού και ότι περιεπατήσαμεν πενθούντες ενώπιον του Κυρίου των δυνάμεων;"},
	{15, "15 Και τώρα ημείς μακαρίζομεν τους υπερηφάνους· ναι, οι εργαζόμενοι την ανομίαν υψώθησαν, ναι, οι πειράζοντες τον Θεόν, και αυτοί εσώθησαν."},
	{16, "16 Τότε οι φοβούμενοι τον Κύριον ελάλουν προς αλλήλους· και ο Κύριος προσείχε και ήκουε και εγράφη βιβλίον ενθυμήσεως ενώπιον αυτού περί των φοβουμένων τον Κύριον και των ευλαβουμένων το όνομα αυτού·"},
	{17, "17 και θέλουσιν είσθαι εμού, λέγει ο Κύριος των δυνάμεων, εν τη ημέρα εκείνη, όταν εγώ ετοιμάσω τα πολύτιμά μου· και θέλω σπλαγχνισθή αυτούς, καθώς σπλαγχνίζεται άνθρωπος τον υιόν αυτού, όστις δουλεύει αυτόν."},
	{18, "18 Τότε θέλετε επιστρέψει και διακρίνει μεταξύ δικαίου και ασεβούς, μεταξύ του δουλεύοντος τον Θεόν και του μη δουλεύοντος αυτόν."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct gr4 poems[] = {
	{1, "1 Διότι, ιδού, έρχεται ημέρα, ήτις θέλει καίει ως κλίβανος· και πάντες οι υπερήφανοι και πάντες οι πράττοντες ασέβειαν θέλουσιν είσθαι άχυρον· και η ημέρα η ερχομένη θέλει κατακαύσει αυτούς, λέγει ο Κύριος των δυνάμεων, ώστε δεν θέλει αφήσει εις αυτούς ρίζαν και κλάδον."},
	{2, "2 Εις εσάς όμως τους φοβουμένους το όνομά μου θέλει ανατείλει ο ήλιος της δικαιοσύνης με ίασιν εν ταις πτέρυξιν αυτού· και θέλετε εξέλθει, και σκιρτήσει ως μοσχάρια της φάτνης."},
	{3, "3 Και θέλετε καταπατήσει τους ασεβείς· διότι αυτοί θέλουσιν είσθαι σποδός υπό τα ίχνη των ποδών σας, καθ' ην ημέραν εγώ κάμω τούτο, λέγει ο Κύριος των δυνάμεων."},
	{4, "4 Ευθυμείσθε τον νόμον του Μωϋσέως του δούλου μου, τον οποίον προσέταξα εις αυτόν εν Χωρήβ διά πάντα τον Ισραήλ, τα διατάγματα και τας κρίσεις."},
	{5, "5 Ιδού, εγώ θέλω αποστείλει προς εσάς Ηλίαν τον προφήτην, πριν έλθη η ημέρα του Κυρίου η μεγάλη και επιφανής·"},
	{6, "6 και αυτός θέλει επιστρέψει την καρδίαν των πατέρων προς τα τέκνα και την καρδίαν των τέκνων προς τους πατέρας αυτών, μήποτε έλθω και πατάξω την γην με ανάθεμα."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};