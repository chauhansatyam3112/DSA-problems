class Solution {
public:
     int solve(vector<int> &nums, int n, int index, int target, int sum, vector<vector<int>> &dp){
        if(sum == target) return 0;
         
        if(index >= n) return INT_MIN;
         
        if(sum > target) return INT_MIN;
         
        if(dp[index][sum]!=-1) return dp[index][sum];
         
        int length = INT_MIN;
         
        int take = solve(nums,n,index+1,target,sum+nums[index],dp);
         
        int noTake = solve(nums,n,index+1,target,sum,dp);
         
        if(take!=INT_MIN) length = max(length,1+take);
         
         
        if(noTake!=INT_MIN) length = max(length,noTake);
         
        return dp[index][sum]=length;
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n = nums.size();
        
        vector<vector<int>> dp(n,vector<int>(target,-1));
        
        int ans = solve(nums,n,0,target,0,dp);
        
        if(ans!=INT_MIN) return ans;
        
        return -1;
    }
};