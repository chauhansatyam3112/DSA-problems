class Solution {
public:
    
    int solve(string &s,vector<int>&dp,int idx,int n)
    {
        if(idx==n)return 0;
        
        int ans = INT_MAX/2;
        
        if(dp[idx]!=-1)return dp[idx];
        
        
        vector<int>v(26,0);
        
        for(int i=idx;i<n;i++)
        {
            v[s[i]-'a']++;
            
            int mini=INT_MAX,maxi=INT_MIN;
            
            for(int j=0;j<26;j++)
            {
                 if(v[j]>0)
                
                {
                
                maxi=max(maxi,v[j]);
                
                mini=min(mini,v[j]);
                
                }
            }
            
            if(maxi==mini)
            {
                ans=min(ans,1+solve(s,dp,i+1,n));
            }
        }
        
        return dp[idx]=ans;
    }
    
    
    int minimumSubstringsInPartition(string s) {
        
        int n=s.length();
        
        vector<int>dp(n,-1);
        
        return solve(s,dp,0,n);
    }
};