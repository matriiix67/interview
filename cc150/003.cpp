//
// Created by Bourne on 2017/6/7.
//
#include <iostream>
#include <string>
using namespace std;

bool permutation(string s, string t)
{
    if(s.length() != t.length())
        return false;

    int letters[256] = {0};

    for(const char c : s) {
        letters[c]++;
    }

    for(int i = 0; i < t.length(); i++) {
        if(--letters[t.at(i)] < 0)
            return false;
    }

    return true;
}

int main()
{
    cout << "003 start ..." << endl;

    string str1 = "hel0o";
    string str2 = "elloh";

    cout << permutation(str1, str2) << endl;

    cout << "003 end ..." << endl;
    return 0;
}
