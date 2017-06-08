#include <iostream>

using namespace std;

bool INPUT_INVALID = false;

bool CheckInvalidArray(int* numbers, int len) {
    if(numbers == nullptr && len < 0)
        INPUT_INVALID = true;

    return INPUT_INVALID;
}

bool CheckMoreThanHalf(int* numbers, int len, int number) {
    int times = 0;
    for(int i = 0; i < len; i++) {
        if(numbers[i] == number)
            times++;
    }

    bool isMoreThanHalf = true;
    if(times * 2 <= len) {
        INPUT_INVALID = true;
        isMoreThanHalf = false;
    }

    return isMoreThanHalf;
}

int MoreThanHalfNum(int* numbers, int len) {
    if(CheckInvalidArray(numbers, len))
        return 0;

    int result = numbers[0];
    int times = 1;
    for(int i = 1; i < len; i++) {
        if(times == 0){
            result = numbers[i];
            times = 1;
        }
        else if(numbers[i] == result)
            times++;
        else
            times--;
    }

    if(!CheckMoreThanHalf(numbers, len, result))
        result = 0;

    return result;
}
