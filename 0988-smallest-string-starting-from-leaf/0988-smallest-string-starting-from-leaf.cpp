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
    
  string ans = "";

    void solve(TreeNode *root, string str) {
        
        if (root == NULL) return; 

       str += ('a' + root->val); 

        if (root->left == NULL && root->right == NULL) {
            
            reverse(str.begin(), str.end());
            
            if (ans == "") ans = str;
            
            else ans = min(ans, str);
        }

        solve(root->left, str);
        
        solve(root->right, str);
    }

    string smallestFromLeaf(TreeNode* root) {
        
        
        solve(root, "");

        string res = "";
        
//         for (int i = 0; i < ans.length(); i++) {
            
//             int num = ans[i] - '0';
            
//             char ch = num + 'a';
            
//             res += ch;
//         }

        return ans;
    
    }
};