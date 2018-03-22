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
    ListNode *detectCycle(ListNode *head) {
        ListNode* first = head;
        ListNode* second = head;
        while(second != nullptr && second->next != nullptr) {
            first = first->next;
            second = second->next->next;

            if(first == second) break;
        }
        if(second == nullptr || second->next == nullptr)
            return nullptr;

        first = head;
        while(first != second) {
            first = first->next;
            second = second->next;
        }

        return first;
    }
};