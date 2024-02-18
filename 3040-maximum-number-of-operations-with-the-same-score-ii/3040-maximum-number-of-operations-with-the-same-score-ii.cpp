class Solution {
public:
     int solve(int i, int j, int score1, vector<int>&nums, vector<vector<int>>&dp){
         
        if(i >= j || i > nums.size()-1 || j < 0) return 0;
         
        if(dp[i][j] != 1) return dp[i][j];
         
         
        int x1= 0;
         
        int x2 = 0;
         
        int x3= 0;
         
        if(nums[i] + nums[j] == score1 )
            
             x1 = 1 + solve(i+1, j-1, score1,  nums, dp);
         
        if(nums[i] + nums[i+1] == score1 )
            
            x2= 1 +solve(i+2, j, score1,  nums, dp);
         
        if(nums[j] + nums[j-1] == score1 )
            
            x3 = 1 + solve(i, j-2, score1,  nums, dp);
         
         
        return dp[i][j] =  max({x1,x2,x3});
        
    }
    
    int maxOperations(vector<int>& nums) {
        
        int i = 0;
        
        int j = nums.size()-1;
        
        int n = nums.size();
        
        int sum1 = nums[i] + nums[j];
        
        
        int sum2 = nums[i] + nums[i+1];
        
        int sum3= nums[j] + nums[j-1];
        
        vector<vector<int>>dp1(n, vector<int>(n, 1));
        
        vector<vector<int>>dp2(n, vector<int>(n, 1));
        
        vector<vector<int>>dp3(n, vector<int>(n, 1));
        
        int a = solve(i, j, sum1, nums, dp1);
        
        int b = solve(i, j, sum2,  nums, dp2);
        
        int c = solve(i, j, sum3,  nums, dp3);
        
        int ans = max(a, max(b, c));
        
        return ans;
    }
};