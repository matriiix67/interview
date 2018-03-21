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
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();

        int k = n1 + n2 - 2;
        vector<int> v(n1 + n2, 0);
        for(int i = 0; i < n1; ++i) {
            for(int j = 0; j < n2; ++j) {
                v[k - i - j] += (num1[i] - '0') * (num2[j] - '0');
            }
        }

        int carry = 0;
        for(int i = 0; i < n1 + n2; ++i) {
            v[i] += carry;
            carry = v[i] / 10;
            v[i] %= 10;
        }

        int i = n1 + n2 - 1;
        while(v[i] == 0) {
            --i;
        }

        if(i < 0)
            return "0";

        string result;
        while(i >= 0) {
            result.push_back(v[i--] + '0');
        }

        return result;
    }
};

