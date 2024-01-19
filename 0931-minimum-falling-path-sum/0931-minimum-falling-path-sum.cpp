class Solution {
public:
     int solve(int row, int col, vector<vector<int>>& matrix, int n, 
               
               vector<vector<int>>& dp, int m) {
         
        if (row == n - 1) {
            
            return matrix[n - 1][col];
        }

        if (col >= m || col < 0) return INT_MAX;

        if (dp[row][col] != INT_MIN) return dp[row][col];

        int x1 = solve(row + 1, col, matrix, n, dp, m) + matrix[row][col];
         
        int x2 = (col + 1 < m) ? solve(row + 1, col + 1, matrix, n, dp, m) : INT_MAX;
         
        int x3 = (col - 1 >= 0) ? solve(row + 1, col - 1, matrix, n, dp, m) : INT_MAX;

        if (col + 1 < m) x2 += matrix[row][col];
         
        if (col - 1 >= 0) x3 += matrix[row][col];

        int result = min({x1, x2, x3});

        return dp[row][col] = (result == INT_MAX) ? 0 : result;
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        
        int m = matrix[0].size();
        
        vector<vector<int>> dp(n, vector<int>(m, INT_MIN));
        
        int mini = INT_MAX;

        for (int i = 0; i < m; i++) {
            mini = min(mini, solve(0, i, matrix, n, dp, m));
        }

        return mini;
    }

    
};