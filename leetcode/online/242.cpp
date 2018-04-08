//
// Created by Bourne on 27/03/2018.
//

#include <set>
#include <map>
#include <vector>
#include <string>
using namespace std;

// todo 有更简洁的改进
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m1;
        map<char, int> m2;

        for(auto c : s) {
            m1[c]++;
        }

        for(auto c : t) {
            m2[c]++;
        }

        if(m1.size() != m2.size())
            return false;

        for(auto it : m1) {
            if(m2.find(it.first) != m2.end()) {
                if (m2[it.first] != it.second)
                    return false;
            } else {
                return false;
            }
        }

        return true;
    }
};

int main(int argc, char* argv[]) {
    Solution solution;
    solution.isAnagram("a", "ab");
    return 0;
}