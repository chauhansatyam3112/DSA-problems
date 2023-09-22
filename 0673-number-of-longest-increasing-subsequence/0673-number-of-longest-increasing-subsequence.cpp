class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        
        
        int n=nums.size();
        
        vector<int>dp(n,1),cnt(n,1);
        int maxi=1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i] && 1+dp[j]>dp[i])
                {
                    cnt[i]=cnt[j];
                    dp[i]=1+dp[j];
                }
                else if(nums[i]>nums[j] && 1+dp[j]==dp[i])
                    {
                    cnt[i]+=cnt[j];
                }
            }
            maxi=max(maxi,dp[i]);
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(dp[i]==maxi)res+=cnt[i];
        }
        return res;
    }
};