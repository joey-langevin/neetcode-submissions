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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        TreeNode* nextP;
        if (p->val < root->val)
            nextP = root->left;
        else if (p->val > root->val) nextP = root->right;

        TreeNode* nextQ;
        if (q->val < root->val) nextQ = root->left;
        if (q->val > root->val) nextQ = root->right;

        if (nextP != nextQ) return root;

        lowestCommonAncestor(nextP, p, q);
    }
};
