class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        
        int res=nums[0];
       long int total=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            total+=nums[i];
            int temp=ceil((double)total/(i+1));
            res=max(res,temp);
        }
        return res;
     
    }
};