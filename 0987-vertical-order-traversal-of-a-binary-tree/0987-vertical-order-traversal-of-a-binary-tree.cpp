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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int,map<int,multiset<int>>>mp;
        queue<pair<TreeNode*,pair<int,int>>>q;
        // vector<int>ans
        
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto p=q.front();
            int x=p.second.first;
            int y=p.second.second;
            
            mp[x][y].insert(p.first->val);
            
            TreeNode* node=p.first;
            q.pop();
            
            if(node->left!=NULL)
            {
                q.push({node->left,{x-1,y+1}});
                
            }
            
            if(node->right!=NULL)
            {
                q.push({node->right,{x+1,y+1}});
                
            }
            
            
        }
        vector<vector<int>>ans;
        for(auto it:mp)
        {
            vector<int>temp;
            for(auto itr:it.second)
            {
                temp.insert(temp.end(),itr.second.begin(),itr.second.end());
            }
            
            ans.push_back(temp);
        }
        return ans;
        
        
    }
};