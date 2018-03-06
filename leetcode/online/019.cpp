// leetcode 01

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next) return nullptr;

        ListNode *pre = head;
        ListNode *cur = head;

        for(int i = 0; i < n; ++i) {
            cur = cur->next;
        }

        if(!cur) return head->next;

        while(cur->next) {
            cur = cur->next;
            pre = pre->next;
        }

        pre->next = pre->next->next;
        return head;
    }
};

