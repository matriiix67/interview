//
// Created by Bourne on 2017/8/1.
//
#include <vector>
#include <iostream>
using namespace std;

// TODO
class Solution
{
public:
    bool isValidSudoku(const vector<vector<char>>& board)
    {
        bool used[9];

        // 验证大棋盘
        for(int i = 0; i < 9; ++i) {
            fill(used, used + 9, false);

            for(int j = 0; j < 9; ++j) {
                if(!check(board[i][j], used))
                    return false;
            }

            fill(used, used + 9, false);

            for(int j = 0; j < 9; ++j) {
                if(!check(board[j][i], used))
                    return false;
            }
        }

        // 验证小棋盘，数字不能重复
        for(int r = 0; r < 3; ++r) {
            for(int c = 0; c < 3; ++c) {
                fill(used, used + 9, false);

                for(int i = r * 3; i < r * 3 + 3; ++i){
                    for(int j = c * 3; j < c * 3 + 3; ++j) {
                        if(!check(board[i][j], used))
                            return false;
                    }
                }
            }
        }

        return true;
    }


    bool check(char ch, bool used[9]) {
        if(ch == '.') return true;
        if(used[ch - '1']) return false;
        return used[ch - '1'] = true;
    }
};

