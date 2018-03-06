// leetcode 01

#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++) {
            if(m.find(nums[i]) == m.end()) {
                m[target - nums[i]] = i;
            } else {
                result.push_back(m[numbers[i]]);
                result.push_back(i);
                break;
            }
        }

        return result;
    }
};

