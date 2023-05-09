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
    set<int>st;
    bool isUnivalTree(TreeNode* root) {
        
        if(!root)
        {
            return NULL;
        }
        
        if(root)
        {
            st.insert(root->val);
        }
        
        isUnivalTree(root->left);
        isUnivalTree(root->right);
        return st.size()==1;
    
    }
};