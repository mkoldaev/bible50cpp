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
//        else if(val==4) Bible1::view4();
//        else if(val==5) Bible1::view5();
//        else if(val==6) Bible1::view6();
//        else if(val==7) Bible1::view7();
//        else if(val==8) Bible1::view8();
//        else if(val==9) Bible1::view9();
//        else if(val==10) Bible1::view10();
//        else if(val==11) Bible1::view11();
//        else if(val==12) Bible1::view12();
//        else if(val==13) Bible1::view13();
//        else if(val==14) Bible1::view14();
//        else if(val==15) Bible1::view15();
//        else if(val==16) Bible1::view16();
//        else if(val==17) Bible1::view17();
//        else if(val==18) Bible1::view18();
//        else if(val==19) Bible1::view19();
//        else if(val==20) Bible1::view20();
//        else if(val==21) Bible1::view21();
//        else if(val==22) Bible1::view22();
//        else if(val==23) Bible1::view23();
//        else if(val==24) Bible1::view24();
//        else if(val==25) Bible1::view25();
//        else if(val==26) Bible1::view26();
//        else if(val==27) Bible1::view27();
//        else if(val==28) Bible1::view28();
//        else if(val==29) Bible1::view29();
//        else if(val==30) Bible1::view30();
//        else if(val==31) Bible1::view31();
//        else if(val==32) Bible1::view32();
//        else if(val==33) Bible1::view33();
//        else if(val==34) Bible1::view34();
//        else if(val==35) Bible1::view35();
//        else if(val==36) Bible1::view36();
//        else if(val==37) Bible1::view37();
//        else if(val==38) Bible1::view38();
//        else if(val==39) Bible1::view39();
//        else if(val==40) Bible1::view40();
//        else if(val==41) Bible1::view41();
//        else if(val==42) Bible1::view42();
//        else if(val==43) Bible1::view43();
//        else if(val==44) Bible1::view44();
//        else if(val==45) Bible1::view45();
//        else if(val==46) Bible1::view46();
//        else if(val==47) Bible1::view47();
//        else if(val==48) Bible1::view48();
//        else if(val==49) Bible1::view49();
//        else if(val==50) Bible1::view50();

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
