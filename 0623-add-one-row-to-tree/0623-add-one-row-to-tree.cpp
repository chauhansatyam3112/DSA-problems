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
    
    
    void add(TreeNode*root,int val)
    {
        
        
        
          if(root->left==nullptr){
        
            root->left = new TreeNode(val);
        
        }
      
        
        else{
            
            TreeNode*temp=root->left;
            
            root->left=new TreeNode(val);
            
            root->left->left=temp;
        }
        
        
        if(root->right==NULL)
        {
            root->right=new TreeNode(val);
            
            
        }
        
        else{
            
            TreeNode*temp=root->right;
            
            root->right=new TreeNode(val);
            
            root->right->right=temp;
        }
        
        // return root;
        
    }
    
    
    
    void solve(TreeNode*root,int val,int depth,int cnt)
    {
        
         if(root == NULL)
             
            return ;
       
        if(cnt==depth-1)
        {
            add(root,val);
            
            return;
        }
       
                
        solve(root->left,val,depth,cnt+1);
        
        solve(root->right,val,depth,cnt+1);
        

    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        
          if(depth == 1){
            
            TreeNode* temp = root ;
              
            root = new TreeNode(val);
              
            root->left = temp;
              
            return root ;
            
        }
        
        solve(root,val,depth,1);
        
        return root;
    }
};