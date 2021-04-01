#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <dirent.h>
#include <stdlib.h>
#include <regex>
#include <direct.h>
using namespace std;
string lang = "ru";

void genlang(string l);
void genallbooks();
void geni(int i);
int getcount(const char* a);
void genchapters();
void genargs();
void genmain();
void genalllang();

void genalllang() {
    string diralllang = "../lang";
    DIR *dp;
    struct dirent *ep;
    dp = opendir(diralllang.c_str());
    int i = 0;
    if (dp != NULL)
    {
        while (ep = readdir (dp)) {
            i++;
            if(i > 2) {
                cout << ep->d_name << "\n";
                genlang(ep->d_name);
            }
        }
        (void) closedir (dp);
    }
}

void genlang(string l) {
    lang = l;
    genallbooks();
    genmain();
}

void genmain() {
    string filegen = "../lang/"+lang+"/gen/main.cpp";
    fstream writefile;
    writefile.open(filegen.c_str(), ios::out);
    writefile << "#include \"books.h\"\n";
    writefile << "#include \"chapters.h\"\n";
    writefile << "#include \"args.h\"\n";
    writefile << "int main(int argc, char** argv) {\n";
    writefile << "\tif (argc > 1) {\n";
    writefile << "\t\tif(argc == 2) {\n";
    writefile << "\t\t\tbook = atoi(argv[1]);\n";
    writefile << "\t\t\tchapter = 1;\n";
    writefile << "\t\t\tgetargs();\n";
    writefile << "\t\t}\n";
    writefile << "\t\telse if(argc == 3) {\n";
    writefile << "\t\t\tbook = atoi(argv[1]);\n";
    writefile << "\t\t\tchapter = atoi(argv[2]);\n";
    writefile << "\t\t\tgetargs();\n";
    writefile << "\t\t}\n";
    writefile << "\t} else {\n";
    writefile << "\t\tBible1::view1();\n";
    writefile << "\t}\n";
    writefile << "\treturn 0;\n";
    writefile << "}";
}

void genallbooks() {
    cout << lang;
    string filegen = "../lang/"+lang+"/gen/books.h";
    fstream writefile;
    writefile.open(filegen.c_str(), ios::out);
    writefile << "#include <iostream>\n";
    writefile << "#include <fstream>\n";
    writefile << "#include <string>\n";
    writefile << "#include <sstream>\n";
    writefile << "#include <vector>\n";
    writefile << "#include <dirent.h>\n";
    writefile << "#include <stdlib.h>\n";
    writefile << "using namespace std;\n";
    for(int i=1;i<=66;i++) {
        writefile << "#include \"Bible" << to_string(i) << ".h\"\n";
    }
    writefile << "int book, chapter;\n";
    string langdirgen = "../lang/"+lang+"/gen";
    _mkdir(langdirgen.c_str());
    for(int i=1;i<=66;i++) {
        geni(i);
    }
    genchapters();
    genargs();
}

void genargs() {
    string filegen = "../lang/"+lang+"/gen/args.h";
    fstream writefile;
    writefile.open(filegen.c_str(), ios::out);
    writefile << "void getargs() {\n";
    for(int i=1;i<=66;i++) {
        if(i ==1) {
            writefile << "\tif(book==1) { book1(); }\n";
        } else {
            writefile << "\telse if(book=="+to_string(i)+") { book"+to_string(i)+"(); }\n";
        }
    }
    writefile << "}";
}

void genchapters() {
    string filegen = "../lang/"+lang+"/gen/chapters.h";
    fstream writefile;
    writefile.open(filegen.c_str(), ios::out);
    for(int i=1;i<=66;i++) {
        writefile << "void book"+to_string(i)+"() {\n";
        string filename = "../lang/"+lang+"/" + to_string(i);
        const char* s = filename.c_str();
        int a = getcount(s);
        for(int c=1;c<=a;c++) {
            if(c == 1) {
                writefile << "\tif(chapter==1) Bible"+to_string(i)+"::view1();\n";
            } else {
                writefile << "\telse if(chapter=="+to_string(c)+") Bible"+to_string(i)+"::view"+to_string(c)+"();\n";
            }
        }
        writefile << "}\n";
    }
}

int getcount(const char* a) {
    DIR *dp;
    int i = -2; //исключается метка текущего каталога и верхний уровень
    struct dirent *ep;
    dp = opendir(a);
    if (dp != NULL)
    {
        while (ep = readdir (dp))
            i++;
        (void) closedir (dp);
    }
    return i;
}

void geni(int aa) {
    string filegen = "../lang/"+lang+"/gen/Bible"+to_string(aa)+".h";
    fstream writefile;
    writefile.open(filegen.c_str(), ios::out);
    writefile << "#include <map>\n";
    writefile << "#include <string>\n";
    writefile << "class Bible"+to_string(aa)+"\n";
    writefile << "{\n";
    string filename = "../lang/"+lang+"/" + to_string(aa);
    const char* s = filename.c_str();
    int a = getcount(s);
    cout << a;
    for(int i=1;i<=a;i++) {
        string s = "\tstruct "+lang+""+to_string(i)+"\t{ int val; const char *msg; };\n";
        writefile << s;
    }
    writefile << "public:\n";
    for(int i=1;i<=a;i++) {
        stringstream book, v1, v2;
        book << "";
        v1 << "";
        v2 << "";
        //string part1 = "./ru/1/bible_ru_1_"; //for linux
        string part1 = "../lang/"+lang+"/"+to_string(aa)+"/bible_"+lang+"_"+to_string(aa)+"_"; //for clione
        book << part1 << i << ".txt";
        string b = book.str();
        cout << b + "\n";
        v1 << "static void view" << i << "() {\n";
        v2 << "struct " << lang << i << " poems[] = {\n";
        ifstream myfile(b.c_str());
        writefile << v1.str();
        writefile << v2.str();
        if (myfile.is_open(), ios::out) {
            string line;
            int counter = 1;
            while (getline(myfile, line)) {
                stringstream v3;
                v3 << "\t{" << counter << ", \"" << regex_replace(line,regex("\""), "\\\"") << "\"},\n";
                writefile << v3.str();
                counter++;
            }
            myfile.close();
        }
        writefile << "};\n";
        writefile << "size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf(\"%s\\n\", poems[i].msg);}\n";
        writefile << "}\n";
    }
    writefile << "};";
    writefile.close();
}
