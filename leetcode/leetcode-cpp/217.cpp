//
// Created by Bourne on 2017/6/8.
//

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> mapping;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            mapping[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++) {
            const int gap = target - nums[i];
            if(mapping.find(gap) != mapping.end() && mapping[gap] > i) {
                result.push_back(i + 1);
                result.push_back(mapping[gap] + 1);
                break;
            }
        }
        return result;
    }
};

int main()
{
    cout << "217 start ..." << endl;

    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    vector<int> result = solution.twoSum(nums, 9);
    for(auto i : result) {
        cout << i << " ";
    }
    cout << endl;

    cout << "217 end ..." << endl;
    return 0;
}