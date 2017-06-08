#include <iostream>

using namespace std;


struct ComplexListNode {
    int value;
    ComplexListNode* next;
    ComplexListNode* sibling;
};

void CloneNodes(ComplexListNode* head) {
    ComplexListNode* node = head;
    while(node != nullptr) {
        ComplexListNode* cloned = new ComplexListNode();
        cloned->value = node->value;
        cloned->next = node->next;
        cloned->sibling = nullptr;

        node->next = cloned;
        node = cloned->next;
    }
}


void ConnectSiblingNodes(ComplexListNode* head) {
    ComplexListNode* node = head;
    while(node != nullptr) {
        ComplexListNode* cloned = node->next;
        if(node->sibling != nullptr) {
            cloned->sibling = node->sibling->next;
        }
        node = cloned->next;
    }
}


ComplexListNode* ReconnextNodes(ComplexListNode* head) {
    ComplexListNode* node = head;
    ComplexListNode* clonedHead = nullptr;
    ComplexListNode* clonedNode = nullptr;

    if(node != nullptr) {
        clonedHead = clonedNode = node->next;
        node->next = clonedNode->next;
        node = node->next;
    }

    while(node != nullptr) {
        clonedNode->next = node->next;
        clonedNode = clonedNode->next;
        node->next = clonedNode->next;
        node = node->next;
    }

    return clonedHead;
}


ComplexListNode* clone(ComplexListNode* head) {
    CloneNodes(head);
    ConnectSiblingNodes(head);
    return ReconnextNodes(head);
}
