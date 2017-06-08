#include <iostream>
using namespace std;

struct ListNode {
    int value;
    ListNode* next;
};


void delete_node(ListNode** head, ListNode* to_be_delete) {
    if(!head || !to_be_delete)
        return ;

    if(to_be_delete->next != nullptr) {
        ListNode* next = to_be_delete->next;
        to_be_delete->value = next->value;
        to_be_delete->next = next->next;

        delete next;
        next = nullptr;
    } else if(*head == to_be_delete) {
        delete to_be_delete;
        to_be_delete = nullptr;
        head = nullptr;
    } else {
        ListNode* node = *head;
        while(node->next) {
            node = node->next;
        }

        node->next = nullptr;
        delete to_be_delete;
        to_be_delete = nullptr;
    }
}
