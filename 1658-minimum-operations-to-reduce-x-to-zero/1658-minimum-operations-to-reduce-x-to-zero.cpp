class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int ans=INT_MAX;
        
        int presum=0;
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            presum+=nums[i];
            
            mp[presum]=i+1;
            if(presum==x)
            {
                ans=min(ans,i+1);
            }
        }
        
        int n=nums.size();
      int  suffix_sum=0;
        for(int i=n-1;i>=0;i--)
        {
            suffix_sum+=nums[i];
            
            if(suffix_sum==x)
            {
                ans=min(ans,n-i);
            }
            if(mp[x-suffix_sum] >0 && i+1>mp[x-suffix_sum] )
            {
                ans=min(ans,n-i+mp[x-suffix_sum]);
            }
            
            
        }
        return ans==INT_MAX?-1:ans;
    }
};