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
    TreeNode * makeParent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&mp,int start)
    {
        
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* res;
        while(!q.empty())
        {
            
            auto x=q.front();q.pop();
            if(x->val==start)
                res=x;
                
            
            if(x->left)
            {
                mp[x->left]=x;
                q.push(x->left);
            }
            if(x->right)
            {
                mp[x->right]=x;
                    
                q.push(x->right);
            }
            
        }
        return res;
        
    }
    int amountOfTime(TreeNode* root, int start) {
        
        unordered_map<TreeNode*,TreeNode*>mp;
        
        TreeNode* target= makeParent(root,mp,start);
        
       
        
        queue<TreeNode*>q;
        unordered_map<TreeNode*,bool>visited;
        
        q.push(target);
        
        visited[target]=true;
        
        int time=-1;
        
        while(!q.empty())
        {
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
                auto x=q.front();q.pop();
                
                if(x->left && !visited[x->left])
                {
                   q.push(x->left);
                    visited[x->left]=true;
                }
                if(x->right && !visited[x->right])
                {
                    q.push(x->right);
                    visited[x->right]=true;
                }
                if(mp[x] && !visited[mp[x]] )
                {
                    q.push(mp[x]);
                    visited[mp[x]]=true;
                }
            }
            time++;
        }
        return time;
        
        
    }
};