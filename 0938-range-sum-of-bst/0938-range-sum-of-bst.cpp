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
    int  ans=0;
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        queue<TreeNode*>q;
        
        q.push(root);
        
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            
            if(x->val>=low && x->val<=high){
                ans+=x->val;
               
                
            }
             if( x->left && x->val>=low)
                q.push(x->left);
            
             if(x->right && x->val<=high)
                 q.push(x->right);
            
        }
            
        return ans;
        
        
    }
};