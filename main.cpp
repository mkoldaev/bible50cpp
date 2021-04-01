//#include "generator.h" //перед масштабированием на linux, нужно закоммитить
#include "./lang/ru/gen/books.h" //перед генереацией комментировать
#include "./lang/ru/gen/chapters.h" //перед генереацией комментировать
#include "./lang/ru/gen/args.h" //перед генереацией комментировать
int main(int argc, char** argv) {
    //genalllang(); exit(0);
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
