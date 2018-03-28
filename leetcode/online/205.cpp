//
// Created by Bourne on 28/03/2018.
//

#include <set>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() == t.size()) {
            unordered_map<char, int> um;
            vector<int> v1(s.size(), 0);
            for (int i = 0; i < s.size(); ++i) {
                if (um.find(s[i]) != um.end()) {
                    v1[i] = um[s[i]];
                } else {
                    v1[i] = i;
                    um[s[i]] = i;
                }
            }

            unordered_map<char, int> um2;
            vector<int> v2(t.size(), 0);
            for (int i = 0; i < t.size(); ++i) {
                if (um2.find(t[i]) != um2.end()) {
                    v2[i] = um2[t[i]];
                } else {
                    v2[i] = i;
                    um2[t[i]] = i;
                }
            }

            if (v1 == v2) {
                return true;
            }
        }
        return false;
    }

    // 又更简单的解法，思路一样
    /*
    int m1[256] = {0}, m2[256] = {0}, n = s.size();
    for (int i = 0; i < n; ++i) {
        if (m1[s[i]] != m2[t[i]]) return false;
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    return true;
     */
};