class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0;
        int i=0;
        int sum=0;
        int mini1=INT_MAX;
         int mini2=INT_MAX;
        
        
        while(i<nums.size() && j<nums.size())
        {
            sum+=nums[j++];
            
            while(sum>=target){
            
           mini1=min(mini1,j-i);
            
            sum-=nums[i++];
           
               }
            
        }
        return mini1==INT_MAX?0:mini1;
        
    }
            
          
    
};