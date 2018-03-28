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
    ListNode* reverseList(ListNode* head) {

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* cur = head;
        ListNode* pre = dummy;
        while(cur != nullptr) {
            ListNode* next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        delete dummy;
        dummy = nullptr;

        return pre;
    }
};