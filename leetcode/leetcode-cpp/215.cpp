//
// Created by Bourne on 2017/6/8.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(const vector<int>& a, const vector<int>& b)
    {
        const int m = a.size();
        const int n = b.size();
        int total = m + n;
        if(total & 0x1)
            return find_kth(a.begin(), m, b.begin(), n, total / 2+ 1);
        else
            return (find_kth(a.begin(), m, b.begin(), n, total / 2)
                    + find_kth(a.begin(), m, b.begin(), n, total / 2 + 1)) / 2.0;
    }

private:
    static int find_kth(vector<int>::const_iterator a, int m,
                        std::vector<int>::const_iterator b, int n, int k)
    {
        if(m > n) return find_kth(b, n, a, m, k);
        if(m == 0) return *(b + k - 1);
        if(k == 1) return min(*a, *b);

        int ia = min(k / 2, m), ib = k - ia;
        if(*(a + ia - 1) < *(b + ib - 1))
            return find_kth(a + ia, m- ia, b, n , k - ia);
        else if(*(a + ia - 1) > *(b + ib - 1))
            return find_kth(a, m, b + ib, n - ib, k - ib);
        else
            return a[ia - 1];
    }

};


int main()
{
    cout << "215 start ..." << endl;

    cout << "215 end ..." << endl;
    return 0;
}