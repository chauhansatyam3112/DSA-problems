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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)return res;
        queue<TreeNode*>q;
        q.push(root);
        
        bool flag=true;
        while(!q.empty())
        {
            int n=q.size();
            
            vector<int>ans;
            int t=0;
            for(int i=0;i<n;i++)
            {
                auto x=q.front();q.pop();
                ans.push_back(x->val);
                if(x->left!=NULL){
                    q.push(x->left);
               }
                if(x->right!=NULL){
                    q.push(x->right);
               
                }
                
            }
                
                if(flag)
                {  
                   
                    res.push_back(ans);
                    flag=false;
                }
            else if(!flag)
            {
                 reverse(ans.begin(),ans.end());
                res.push_back(ans);
                flag=true;
            }
                
            
            
        }
        return res;
        
    }
};