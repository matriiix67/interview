//
// Created by Bourne on 2018/3/14.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// TODO

vector<int> printMaxtrixClockwisely(vector<vector<int>> matrix) {
   vector<int> result;

    if(matrix.empty() || matrix[0].empty()) return result;

    int m = matrix.size(), n = matrix[0].size();
    int c = m > n ? (n + 1) / 2 : (m + 1) / 2;
    int p = m, q = n;

    for(int i = 0; i < c; ++i, p -= 2, q -= 2) {
        for(int col = i; col < i + q; ++col) {
            result.push_back(matrix[i][col]);
        }

        for(int row = i + 1; row < i + p; ++row) {
            result.push_back(matrix[row][i + q - 1]);
        }

        if(p == 1 || q == 1) break;

        for(int col = i + q - 2; col >= i; --col) {
            result.push_back(matrix[i + p - 1][col]);
        }

        for(int row = i + p - 2; row > i; --row) {
            result.push_back(matrix[row][i]);
        }
    }

    return result;
}