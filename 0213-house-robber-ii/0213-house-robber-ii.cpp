class Solution {
public:
      int solve(int index,vector<int>&nums,vector<int>&dp){
       
        if(index==0) return nums[index] ; 
        if(index<0) return 0 ; 
        
        
        if(dp[index]!=-1) return dp[index] ;

        int pick = nums[index]  ;
         if(index>1) pick+=solve(index-2,nums,dp);
         
        int notpick = 0+solve(index-1,nums,dp);  

        return dp[index]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
       
        int n = nums.size();
        vector<int>dp(n-1,-1),dp2(n-1,-1); 
        if(n==1) return nums[0];
        int start=nums[0],end=nums[n-1];
       
        nums.pop_back();
        
        int ans1 = solve(n-2,nums,dp);
        
          for(int i=0;i<n-1;i++) dp[i]=-1;
        
        nums.push_back(end);
        
        nums.erase(nums.begin());
        
        int ans2 = solve(n-2,nums,dp);

        return max(ans1,ans2);

    }
};