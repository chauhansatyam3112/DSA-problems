class Solution {
public:
   
    int solve(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        // Check if we are out of grid bounds
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()) {
            return 0;
        }
        
        // If we have already computed this value, return it
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        
        int x1 = 0, x2 = 0, x3 = 0;
        
        // Check if the moves are valid and in bounds before making recursive calls
        if (i > 0 && j + 1 < grid[0].size() && grid[i][j] < grid[i - 1][j + 1]) {
            x1 = 1 + solve(i - 1, j + 1, grid, dp);
        }
        
        if (j + 1 < grid[0].size() && grid[i][j] < grid[i][j + 1]) {
            x2 = 1 + solve(i, j + 1, grid, dp);
        }
        
        if (i + 1 < grid.size() && j + 1 < grid[0].size() && grid[i][j] < grid[i + 1][j + 1]) {
            x3 = 1 + solve(i + 1, j + 1, grid, dp);
        }
        
        // Store the result in dp array
        dp[i][j] = max({x1, x2, x3});
        
        return dp[i][j];
    }
    
    int maxMoves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int maxi = 0;
        
        // Initialize dp array for memoization
        vector<vector<int>> dp(n, vector<int>(m, -1));
        
        // Calculate the maximum moves starting from each cell in the first column
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, solve(i, 0, grid, dp));
        }
        
        return maxi;
    }
        
    
};