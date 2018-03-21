//
// Created by Bourne on 2018/3/14.
//

#include <iostream>
using namespace std;

class Solution {
public:
    double PowerWithUnsignedExponent(double base, unsigned exponent) {
        if(exponent == 0) return 1;
        if(exponent == 1) return base;

        double result = PowerWithUnsignedExponent(base, exponent >> 1);
        result *= result;
        if(exponent & 0x1 == 1) {
            result *= base;
        }

        return result;
    }
};


int main(int argc, char* argv[])
{
    Solution solution;
    double result = solution.PowerWithUnsignedExponent(2, 4);
    cout << result << endl;
    return 0;
}