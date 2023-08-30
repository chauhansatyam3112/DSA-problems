class Solution {
public:
//     int solve(vector<int>&coins,int amount,int idx,vector<vector<int>>&dp)
//     {
        
//          if(idx==0 and amount==0) return 0;
        
//         if(idx<=0 and amount!=0) return INT_MAX-1;
        
       
        
//         if(dp[idx][amount]!=-1)return dp[idx][amount];
        
//         int take=INT_MAX;
        
//         if(coins[idx]<=amount)
        
//         take=1+solve(coins,amount-coins[idx],idx,dp);
        
//         int  nottake=solve(coins,amount,idx-1,dp);
           
//         // dp[idx][amount]

//         return dp[idx][amount]=min(take,nottake);
        
//     }
    
    int coinChange(vector<int>& coins, int amount) {
        
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,0));
        
        int n=coins.size();
        
     
        for(int i=0;i<=amount;i++)
        {
          if(i%coins[0]==0) dp[0][i]=i/coins[0];
            
          else
              dp[0][i]=INT_MAX-1;
        }
        
        for(int i=1;i<n;i++)
        {
            for(int amnt=0;amnt<=amount;amnt++)
            {
                int take=INT_MAX;
                
                if(coins[i]<=amnt)
                {
                    take=1+dp[i][amnt-coins[i]];
                    
                    
                }
                
                int nottake=dp[i-1][amnt];
                
                
                dp[i][amnt]=min(take,nottake);
                
            }
            
        }
        
        int ans=dp[n-1][amount];
        
        return ans==INT_MAX-1?-1:ans;
    }
};