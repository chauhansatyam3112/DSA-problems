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
    int cnt=0;
    void solve(TreeNode* root,int & k)
    {
        
       if(!root)return;
        
       solve(root->left,k);
        
        
        
        if(--k==0){
            cnt=root->val;
            return;
        }
        solve(root->right,k);
        
       
    }
    int kthSmallest(TreeNode* root, int k) {
        
        if(root==NULL)
        {
            return NULL;
        }
        
      solve(root,k);
        return  cnt;
    }
};