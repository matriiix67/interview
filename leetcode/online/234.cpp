//
// Created by Bourne on 2018/3/26.
//

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 快慢指针找到中点，反转后半部分，在逐一比较，注意链表长度对中点带来的影响
class Solution {
public:
    bool isPalindrome(ListNode* head) {
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
        ListNode* second = prev;
        while(first != nullptr && second != nullptr) {
            if(first->val != second->val) {
                return false;
            }

            first = first->next;
            second = second->next;
        }

        return true;
    }
};