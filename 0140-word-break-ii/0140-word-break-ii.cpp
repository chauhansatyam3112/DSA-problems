class Solution {
public:
     vector<string> ans;
    
    void solve(int idx, unordered_set<string>& st, string& str, string current) {
        
        if (idx == str.length()) {
            
            
            ans.push_back(current);
            
            return;
        }
        
        string temp = "";
        
        for (int i = idx; i < str.length(); i++) {
            
            temp += str[i];  

            if (st.find(temp) != st.end()) {
                
                string newCurrent = current.empty() ? temp : current + " " + temp;
                
                solve(i + 1, st, str, newCurrent);
            }
        }
    }
    
    vector<string> wordBreak(string s, vector<string>& dict) {
        
        
        unordered_set<string> st(dict.begin(), dict.end());
        
        solve(0, st, s, "");
        
        return ans;
    }
};