//
// Created by Bourne on 2018/3/22.
//

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 思路找到中点，将后半部分逆转，在合并前后链即可
class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        // 正常情况
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        } // 此时slow指向了中点

        // 反转后半部分链表
        ListNode* cur = slow->next;
        ListNode* prev = nullptr;
        slow->next = nullptr;
        while(cur != nullptr) {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        ListNode* first = head;
        while(head != nullptr && prev != nullptr){
            ListNode* tmp = first->next;
            first->next = prev;
            prev = prev->next;
            first->next->next = tmp;
            first = tmp;
        }

    }
};