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
    int longestConSecutive(const vector<int>& nums)
    {
        unordered_map<int, bool> used;
        for(auto i : nums) used[i] = false;
        int longest = 0;
        for(auto i : nums) {
            if(used[i]) continue;
            int length = 1;
            used[i] = true;
            for(int j = i + 1; used.find(j) != used.end(); j++) {
                used[j] = true;
                length++;
            }

            for(int j = i - 1; used.find(j) != used.end(); j--) {
                used[j] = true;
                length++;
            }

            longest = max(longest, length);
        }
        return longest;
    }
};

int main()
{
    cout << "216 start ..." << endl;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    Solution solution;
    cout << solution.longestConSecutive(nums) << endl;
    cout << "216 end ..." << endl;
    return 0;
}