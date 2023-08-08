class Solution {
public:
    bool isPossible(int div,vector<int>&nums,int thresome)
    {
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            int p=(nums[i]+div-1)/(div);
            sum+=p;
        }
        return sum<=thresome;
        
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        
        int left=1,right=*max_element(nums.begin(),nums.end());
        
        while(left<right)
        {
            int mid=left+(right-left)/2;
            
            if(isPossible(mid,nums,threshold))
            {
                right=mid;
            }else left=mid+1;
        }
        return left;
    }
};