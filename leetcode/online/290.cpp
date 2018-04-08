//
// Created by Bourne on 08/04/2018.
//

#include <set>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, int> m1;
        unordered_map<string, int> m2;
        istringstream in(str);

        int i = 0;
        for(string word; in >> word; ++i) {
            if(m1.find(pattern[i]) != m1.end() || m2.find(word) != m2.end()) {
                if(m1[pattern[i]] != m2[word]) return false;
            } else {
                m1[pattern[i]] = m2[word] = i + 1;
            }
        }

        return i == pattern.size();
    }
};