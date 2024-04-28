class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        
        
   unordered_map<int, unordered_set<int>> mp2;
    
    for (int i = 0; i < nums1.size(); i++) {
        
        unordered_set<int> mp1;
        
        for (int j = 0; j < nums2.size(); j++) {
            
            int diff = nums1[i] - nums2[j];
            
            if (mp1.find(diff) == mp1.end() && mp2[diff].find(i) == mp2[diff].end()) {
                
                
                mp1.insert(diff);
                
                mp2[diff].insert(i);
            }
        }
    }
    
    int ans = 0;
    
    for (auto it : mp2) {
        
        if (it.second.size() == nums1.size()) {
            
            ans = it.first;
            
            break;
        }
    }
    
    return ans*-1;
        
}
    
};