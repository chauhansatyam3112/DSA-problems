class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& nums, int k) {
        
        
        int n=nums.size();
        vector<int>dp(n+1,0);
        
        for(int idx=n-1;idx>=0;idx--)
        {
            int len=0, maxi=INT_MIN,ans=INT_MIN;
            
            for(int j=idx;j< min(idx+k,n);j++)
            {
                len++;
                
                maxi=max(maxi,nums[j]);
                
                int sum=len*maxi+dp[j+1];
                ans=max(ans,sum);
            }
            dp[idx]=ans;
        }
        
        return dp[0];
        
    }
};