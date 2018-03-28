//
// Created by Bourne on 28/03/2018.
//

#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> num(n - 1, true);
        num[0] = false;
        int res = 0;
        int limit = sqrt(n);
        for(int i = 2; i <= limit; ++i) {
            if(num[i - 1]) {
                for(int j = i; j < n;j += i) {
                    num[j - 1] = false;
                }
            }
        }

        for(int j = 0; j < n - 1; ++j) {
            if(num[j]) ++res;
        }

        return res++;
    }
};