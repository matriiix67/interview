//
// Created by Bourne on 2017/6/8.
//

#include <iostream>
#include <vector>
using namespace std;


class Solution
{
public:
    int remove_duplicates(vector<int>& nums)
    {
        if(nums.empty())
            return 0;

        int index = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[index] != nums[i])
                nums[++index] = nums[i];
        }

        nums.resize(index + 1);
        return index + 1;
    }
};


int main()
{
    cout << "211 start ..." << endl;

    vector<int> nums = {1, 1, 2};
    Solution solution;
    int new_size = solution.remove_duplicates(nums);
    cout << new_size << endl;
    for(int i : nums) {
        cout << i << " ";
    }
    cout << endl;

    cout << "211 end ..." << endl;
    return 0;
}

