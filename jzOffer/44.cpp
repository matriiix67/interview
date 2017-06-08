//
// Created by Bourne on 2017/6/6.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int compare(const void *arg1, const void *arg2)
{
    return *(int*)arg1 - *(int*)arg2;
}

bool IsContinuous(int *nums, int len)
{
    if(nums == nullptr || len < 1)
        return false;

    qsort(nums, len, sizeof(int), compare);

    int number_of_zero = 0;
    int number_of_gap = 0;

    for(int i = 0; i < len && nums[i] == 0; i++) {
        ++number_of_zero;
    }

    int small = number_of_zero;
    int big = small + 1;

    while(big < len) {
        if(nums[small] == nums[big])
            return false;

        number_of_gap += nums[big] - nums[small] - 1;
        small = big;
        ++big;
    }

    return (number_of_gap > number_of_zero) ? false : true;
}


int main()
{
    cout << "main start ..." << endl;

    cout << "main end ..." << endl;
    return 0;
}


