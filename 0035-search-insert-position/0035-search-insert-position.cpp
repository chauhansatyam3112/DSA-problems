class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        //return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        
        int low=0;int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(nums[mid]==x)
                return mid;
            else if(nums[mid]>x) high=mid-1;
            else{
                low=mid+1;
            }
        }return low;
        
        
    }
};