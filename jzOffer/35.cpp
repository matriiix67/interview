//
// Created by Bourne on 2017/6/1.
//
#include <iostream>
using namespace std;

char FirstNotRepeatingChar(char *pstr)
{
    if(pstr == nullptr) {
        return '\0';
    }

    const int tableSize = 256;
    unsigned int hashTable[tableSize];
    for(unsigned int i = 0; i < tableSize; i++) {
        hashTable[i] = 0;
    }

    char *pHashKey = pstr;
    while(*(pHashKey) != '\0') {
        hashTable[*(pHashKey++)]++;
    }

    pHashKey = pstr;
    while(*pHashKey != '\0') {
        if(hashTable[*pHashKey] == 1)
            return *pHashKey;

        pHashKey++;
    }

    return '\0';
}
