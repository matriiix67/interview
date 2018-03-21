//
// Created by Bourne on 2018/3/13.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool FindInPartiallySortedMatrix(vector<vector<int>> &matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();

        if(!matrix.empty() && row == column) {
            int i = 0;
            int j = column - 1;
            while(i < row && column >= 0) {
                if(matrix[i][j] == target) return true;
                else if(matrix[i][j] > target) --j;
                else ++i;
            }
        }

        return false;
    }
};

int main(int argc, char* argv[])
{
    vector<vector<int>> matrix = {
            {1, 2, 8, 9},
            {2, 4, 9, 12},
            {4, 7, 10, 13},
            {6, 8, 11, 15}
    };
    Solution solution;
    cout << solution.FindInPartiallySortedMatrix(matrix, 3) << endl;
    return 0;
}