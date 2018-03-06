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
    void nextPermutation(vector<int>& nums) {
        int i, j, n = nums.size();
        for(i = n - 2; i >= 0; --i) {
            if(nums[i + 1] > nums[i]) {
                for(j = n - 1; j > i; --j) {
                    if(nums[j] > nums[i])
                        break;
                }
                swap(nums[i], nums[j]);
                reverse(nums.begin() + i + 1, num.end());
                return ;
            }
        }
        reverse(nums.begin(), nums.end());
    }
};

