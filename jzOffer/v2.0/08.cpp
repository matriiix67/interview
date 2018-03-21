//
// Created by Bourne on 2018/3/14.
//


// 旋转数组中的最小数字
// 二分

// todo 改进算法，让算法支持{1, 0, 1, 1, 1}

#include <vector>
#include <iostream>
using namespace std;

// {3, 4, 5, 1, 2}

class Solution {
public:
    int findRotationArrayMin(vector<int>& nums) { // 不支持{1, 0, 1, 1, 1}
        if(nums.empty()) {
            return -1;
        }

        int len = nums.size();
        int left = 0;
        int right = len - 1;
        int mid = left;
        while(nums[left] >= nums[right]) {
            if(right - left == 1) {
                mid = right;
                break;
            }

            int mid = (left + right) / 2;
            if(nums[mid] >= nums[right]) {
                left = mid;
            } else if(nums[mid] <= nums[right]){
                right = mid;
            }
        }

        return nums[mid];
    }
};


int main(int argc, char* argv[])
{
    vector<int> nums = {7, 8, 1, 2, 3, 4, 5, 6};
    Solution solution;
    int res = solution.findRotationArrayMin(nums);
    cout << res << endl;
    return 0;
}