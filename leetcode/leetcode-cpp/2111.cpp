//
// Created by Bourne on 2017/8/1.
//

#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int remvoeElement(vector<int>& nums, int target)
    {
        int index = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] != target) {
                nums[index++] = nums[i];
            }
        }
        return index;
    }
};



int main(int argc, char* argv[])
{
    vector<int> nums = {1, 2, 2, 3, 2, 4};
    Solution solution;
    int new_len = solution.remvoeElement(nums, 2);
    cout << new_len << endl;
    return 0;
}