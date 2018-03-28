//
// Created by Bourne on 2018/3/26.
//

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* pre = dummy;
        ListNode* cur = head;
        while (cur != nullptr) {
            if(cur->val == val) {
                ListNode* tmp = cur;
                pre->next = cur->next;
                cur = cur->next;
                delete tmp;
            } else {
                pre = cur;
                cur = cur->next;
            }

        }

        return dummy->next;
    }
};