//
// Created by Bourne on 2017/6/7.
//
#include <iostream>
using namespace std;

int count_compression(const string& str)
{
    if(str.length() == 0)
        return 0;

    char last = str.at(0);

    int count = 1;
    int size = 0;
    for(int i = 1; i < str.length(); i++){
        if(str.at(i) == last)
            count++;
        else {
            last = str.at(i);
            size += 1 + to_string(count).length();
            count = 1;
        }
    }
    size += 1 + to_string(count).length();
    return size;
}

string compress(const string& str)
{
    // 计算压缩后字符串大小 O(n)
    int size = count_compression(str);
    if(size >= str.length())
        return str;

    string new_str;
    char last = str.at(0);
    int count = 1;

    // O(n)
    for(int i = 1; i < str.length(); i++) {
        if(str.at(i) == last) {
            count++;
        } else {
            new_str += last;
            new_str.append(to_string(count));
            last = str.at(i);
            count = 1;
        }
    }

    new_str += last;
    new_str.append(to_string(count));

    return new_str;
}

int main()
{
    cout << "005 start ..." << endl;
    string str = "aabcccccaaa";
    cout << compress(str) << endl;

    cout << "005 end ..." << endl;
    return 0;
}
