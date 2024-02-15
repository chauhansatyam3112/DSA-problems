class Solution {
public:
    #define ll long long
    
    long long largestPerimeter(vector<int>& nums) {
        
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        ll ans=0;
        
        vector<ll>prefix(n);
        
        prefix[0]=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=nums[i]+prefix[i-1];
        }
        
        for(int i=2;i<n;i++)
        {
            if(nums[i]<prefix[i-1])
            {
                ans=max(ans,prefix[i]);
            }
        }
        
       return ans==0?-1:ans;
        
        
        
    }
};