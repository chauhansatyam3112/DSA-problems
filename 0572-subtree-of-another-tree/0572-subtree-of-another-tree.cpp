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
    bool match(TreeNode*root,TreeNode* subroot)
    {
        if(!root && !subroot)return true;
       else if(!root && subroot)return false;
        else if(!subroot && root) return false;
        else if(root->val!=subroot->val)return false;
        
        return match(root->left,subroot->left)&& match(root->right,subroot->right);
       
    }
    
    void solve(TreeNode *root,TreeNode* subroot,int &flag)
    {
         if(!root) return;
        
        if(root->val==subroot->val){
            
           if(match(root,subroot)) flag++;
        }
        solve(root->left,subroot,flag);
        solve(root->right,subroot,flag);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        int flag=0;
        
        solve(root,subRoot,flag);
        if(flag>0)return true;
        return false;
        
    }
};