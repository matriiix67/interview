//
// Created by Bourne on 2017/6/8.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool search(const vector<int>& nums, int target)
    {
        int first = 0, last = nums.size();
        while(first != last) {
            const int mid = first + (last - first) / 2;
            if(nums[mid] == target)
                return true;

            if(nums[first] < nums[mid]) {
                if(nums[first] <= target && target < nums[mid])
                    last = mid;
                else
                    first = mid + 1;
            } else if(nums[first] > nums[mid]) {
                if(nums[mid] < target && target <= nums[last - 1])
                    first = mid + 1;
                else last = mid;
            } else
                first ++;
        }
    }

};


int main()
{
    cout << "214 start ..." << endl;
    vector<int> nums = {1, 3, 1, 1, 1};
    Solution solution;
    cout << solution.search(nums, 2) << endl;

    cout << "214 end ..." << endl;
    return 0;
}