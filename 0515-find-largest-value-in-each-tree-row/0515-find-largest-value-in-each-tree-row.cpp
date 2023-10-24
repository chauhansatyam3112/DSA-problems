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
    vector<int> largestValues(TreeNode* root) {
        
        if(!root)return {};
        
        vector<int>ans;
        queue<TreeNode*>pq;
        
        pq.push(root);
        
        
        while(!pq.empty())
        {
            int maxi=INT_MIN;
            
            int n=pq.size();
            
          
            
           for(int i=0;i<n;i++)
           {
                TreeNode* x= pq.front();
               
                 pq.pop();
               
                maxi=max(maxi,x->val);
               
               if(x->left)pq.push(x->left);
               if(x->right)pq.push(x->right);
               
           }
            ans.push_back(maxi);
            
        }
        return ans;
    }
};