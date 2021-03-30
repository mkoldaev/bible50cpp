#include "books.h"
#include "chapters.h"
//#include "generator.h" //перед масштабированием на linux, нужно закоммитить
#include "args.h"
int main(int argc, char** argv) {
    //genargs(); exit(0);
    //genchapters(); exit(0);
    //genallbooks(); exit(0);
    //cout << argc; exit(0);
    if (argc > 1) {
        if(argc == 2) {
            book = atoi(argv[1]);
            chapter = 1;
            getargs();
        }
        else if(argc == 3) {
            book = atoi(argv[1]);
            chapter = atoi(argv[2]);
            getargs();
        }
    } else {
        Bible1::view1();
    }
    return 0;
}
