class Solution {
public:
    int solve(int i, int j, int n, int m, vector<vector<int>>& dp, vector<vector<char>>& matrix) {
        
        
    if (i >= n || j >= m || matrix[i][j] == '0') {
        
        return 0;
    }

    if (dp[i][j] != -1) {
        
        return dp[i][j];
    }

    int right = solve(i, j + 1, n, m, dp, matrix);
        
    int down = solve(i + 1, j, n, m, dp, matrix);
        
    int diagonal = solve(i + 1, j + 1, n, m, dp, matrix);

    int result = 1 + min({right, down, diagonal});
        
    dp[i][j] = result;

    return result;
}

int maximalSquare(vector<vector<char>>& matrix) {
    
    int n = matrix.size();
    
    if (n == 0) return 0;
    
    int m = matrix[0].size();

    vector<vector<int>> dp(n, vector<int>(m, -1));

    int maxi = 0;

    for (int i = 0; i < n; i++) {
        
        
        for (int j = 0; j < m; j++) {
            
            
            if (matrix[i][j] == '1') {
                
                maxi = max(maxi, solve(i, j, n, m, dp, matrix));
            }
        }
    }

    return maxi * maxi;


        
    }
};