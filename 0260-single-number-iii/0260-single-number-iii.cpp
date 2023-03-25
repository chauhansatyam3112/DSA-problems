class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned long int xorr=0;
        for(int i=0;i<nums.size();i++)
        {
            xorr^=nums[i];
        }
         unsigned long int cnt=0;
        while(xorr)
        {
            if(xorr & 1)
            {
                break;
            }
            cnt++;
            xorr=xorr>>1;
        }
   
         unsigned long int xorr1=0,xorr2=0;
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i] & 1<<cnt)
                
                xorr1^=nums[i];
            
            else
                xorr2^=nums[i];
                 
        }
       
        vector<int>ans;
       ans.push_back(xorr1);ans.push_back(xorr2);
        return ans;
        
    }
};