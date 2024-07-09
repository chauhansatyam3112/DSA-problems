class Solution {
public:
    
    vector<vector<int>>dp;
    
    int solve(int idx,int k,vector<int>&nums)
    {
        
        if(idx==nums.size())return 0;
        
        if(dp[idx][k]!=-1)return dp[idx][k];
     
        int maxi=1;
        
        for(int j=idx-1;j>=0;j--)
        {
            if(nums[idx]==nums[j])
            {
                
                maxi=max(maxi,1+solve(j,k,nums));
                
            }
            else if(nums[idx]!=nums[j] && k>0)
            {
                maxi=max(maxi,1+solve(j,k-1,nums));
            }
        }
        
        return dp[idx][k]=maxi;
        
    }
    
    
    int maximumLength(vector<int>& nums, int k) {
        
        int n=nums.size();
        
      dp=vector<vector<int>>(n+1,vector<int>(min(n+1,26),-1));
        
        int maxi=0;
        
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,solve(i,k,nums));
        }
        
        return maxi;
        
        
        
        
    }
};