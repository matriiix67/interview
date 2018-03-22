

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        // 计算长度
        int len = 0;
        ListNode* cur = head;
        while(cur != nullptr) {
            ++len;
            cur = cur->next;
        }

        return sortedListToBSTUtil(head, 0, len - 1);
    }

private:

    TreeNode* sortedListToBSTUtil(ListNode* &head, int start, int end) {
        if(start > end) return NULL;

        int mid = start + (end - start) / 2;

        TreeNode* left = sortedListToBSTUtil(head, start, mid - 1);
        TreeNode* root = new TreeNode(head->val);
        head = head->next;

        TreeNode* right = sortedListToBSTUtil(head, mid + 1, end);

        root->left = left;
        root->right = right;

        return root;
    }
};