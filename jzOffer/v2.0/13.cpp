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

void DeleteNode(ListNode** head, ListNode* to_be_remove)
{
    if (head == nullptr || to_be_remove == nullptr) return;

    if (to_be_remove->next_ != nullptr) {
        ListNode *tmp = to_be_remove->next_;
        to_be_remove->value_ = tmp->value_;
        to_be_remove->next_ = tmp->next_;

        delete tmp;
        tmp = nullptr;
    } else if (*head == to_be_remove) {
        delete to_be_remove;
        to_be_remove = nullptr;
        head = nullptr;
    } else {
        ListNode *cur = *head;
        while (cur->next_ != to_be_remove) {
            cur = cur->next_;
        }
        cur->next_ = nullptr;
        delete to_be_remove;
        to_be_remove = nullptr;
    }
}