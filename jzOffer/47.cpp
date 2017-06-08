//
// Created by Bourne on 2017/6/6.
//

#include <iostream>
using namespace std;

int Add(int num1, int num2)
{
    int sum, carry;
    do {
        sum = num1 ^ num2;
        carry = (num1 & num2) << 1;

        num1 = sum;
        num2 = carry;
    } while(num2 != 0);

    return num1;
}

int main()
{
    cout << "47 start ..." << endl;

    cout << "47 end ..." << endl;
    return 0;
}