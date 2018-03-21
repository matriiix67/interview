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


bool DoesTreeHaveTree2(BinaryTreeNode* root1, BinaryTreeNode* root2) {
    if(root1 == nullptr)
        return false;
    if(root2 == nullptr)
        return true;

    if(root1->value_ != root2->value_)
        return false;

    return DoesTreeHaveTree2(root1->left_, root2->left_) &&
           DoesTreeHaveTree2(root1->right_, root2->right_);
}


bool HasSubtree(BinaryTreeNode* root1, BinaryTreeNode* root2) {
    bool result = false;

    if(root1 != nullptr && root2 != nullptr) {
        if(root1->value_ == root2->value_) {
            result = DoesTreeHaveTree2(root1, root2);
        }

        if(!result)
            result = HasSubtree(root1->left_, root2);

        if(!result)
            result = HasSubtree(root2->right_, root2);
    }

    return result;
}

