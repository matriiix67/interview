// leetcode 01

#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int max_len = 0;
        int last_repeat_pos = -1;

        for(int i = 0; i < s.size(); i++) {
            if(m.find(s[i]) != m.end() && last_repeat_pos < m[s[i]]) {
                last_repeat_pos = m[s[i]];
            }

            if(i - last_repeat_pos > max_len) {
                max_len = i - last_repeat_pos;
            }
            m[s[i]] = i;
        }
        return max_len;
    }
};

