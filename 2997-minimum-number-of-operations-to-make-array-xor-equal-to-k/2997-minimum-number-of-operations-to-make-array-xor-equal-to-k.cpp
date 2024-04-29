class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int xorr=0;
        
        for(int i=0;i<nums.size();i++)
        {
            xorr^=nums[i];
        }
        
        if(xorr==k)return 0;
        
        
        int n = xorr^k;

    
       int cnt = 0;
        
      while (n) {
        
        cnt += n & 1;
        
        n >>= 1;  
      }

      return cnt;
        
    }
};