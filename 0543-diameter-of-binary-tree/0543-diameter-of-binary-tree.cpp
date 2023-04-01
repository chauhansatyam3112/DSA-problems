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
    int dfs(TreeNode* root,int &diamter)
    {
        if(!root)
        {
            return 0;
        }
        int left=dfs(root->left,diamter);
        int rigth=dfs(root->right,diamter);
    diamter=max(left+rigth,diamter);
        return 1+max(left,rigth);
    }
    int diameterOfBinaryTree(TreeNode* root) {
       int diamter=0;
         dfs(root,diamter);
        return  diamter;
    }
};