#include <iostream>

using namespace std;

bool INVALID_INPUT = false;

int FindGreatestSumOfSubAaary(int * data, int len) {
    if(data == nullptr || len <= 0) {
        INVALID_INPUT = true;
        return 0;
    }

    INVALID_INPUT = false;

    int cur_sum = 0;
    int greatest_sum = 0;
    for(int i = 0; i < len; i++) {
        if(cur_sum <= 0)
            cur_sum = data[i];
        else
            cur_sum += data[i];

        if(cur_sum > greatest_sum)
            greatest_sum = cur_sum;
    }

    return greatest_sum;
}


int main(int argc, char *argv[])
{
    int array[8] = {1, -2, 3, 10, -4, 7, 2, -5};
    cout << FindGreatestSumOfSubAaary(array, 8) << endl;
    return 0;
}
