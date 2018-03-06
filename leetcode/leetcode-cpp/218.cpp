//
// Created by Bourne on 2017/6/8.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> result;
        if(nums.size() < 3) return result;
        sort(nums.begin(), nums.end());
        const int target = 0;

        auto last = nums.end();
        for(auto i = nums.begin(); i < last - 2; ++i) {
            auto j = i + 1;
            if(i > nums.begin() && *i == *(i - 1)) continue;
            auto k = last - 1;;
            while(j < k) {
                if(*i + *j + *k < target) {
                    ++j;
                    while(*j == *(j - 1) && j < k) ++j;
                } else if(*i + *j + *k > target) {
                    --k;
                    while(*k == *(k + 1) && j < k) --k;
                } else {
                    result.push_back({*i, *j, *k});
                    ++j;
                    --k;
                    while(*j == *(j - 1) && *k == *(k + 1) && j < k) ++j;
                }
            }
        }

        return result;
    }
};

int main()
{
    cout << "218 start ..." << endl;

    vector<int> nums = {-1, 0, 1, 2, -1, 4};
    Solution solution;
    auto result = solution.threeSum(nums);
    for(auto i : result) {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    cout << endl;

    cout << "218 end ..." << endl;
    return 0;
}