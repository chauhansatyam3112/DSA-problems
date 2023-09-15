class Solution {
public:
    int solve(vector<int>&prices,vector<vector<int>>&dp,int idx,int flag,int n)
    {
        if(idx==n)
        {
            return 0;
        }
        if(dp[idx][flag]!=-1)return dp[idx][flag];
        
        int profit=0;
        
        if(flag)
        {
            profit=max(-prices[idx]+solve(prices,dp,idx+1,0,n),solve(prices,dp,idx+1,1,n));
        }
        
        else{
            profit=max(prices[idx]+solve(prices,dp,idx+1,1,n),solve(prices,dp,idx+1,0,n));
            
        }
        return dp[idx][flag]=profit;
    }
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        
        return solve(prices,dp,0,1,n);
    }
};