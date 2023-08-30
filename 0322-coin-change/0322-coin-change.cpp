class Solution {
public:
    int solve(vector<int>&coins,int amount,int idx,vector<vector<int>>&dp)
    {
        
         if(idx==0 and amount==0) return 0;
        
        if(idx==0 and amount!=0) return INT_MAX-1;
        
       
        
        if(dp[idx][amount]!=-1)return dp[idx][amount];
        
        int take=INT_MAX;
        
        if(coins[idx-1]<=amount)
        
        take=1+solve(coins,amount-coins[idx-1],idx,dp);
        
        int  nottake=solve(coins,amount,idx-1,dp);
           
        // dp[idx][amount]

        return dp[idx][amount]=min(take,nottake);
        
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        
        int n=coins.size();
        
       int ans=solve(coins,amount,n,dp);
        
        return ans==INT_MAX-1?-1:ans;
        
    }
};