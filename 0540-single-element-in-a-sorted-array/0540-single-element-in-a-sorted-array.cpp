class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<h)
        {
            int mid=(l+h)/2;
            if(mid%2==0&& nums[mid]==nums[mid+1]|| mid%2==1&& nums[mid]==nums[mid-1])
            {
                l=mid+1;
            }else
            {
                h=mid;
            }
        }
        return nums[l];
    }
};