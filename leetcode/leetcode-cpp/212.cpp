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
        if(nums.size() <= 2)
            return nums.size();

        int index = 2;
        for(int i = 2; i < nums.size(); i++) {
            if(nums[index - 2] != nums[i])
                nums[index++] = nums[i];
        }

        nums.resize(index + 1);
        return index + 1;
    }


};


int main()
{
    cout << "212 start ..." << endl;

    vector<int> nums = {1, 1, 1, 2, 2, 3};
    Solution solution;
    int new_size = solution.remove_duplicates(nums);
    cout << new_size << endl;
    for(int i : nums) {
        cout << i << " ";
    }
    cout << endl;

    cout << "212 end ..." << endl;
    return 0;
}

