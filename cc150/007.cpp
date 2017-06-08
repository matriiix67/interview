//
// Created by Bourne on 2017/6/7.
//
#include <iostream>
using namespace std;

void zero(int matrix[][5], int m, int n)
{
    bool row[m];
    bool column[n];
    memset(row, false, sizeof(row));
    memset(column, false, sizeof(column));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] == 0) {
                row[i] = true;
                column[j] = true;
            }
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(row[i] || column[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    cout << "007 start ..." << endl;

    int matrix[4][5] ={{1, 2, 3, 4, 5},
                       {6, 7, 8, 9, 10},
                       {11, 12, 0, 14, 15},
                       {16, 17, 18, 0, 20}};
    zero(matrix, 4, 5);

    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "007 end ..." << endl;
    return 0;
}
