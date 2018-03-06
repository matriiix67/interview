//
// Created by Bourne on 2017/6/20.
//

#include <iostream>
using namespace std;

class Solution {
public:
    // param n : description of n
    // return: description of return
    long long trailingZeros(long long n) {
        // write your code here
        long long count = 0;
        long long temp = n/5;
        while (temp!=0) {
            count += temp;
            temp /= 5;
        }

        return count;
    }
};


int main()
{
    Solution solution;
    long long result = solution.trailingZeros(105);
    cout << result << endl;
    return 0;
}

