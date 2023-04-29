/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxi=0;
   // int cnt=0;
    
    void solve(Node*root)
    {
        queue<Node*>q;
        if(root==NULL)
        {
            return ;
            
        }
        q.push(root);
       
        while(!q.empty())
        {
             int n=q.size();
           
            for(int i=0;i<n;i++)
            {
                 Node * temp=q.front();
                 q.pop();
                for(auto m:temp->children)
                 q.push(m);  
            }
            maxi++;
            
        }
    }
    int maxDepth(Node* root) {
        solve(root);
        return maxi;
        
//         if(!root)
//         {
//             return 0;
//         }
//         int d=0;
//         for( Node* child:root->children)
//         {
//             d=max(d,maxDepth(child));
            
//         }
//         return d+1;
    }
};