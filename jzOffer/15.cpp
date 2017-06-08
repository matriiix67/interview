#include <iostream>
using namespace std;
struct ListNode {
    int value;
    ListNode* next;
};

ListNode* find_k_th_to_tail(ListNode* head, unsigned int k) {
    if(head == nullptr || k== 0)
        return nullptr;

    ListNode* a_head = head;
    ListNode* behind = nullptr;
    for(unsigned int i = 0; i < k - 1; i++) {
        if(a_head->next != nullptr)
            a_head = a_head->next;
        else {
            return nullptr;
        }
    }

    behind = head;
    while(a_head->next != nullptr) {
        a_head = a_head->next;
        behind = behind->next;
    }

    return behind;
}
