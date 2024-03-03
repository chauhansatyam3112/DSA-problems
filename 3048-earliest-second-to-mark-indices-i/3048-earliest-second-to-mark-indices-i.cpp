class Solution {
public:
    
    bool isPossible(vector<int>& nums, vector<int>& temp, int s) {
        
        int n = nums.size();
        
        vector<int> lastIdx(n, -1);
        
        int size = min(s, (int)temp.size() - 1);
        
        
        for (int i = 0; i <= size; i++) {
            
            lastIdx[temp[i]] = i;
        }
        
        int cnt = 0, power = 0;
        
        
        
        for (int i = 0; i <= s; i++) {
            
            if (i == lastIdx[temp[i]]) {
                
                if (nums[temp[i]] > power)
                    
                    return false;
                
                power -= nums[temp[i]];
                
                cnt++;
                
            } else {
                
                power++;
            }
        }
        
        return cnt == n;
    }
     
    int earliestSecondToMarkIndices(vector<int>& nums, vector<int>& changeIndices) {
        
        
        int n = nums.size(), m = changeIndices.size();
        

        vector<int> temp = changeIndices;
        
        for (auto& index : temp) {
            
            index--; 
        }
        
        int low = 0, high = m - 1;
        int ans = -1;
        
        while (low <= high) {
            
            int mid = low + (high - low) / 2;
            
            
            if (isPossible(nums, temp, mid)) {
                
                ans = mid + 1;
                
                high = mid - 1;
                
            } else {
                
                low = mid + 1;
            }
        }
        
        return ans;
    }
};