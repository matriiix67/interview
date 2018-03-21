//
// Created by Bourne on 2018/3/14.
//

// 动态规划，解决fibonacci的普通递归低效率问题

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    long long Fibonacci(unsigned int n) {
        int result[2] = {0, 1};

        if(n < 2)
            return result[n];

        long long fibNMinusOne = 1;
        long long fibNMinusTwo = 0;
        long long fibN = 0;
        for(unsigned int i = 2; i <= n; ++i) {
            fibN = fibNMinusOne + fibNMinusTwo;
            fibNMinusTwo = fibNMinusOne;
            fibNMinusOne = fibN;
        }

        return fibN;
    }
};

int main(int argc, char* argv[])
{
    Solution solution;
    cout << solution.Fibonacci(10) << endl;
    return 0;
}