class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int pro=1;
        int j=0;
        
        int cnt=0;
                
        
        for(int i=0;i<nums.size();)
        {
            pro*=nums[i];
            
            while(j<=i && pro>=k)
            {
                pro/=nums[j];
                j++;
            }
            
            cnt+=(i-j+1);
            
            i++;
            
            
            
            
            
        }
        
        return cnt;
    }
};