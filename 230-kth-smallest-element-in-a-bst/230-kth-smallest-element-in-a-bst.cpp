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
    void solve(TreeNode* root,priority_queue<int> &pq,int k){
        // if(root->left==NULL&&root->right==NULL) return;
        // if(pq.size()>k) {cout<<pq.top()<<" ";pq.pop();}
        pq.push(root->val);
        if(root->left!=NULL)
        solve(root->left,pq,k);
        if(root->right!=NULL)
        solve(root->right,pq,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int>pq;
        solve(root,pq,k);
        // cout<<endl<<pq.size()<<endl;
        // pq.pop();
        while(pq.size()>k) pq.pop();
              return pq.top();  
        
    }
};