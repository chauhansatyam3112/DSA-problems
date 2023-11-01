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
   unordered_map<int, int> mp;
    
    void solve(TreeNode* root) {
        
        if (!root) return;
        
        else mp[root->val]++;
        
       solve(root->left);
        
        solve(root->right);
        
    }
    vector<int> findMode(TreeNode* root) {
        
        vector<int> res;
        
        int maxi = -1;
        
        solve(root);
        
        for (auto it: mp) {
            
            if (it.second == maxi) res.push_back(it.first);
            
            else if (it.second > maxi) {
                
                maxi = it.second;
                
                res = {it.first};
            }
        }
        return res;
    }
};