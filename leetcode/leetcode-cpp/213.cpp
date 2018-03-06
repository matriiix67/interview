//
// Created by Bourne on 2017/6/8.
//

#include <iostream>
#include <vector>
using namespace std;


// 如果中间的数小于最右边的数，则右半段是有序的，若中间数大于最右边数，
// 则左半段是有序的，我们只要在有序的半段里用首尾两个数组来判断目标值是否在这一区域内，
// 这样就可以确定保留哪半边了
class Solution {
public:
    int search(const vector<int>& nums, int target)
    {
        int first = 0, last = nums.size();
        while(first != last) {
            const int mid = first + (last - first) / 2;
            if(nums[mid] == target)
                return mid;

            if(nums[first] <= nums[mid]) {
                if(nums[first] <= target && target < nums[mid])
                    last = mid;
                else
                    first = mid + 1;
            } else {
                if(nums[mid] < target && target <= nums[last - 1])
                    first = mid + 1;
                else
                    last = mid;
            }
        }
        return -1;
    }
};


int main()
{
    cout << "213 start ..." << endl;

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    Solution solution;
    int index = solution.search(nums, 2);
    cout << index << endl;

    cout << "213 end ..." << endl;
    return 0;
}