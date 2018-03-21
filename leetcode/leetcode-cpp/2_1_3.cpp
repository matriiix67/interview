//
// Created by Bourne on 2018/3/7.
//

#include "headers.h"

// 2分查找，注意确定边界
class Solution {
public:
    int search(const vector<int> &nums, int target) {
        int first = 0, last = nums.size();
        while(first != last) {
            int mid = first + (last - first) / 2;
            if(nums[mid] == target)
                return mid;


            if(nums[first] <= nums[mid]) {
                if(nums[first] <= target && target < nums[mid])
                    last = mid;
                else
                    first = mid + 1;
            } else {
                if(target > nums[mid] && target <= nums[last - 1])
                    first = mid + 1;
                else
                    last = mid;
            }
        }
        return -1;
    }
};

int main(int argc, char* argv[])
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    Solution solution;
    int index = solution.search(nums, 5);
    cout << index << endl;
    index = solution.search(nums, 1);
    cout << index << endl;
    return 0;
}
