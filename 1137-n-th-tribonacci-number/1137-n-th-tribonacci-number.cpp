class Solution {
public:
   int solve(int n,vector<int>&dp) {
    
      if(n==0)return dp[n]=0;  
        
      if(n==1|| n==2)return dp[n]=1;
       
      if(dp[n]!=-1)return dp[n]; 
        
      
      int x1= solve(n-1,dp);
      
      int x2=solve(n-2,dp);
        
      int x3=solve(n-3,dp);
        
      return dp[n]= x1+x2+x3;  
        
    }
    
    int tribonacci(int n) {
        
      vector<int>dp(n+1,-1);
        
      
       return solve(n,dp); 
        
    
        
        
        
    }
};