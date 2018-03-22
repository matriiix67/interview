//
// Created by Bourne on 2018/3/20.
//

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* partition(struct ListNode* head, int x) {
    if(!head) return head;

    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val =  -1;

    struct ListNode* new_dummy = (struct ListNode*)malloc(sizeof(struct ListNode));;
    new_dummy->val = -1;

    dummy->next = head;

    struct ListNode* cur = dummy;
    struct ListNode* p = new_dummy;
    while(cur->next) {
        if(cur->next->val < x) {
            p->next = cur->next;
            p = p->next;
            p->next = NULL;
            cur->next = cur->next->next;
        } else cur = cur->next;
    }

    p->next = dummy->next;

    return new_dummy->next;
}