// leetcode 01

#include <vector>
#include <iostream>
#include <string>
using namespace std;

// 动态规划

class Solution {
public:
    string longestPalindrome(string s) {
        int dp[s.size()][s.size()] = {0}, left = 0, right = 0, len = 0;
        for(int i = 0; i < s.size(); ++i) {
            for(int j = 0; j < i; ++j) {
                dp[j][i] = (s[i] == s[j] && (i - j < 2 || dp[j + 1][i -1]));

                if(dp[j][i] && len < i - j + 1) {
                    len = i - j + 1;
                    left = j;
                    right = i;
                }
            }
            dp[i][i] = 1;
        }

        return s.substr(left, right - left + 1);
    }


private:
};

