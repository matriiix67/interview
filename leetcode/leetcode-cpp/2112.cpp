//
// Created by Bourne on 2017/8/1.
//

#include <vector>
#include <iostream>
using namespace std;


// todo
//给定一个若干整数的排列，给出按正数大小进行字典序从小到大排序后的下一个排列。
//如果没有下一个排列，则输出字典序最小的序列。
//样例 : 左边是原始排列，右边是对应的下一个排列。
//1,2,3 → 1,3,2
//3,2,1 → 1,2,3
//1,1,5 → 1,5,1

class Solution {
public:
    /**
     * @param nums: a vector of integers
     * @return: return nothing (void), do not return anything, modify nums in-place instead
     */
    void nextPermutation(vector<int> &nums) {
        next_permutation(nums.begin(), nums.end());
    }

    template<typename BidiIt>
    bool next_permutation(BidiIt first, BidiIt last) {
        const auto rfirst = reverse_iterator<BidiIt>(last);
        const auto rlast = reverse_iterator<BidiIt>(first);

        auto pivot = next(rfirst);

        while(pivot != rlast && *pivot >= *prev(pivot))
            ++pivot;

        if(pivot == rlast) {
            reverse(rfirst, rlast);
            return false;
        }

        auto change = find_if(rfirst, pivot, bind1st(less<int>(), *pivot));
        swap(*change, *pivot);
        reverse(rfirst, pivot);

        return true;
    }
};


int main()
{
    cout << "2112 start ..." << endl;

    vector<int> ivec = {1, 2, 3};
    Solution solution;
    solution.nextPermutation(ivec);

    for(auto item : ivec) {
        cout << item << " ";
    }
    cout << endl;

    cout << "2112 end..." << endl;
}