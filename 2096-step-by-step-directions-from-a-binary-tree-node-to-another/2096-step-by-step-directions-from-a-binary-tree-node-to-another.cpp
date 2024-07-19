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
    
  bool solve(TreeNode* LCA, string &res, int target) {
        if (LCA == NULL) {
            return false;
        }
        
        if (LCA->val == target) {
            return true;
        }
        
        res.push_back('L');
        if (solve(LCA->left, res, target)) {
            return true;
        }
        res.pop_back();
        
        res.push_back('R');
        if (solve(LCA->right, res, target)) {
            return true;
        }
        res.pop_back();
        
        return false;
    }
    
   TreeNode* LCA(TreeNode* root, int p, int q) {
        if (!root) {
            return NULL;
        }
        
        if (root->val == p || root->val == q) {
            return root;
        }
        
        TreeNode* left = LCA(root->left, p, q);
        TreeNode* right = LCA(root->right, p, q);
        
        if (left && right) {
            return root;
        }
        
        return left ? left : right;
    }
    
    string getDirections(TreeNode* root, int startValue, int destValue) {
        
      TreeNode* lca = LCA(root, startValue, destValue);
        
        string res1 = "";
        string res2 = "";
        
        solve(lca, res1, startValue);
        solve(lca, res2, destValue);
        
        string ans = "";
        
        for (int i = 0; i < res1.length(); i++) {
            ans.push_back('U');
        }
        
        ans += res2;
        
        return ans;
    
        
    }
};