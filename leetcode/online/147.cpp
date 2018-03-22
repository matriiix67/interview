//
// Created by Bourne on 2018/3/22.
//

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;

        ListNode* dummy = new ListNode(-1);
        ListNode* cur = dummy;
        while(head != nullptr) {
            ListNode* tmp = head->next;
            cur = dummy;
            while(cur->next && cur->next->val <= head->val) {
                cur = cur->next;
            }
            head->next = cur->next;
            cur->next = head;
            head = tmp;
        }

        head = dummy->next;
        delete dummy;
        return head;
    }
};