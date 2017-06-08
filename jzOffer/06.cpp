#include <iostream>
#include <exception>
using namespace std;

struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};


BinaryTreeNode* construct(int* start_pre_order, int* end_pre_order, int* start_in_order, int* end_in_order) {
    int root_value = start_pre_order[0];
    BinaryTreeNode* root = new BinaryTreeNode();
    root->left = root->right = nullptr;

    if(start_pre_order == end_pre_order) {
        if(start_in_order == end_in_order && *start_pre_order == *end_pre_order)
            return root;
        else
            throw invalid_argument("invalid input.");
    }

    int *root_in_order = start_in_order;
    while(root_in_order <= end_in_order && *root_in_order != root_value)
        ++root_in_order;

    if(root_in_order == end_in_order && *root_in_order != root_value)
        throw invalid_argument("invalid input.");

    int left_len = root_in_order - start_in_order;
    int* left_pre_order_end = start_pre_order + left_len;
    if(left_len > 0) {
        // 构建左子树
        root->left = construct(start_pre_order + 1, left_pre_order_end, start_in_order, root_in_order - 1);
    }

    if(left_len < end_pre_order - start_pre_order) {
        // 构建右子树
        root->right = construct(left_pre_order_end + 1, end_pre_order, root_in_order + 1, end_in_order);
    }

    return root;
}


BinaryTreeNode* construct(int *pre_order, int *in_order, int length) {
    if(pre_order == nullptr || in_order == nullptr || length <= 0)
        return nullptr;
    return construct(pre_order, pre_order + length - 1, in_order, in_order + length - 1);
}


int main(int argc, char *argv[])
{

    return 0;
}
