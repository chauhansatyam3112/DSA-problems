class Solution {
public:
  int solve(int idx, int prev, vector<vector<int>>& grid, vector<vector<int>>& dp) {
    if (idx == grid.size()) return 0; // Base case: return 0 when we reach beyond the last row

    if (dp[idx][prev + 1] != -1) return dp[idx][prev + 1]; // If already computed, return memoized result

    int mini = INT_MAX;

    for (int j = 0; j < grid[0].size(); j++) {
        if (prev == -1 || (j != prev)) { // Check if prev is within bounds or is -1
            int x = grid[idx][j] + solve(idx + 1, j, grid, dp);
            mini = min(mini, x);
        }
    }

    return dp[idx][prev + 1] = mini; // Memoize the result and return
}

int minFallingPathSum(vector<vector<int>>& grid) {
    int n = grid.size();
    if (n == 1)
        return grid[0][0];
    vector<vector<int>> dp(n, vector<int>(n + 1, -1)); // Memoization table (-99 to +99)

    return solve(0, -1, grid, dp); // Start from row 0 with no previous column (-1)
}
};