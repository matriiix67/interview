//
// Created by Bourne on 2018/3/14.
//

#include <iostream>
#include <vector>
#include <exception>
using namespace std;

struct BinaryTreeNode {
    int value_;
    BinaryTreeNode *left_;
    BinaryTreeNode *right_;
};


class Solution
{
public:
    BinaryTreeNode *Reconstruct(int *preorder, int *inorder, int length)
    {
        if (preorder == nullptr || inorder == nullptr || length <= 0) {
            return nullptr;
        }

        return reconstruct_core(preorder, preorder + length - 1, inorder, inorder + length - 1);
    }

private:
    BinaryTreeNode *reconstruct_core(int *start_pre, int *end_pre, int *start_ino, int *end_ino)
    {
        int root_value = start_ino[0];

        BinaryTreeNode *root = new BinaryTreeNode();
        root->value_ = root_value;
        root->left_ = root->right_ = nullptr;

        if (start_pre == end_pre) {
            if (start_ino == end_ino && *start_pre == *start_ino) {
                return root;
            } else {
                throw invalid_argument("invalid input");
            }
        }

        int *root_inorder = start_ino;
        while(root_inorder <= end_ino && *root_inorder != root_value) {
            ++root_inorder;
        }

        if(root_inorder == end_ino && *root_inorder != root_value) {
            throw invalid_argument("invalid input");
        }

        int left_len = root_inorder - start_ino;
        int* left_pre_end = start_pre + left_len;
        if(left_len > 0) {
            root->left_ = reconstruct_core(start_pre + 1, left_pre_end, start_ino, root_inorder - 1);
        }

        if(left_len < end_pre - start_pre) {
            root->right_ = reconstruct_core(left_pre_end + 1, end_pre, root_inorder + 1, end_ino);
        }

        return root;

    }
};