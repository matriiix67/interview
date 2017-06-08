#include <iostream>
using namespace std;

struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

bool does_tree1_has_tree2(BinaryTreeNode* root1, BinaryTreeNode* root2)
{
    if(root2 == nullptr)
        return true;
    if(root1 == nullptr)
        return false;

    if(root1->value != root2->value)
        return false;

    return does_tree1_has_tree2(root1->left, root2->left) && does_tree1_has_tree2(root1->right, root2->right);
}

bool has_sub_tree(BinaryTreeNode* root, BinaryTreeNode* sub_root)
{
    bool result = false;
    if(root!= nullptr && sub_root != nullptr) {
        if(root->value == sub_root->value) {
            result = does_tree1_has_tree2(root, sub_root);
        }

        if(!result) {
            result = has_sub_tree(root->left, sub_root);
        }

        if(!result) {
            result = has_sub_tree(root->right, sub_root);
        }
    }

    return result;
}
