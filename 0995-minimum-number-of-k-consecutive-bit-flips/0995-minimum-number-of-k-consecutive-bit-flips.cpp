class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        vector<int> flip(n, 0); 
        
        int flipCount = 0, result = 0;

        for (int i = 0; i < n; ++i) {
          
            if (i >= k) {
                
                flipCount ^= flip[i - k];
            }

           
            if (nums[i] == flipCount % 2) {
                
                if (i + k > n)
                    
                    return -1;

              
                flipCount++;
                
                flip[i] = 1; 
                
                
                result++;
            }
        }

        return result;
    
    }
};