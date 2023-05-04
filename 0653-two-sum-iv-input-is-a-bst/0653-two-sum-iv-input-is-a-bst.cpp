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
    bool solve(TreeNode* root,int k)
    { 
         set<int>st;
         queue<TreeNode*>q;
         q.push(root);
      
        
        while(!q.empty())
        {
            auto x=q.front();q.pop();
            
            int temp=(k- x->val);
            
            if(st.find(temp)!=st.end())
            {
                return true;
            }
            else
            
             st.insert(x->val);
            
           
                if(x->right)
                    
                q.push(x->right);
               
               if(x->left)
                q.push(x->left);
            
        }
        return false;
        
    }
    bool findTarget(TreeNode* root, int k) {
        if(root->left==NULL && root->right==NULL)
        {
            return false;
            
        }
       return solve(root,k);
        
    }
};