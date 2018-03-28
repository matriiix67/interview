//
// Created by Bourne on 28/03/2018.
//

#include <set>

class Solution {
public:
    bool isHappy(int n) {
        std::set<int> s;
        while (n != 1) {
            int sum = 0;
            while(n) {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            n = t;
            if(s.count(n)) break;
            else s.insert(n);
        }
        return n == 1;
    }
};