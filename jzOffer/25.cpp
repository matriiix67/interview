#include <iostream>
#include <vector>

using namespace std;

struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

void FindPath(BinaryTreeNode* root, int expectedSum, vector<int>& path, int& currentSum)
{
    currentSum += root->value;
    path.push_back(root->value);

    bool isLeaf = root->left == nullptr && root->right == nullptr;
    if(currentSum == expectedSum && isLeaf) {
        cout << "a path is found: ";
        for(int tmp : path) {
            cout << tmp << " ";
        }
        cout << endl;
    }

    if(root->left != nullptr) {
        FindPath(root->left, expectedSum, path, currentSum);
    }

    if(root->right != nullptr) {
        FindPath(root->right, expectedSum, path, currentSum);
    }

    currentSum -= root->value;
    path.pop_back();
}



void FindPath(BinaryTreeNode* root, int expectedSum)
{
    if(root == nullptr) {
        return;
    }

    vector<int> path;
    int currentSum = 0;
    FindPath(root, expectedSum, path, currentSum);
}
