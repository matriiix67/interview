//
// Created by Bourne on 2018/3/14.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct ListNode {
    int value_;
    ListNode* next_;
};

ListNode* merge(ListNode* head1, ListNode* head2) {
    //1. 合并链表, 将head2 并入  head1
    ListNode* cur1 = head1, *cur2 = head2;

    while(cur1 != nullptr && cur2 != nullptr) {
        if(cur1->value_ < cur2->value_) {
            cur1 = cur1->next_;
        } else {
            ListNode* tmp = cur1->next_;
            ListNode* newNode = cur2;
            cur1->next_ = newNode;
            cur2 = cur2->next_;
            newNode->next_ = tmp;
        }
    }

    //2. 将head1剩余的元素接入合并后的List，如果有的话

    //3. 将head2剩余的元素接入合并后的List， 如果有的话
    if(cur2 != nullptr) {
        cur1->next_ = cur2;
    }

    return head1;
}