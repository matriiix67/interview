//
// Created by Bourne on 27/03/2018.
//

#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i : nums) {
            m[i]++;
        }

        for(auto i : m) {
            if(i.second == 1)
                return i.first;
        } // 有更精妙的解法：(2^1^4^5^2^4^1) => ((2^2)^(1^1)^(4^4)^(5)) => (0^0^0^5) => 5
    }
};