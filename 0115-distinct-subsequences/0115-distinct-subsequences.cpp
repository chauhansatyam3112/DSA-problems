class Solution {
public:
    int solve(string &s,string &t,int n,int m,int i,int j,vector<vector<unsigned long long >>&dp)
    {
        if(j==m)
           return 1;
       if(i==n) return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        
        if(s[i]==t[j])
            return dp[i][j]=solve(s,t,n,m,i+1,j+1,dp)+solve(s,t,n,m,i+1,j,dp);
        else
          return  dp[i][j]=solve(s,t,n,m,i+1,j,dp);
        
      //return dp[i][j];
            
    }
    int numDistinct(string s, string t) {
        int n=s.length(),m=t.length();
        vector<vector<unsigned long long >>dp(n,vector<unsigned long long>(m,-1));
       return  solve(s,t,n,m,0,0,dp);
        
    }
};