class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& q) {
        
        
        vector<bool> res;
        
        vector<int> v; 
        
      
        int p = (nums[0] % 2) ? 1 : 0;
        
        for (int i = 1; i < nums.size(); ++i) {
            
            if (nums[i] % 2) {
                
                if (p == 0) {
                    
                    
                    p = 1;
                    
                } else {
                    
                    v.push_back(i);
                }
            } else {
                
                if (p == 1) {
                    
                    p = 0;
                } else {
                    
                    v.push_back(i);
                }
            }
        }

       
        for (auto& it :q ) {
            
            int st = it[0], ed = it[1];
            
            int lb = upper_bound(v.begin(), v.end(), st) - v.begin();
            
          
            if (lb >= v.size() || v[lb] > ed) {
                
                res.push_back(true);
                
            } else {
                
                res.push_back(false);
            }
        }
        
        return res;
    
          
}
};