//
// Created by Bourne on 2018/3/13.
//

#include <iostream>
using namespace std;

struct ListNode {
    int key_;
    ListNode* next_;
};

class Solution {
public:
    void PrintListReversingly(ListNode *head) {
        ListNode* cur = head;
        if(cur != nullptr) {
            if(cur->next_ != nullptr)
                PrintListReversingly(cur->next_);
            cout << cur->key_ << endl;
        }
    }
};