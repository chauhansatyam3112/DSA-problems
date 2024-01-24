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
    // vector<vector<int>>v1;
    
     int cnt=0;
    
    void solve(TreeNode* root,unordered_map<int,int>&mp)
    {
        if(!root)
        {
            return;
        }
        
         
         mp[root->val]++;
        
        if(!root->left &&  !root->right)
        {
            int cnt1=0;
            
            for(auto it:mp)
            {
                if(it.second%2!=0)
                {
                    cnt1++;
                    
                }
            }
            
            if(cnt1<=1)
            {
                cnt++;
            }
            
            
          mp[root->val]--;
         
            return ;
        }
        
     
        solve(root->left,mp);
        
        solve(root->right,mp);
        
         mp[root->val]--;
        
        
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        
        
       unordered_map<int,int>mp;
        
        solve(root,mp);
        
       
       
        
        // for(int i=0;i<v1.size();i++)
        // {
        //     for(int j=0;j<v1[i].size();j++)
        //     {
        //         cout<<v1[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
//         for(int i=0;i<v1.size();i++)
//         {
//              unordered_map<int,int>mp;
            
//             for(int j=0;j<v1[i].size();j++){
            
//              mp[v1[i][j]]++;
            
//             }
            
//             if(mp.size()==1){
//                 cnt++;
//                 continue;
            
//             }
            
//             int cnt1=0;
            
            
           
            
        
        
        return cnt;
        
        
    }
};