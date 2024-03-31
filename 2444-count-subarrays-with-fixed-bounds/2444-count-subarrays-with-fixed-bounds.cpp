class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        
        int minidx=-1,maxidx=-1,idx=-1;
        
        long long ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<minK or nums[i]>maxK)
                idx=i;
            
            if(nums[i]==minK)
                minidx=i;
            
            if(nums[i]==maxK)
                maxidx=i;
            
            long long mini=min(minidx,maxidx);
            
            long long temp=mini-idx;
            
            if(temp<=0)
            {
                ans+=0;
            }
            
            else{
                ans+=temp;
            }
        }
        return ans;
    }
};