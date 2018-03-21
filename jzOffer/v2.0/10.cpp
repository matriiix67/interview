//
// Created by Bourne on 2018/3/14.
//

#include <vector>
#include <iostream>
#include <bitset>
using namespace std;

class Solution {
public:
  int NumberOfOne(int n) {
      int res = 0;
      while(n) {
          res++;
          n = (n - 1) & n;
      }
      return res;
  }
};

int main(int argc, char* argv[])
{
    Solution solution;
    bitset<8> b(0xFFF);
    unsigned long t = b.to_ulong();
    int res = solution.NumberOfOne(t);

    cout << res << endl;
    return 0;
}