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
//      int cnt1=1,cnt2=1;
//     void solve(TreeNode*  root,int x)
//     {
        
//          if(!root){
//              cnt=0;
//             return;
//         }
//         if( root->left->val==x || root->right->val==x )
//             return;
       
//         solve(root->left,x);
//         solve(root->right,x);
    // }
    
    bool isCousins(TreeNode* root, int t1, int t2) {
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            bool flag1=false,flag2=false;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                
                auto x=q.front();
                q.pop();
                
                if(x->val==t1)
                    flag1=true;
                if(x->val==t2)
                    flag2=true;
                
                if(x->left && x->right)
                {
                    if(x->left->val==t1 && x->right->val== t2||x->left->val==t2 && x->right->val==t1)
                        return false;
                }
                if(x->left) q.push(x->left);
                if(x->right) q.push(x->right);
                
                
            }
            if(flag1 && flag2)return true;
        }
        return false;
        
     
//         solve(root,x,cnt1);
//         solve(root,y,cnt2);
//         if(!cnt1==1&& !cnt2==1 && cnt1==cnt2)
//             return true;
      
//             return false;
        
    }
};