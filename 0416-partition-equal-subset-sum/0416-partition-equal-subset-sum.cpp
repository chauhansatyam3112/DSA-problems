class Solution {
public:
    bool solve(vector<int>&nums,int sum,vector<vector<int>>&dp,int idx)
    {
        if(idx==0) return sum==nums[idx];
        
        if(sum==0) return true;
        
        if(dp[idx][sum]!=-1)return dp[idx][sum];
        
        bool x1=false,x2=false;
        
        if(sum>=nums[idx])
        
         x1=solve(nums,sum-nums[idx],dp,idx-1);
        
         x2=solve(nums,sum,dp,idx-1);
        
        return dp[idx][sum]= x1 or x2;
    }
    bool canPartition(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        
        for(auto it:nums)sum+=it;
        
        if(sum&1)return false;
        
        vector<vector<int>>dp(n,vector<int>((sum/2)+1,-1));
        
        return solve(nums,sum/2,dp,n-1);
    }
};