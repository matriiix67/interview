//
// Created by Bourne on 2017/6/6.
//

#include <iostream>
using namespace std;

int LastRemainning(unsigned int n, unsigned int m)
{
    if(n < 1 || m < 1) {
        return -1;
    }

    int last = 0;
    for(int i = 2; i <= n; i++) {
        last = (last + m) % i;
    }

    return last;
}

int main()
{
    cout << "45 start ..." << endl;

    cout << "45 end ..." << endl;
    return 0;
}