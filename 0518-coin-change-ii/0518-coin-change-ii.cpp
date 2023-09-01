class Solution {
public:
     int solve(vector<int>&coins,int amount,int idx,vector<vector<int>>&dp)
    {
        
         if(idx==0)
         {
             if(amount%coins[0]==0)
                 return  1;
             
             else
                 return 0;
         }
       
        
        if(dp[idx][amount]!=-1)return dp[idx][amount];
        
        int take=0;
        
        if(coins[idx]<=amount)
        
        take=solve(coins,amount-coins[idx],idx,dp);
        
        int  nottake=solve(coins,amount,idx-1,dp);
           
        // dp[idx][amount]

        return dp[idx][amount]=take+nottake;
        
    }
    int change(int amount, vector<int>& coins) {
        
         vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        
        int n=coins.size();
        
       int ans=solve(coins,amount,n-1,dp);
        
       return ans;
    }
};