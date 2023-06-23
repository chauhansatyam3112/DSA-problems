class Solution {
public:
    int profit;
    int solve(vector<int>&prices,int fees,int buy,int idx, vector<vector<int>>&dp)
    {
        int n=prices.size();
        
        if(idx==n)
        {
            return 0;
        }
        if(dp[idx][buy]!=-1)
        {
            return dp[idx][buy];
        }
        
        
        if(buy==1)
        {
          profit=max(-prices[idx]+solve(prices,fees,0,idx+1,dp),solve(prices,fees,1,idx+1,dp)  );
        }
        else
             profit=max(prices[idx]-fees +solve(prices,fees,1,idx+1,dp),solve(prices,fees,0,idx+1,dp));
        
        return dp[idx][buy]=profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
        int  n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        int buy=1;
        int idx=0;
      return  solve(prices,fee,buy,0,dp);
    }
};