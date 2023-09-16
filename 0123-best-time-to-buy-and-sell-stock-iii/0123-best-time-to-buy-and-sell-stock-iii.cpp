class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        
         if (n <= 1) {
        return 0;
    }
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        
        for(int i=n-1;i>=0;i--)
        {
            for(int flag=0;flag<=1;flag++)
            {
                for(int cap=1;cap<=2;cap++)
                {
                    if(flag==1)
                    {
                        dp[i][flag][cap]=max(-prices[i]+dp[i+1][0][cap],dp[i+1][1][cap]);
                    }
                    
                    else{
                        dp[i][flag][cap]=max(prices[i]+dp[i+1][1][cap-1],dp[i+1][0][cap]);
                    }
                }
            }
        }
        return dp[0][1][2];
        
        
    }
};