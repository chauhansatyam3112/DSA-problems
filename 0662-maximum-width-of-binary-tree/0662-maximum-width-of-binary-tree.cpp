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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        queue<pair<TreeNode*,int>>q;
        long long int  ans=0;
        
        q.push({root,0});
        while(!q.empty())
        {
         long long int first=0,last=0;
            int n=q.size();
            int mini=q.front().second;
            for(int i=0;i<n;i++)
            {
                
                int idx=q.front().second-mini;
                
                TreeNode*node=q.front().first;
                q.pop();
                
                if(i==0)  first=idx;
                if(i==n-1)last=idx;
                if(node->left)
                {
                    q.push({node->left,(long long)2*idx+1});
                }
                if(node->right)
                {
                    q.push({node->right,(long long)2*idx+2});
                }
                
                
            }
            ans=max(ans,last-first+1);
        }
        return ans;
        
    }
};