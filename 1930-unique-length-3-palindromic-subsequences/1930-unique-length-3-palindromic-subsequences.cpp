class Solution {
public:
    int countPalindromicSubsequence(string s) {
        
        
          unordered_map<char, int> first, last;

        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            
            if (first.find(s[i])==first.end()) {
                
                first[s[i]] = i;
                
            } else {
                
                last[s[i]] = i;
            }
        }

        for (auto& it : first) {
            
            char curr = it.first;

            if (last[curr] > first[curr]) {
                
                unordered_set<char> st;

                for (int j = first[curr] + 1; j < last[curr]; j++) {
                    
                    st.insert(s[j]);
                }

                ans += st.size();
            }
        }
        return ans;
    
    }
};