/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL) {
        return NULL;
    }

    // start节点是关键，通过start节点能简化处理很多特殊情况
    struct ListNode* start = (struct ListNode*)malloc(sizeof(struct ListNode));
    start->val = 0;
    start->next = head;
    struct ListNode* pre = start;
    struct ListNode* cur = NULL;
    while(pre->next) {
        cur = pre->next;
        while(cur->next && cur->val == cur->next->val) cur = cur->next;
        if(cur != pre->next) pre->next = cur->next;
        else pre = pre->next;
    }

    return start->next;
}