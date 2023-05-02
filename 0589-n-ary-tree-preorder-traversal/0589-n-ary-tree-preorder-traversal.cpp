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
    
   
    
    
//     void  solve(Node *root ,vector<int>&ans){
        
//         if(!root){
          
//             return;
//         }
//          ans.push_back(root->val);  
    
//     for(Node *child:root->children)
//     {
//          solve(child,ans);
//     }
        
//     }
    
    void solve(Node *root ,vector<int>&ans){
    if (!root) return ;
	stack<Node*> s; s.push(root);       
	while (!s.empty()) {                 
		auto Top = s.top(); s.pop();    
		ans.push_back(Top -> val);      
		
		for (auto it = rbegin(Top -> children); it != rend(Top -> children); it++) 
			s.push(*it);
        
    }
    }

    vector<int> preorder(Node* root) {
    vector<int> ans;
        solve(root,ans);
        return ans;
	
    }
};