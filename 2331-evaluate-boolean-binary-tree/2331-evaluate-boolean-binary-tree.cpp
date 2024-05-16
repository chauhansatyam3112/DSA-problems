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
    
   bool ans;
    
    bool solve(TreeNode* root)
    {
        if(root->left==NULL && root->right==NULL)
        {
            return root->val;
        }
        
        bool x1,x2;
            
        if(root->left)
        {
             x1=solve(root->left);
        }
        
        if(root->right)
        {
             x2=solve(root->right);
        }
        
        
        
        if(root!=NULL && root->val==2)
        {
            ans=x1|x2;
        }
        
        if(root!=NULL && root->val==3)
        {
            ans=x1&x2;
        }
        
        return ans;
        
        
    }
    
    bool evaluateTree(TreeNode* root) {
        
        if(!root->left && !root->right)return root->val==1?true:false;
        
        solve(root);
        
        return ans;
    }
};