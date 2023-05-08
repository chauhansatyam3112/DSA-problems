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
    TreeNode* temp=new TreeNode(0);
    TreeNode* node=temp;
    void solve(TreeNode* root)
    {
        if(!root)
            return;
        solve(root->left);
        temp->right= new TreeNode(root->val);
        temp=temp->right;
        
        solve(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
       
        
        solve(root);
        return  node->right;
    }
};