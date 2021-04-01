#include "books.h"
#include "chapters.h"
#include "args.h"
int main(int argc, char** argv) {
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