//
// Created by Bourne on 2018/3/20.
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head == NULL) {
        return NULL;
    }

    int len = 1;
    ListNode* cur = head;
    while(cur->next != NULL) {
        cur = cur->next;
        len ++;
    }

    cur->next = head;

    int n = len - k % len;
    int i = 0;
    while(i < n) {
        cur = cur->next;
        i++;
    }

    head = cur->next;
    cur->next = NULL;


    return head;
}