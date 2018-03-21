//
// Created by Bourne on 2018/3/20.
//

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (!head || !head->next) return head;

    struct ListNode* cur = head;
    while(cur != NULL && cur->next != NULL) {
        if(cur->val == cur->next->val) {
            ListNode* tmp = cur->next;
            cur->next = cur->next->next;
            free(tmp);
        } else {
            cur = cur->next;
        }
    }

    return head;
}