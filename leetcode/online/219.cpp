//
// Created by Bourne on 28/03/2018.
//

#include <set>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> um;

        for(int i = 0; i < nums.size(); ++i) {
            if(um.find(nums[i]) != um.end()) {
                if(i - um[nums[i]] <= k)
                    return true;
                else{
                    um[nums[i]] = i;
                }
            } else {
                um.insert(make_pair(nums[i], i));
            }
        }
        return false;
    }
};