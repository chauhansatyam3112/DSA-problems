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
    
    
    void makeGraph(unordered_map<int,vector<int>>&mp,int parent,TreeNode* curr)
    {
        if(curr==NULL)return ;
        
        if(parent!=-1)
        {
            mp[curr->val].push_back(parent);
        }
        
        if(curr->left)
        {
            mp[curr->val].push_back(curr->left->val);
        }
        
        
        if(curr->right)
        {
          
            
            mp[curr->val].push_back(curr->right->val);
        }
        
        
        makeGraph(mp,curr->val,curr->left);
        
        makeGraph(mp,curr->val,curr->right);
        
        
        
    }
    int amountOfTime(TreeNode* root, int start) {
        
        
        unordered_map<int,vector<int>>adj;
        
        makeGraph(adj,-1,root);
        
        queue<int>q;
        
        q.push(start);
        
        unordered_set<int>st;
        
        st.insert(start);
        
        int min=0;
        
        while(!q.empty())
        {
            
            int n=q.size()
    ;
            
            while(n--)
            {
                
                auto x=q.front();q.pop();
                
                for(auto it: adj[x])
                {
                    if(st.find(it)==st.end())
                    {
                        q.push(it);
                        
                        st.insert(it);
                        
                    }
                }
                
               
                
            }
            
             min++;
            
            
        }
        
        
        return min-1;
        
    }
};