//
// Created by Bourne on 2018/3/7.
//

#include "headers.h"

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        if(nums.empty()) return 0;

        int index = 0;
        for(int i = 1; i < nums.size(); ++i) {
            if(nums[index] != nums[i])
                nums[++index] = nums[i];
        }
        nums.resize(index + 1);
        return index + 1; //下标从0开始
    }
};

int main(int argc, char* argv[])
{
    vector<int> nums = {1, 1, 2};
    Solution solution;
    int len = solution.removeDuplicates(nums);
    cout << len << endl;

    for(auto i : nums) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
