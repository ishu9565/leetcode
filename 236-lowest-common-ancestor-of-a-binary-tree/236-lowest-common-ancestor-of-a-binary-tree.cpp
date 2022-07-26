/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root->val==p->val||root->val==q->val) return root;
        if(root->left==NULL&&root->right==NULL) return NULL;
        
        TreeNode* left=NULL; TreeNode* right=NULL;
        
        left=lowestCommonAncestor(root->left,p,q);
        
        right=lowestCommonAncestor(root->right,p,q);
        
       if (left and right) return root;
       if(left==NULL) return right;
        else return left;
        
    }
};