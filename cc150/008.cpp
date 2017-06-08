//
// Created by Bourne on 2017/6/7.
//
#include <iostream>
#include <algorithm>
using namespace std;

bool is_substring(string s1, string s2)
{
    if(s1.find(s2) != string::npos)
        return true;
    return false;
}

bool is_rotation(string s1, string s2)
{
    if(s1.length() != s2.length() || s1.length() <= 0)
        return false;
    return is_substring(s1 + s1, s2);
}

int main()
{
    cout << "008 start ..." << endl;

    string s1 = "apple";
    string s2 = "pleap";
    cout << is_rotation(s1, s2) << endl;

    cout << "008 end ..." << endl;
    return 0;
}
