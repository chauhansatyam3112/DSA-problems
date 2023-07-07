/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
        if(!root)
        {
            
            return "";
        }
        string str="";
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            auto node=q.front();
            q.pop();
            
            if(node==NULL)
            {
                str.append("#,");
            }
            else
            {
                str.append(to_string(node->val)+',');
            }
            
            if(node!=NULL)
            {
                q.push(node->left);
                q.push(node->right);
            }
            
            
        }
            
            
           
            
       return str;     
           
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
        
        if(data.size()==0)
        {
            return NULL;
        }
        stringstream s(data);
        string str;
        
        getline(s,str,',');
        
        TreeNode* root=new TreeNode(stoi(str));
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            
            auto x=q.front();q.pop();
            
            getline(s,str,',');
            
            if(str=="#")
            {
                x->left=NULL;
            }
            else
            {
                TreeNode * temp=new TreeNode(stoi(str));
                x->left=temp;
                q.push(temp);
            }
            
            getline(s,str,',');
            
             if(str=="#")
            {
                x->right=NULL;
            }
            else
            {
                TreeNode * temp1=new TreeNode(stoi(str));
                x->right=temp1;
                q.push(temp1);
            }
        }
        
        return root;
        
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));