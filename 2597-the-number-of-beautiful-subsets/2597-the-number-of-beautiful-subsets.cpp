class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
       // vector<vector<int>>
          sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int result = 0;
        
        vector<int> cant_take_with(n, 0);
        for (int j = 0; j < n; j ++) {
            for (int i = 0; i < n; i ++) {
                if (abs(nums[i] - nums[j]) == k) cant_take_with[j] |= (1 << i);
            }
        }
        
        for (int sub = 1; sub < (1 << n); sub ++) {
            bool is_bad_subset = false;
            
            for (int i = 0; i < n; i ++) {
                if (((1 << i) & sub) == 0) continue;
                
                if (cant_take_with[i] & sub) {
                    is_bad_subset = true;
                }
            }

            if (!is_bad_subset) result ++;
        }
        
        return result;
        
    }
};