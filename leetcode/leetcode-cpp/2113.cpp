//
// Created by Bourne on 2017/8/1.
//
#include <string>
#include <vector>
using namespace std;

//todo
//给定 n 和 k，求123..n组成的排列中的第 k 个排列。
//注意事项
//1 ≤ n ≤ 9
//对于 n = 3, 所有的排列如下：
//123
//132
//213
//231
//312
//321
//如果 k = 4, 第4个排列为，231.

// 康托编码

class Solution
{
public:
    /**
      * @param n: n
      * @param k: the kth permutation
      * @return: return the k-th permutation
      */
    string getPermutation(int n, int k)
    {
        string s(n, '0');
        string result;
        for(int i = 0; i < n; ++i)
            s[i] += i + 1;

        return kth_permutation(s, k);
    }

private:
    int factorial(int n) {
        int result = 1;
        for(int i = 1; i <= n; ++i)
            result *= i;
        return result;
    }

    template <typename T>
    T kth_permutation(const T &seq, int k) {
        const int n = seq.size();
        T S(seq);
        T result;

        int base = factorial(n - 1);
        --k;

        for(int i = n - 1; i > 0; k %= base, base /= i; --i){
            auto a = next(S.begin(), k / base);
            result.push_back(*a);
            S.erase(a);
        }

        result.push_back(S[0]);
        return result;
    }
};
