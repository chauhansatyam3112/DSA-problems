class Solution {
public:
    
    int MOD = 1e9+7;
    int solve(int n, int k, vector<vector<int>>&dp){
        
        if(n==0)return 0;
        
        if(k==0) return 1;
        
        if(dp[n][k] != -1) return dp[n][k];

        int ans = 0;
        
        for (int i = 0; i<=min(n-1,k); i++) {
            
            
            ans = (ans + solve(n - 1, k - i, dp)) % MOD;
        }

        return dp[n][k] = ans;
    }

public:
    int kInversePairs(int n, int k) {
        
        vector<vector<int>>dp(n+1, vector<int>(k+1, -1));
        
        return solve(n, k, dp);
    }
};