class Solution {
public:
     const int mod = 1e9 + 7;

    int solve(int n, int k, int target, int cnt, int idx, vector<vector<int>>& dp) {
        
        if (target == 0 && cnt == n) {
            return 1;
        }

        if (cnt > n || target < 0) {
            return 0;
        }

        if (dp[cnt][target] != -1) {
            return dp[cnt][target];
        }

        int ans = 0;

        for (int i = 1; i <= k; i++) {
            ans = (ans + solve(n, k, target - i, cnt + 1, i, dp)) % mod;
        }

        return dp[cnt][target] = ans;
    }

    int numRollsToTarget(int n, int k, int target) {
        
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        
        return solve(n, k, target, 0, 0, dp);
    }
};