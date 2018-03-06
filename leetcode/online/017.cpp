// leetcode 01

#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty())
            return res;

        string dict[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        letterCombinationsDFS(digits, dict, 0, "", res);
        return res;
    }

private:
    void letterCombinationsDFS(string digits, string dict[], int level, string out, vector<string> &res) {
        if(level == digits.size())
            res.push_back(out);
        else {
            string str = dict[digits[level] - '2'];
            for(int i = 0; i < str.size(); ++i) {
                out.push_back(str[i]);
                letterCombinationsDFS(digits, dict, level + 1, out, res);
                out.pop_back();
            }
        }
    }
};

