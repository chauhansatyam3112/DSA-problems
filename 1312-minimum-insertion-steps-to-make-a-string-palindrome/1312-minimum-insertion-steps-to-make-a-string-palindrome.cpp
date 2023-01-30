class Solution {
public:
    
     int solve(string &a,string &b,int i,int j,vector<vector<int>>&dp)
     {
     if(i==a.length())
             return 0;
         if(j==b.length())
             return 0;
         if(dp[i][j]!=-1)
         {
             return dp[i][j];
         }
         int ans=0;
         if(a[i]==b[j]){
             ans= 1+solve(a,b,i+1,j+1,dp);
             
         }
         else {
              ans= max(solve(a,b,i+1,j,dp),solve(a,b,i,j+1,dp));
             
         }
         return  dp[i][j]=ans;
     }
    int minInsertions(string s) {
        string s1=s;
        reverse(s1.begin(),s1.end());
        
        vector<vector<int>>dp(s.size(),vector<int>(s1.size(),-1));
      int ans=  solve(s,s1,0,0,dp);
        int ans1=s.length()-ans;
        return ans1;
        
        
        
    }
};