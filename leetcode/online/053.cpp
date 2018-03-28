//
// Created by Bourne on 2018/3/5.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


// 动态规划
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN, sum = 0;
        for(int num : nums) {
            sum = max(sum + num, num);
            res = max(res, sum);
        }
        return res;
    }
};
