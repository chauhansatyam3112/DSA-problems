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
    TreeNode* solve(vector<int>&nums,int start,int end)
    {
        
        if(start>end) return nullptr;
        
        
        
        int idx=start;
        
        int maxi=INT_MIN;
        
        for(int i=start+1;i<=end;i++)
        {
            if(nums[i]>nums[idx])
            {
                idx=i;
            }
        }
        
        // maxi= max_element(nums.begin()+start,nums.begin()+end)-nums.begin();
        
        cout<<idx<<endl;
        
        
        TreeNode *root= new TreeNode(nums[idx]);
        
        root->left=solve(nums,start,idx-1);
        
        root->right=solve(nums,idx+1,end);
        
        
        
        return root;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        if(nums.empty())return NULL;
        
        return solve(nums,0,nums.size()-1);
        
    }
};