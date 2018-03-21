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


ListNode* reverseList(ListNode* head) {
    ListNode* first = nullptr;
    ListNode* second = head;
    ListNode* third = nullptr;
    while (second != nullptr){
        third = first->next_;
        if(third == nullptr) {
            head = second;
        }

        second->next_ = first;
        first = second;
        second = third;
    }

    return head;
}