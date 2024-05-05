class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        
             unordered_map<string, int> mp;
            
        int i=0, n = word.size();
            
        for(i; i<n; i+=k){
                
            string tmp = word.substr(i, k);
                
            mp[tmp]++;
        }
        int maxi = 0;
            
        for(auto it: mp){
                
           maxi = max(maxi, it.second);
        }
            
        int ans = (n/k) - maxi;
            
        return ans;
    }
};