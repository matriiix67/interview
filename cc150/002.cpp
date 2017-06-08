//
// Created by Bourne on 2017/6/7.
//
#include <iostream>
using namespace std;

void reverse(char *str)
{
    char *end = str;
    if(str) {
        while (*end) {
            end++;
        }
        --end;

        while (str < end) {
            char tmp = *str;
            *str++ = *end;
            *end-- = tmp;
        }
    }
}

int main() {
    cout << "002 start ..." << endl;

    char str[12] = "hello world";
    reverse(str);
    cout << str << endl;

    cout << "002 end ..." << endl;
    return 0;
}
