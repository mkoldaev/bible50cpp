#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <dirent.h>
#include <stdlib.h>
#include <regex>
using namespace std;

void genallbooks();
void geni(int i);
int getcount(const char* a);
void genargs();

void genallbooks() {
    for(int i=1;i<=66;i++) {
        geni(i);
    }
}

void genargs() {
    string filegen = "../args.h";
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
    string filegen = "../chapters.h";
    fstream writefile;
    writefile.open(filegen.c_str(), ios::out);
    for(int i=1;i<=66;i++) {
        writefile << "void book"+to_string(i)+"() {\n";
        string filename = "../ru/" + to_string(i);
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
    string filegen = "../gen/Bible"+to_string(aa)+".h";
    fstream writefile;
    writefile.open(filegen.c_str(), ios::out);
    writefile << "#include <map>\n";
    writefile << "#include <string>\n";
    writefile << "class Bible"+to_string(aa)+"\n";
    writefile << "{\n";
    string filename = "../ru/" + to_string(aa);
    const char* s = filename.c_str();
    int a = getcount(s);
    cout << a;
    for(int i=1;i<=a;i++) {
        string s = "\tstruct ru"+to_string(i)+"\t{ int val; const char *msg; };\n";
        writefile << s;
    }
    writefile << "public:\n";
    for(int i=1;i<=a;i++) {
        stringstream book, v1, v2;
        book << "";
        v1 << "";
        v2 << "";
        //string part1 = "./ru/1/bible_ru_1_"; //for linux
        string part1 = "../ru/"+to_string(aa)+"/bible_ru_"+to_string(aa)+"_"; //for clione
        book << part1 << i << ".txt";
        string b = book.str();
        cout << b + "\n";
        v1 << "static void view" << i << "() {\n";
        v2 << "struct ru" << i << " poems[] = {\n";
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
