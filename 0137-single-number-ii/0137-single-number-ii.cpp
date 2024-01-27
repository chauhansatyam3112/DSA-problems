class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
       int ans=0;
           
        for(int i=0;i<32;i++)
        {
            int cnt=0;
            
            for(int j=0;j<nums.size();j++)
            {
                if(((nums[j]>>i)&1)==1)
                    
                    cnt++;
                
               cnt%=3;
                
            }
            
            if(cnt!=0)
            {
                ans=ans|(cnt<<i);
                
            }
            
        }
        return ans;
    }
};