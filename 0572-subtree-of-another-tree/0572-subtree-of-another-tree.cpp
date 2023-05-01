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
     void solve(TreeNode *root, string &s){
         queue<TreeNode*> q;
         q.push(root);
         s+=to_string(root->val);
         while(!q.empty()){
             auto x=q.front(); q.pop();
             if(x->left){
                 
               s+=to_string( x->left->val);   
               q.push(x->left);
             }else if(!x->left){
                 s+='#';
             }
              if(x->right){
                   s+=to_string( x->right->val);
                   q.push(x->right);
              }else if(!x->right){
                  s+='#';
              }
             
         }
     }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        string s;
        solve(subRoot, s);
       // cout<<s<<" ";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            auto x=q.front(); q.pop();
            if(x->val==subRoot->val){
                string k;
                solve(x, k);
              //  cout<<k<<" ";
              bool  istrue=false;
                if(k.size()==s.size()){
                for(int i=0; i<k.size(); i++){
                    if(k[i]!=s[i]){
                        istrue=true;
                    }
                }
                if(istrue==false){
                    return true;
                }
                }
            }
            if(x->left){
                q.push(x->left);
            }
            if(x->right){
                q.push(x->right);
            }
        }
        return false;
    
    
    
//     bool match(TreeNode*root,TreeNode* subroot)
//     {
//         if(!root && !subroot)return true;
//        else if(!root && subroot)return false;
//         else if(!subroot && root) return false;
//         else if(root->val!=subroot->val)return false;
        
//         return match(root->left,subroot->left)&& match(root->right,subroot->right);
       
//     }
    
  // void solve(TreeNode *root,TreeNode* subroot,int &flag)
//     {
       
       //string str;
      
//          if(!root) return;
        
//         if(root->val==subroot->val){
            
//            if(match(root,subroot)) flag++;
//         }
//         solve(root->left,subroot,flag);
//         solve(root->right,subroot,flag);
//     }
//  bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      
      
        
//         int flag=0;
        
//         solve(root,subRoot,flag);
//         if(flag>0)return true;
//         return false;
    }

};