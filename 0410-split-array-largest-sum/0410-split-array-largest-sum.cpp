class Solution {
public:
    bool feasible(int sum,int k,vector<int>&nums)
    {
        int p=1;
        
        int curr=0;
        
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            
            if(curr>sum)
            {
                curr=nums[i];
                p++;
            }
        }
        return p<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        
        
        int left=*max_element(nums.begin(),nums.end());
        int right=accumulate(nums.begin(),nums.end(),0);
        
        while(left<right)
        {
            int mid=left+(right-left)/2;
            
            if(feasible(mid,k,nums))
            {
                right=mid;
            }else{
                left=mid+1;
            }
        }
        return left;
        
    }
};