//
// Created by Bourne on 2017/6/6.
//

#include <iostream>
using namespace std;

template <unsigned int n>
class SumSolution{
    enum Value {N = SumSolution<n - 1>::N + n};
};

template<>
class SumSolution<1>
{
    enum Value { N = 1};
};

int main()
{
    cout << "46 start ..." << endl;

    cout << "46 end ..." << endl;
    return 0;
}