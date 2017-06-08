//
// Created by Bourne on 2017/6/1.
//

#include <iostream>
using namespace std;


struct BinaryTreeNode
{
    int value;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
};

int TreeDepth(BinaryTreeNode* root)
{
    if(root == nullptr)
        return 0;

    int left = TreeDepth(root->left);
    int right = TreeDepth(root->right);

    return (left > right) ? (left + 1) : (right + 1);
}


bool IsBalanced(BinaryTreeNode* root)
{
    if(root == nullptr)
        return true;

    int left = TreeDepth(root->left);
    int right = TreeDepth(root->right);

    int diff = left - right;
    if(diff > 1 || diff < -1)
        return false;

    return IsBalanced(root->left) && IsBalanced(root->right);
}


bool IsBalanced2(BinaryTreeNode *root, int *depth)
{
    if(root == nullptr) {
        *depth = 0;
        return true;
    }

    int left, right;
    if(IsBalanced2(root->left, &left) && IsBalanced2(root->right, &right)) {
        int diff = left - right;
        if(diff <= 1 && diff >= -1) {
            *depth = 1 + (left > right ? left : right);
            return true;
        }
    }

    return false;
}


bool IsBalanced2(BinaryTreeNode *root)
{
    int depth = 0;
    IsBalanced2(root, &depth);
}


int main()
{
    return 0;
}
