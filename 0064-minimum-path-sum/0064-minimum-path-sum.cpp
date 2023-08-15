class Solution {
public:
     int solve(int i,int j, vector<vector<int>>&dp,vector<vector<int>>&Grid)
    {
        
        
        if(i<0 || j<0 ) return 10000;
        
        if(i==0 && j==0)return Grid[i][j];
        
        if(dp[i][j]!=-1) return dp[i][j];
         int up=INT_MAX;
         int  left=INT_MAX;
        
         up=solve(i,j-1,dp,Grid)+Grid[i][j];
         left=solve(i-1,j,dp,Grid)+Grid[i][j];
        
        return dp[i][j]=min(up,left);
        
    }
    int minPathSum(vector<vector<int>>& grid) {
         int m=grid.size();
        
        int n=grid[0].size();
         vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        
        
         return   solve(m-1,n-1,dp,grid);
        
    }
};