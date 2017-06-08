//
// Created by Bourne on 2017/6/1.
//

#include <iostream>
using namespace std;

bool FindNumbersWithSum(int *data, int len, int sum, int *num1, int *num2)
{
    bool found = false;
    if(len < 1 || num1 == nullptr || num2 == nullptr)
        return found;

    int ahead = len - 1;
    int behind = 0;

    while(ahead > behind) {
        long long cur_sum = data[ahead] + data[behind];

        if(cur_sum == sum) {
            *num1 = data[behind];
            *num2 = data[ahead];
            found = true;
            break;
        } else if(cur_sum > sum) {
            ahead --;
        } else
            behind++;
    }

    return found;
}


void PrintContinuousSequence(int small, int big)
{
    for(int i = small; i <= big; i++)
        printf("%d ", i);

    printf("\n");
}


void FindContinuousSequence(int sum)
{
    if(sum < 3)
        return ;

    int small = 1;
    int big = 2;
    int  middle = (1 + sum) / 2;
    int cur_sum = small + big;

    while(small < middle) {
        if(cur_sum = sum)
            PrintContinuousSequence(small, big);

        while(cur_sum > sum && small < middle) {
            cur_sum -= small;
            small++;

            if(cur_sum == sum)
                PrintContinuousSequence(small, big);
        }

        big++;
        cur_sum += big;
    }
}