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
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<TreeNode*> queue;
        queue.push(root);
        while (!queue.empty()) {
            int qlen = queue.size();
            vector<int> row;
            for (int i = 0; i < qlen; i++) {
                TreeNode* curr = queue.front();
                queue.pop();
                row.push_back(curr->val);
                if (curr->left) queue.push(curr->left);
                if (curr->right) queue.push(curr->right);
            }
            ans.push_back(row);
        }
        return ans;
    }
};