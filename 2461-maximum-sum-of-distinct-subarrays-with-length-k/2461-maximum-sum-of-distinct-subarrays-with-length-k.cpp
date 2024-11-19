class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
//         1,5,4,2,9,9,9, k=3
            
//             6,9,11,20
//             4,2,9,9
            
      unordered_map<int, int> mp; 
    int n = nums.size();
    long long sum = 0; 
    long long maxi = 0; 
    int i = 0, j = 0; 
    while (j < n) {
        
        sum += nums[j];
        mp[nums[j]]++;

       
        while (j - i + 1 > k) {
            sum -= nums[i];
            mp[nums[i]]--;
            if (mp[nums[i]] == 0) {
                mp.erase(nums[i]);
            }
            i++;
        }

        
        if (j - i + 1 == k && mp.size() == k) {
            maxi = max(maxi, sum);
        }

        j++; 
    }

    return maxi;
    }
};