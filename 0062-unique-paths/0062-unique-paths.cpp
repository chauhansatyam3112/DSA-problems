class Solution {
public:
//     int solve(int i,int j, vector<vector<int>>&dp)
//     {
//         if(i<0 || j<0) return 0;
        
//         if(i==0 && j==0)return 1;
        
//         if(dp[i][j]!=-1) return dp[i][j];
        
//         int up=solve(i,j-1,dp);
//         int left=solve(i-1,j,dp);
        
//         return dp[i][j]=up+left;
        
//     }
    int uniquePaths(int m, int n) {
        
        // vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
      int  dp[m][n];
        
     
        
        for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        if (i == 0 && j == 0) {
            
            
            dp[i][j] = 1;
            
        }
            
        else {
            int up = (i > 0) ? dp[i - 1][j] : 0;
            int left = (j > 0) ? dp[i][j - 1] : 0;
            dp[i][j] = left + up;
        }
        
        
    }
}
        return dp[m-1][n-1];

      
       
       
       
                  
                  
                  
               
                
                
             
      // return   solve(m-1,n-1,dp);
        
    }
};