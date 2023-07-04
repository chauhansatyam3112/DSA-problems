class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int majority=nums[0];
        int cnt=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==majority)
            {
                cnt++;
            }else
                cnt--;
            
            if(cnt<0)
            {
                cnt=0;
                majority=nums[i];
            }
        }
        return majority;
    }
};