//
// Created by Bourne on 2018/3/14.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct BinaryTreeNode {
    int value_;
    BinaryTreeNode* left_;
    BinaryTreeNode* right_;
};


BinaryTreeNode* MirrorRecursively(BinaryTreeNode* root) {
    if(root == nullptr) {
        return nullptr;
    }

    BinaryTreeNode* right = MirrorRecursively(root->right_);
    BinaryTreeNode* left = MirrorRecursively(root->left_);

    root->left_ = right;
    root->right_ = left;

    return root;
}