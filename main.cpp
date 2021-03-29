#include <iostream>
#include <fstream>
#include <string>
#include "Bible1.h"
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
    if (argc > 1) {
        int val = atoi(argv[1]);
        if(val==1) Bible1::view1();
        else if(val==2) Bible1::view2();
        else if(val==3) Bible1::view3();
    } else {
        Bible1::view1();
    }
//    ifstream file("./ru/1/bible_ru_1_1.txt");
//    if (file.is_open()) {
//        string line;
//        while (getline(file, line)) {
//            cout << line+"\n";
//        }
//        file.close();
//    }
    return 0;
}
