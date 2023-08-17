class Solution {
public:
//   int solve(int i,int j,vector<vector<int>>& triangle,int n,vector<vector<int>>&dp)
//     {
       
//        if(i==n-1) return triangle[n-1][j];
      
//        if(dp[i][j]!=-1)return dp[i][j];
        
        
//         int idx=solve(i+1,j+1,triangle,n,dp)+triangle[i][j];
      
//         int idxx=solve(i+1,j,triangle,n,dp)+triangle[i][j];
        
//         return dp[i][j]=min(idx,idxx);
//     }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n=triangle.size();
        
        vector<vector<int>>dp(n,vector<int>(n,0));
        
        for(int i=n-1;i>=0;i--)
            
          dp[n-1][i]= triangle[n-1][i];
        
        for(int i=n-2;i>=0;i--)
        {
            
            for(int j=i;j>=0;j--)
            {
             
            int idx= dp[i+1][j]+triangle[i][j];
      
            int idxx= dp[i+1][j+1]+triangle[i][j];
                
            dp[i][j]=min(idx,idxx);
        
                
            }
        }
        
        return dp[0][0];
       
        
      // return  solve(0,0,triangle,n,dp);
       
    }
};