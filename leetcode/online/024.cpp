//
// Created by Bourne on 2018/3/5.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;

        ListNode *t = head->next;
        head->next = swapPairs(head->next->next);
        t->next = head;

        return t;
    }
};

