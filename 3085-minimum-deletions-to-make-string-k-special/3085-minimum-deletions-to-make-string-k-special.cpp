class Solution {
public:
    int solve(int i,int j,vector<vector<int>>&dp,vector<int>&v,int k)
    {
        if(i==j || v[j]-v[i]<=k)return 0;
        
        int x1=1e9;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        
        x1= v[i]+solve(i+1,j,dp,v,k);
        
        
        
        int x2=1e9;
        
        x2= v[j]-v[i]-k+solve(i,j-1,dp,v, k);
        
        return dp[i][j]=min(x1,x2);
        
    }
    
    int minimumDeletions(string word, int k) {
      
        vector<int>v(26,0);
        
        vector<vector<int>>dp(26,vector<int>(26,-1));
        
        for(auto it:word)
        {
            v[it-'a']++;
        }
        
        sort(v.begin(),v.end());
        
        return solve(0,25,dp,v,k);
        
    }
};