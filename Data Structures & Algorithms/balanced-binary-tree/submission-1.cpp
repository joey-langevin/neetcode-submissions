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
    bool isBalanced(TreeNode* root) {
        return dfs(root).front();
    }

    vector<int> dfs(TreeNode* root) {
        if (!root) return {1, 0};

        auto left = dfs(root->left);
        auto right = dfs(root->right);

        if (abs(left.back() - right[1]) > 1 || left.front() == 0 || right.front() == 0) {
            return {0, 1 + max(left.back(), right.back())};
        }
        return {1, 1 + max(left.back(), right.back())};
    }
};
