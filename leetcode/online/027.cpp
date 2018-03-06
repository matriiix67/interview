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
    int removeElement(vector<int>& nums, int val) {
        int res = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] != val)
                nums[res++] = nums[i];
        }

        return res;
    }
};

