//
// Created by Bourne on 28/03/2018.
//

#include <set>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() > 1) {
            unordered_map<int, int> um;
            for(auto i : nums) {
                if(um.find(i) != um.end()) {
                    if(um[i] >=1)
                        return true;
                } else {
                    um.insert(make_pair(i, 1));
                }
            }
        }
        return false;
    }
};