#include <iostream>
#include <fstream>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <sstream>
#include <Windows.h>
#include <cstdio>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IOFBF, 1000);
    ifstream file("../ru/1/bible_ru_1_1.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            // using printf() in all tests for consistency
            printf("%s", line.c_str());
            cout << "\n";
        }
        file.close();
    }
    return 0;
}
