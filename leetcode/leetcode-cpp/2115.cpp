//
// Created by Bourne on 2017/8/1.
//
#include <vector>
#include <iostream>
using namespace std;

// TODO
class Solution
{
public:
    int trap(const vector<int> &ivec)
    {
        const int n = ivec.size();
        int *max_left = new int[n]();
        int *max_right = new int[n]();

        for(int i = 1; i < n; i++) {
            max_left[i] = max(max_left[i - 1], ivec[i - 1]);
            max_right[n - 1 - i] = max(max_right[n - i], ivec[n - i]);
        }

        int sum = 0;
        for(int i = 0; i < n; ++i) {
            int height = min(max_left[i], max_right[i]);
            if(height > ivec[i]) {
                sum += height - ivec[i];
            }
        }

        delete[] max_left;
        delete[] max_right;

        return sum;
    }
};

