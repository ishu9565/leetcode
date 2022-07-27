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
    vector<TreeNode*> v;
    void printPreorder(TreeNode* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first print data of node */
    v.push_back(node);
  
    /* then recur on left subtree */
    printPreorder(node->left); 
  
    /* now recur on right subtree */
    printPreorder(node->right); 
}
    
    void flatten(TreeNode* root) {
        if(!root) return ;
        v.clear();printPreorder(root);
        root->left=NULL;root->right=NULL;
        TreeNode* p=root;
        for(int i=1;i<v.size();i++)
        { 
            p->right=v[i];
            p->left=NULL; p=p->right;
            // p->left=NULL;p->right=NULL;
        }
        /*
        TreeNode* ans=new TreeNode(v[0]);
      
        TreeNode* temp=NULL;
        temp=ans;
        int t=1;
        while(t<v.size()){
           TreeNode* te=new TreeNode(v[t]);
            temp->right=te;
            temp->left=NULL;
            temp=temp->right;
            t++;
        }
        root=ans;*/
        
    }
};