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
     
        
//     void solve(TreeNode *root,TreeNode* &ans)
//     {
//         if(root->left==NULL && root->right==NULL)
//         return  ;
       
//         ans=root;
        
//         ans= solve(root->left,ans);
//         ans=  solve(root->right,ans);
        
//         return ans;
      
//     }
    TreeNode* searchBST(TreeNode* root, int val) {
        
//         TreeNode* ans= new TreeNode();
        
//       if (root == nullptr || root->val == val)
//         return root;
        
//      if (val < root->val)
//         return searchBST(root->left, val);
        
//      return searchBST(root->right, val);
        
        while(root!=NULL && root->val!=val)
        {
            root=val<root->val?root->left:root->right;
            
        }
        return root;
        
        
        
        
//         TreeNode* ans=new TreeNode();
//         if(root->val==val)
//         
//             return solve(root,ans);
//         }
        
//         if(root->val>val)
           
//         searchBST(root->left,val);
        
        
//         if(root->val<val)
            
//          searchBST(root->right,val);
        
//         return ans;
        
    }
};