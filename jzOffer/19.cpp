#include <iostream>

using namespace std;

struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};


void mirror_recursively(BinaryTreeNode* root)
{
    if((root == nullptr) || (root->left == nullptr && root->right == nullptr))
        return;

    BinaryTreeNode* tmp = root->left;
    root->left = root->right;
    root->right = tmp;

    if(root->left) {
        mirror_recursively(root->left);
    }

    if(root->right) {
        mirror_recursively(root->right);
    }
}
