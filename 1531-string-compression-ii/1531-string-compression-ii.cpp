 int dp[101][27][101][101];

class Solution {
    
public:
   
    unordered_set<int> st = {1, 9, 99};

    int solve(string &str, int idx, char ch, int cnt, int k) {
        
        if (k < 0) return 1e9;  

        if (idx==str.length()) return 0;

        int &ans = dp[idx][ch-'a'][cnt][k];

        if (ans != -1) return ans;

        int take;

        if (ch == str[idx]) {
            
            take = solve(str, idx + 1, str[idx], cnt + 1, k) + (st.count(cnt) ? 1 : 0);
            
        } else {
            
            take = solve(str, idx + 1, str[idx], 1, k) + 1;
        }

       int nottake = solve(str, idx + 1, ch, cnt, k - 1);

        ans =min(take, nottake);

        return ans;
    }

    int getLengthOfOptimalCompression(string s, int k) {
        
        memset(dp, -1, sizeof(dp));

        return solve(s, 0, 'z'+1, 0, k);
    

    }
};