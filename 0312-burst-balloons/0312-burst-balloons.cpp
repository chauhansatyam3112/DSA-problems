class Solution {
public:
    int solve(int i,int j,vector<int>&nums,int n,vector<vector<int>>&dp)
    {
        if(i>j)return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        int maxi=INT_MIN;
        
        for(int idx=i;idx<=j;idx++)
        {
            
            int cost=nums[i-1]*nums[idx]*nums[j+1]+
                
                                              solve(i,idx-1,nums,n,dp)+
                                              solve(idx+1,j,nums,n,dp);
            
            maxi=max(cost,maxi);
            
            
            
            
            
        }
        return dp[i][j]=maxi;
        
        
    }
    int maxCoins(vector<int>& nums) {
        
        
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        
        nums.push_back(1);
        
        nums.insert(nums.begin(),1);
        
        return solve(1,n,nums,n,dp);
    }
};