/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void makeParent(TreeNode* root,TreeNode* target, unordered_map<TreeNode*,TreeNode*>&mp)
    {
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            auto x=q.front();q.pop();
            
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
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        unordered_map<TreeNode*,TreeNode*>mp;
        
       makeParent(root,target,mp);
        
        queue<TreeNode*>q;
        map<TreeNode*,bool>visited;
        q.push(target);
        visited[target]=true;
        
        int cnt=0;
        
        while(!q.empty())
        {
            
            //ab hum kya karenge bc
            
            if(cnt++==k)
            {
                break;
            }
            int n=q.size();
            for(int i=0;i<n;i++)
                {
                auto x=q.front();q.pop();
                
            
            if(x->left && !visited[x->left])
            {
                visited[x->left]=true;
                q.push(x->left);
            }
            
            if(x->right && !visited[x->right])
            {
               visited[x->right]=true;
                q.push(x->right);
            }
            if(mp[x] && !visited[mp[x]])
            {
                q.push(mp[x]);
                visited[mp[x]]=true;
                
            }
            
            }
        }
        
        vector<int>ans;
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            ans.push_back(x->val);
            
        }
        return ans;
        
    }
};