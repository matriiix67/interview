#include <iostream>
using namespace std;

struct ListNode {
    int value;
    ListNode* next;
};

ListNode* reverse(ListNode* head)
{
    ListNode* reversed_head = nullptr;
    ListNode* node = head;
    ListNode* prev = nullptr;
    while(node != nullptr) {
        ListNode* next = node->next;
        if(next == nullptr)
            reversed_head = node;

        node->next = prev;
        prev = node;
        node = next;
    }

    return reversed_head;
}
