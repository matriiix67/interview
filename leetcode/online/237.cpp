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
    void deleteNode(ListNode* node) {
        if(node->next == nullptr) {
            delete node;
            node = nullptr;
        } else {
            node->val = node->next->val;
            ListNode* tmp = node->next;
            node->next = node->next->next;
            delete tmp;
        }
    }
};