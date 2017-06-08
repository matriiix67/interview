#include <iostream>

bool find(int* matrix, int rows, int columns, int num)
{
    bool found = false;
    if(matrix != nullptr && rows > 0 && columns > 0) {
        int row = 0;
        int column = columns - 1;
        while(row < rows && column >=0) {
            if(matrix[row * columns + column] == num) {
                found = true;
                break;
            } else if(matrix[row * columns + column] > num){
                -- column;
            } else {
                ++ row;
            }
        }
    }
    return found;
}
