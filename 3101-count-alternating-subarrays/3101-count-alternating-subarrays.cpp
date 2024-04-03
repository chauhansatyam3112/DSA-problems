class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        
        int i=1,j=1;
        
        long long ans=0;
        
        int cnt=1;
        
        while(j<nums.size())
        {
            
            if(nums[j]==nums[j-1])
            {
                ans+=(1ll*cnt*1ll*(cnt+1))/2;
                cnt=1;
            }
              
            else
            {
                cnt++;
            }
            
            j++;
            
            i=j;
            
        }
        
         ans+=(1ll*cnt*1ll*(cnt+1))/2;
        
        return ans;
    }
};