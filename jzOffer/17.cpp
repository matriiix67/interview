#include <iostream>
using namespace std;

struct ListNode {
    int value;
    ListNode* next;
};

ListNode* merge(ListNode* head1, ListNode* head2)
{
    if(head1 == nullptr)
        return head2;
    else if(head2 == nullptr)
        return head1;

    ListNode* merge_head = nullptr;

    if(head1->value < head2->value) {
        merge_head = head1;
        merge_head->next = merge(head1->next, head2);
    } else {
        merge_head = head2;
        merge_head->next = merge(head1, head2->next);
    }

    return merge_head;
}
