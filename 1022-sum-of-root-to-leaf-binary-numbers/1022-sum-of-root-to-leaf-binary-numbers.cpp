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
    int res=0;
    
    void solve(TreeNode* root,string str)
    {
        
        if(root==NULL) return;
        
        str+=to_string(root->val);
        
        solve(root->left,str);
        
        if(root->left==NULL &&  root->right==NULL)
        {
            res+=stoi(str,0,2);
        }
        
        solve(root->right,str);
    }
    
    
    int sumRootToLeaf(TreeNode* root) {
        
        string str="";
        solve(root,str);
        return res;
        
    }
};