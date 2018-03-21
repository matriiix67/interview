//
// Created by Bourne on 2018/3/14.
//

//本题在剑指offer上的扩展牵强附会，垃圾，什么玩意

#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void RecordOddEven(vector<int>& nums)
    {
        if (!nums.empty()) {

            int len = nums.size();
            int start = 0;
            int end = len - 1;

            while (start < end) {
                while(isOdd(nums[start]) && start < end) {
                    start++;
                }

                while(!isOdd(nums[end]) && start < end) {
                    end--;
                }

                if(start < end) {
                    swap(nums[start], nums[end]);
                }
            }
        }
    }

private:
    bool isOdd(int e) {
        return e % 2 == 1;
    }
};


int main(int argc, char* argv[])
{
    Solution solution;
    vector<int> nums = {11, 2, 4, 6, 8, 9, 1, 3, 5, 7, 10, 13, 12};
    solution.RecordOddEven(nums);

    for(int e : nums) cout << e << " ";
    cout << endl;
    return 0;
}