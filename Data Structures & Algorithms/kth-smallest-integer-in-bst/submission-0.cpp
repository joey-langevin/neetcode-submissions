/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int ret = 0;
        helper(root, k, ret);
        return ret;
        
    }
    void helper(TreeNode* root, int& k, int& current) {
        if (!root || k == 0) return;

        helper(root->left, k, current);

        --k;
        cout << root->val << endl;
        if (k == 0) current = root->val;

        
        helper(root->right, k, current);

        
    }
};
