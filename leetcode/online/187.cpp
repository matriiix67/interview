//
// Created by Bourne on 28/03/2018.
//

#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        set<string> res, st;
        for(int i = 0; i + 9 < s.size(); ++i) {
            string t = s.substr(i, 10);
            if(st.count(t)) res.insert(t);
            else st.insert(t);
        }

        return vector<string>{res.begin(), res.end()};
    }
};

