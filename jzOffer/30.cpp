#include <iostream>
#include <algorithm>
#include <exception>
using namespace std;

int Partition(int data[], int len, int start, int end) {
    if(data == nullptr || len <= 0 || start < 0 || end >= len)
        throw new invalid_argument("invalid Parameters");

    int index = RandonInRange(start, end);
    swap(&data[index], &data[end]);

    int small = start - 1;
    for(index = start, index < end; ++index) {
        if(data[index] < data[end]) {
            ++small;
            if(small != index) {
                swap(&data[index], &data[small]);
            }
        }
    }

    ++small;
    swap(&data[small], &data[end]);

    return small;
}

void GetLeastNumbers(int* input, int n, int* output, int k) {
    if(input == nullptr || output == nullptr || k > n || n <= 0 || k <= 0)
        return;

    int start = 0;
    int end = n - 1;
    int index = Partition(input, n, start, end);
    while(index != k -1) {
        if(index > k - 1) {
            end = index - 1;
            index = Partition(input, n, start, end);
        } else {
            start = index + 1;
            index = Partition(input, n, start, end);
        }
    }

    for(int i = 0; i < k; i++)
        output[i] = input[i];
}
