//
// Created by Bourne on 2017/6/1.
//

#include <iostream>
using namespace std;


struct ListNode {
    int key;
    ListNode* next;
};


unsigned int GetListLength(ListNode* head)
{
    unsigned int len = 0;
    ListNode* node = head;
    while(node != nullptr) {
        ++len;
        node = node->next;
    }

    return len;
}

ListNode* FindFirstCommonNode(ListNode* head1, ListNode* head2)
{
    unsigned int len1 = GetListLength(head1);
    unsigned int len2 = GetListLength(head2);
    int len_dif = len1 - len2;

    ListNode* head_long = head1;
    ListNode* head_short = head2;
    if(len2 > len1) {
        head_long = head2;
        head_short = head1;
        len_dif = len2 - len1;
    }

    for(int i = 0; i < len_dif; i++) {
        head_long = head_long->next;
    }

    while(head_long != nullptr &&
            head_short != nullptr && head_long != head_short) {
        head_long = head_long->next;
        head_short = head_short->next;
    }

    return head_long;
}

int main()
{
    return 0;
}

