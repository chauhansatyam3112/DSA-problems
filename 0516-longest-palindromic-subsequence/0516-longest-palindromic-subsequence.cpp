class Solution {
public:
   int  solve(string &a,string &b,int i,int j,vector<vector<int>>&dp)
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
    int longestPalindromeSubseq(string s) {
        string txt1=s;
        reverse(txt1.begin(),txt1.end());
        vector<vector<int>>dp(txt1.length(),vector<int>(s.length(),-1));
       return solve(txt1,s,0,0,dp);
        
    }
};