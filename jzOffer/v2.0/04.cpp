//
// Created by Bourne on 2018/3/13.
//

#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    void ReplaceBlank(string& str) {
        int number_of_blank = 0;
        for(int i = 0; i < str.length(); ++i) {
            if(str.at(i) == ' ') {
                number_of_blank++;
            }
        }

        int old_len = str.length();

        int new_len = str.length() + 2 * number_of_blank;
        str.resize(new_len);

        new_len--;
        for(int i = old_len - 1; i >= 0 && new_len > i; --i) {
            if(str.at(i) == ' ') {
                str.at(new_len--) = '0';
                str.at(new_len--) = '2';
                str.at(new_len--) = '%';
            } else {
                str.at(new_len--) = str.at(i);
            }
        }
    }
};


int main(int argc, char* argv[])
{
    Solution solution;
    string str = "who are you?";
    solution.ReplaceBlank(str);
    cout << str << endl;
    return 0;
}