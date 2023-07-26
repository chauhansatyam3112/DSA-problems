class Solution {
public:
    
    void solve(vector<vector<int>>&ans,vector<int>&res,vector<int>& nums,int target,int sum,int i)
    {
        if(sum==target)
        {
            
            ans.push_back(res);
            
            return;
        }
         if(i>=nums.size())return ;
         if(sum>target)return;
        
        sum+=nums[i];
       res.push_back(nums[i]);
        
       solve(ans,res,nums,target,sum,i);
        sum-=nums[i];
       res.pop_back();
        
        
       // sum+nums[i];
      //  res.push_back(nums[i]);

        
       return solve(ans,res,nums, target,sum,i+1);
      //  sum-=nums[i];
       // res.pop_back();
        
      
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>res;
        
        solve(ans,res,candidates,target,0,0);
        return ans;
        
    }
};