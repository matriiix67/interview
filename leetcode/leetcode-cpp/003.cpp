#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int oldLengthOfLongest = 0;
        int newLengthOfLongest = 0;
        char pre = s[0];
        for(char c : s) {
            if(pre == c) {
                newLengthOfLongest = 0;
            } else {
                newLengthOfLongest++;
                pre = c;
            }

            if(newLengthOfLongest > oldLengthOfLongest)
                oldLengthOfLongest = newLengthOfLongest;
        }

        return oldLengthOfLongest;
    }
};


int main()
{
    string str = "abcabcbb";
    Solution solution;
    int len = solution.lengthOfLongestSubstring(str);
    cout << len << endl;
    return 0;
}
