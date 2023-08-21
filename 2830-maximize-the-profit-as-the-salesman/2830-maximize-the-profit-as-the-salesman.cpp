class Solution {
public:
    vector<int>v;
    int solve(int idx,vector<vector<int>>&offers,int m,vector<int>&dp)
    {
        
        if(idx>=m)return 0;
        
        if(dp[idx]!=-1)return dp[idx];
        
        int x1=0,x2=0;
        
        x1=solve(idx+1,offers,m,dp);
        
        int index=upper_bound(v.begin(),v.end(),offers[idx][1])-v.begin();
        
        x2= solve(index,offers,m,dp)+offers[idx][2];
        
        return dp[idx]=max(x1,x2);
       
        
    }
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
         sort(offers.begin(),offers.end());
        
        int m=offers.size();
        vector<int>dp(m,-1);
        
        for(auto it:offers)v.push_back(it[0]);
        
        return solve(0,offers,m,dp);
    }
};