class Solution {
public:
    int countWays(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        
        int cnt=0;
        int flag=false;
        
        if(nums[0]>0) cnt++;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<=i && (nums[i+1]>i+1)){
                cnt++;
//                 flag=true;
              
            }
         
        }
        if(nums[nums.size()-1]<=nums.size()-1)cnt++;
        return cnt;
    }
};