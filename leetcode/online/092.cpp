#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

//
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* cur = dummy;
        for(int i = 1; i <= m - 1; ++i) cur = cur->next;

        ListNode* pre = cur;
        ListNode* last = cur->next;
        ListNode* front = nullptr;
        for(int i = m; i <= n; ++i) {
            cur = pre->next;
            pre->next = cur->next;
            cur->next = front;
            front = cur;
        }

        cur = pre->next;
        pre->next = front;
        last->next = cur;

        return dummy->next; // 此处不能返回head
    }
};