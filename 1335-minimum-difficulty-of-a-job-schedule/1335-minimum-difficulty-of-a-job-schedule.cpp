class Solution {
public:
     int solve(vector<int>& nums, int d, int idx, vector<std::vector<int>>& dp) {
         
        if (d > nums.size() - idx) return INT_MAX;
         
        if (d == 0) {
        
            if (idx == nums.size()) return 0;
            
            return INT_MAX;
        }

        if (dp[idx][d] != -1) {
            
            
            return dp[idx][d];
        }

        int maxi = nums[idx];
         
        int res = INT_MAX;

        for (int i = idx; i < nums.size(); ++i) {
            
            maxi = max(maxi, nums[i]);

            long long difficulty = static_cast<long long>(maxi) + solve(nums, d - 1, i + 1, dp);

            if (difficulty <= INT_MAX) {
                
                res = min(res, static_cast<int>(difficulty));
            }
        }

        dp[idx][d] = res;
         
        return res;
    }

    int minDifficulty(vector<int>& nums, int d) {
        
        int n = nums.size();
        
        
        vector<vector<int>> dp(n, vector<int>(d + 1, -1));
            
        int result = solve(nums, d, 0, dp);
        
        return (result == INT_MAX) ? -1 : result;
    
    }
};