// leetcode 20

#include <vector>
#include <string>
#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;

        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                parentheses.push(s[i]);
            else {
                if(parentheses.empty()) return false;
                if(s[i] == ')' && parentheses.top() != '(') return false;
                if(s[i] == ']' && parentheses.top() != '[') return false;
                if(s[i] == '}' && parentheses.top() != '{') return false;
                parentheses.pop();
            }

        }
        return parentheses.empty();
    }
};

