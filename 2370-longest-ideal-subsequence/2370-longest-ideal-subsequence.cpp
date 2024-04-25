class Solution {
public:
    int longestIdealString(string s, int k) {
     
        int n=s.length();
        
        vector<int>dp(26,0);
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            int maxi=0;
            
            for(char ch='a';ch<='z';ch++)
            {
                if(abs(s[i]-ch)<=k)
                {
                    maxi=max(maxi,1+dp[ch-'a']);
                }
            }
            
            dp[s[i]-'a']= maxi;
            
            ans=max(ans,maxi);
        }
        
        return ans;
    }
};