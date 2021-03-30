#include "ru_books.h"
int main(int argc, char** argv) {
    //genallbooks(); exit(0);
    //cout << argc; exit(0);
    if (argc > 1) {
        if(argc == 2) {
            chapter = atoi(argv[1]);
            book1();
        }
        else if(argc == 3) {
            book = atoi(argv[1]);
            chapter = atoi(argv[2]);
            if(book==1) {
                book1();
            }
            else if(book==2) {
                book2();
            }
        }
    } else {
        Bible1::view1();
    }
    return 0;
}
