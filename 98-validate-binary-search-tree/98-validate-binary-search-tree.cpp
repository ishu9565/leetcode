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
    
    void valid(TreeNode* root,vector<int> & v){
        if(root==NULL) return ;
        valid(root->left,v);
        v.push_back(root->val);
        valid(root->right,v);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>v1,v2;
        valid( root,v1);
        unordered_set<int> st;
        v2=v1;
        sort(v2.begin(),v2.end());
        for(auto a: v1){
            st.insert(a);
        }
        if(st.size()!=v1.size()) return false;
        if(v2==v1) return true;
        else return false;
    }
};