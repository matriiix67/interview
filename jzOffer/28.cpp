#include <iostream>

using namespace std;

void permutation(char *str, char* begin) {
    if(*begin == '\0') {
        cout << str << endl;
    } else {
        for(char* pch = begin; *pch != '\0'; pch++) {
            char tmp = *pch;
            *pch = *begin;
            *begin = tmp;

            permutation(str, begin + 1);

            tmp = *pch;
            *pch = *begin;
            *begin = tmp;
        }
    }
}

void permutation(char* str) {
    if(str == nullptr)
        return;

    permutation(str, str);
}
