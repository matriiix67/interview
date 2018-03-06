//
// Created by Bourne on 2018/3/5.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] >= target)
                return i;
        }

        return nums.size();
    }
};

