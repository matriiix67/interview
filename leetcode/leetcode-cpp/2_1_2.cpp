//
// Created by Bourne on 2018/3/7.
//

#include "headers.h"

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        if(nums.size() < 2) return 0;

        int index = 2;
        for(int i = 2; i < nums.size(); ++i) {
            if(nums[i] != nums[index - 2]) {
                nums[index++] = nums[i];
            }
        }
        nums.resize(index);
        return index; //下标从0开始
    }
};

int main(int argc, char* argv[])
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    Solution solution;
    int len = solution.removeDuplicates(nums);
    cout << len << endl;

    for(auto i : nums) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

