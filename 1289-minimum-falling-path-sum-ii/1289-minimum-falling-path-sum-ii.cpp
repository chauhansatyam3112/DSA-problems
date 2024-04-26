class Solution {
public:
  int solve(int idx, int prev, vector<vector<int>>& grid, vector<vector<int>>& dp) {
      
    if (idx == grid.size()) return 0; 

    if (dp[idx][prev + 1] != -1) return dp[idx][prev + 1];
      

    int mini = INT_MAX;

    for (int j = 0; j < grid[0].size(); j++) {
        
        if (prev == -1 || (j != prev)) { 
            
            int x = grid[idx][j] + solve(idx + 1, j, grid, dp);
            
            mini = min(mini, x);
        }
    }

    return dp[idx][prev + 1] = mini; 
      
  }
      

int minFallingPathSum(vector<vector<int>>& grid) {
    
    
    int n = grid.size();
    
    if (n == 1)
        
        return grid[0][0];
    
    vector<vector<int>> dp(n, vector<int>(n + 1, -1)); 
    

    return solve(0, -1, grid, dp); 
    
}
      
};