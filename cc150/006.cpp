//
// Created by Bourne on 2017/6/7.
//
#include <iostream>
using namespace std;

void rotate(int matrix[][4], int n)
{
    for(int layer = 0; layer < n / 2; layer++) {
        int first = layer;
        int last = n - 1 - layer;
        for(int i = first; i < last; i++) {
            int offset = i - first;
            int top = matrix[first][i];
            matrix[first][i] = matrix[last - offset][first];
            matrix[last - offset][first] = matrix[last][last - offset];
            matrix[last][last - offset] = matrix[i][last];
            matrix[i][last] = top;
        }
    }
}

int main()
{
    cout << "006 start ..." << endl;

    int matrix[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    rotate(matrix, 4);

    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    cout << "006 end ..." << endl;
    return 0;
}
