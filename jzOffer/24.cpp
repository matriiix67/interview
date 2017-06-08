#include <iostream>

using namespace std;


bool verifySeqOfBST(int seq[], int len) {
    if(seq == nullptr || len < 0)
        return false;

    int root = seq[len - 1];
    int i = 0;
    for(; i < len - 1; i++) {
        if(seq[i] > root)
            break;
    }

    int j = i;
    for(;j < len - 1; j++) {
        if(seq[j] < root)
            return false;
    }

    bool left = true;
    if(j > 0)
        left = verifySeqOfBST(seq,i);

    bool right = true;
    if(i < len - 1)
        right = verifySeqOfBST(seq + i, len - i + 1);

    return (left && right);
}
