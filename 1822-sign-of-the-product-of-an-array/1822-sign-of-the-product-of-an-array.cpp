class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        
        int negative_cnt=0;
        int positive_cnt=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                negative_cnt++;
            if(nums[i]>0)
                positive_cnt++;
            if(nums[i]==0)
                return 0;
        }
        if(negative_cnt%2==0)
            return 1;
        else
            return -1;
    }
};