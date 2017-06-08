#include <iostream>

using namespace std;

struct BTNode {
    int value;
    BTNode* left;
    BTNode* right;
};

void convert_node(BTNode* node, BTNode** last_node_in_list) {
    if(node == nullptr) {
        return;
    }

    BTNode* current = node;
    if(current->left != nullptr) {
        convert_node(current->left, last_node_in_list);
    }

    current->left = *last_node_in_list;
    if(*last_node_in_list != nullptr)
        (*last_node_in_list)->right = current;

    *last_node_in_list = current;

    if(current->right != nullptr) {
        convert_node(current->right, last_node_in_list);
    }
}

BTNode* convert(BTNode* root) {
    BTNode *last_node_in_list = nullptr;
    convert_node(root, &last_node_in_list);

    BTNode *head_of_list = last_node_in_list;
    while(head_of_list != nullptr && head_of_list->left != nullptr) {
        head_of_list = head_of_list->left;
    }

    return head_of_list;
}
