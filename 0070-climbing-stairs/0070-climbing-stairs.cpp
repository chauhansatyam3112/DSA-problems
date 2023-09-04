class Solution {
public:
    int solve(int n,vector<int>&dp)
    {
        if(n<0)
        {
            return 0;
            
        }
        
        if(n==0)
        {
            return 1;
        }
        if(dp[n]!=-1)return dp[n];
        
        int x1=solve(n-1,dp);
        int x2=solve(n-2,dp);
        
        return dp[n]=(x1+x2);
    }
    int climbStairs(int n) {
       
// 	    if(n<1) return 0;
//         int a[100];
//         a[0]=1;
//         a[1]=2;
//         for(int i=2;i<n;i++){
//             a[i]=a[i-1]+a[i-2];}
//         return a[n-1];}
        vector<int>dp(n+1,-1);
    
       return  solve(n,dp);
    }
  
    
};