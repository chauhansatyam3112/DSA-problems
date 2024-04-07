class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
          // [1,4,3,3,2]
          // 3 2 1
        
        int maxi=0;
        
        
        if(nums.size()==1)return 1;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            int cnt1=1;
            
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]>nums[j-1])
                {
                    cnt1++;
                }
                
                else{
                    break;
                }
               
                   
                
                
            }
            
             maxi=max(maxi,cnt1);
            
            
        }
        // 3 2 1
        
        int maxi1=0;
        
         for(int i=0;i<nums.size()-1;i++)
        {
            int cnt2=1;
            
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[j-1])
                {
                    cnt2++;
                }
                
                else{
                    break;
                }
               
            }
             
              maxi1=max(maxi1,cnt2);
            
            
        }
        
        return max(maxi,maxi1);
        
    }
};