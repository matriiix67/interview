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
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;

        while(i <= j) {
            int mid = (i + j) / 2;

            if(nums[mid] == target) {
                return mid;
            } else if(nums[i] <= nums[mid]) {
                if(nums[i] <= target && target <  nums[mid]) {
                    j = mid - 1;
                } else {
                    i = mid + 1;
                }
            } else {
                if(nums[mid] < target && target <= nums[j]) {
                    i = mid + 1;
                } else {
                    j = mid - 1;
                }
            }
        }

        return -1;
    }
};

