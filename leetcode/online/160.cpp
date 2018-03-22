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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr)
            return nullptr;

        int lenA = 0, lenB = 0;
        ListNode* curA = headA;
        ListNode* curB = headB;

        while (curA != nullptr) {
            curA = curA->next;
            lenA++;
        }

        while (curB != nullptr) {
            curB = curB->next;
            lenB++;
        }

        curA = headA;
        curB = headB;
        if(lenA > lenB) {
            int diff = lenA - lenB;
            for(int i = 0; i < diff; i++) curA = curA->next;
        } else {
            int diff = lenB - lenA;
            for(int i = 0; i < diff; i++) curB = curB->next;
        }

        while(curA != curB) {
            curA = curA->next;
            curB = curB->next;
        }

        return curA;
    }
};