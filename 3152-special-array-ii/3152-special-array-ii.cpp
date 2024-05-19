class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& q) {
        
         int n = nums.size();
        
        vector<int>idx;
        
        for(int i = 1; i < n; i++)
            
            if(nums[i] % 2 == nums[i-1] % 2)
                
                idx.push_back(i);
        
        int size =idx.size();
        
        vector<bool> ans(q.size(), true);
        
        if(size == 0) return ans;
        
        for(int i = 0; i < q.size(); i++) {
            
            if(q[i][1] == q[i][0]) continue;
            
            int lower = lower_bound(idx.begin(), idx.end(), q[i][0] + 1) -idx.begin();
            
            if(lower < size && idx[lower] <= q[i][1])  ans[i] = false;
        }
        
        return ans;
    
    }
};