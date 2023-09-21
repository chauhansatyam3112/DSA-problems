class Solution {
public:
    int beautySum(string s) {
    int ans = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        
        unordered_map<char, int> mp;
        
        for (int j = i; j < n; j++) {
            
            mp[s[j]]++;
            
            int mostFreq = 0, leastFreq = INT_MAX;
            
            for (const auto& it : mp) {
                
                mostFreq = max(mostFreq, it.second);
                
                leastFreq = min(leastFreq, it.second);
            }
            ans += (mostFreq - leastFreq);
        }
    }

    return ans;
}

};