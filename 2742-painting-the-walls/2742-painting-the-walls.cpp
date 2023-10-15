class Solution {
public:
    int solve(int idx,vector<int>&cost,vector<int>&time,vector<vector<int>>&dp,int n)
    {
        
        if(n<=0)
        {
            return 0;
        }
        
        if(idx==cost.size())return 1e9-1;
        
        if(dp[idx][n]!=-1)return dp[idx][n];
        
    
        int paid=cost[idx]+solve(idx+1,cost,time,dp,(n-time[idx]-1));
        
        int unpaid=solve(idx+1,cost,time,dp,n);
        
        return dp[idx][n]=min(paid,unpaid);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        
        int n=cost.size();
        
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        
        return solve(0,cost,time,dp,n);
    }
};