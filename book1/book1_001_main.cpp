//
// Created by Bourne on 2017/3/13.
//

#include "book1_001.h"
#include <iostream>

using namespace std;

int main()
{
    vector<vector<int>> array = {
            {1, 3, 5, 7, 9},
            {2, 11, 13, 15, 17},
            {4, 19, 21, 23, 25},
            {6, 27, 29, 31, 33},
            {8, 35, 37, 39, 41}

    };

    Solution solution;
    if(solution.Find(41, array))
        cout << "Find " << endl;
    else
        cout << "Can't not find" <<endl;

    return 0;
}
