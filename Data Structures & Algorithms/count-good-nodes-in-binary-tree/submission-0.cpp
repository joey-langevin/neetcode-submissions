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

    int goodNodes(TreeNode* root) {
        if (!root) return 0;
        
        return dfs(root, root->val);
    }

    int dfs(TreeNode* node, int maxVal) {
       if (!node) return 0;

       int goodNode = node->val >= maxVal ? 1 : 0;
       return goodNode + dfs(node->left, max(maxVal, node->val)) + 
       dfs(node->right, max(maxVal, node->val));
    }
};
