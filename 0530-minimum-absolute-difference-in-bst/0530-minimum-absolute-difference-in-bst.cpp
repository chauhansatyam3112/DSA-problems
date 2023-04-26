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
    void solve(TreeNode* root,int &mini,int &prev)
    {
        if(root==NULL)
            return;
        solve(root->left,mini,prev);
        mini=min(mini,abs(root->val-prev));
        prev=root->val;
        solve(root->right,mini,prev);
    }
    int getMinimumDifference(TreeNode* root) {
        int prev=INT_MAX/2;
        int mini=INT_MAX;
        solve(root,mini,prev);
        return mini;
        
    }
};