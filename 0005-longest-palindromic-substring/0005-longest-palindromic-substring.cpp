class Solution {
public:
    bool solve(int i,int j,string &s,vector<vector<int>>&dp)
    {
        if(i>=j)
        {
            return 1;
        }
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        
        if(s[i]==s[j])
        {
            bool x=solve(i+1,j-1,s,dp);
            
            dp[i][j]=x;
        }
        
        
         else{
             return dp[i][j]=false;
             
         }   
        
        return dp[i][j];
        
        
        
    }
    
    string longestPalindrome(string s) {
        
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        
        int maxi=0;
        
        int start=0;
        
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                if(solve(i,j,s,dp))
                {
                    if(j-i+1>maxi)
                    {
                        maxi=j-i+1;
                        start=i;
                        
                    }
                }
            }
        }
        
        return s.substr(start,maxi);
    }
};