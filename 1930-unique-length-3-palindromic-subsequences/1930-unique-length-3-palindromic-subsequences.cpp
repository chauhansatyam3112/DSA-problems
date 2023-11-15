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
            char currentChar = it.first;

            if (last[currentChar] > first[currentChar]) {
                unordered_set<char> st;

                for (int j = first[currentChar] + 1; j < last[currentChar]; j++) {
                    st.insert(s[j]);
                }

                ans += st.size();
            }
        }
        return ans;
    
    }
};