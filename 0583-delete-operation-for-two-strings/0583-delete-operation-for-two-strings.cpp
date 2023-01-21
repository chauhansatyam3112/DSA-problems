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
    int minDistance(string txt1, string txt2) {
         
       
        vector<vector<int>>dp(txt1.length(),vector<int>(txt2.length(),-1));
        
      int length= solve(txt1,txt2,0,0,dp);
        return  txt1.length()+txt2.length()-2*length;
        
       
        
        
    }
};