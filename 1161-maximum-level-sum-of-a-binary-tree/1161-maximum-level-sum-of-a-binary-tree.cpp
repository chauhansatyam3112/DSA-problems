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
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*>q;
        
        vector<int>temp;
        
        q.push(root);
        
        int level=0;
        
        
        int maxi=INT_MIN;
        
        int new_level=-1;
        while(!q.empty())
        {
            int sum=0;
            int n=q.size();
             level++;
           
            TreeNode* x;
            for(int i=0;i<n;i++)
            {
                  x=q.front();
                
                sum+=x->val;
          
                q.pop();
                      
          if(x->left)
            {
                q.push(x->left);
            }
            if(x->right)
            {
                q.push(x->right);
            }
          
            
            }
            
          if(maxi<sum)
          {
              maxi=sum;
             
             new_level=level;
          }
           
           
           
        
            
        }
       return  new_level;
    }
};