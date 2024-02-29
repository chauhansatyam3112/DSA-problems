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
    
  bool  solve(TreeNode*root)
    {
      if(!root)return true;
      
        queue<TreeNode*>pq;
        
        // vector<vector<int>>v;
        
        pq.push(root);
        
        int level=0;
        
        while(!pq.empty())
        {
            
            int n=pq.size();
            
            
             int prev = level % 2 == 0 ? INT_MIN : INT_MAX;
            
            vector<int>temp;
            
            
            while(n--)
            {
                
                
                
         auto x = pq.front();
                
            pq.pop();

            
          if (level % 2 == 0) {
              
              
          if (x->val % 2 == 0 || x->val <= prev) return false;
              
              
         } else {
              
              
            if (x->val % 2 || x->val >= prev) return false;
              
         }

            prev= x->val;
  
            
            if(x->left)
            {
                pq.push(x->left);
            }
            
            if(x->right)
            {
                pq.push(x->right);
                
            }
                
            }
           
            
            level++;
            
            
            
        }
        
        return true;
        
    }
    
    
    
    bool isEvenOddTree(TreeNode* root) {
        
      return  solve(root);
        
    }
};