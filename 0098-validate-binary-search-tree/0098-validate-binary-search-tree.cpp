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
    bool solve(TreeNode*root,long int mini,long int maxi)
    {
        if(root==NULL)
        {
            return true;
        }
        
        if(root->val>maxi || root->val<mini)return false;
        long curr=long(root->val);
        
        
        
        return solve(root->left,mini,curr-1)&& solve(root->right,curr+1,maxi);
    }
    bool isValidBST(TreeNode* root) {
      
        return solve(root,INT_MIN,INT_MAX);
    }
};