class Solution {
public:
    int appendCharacters(string s, string t) {
        
         unordered_map<char, vector<int>> mp;
    
    
    for (int i = 0; i < s.length(); ++i) {
        mp[s[i]].push_back(i);
    }

    int last_index = -1; 
    int i = 0;
    
    for (; i < t.length(); ++i) {
        char c = t[i];
        if (mp.find(c) != mp.end()) {
           
            auto &indices = mp[c];
            auto it = upper_bound(indices.begin(), indices.end(), last_index);
            
            if (it != indices.end()) {
                last_index = *it; 
            } else {
                break; 
            }
        } else {
            break; 
        }
    }
    
    
    int ans = t.length() - i;
    
    return ans;
}
    
};