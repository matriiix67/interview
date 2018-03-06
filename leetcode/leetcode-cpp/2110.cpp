//
// Created by Bourne on 2017/7/4.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        vector<vector<int>> result;
        if(nums.size() <= 3)
            return result;

        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 3; i++) {
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            for(int j = i + 1; j < nums.size() - 2; j++) {
                if(j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int k = j + 1;
                int l = nums.size() - 1;
                while(k < l) {
                    int sum = nums[i] + nums[j] + nums[k] +nums[l];
                    if(sum == target) {
                        vector<int> current;
                        current.push_back(nums[i]);
                        current.push_back(nums[j]);
                        current.push_back(nums[k]);
                        current.push_back(nums[l]);
                        result.push_back(current);
                        do{
                            ++k;
                        } while(k < l && nums[k] == nums[k - 1]);

                        do{
                            --l;
                        } while(k < l && nums[l] == nums[l + 1]);
                    } else if(sum < target)
                        ++k;
                    else
                        --l;
                }
            }
        }
        return result;
    }
};


int main()
{
    vector<int> nums = {4, 5, 3, 2, 7, 9, 8, 6};
    Solution solution;
    vector<vector<int>> result = solution.fourSum(nums, 14);
    for(auto v : result) {
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }

    cout << endl;

    return 0;
}