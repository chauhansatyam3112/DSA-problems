class Solution {
public:
    int solve(int idx,int flipcnt,vector<vector<int>>&dp,vector<int>&v,int x)
    {
        if(v.size()==idx)
        {
            if(flipcnt==0)
            return 0;
            else
            return 1e7;
        }
        
      
        
        if(dp[idx][flipcnt]!=-1)return dp[idx][flipcnt];
        
        int ans=1e7;
        
        if(idx<v.size()-1)
        {
            ans=min(ans,v[idx+1]-v[idx]+solve(idx+2,flipcnt,dp,v,x));
        }
        
        ans=min(ans,x+solve(idx+1,flipcnt+1,dp,v,x));
        
        if(flipcnt>0)
        
        ans=min(ans,solve(idx+1,flipcnt-1,dp,v,x));
        
        return dp[idx][flipcnt]=ans;
        
        
        
    }
    int minOperations(string s1, string s2, int x) {
        
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        
        vector<int>v;
        
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
            {
                v.push_back(i);
            }
        }
        
        if(v.size()%2)return -1;
        
        int ans=solve(0,0,dp,v,x);
        
        return ans!=-1?ans:-1;
        
    }
};