//
// Created by Bourne on 2017/6/6.
//

#include <iostream>
#include <math.h>
using namespace std;

const int MAX_VALUE = 6;

void PrintProbability(int number)
{
    if(number < 1)
        return ;

    int *probabilities[2];

    probabilities[0] = new int[MAX_VALUE * number + 1];
    probabilities[1] = new int[MAX_VALUE * number + 1];

    for(int i = 0; i < MAX_VALUE * number + 1; i++) {
        probabilities[0][i] = 0;
        probabilities[1][i] = 0;
    }

    int flag = 0;
    for(int i = 1; i <= MAX_VALUE; i++) {
        probabilities[flag][i] = 1;
    }

    for(int k = 2; k <= number; k++) {
        for(int i = 0; i < k; i++) {
            probabilities[1 - flag][i] = 0;
        }

        for(int i = k; i <= MAX_VALUE * k; i++){
            probabilities[1 - flag][i] = 0;
            for(int j = 1; j <= i && j <= MAX_VALUE; j++) {
                probabilities[1 - flag][i] += probabilities[flag][i - j];
            }
        }
        flag = 1 - flag;
    }

    double total = pow((double)MAX_VALUE, number);
    for(int i = number; i <= MAX_VALUE * number; i++) {
        double ratio = (double)probabilities[flag][i] / total;
        printf("%d: %e\n", i, ratio);
    }

    delete[] probabilities[0];
    delete[] probabilities[1];
}


int main()
{
    cout << "main start ..." << endl;

    cout << "main end ..." << endl;
    return 0;
}
