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

// 寻找倒数第k个节点
ListNode* FindKthTail(ListNode* head, unsigned k) {
    if(head == nullptr || k == 0) {
        return nullptr;
    }

    ListNode* cur = head, *after_cur = cur;

    for(int i = 0; i < k; ++i) {
        if(after_cur != nullptr) after_cur = after_cur->next_;
        else return nullptr;
    }

    while(after_cur != nullptr) {
        cur = cur->next_;
        after_cur = after_cur->next_;
    }

    return cur;
}