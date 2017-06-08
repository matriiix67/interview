#include <iostream>
using namespace std;

void recoder_odd_even(int* data, unsigned int length) {
    if(data == nullptr || length == 0)
        return ;

    int *begin = data;
    int *end = data + length - 1;

    while(begin < end) {
        while(begin < end && (*begin & 0x1) != 0) {
            begin++;
        }

        while(begin < end && (*end & 0x1) == 0) {
            end--;
        }

        if(begin < end) {
            int tmp = *begin;
            *begin = *end;
            *end = tmp;
        }
    }
}
