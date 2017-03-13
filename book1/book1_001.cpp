//
// Created by Bourne on 2017/3/13.
//

#include "book1_001.h"
using namespace std;

bool Solution::Find(int target, vector<vector<int>> array) {
    int col, row;
    row = 0;
    col = array[0].size() - 1;

    while(row <= array.size() - 1 && col >= 0){
        if(target == array[row][col]){
            return true;
        } else if(target > array[row][col]){
            row++;
        } else {
            col--;
        }
    }
    return false;
}


