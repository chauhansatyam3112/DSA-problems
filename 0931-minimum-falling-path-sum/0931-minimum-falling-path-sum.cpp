class Solution {
public:
    int minFallingPathSumUtil(int row, int col, vector<vector<int>>& matrix, int n, vector<vector<int>>& dp) {

    if(row == n-1) 
        return matrix[row][col];

    if(dp[row][col] != INT_MIN)
        
        return dp[row][col];

    return (dp[row][col] = matrix[row][col] + min({
        
       minFallingPathSumUtil(row+1, max(0, col-1),
                             matrix, n, dp),
       minFallingPathSumUtil(row+1, col, matrix, n, dp),
       minFallingPathSumUtil(row+1, min(n-1, col+1), matrix, n, dp)
           
    }));

}
int minFallingPathSum(vector<vector<int>>& matrix) {

    int n = matrix.size();

    vector<vector<int>> dp(n, vector<int>(n, INT_MIN));
        int mini = INT_MAX;
        for(int i = 0; i < n; i++) { 

            mini = min(mini, minFallingPathSumUtil(0, i, matrix, n, dp));
        }

        return mini;
 
        
    }
};