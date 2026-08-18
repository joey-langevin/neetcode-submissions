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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if (!root) return ret;

        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            vector<int> currentLevel;
            for (int i = q.size(); i > 0; i--) {
                TreeNode* front = q.front();
                currentLevel.emplace_back(front->val);
                q.pop();
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
            }
            ret.emplace_back(currentLevel);
        }
        return ret;
    }
};
