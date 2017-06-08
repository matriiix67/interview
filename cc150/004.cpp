//
// Created by Bourne on 2017/6/7.
//
#include <iostream>
using namespace std;

void replace_space(string& str)
{
    int space_count = 0;
    for(char c : str)
        if(c == ' ')
            space_count++;

    const char *cstr = str.c_str();
    int new_len = str.length() + space_count * 2;
    char new_str[new_len - 1];
    for(int i = str.length() - 1; i >= 0; i--) {
        if(cstr[i] == ' ') {
            new_str[new_len - 1] = '0';
            new_str[new_len - 2] = '2';
            new_str[new_len - 3] = '%';
            new_len -= 3;
        } else {
            new_str[new_len - 1] = cstr[i];
            new_len--;
        }
    }

    str = new_str;
}

int main()
{
    cout << "004 start ..." << endl;

    string str = "how are you";
    replace_space(str);
    cout << str << endl;

    cout << "004 end ..." << endl;
    return 0;
}
