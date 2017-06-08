#include <iostream>
#include <deque>
using namespace std;

struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

void PrintFromTopToBottom(BinaryTreeNode* root) {
    if(!root)
        return;

    deque<BinaryTreeNode*> deque_tree_node;
    deque_tree_node.push_back(root);

    while(deque_tree_node.size()) {
        BinaryTreeNode* node = deque_tree_node.front();
        deque_tree_node.pop_front();

        cout << node->value << " ";

        if(node->left)
            deque_tree_node.push_back(node->left);

        if(node->right)
            deque_tree_node.push_back(node->right);
    }
}
