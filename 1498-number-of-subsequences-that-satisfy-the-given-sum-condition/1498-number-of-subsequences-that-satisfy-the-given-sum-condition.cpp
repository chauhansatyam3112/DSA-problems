class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
           sort(nums.begin(), nums.end());
        
        
        int L = nums.size();
        
        int left = 0, right = L - 1;
        
        int result = 0;
        int mod = 1000000007;

        vector<int> power(L);

        power[0] = 1;
        for(int i = 1; i < L; i++)
        {
                power[i] = (power[i - 1]*2) % mod;
        }

        while (left <= right)
        {
                if (nums[left] + nums[right] <= target)
                {
                    result = (result + power[right - left]) % mod;
                    left++;
                }
                else
                {
                    right--;
                }
        }
        return result;       
        

    }
};