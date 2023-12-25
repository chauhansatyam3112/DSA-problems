class Solution {
public:
     int solve(string str, int idx,vector<int>&dp) {
         
       if (idx==str.length()) {
            return 1;
        }

        if (str[idx] == '0') {
            
            return 0;
        }
         
         if(dp[idx]!=-1)return dp[idx];

        int ans=0;

        if (str[idx + 1] != '0') {
            
            ans=solve(str, idx + 1,dp);
        }

        if (idx + 1 < str.length() && stoi(str.substr(idx, 2)) <= 26) {
            
            ans+=solve(str, idx + 2,dp);
        }

        return dp[idx]=ans;
    }

    int numDecodings(string s) {
        
        vector<int>dp(s.length()+1,-1);
        
        if (s[0] == '0') {
            return 0;
        }
        return solve(s, 0,dp);
    
    }
};