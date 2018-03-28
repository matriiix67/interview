/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root != nullptr) {
            inorderTraversalUtil(root, res);
        }

        return res;
    }

private:
    void inorderTraversalUtil(TreeNode* root, vector<int>& vec) {
        if(root != nullptr) {
            inorderTraversalUtil(root->left, vec);
            vec.push_back(root->val);
            inorderTraversalUtil(root->right, vec);
        }
    }
};

