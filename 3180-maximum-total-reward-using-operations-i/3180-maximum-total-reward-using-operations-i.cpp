class Solution {
public:
    
    int solve(vector<int>&nums,int idx,int sum,vector<vector<int>>&dp)
    {
        if(idx==nums.size())return 0;
        
        int ans=0;
        
        
        if(dp[idx][sum]!=-1)return dp[idx][sum];
        
        if(nums[idx]>sum)
        {
            int x1=nums[idx]+solve(nums,idx+1,sum+nums[idx],dp);
            
            ans=max(x1,ans);
            
            int x2=solve(nums,idx+1,sum,dp);
            
            ans=max(ans,x2);
        }
        
        else{
            
            int x3=solve(nums,idx+1,sum,dp);
            
            ans=max(ans,x3);
            
        }
        
        return dp[idx][sum]=ans;
    }
    int maxTotalReward(vector<int>& nums) {
        
        vector<vector<int>>dp(nums.size()+1,vector<int>(4000,-1));
        
        set<int>st(nums.begin(),nums.end());
        
        vector<int>v(st.begin(),st.end());
        
        return solve(v,0,0,dp);
    }
};