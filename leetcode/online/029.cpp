//
// Created by Bourne on 2018/3/5.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        long long res = 0;

        long long m = abs((long long) dividend);
        long long n = abs((long long) divisor);

        if( m < n)
            return 0;

        while(m >= n) {
            long long t = n;
            long long p = 1;

            while( m > (t << 1)) {
                t <<= 1;
                p <<= 1;
            }
            res += p;
            m -= t;
        }

        if((dividend < 0) ^ (divisor < 0))
            res = -res;

        return res > INT_MAX ? INT_MAX : res;
    }
};

