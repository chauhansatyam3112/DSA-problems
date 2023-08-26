class Solution {
public:
    int solve(vector<vector<int>>&pairs,vector<int>&v,int idx,vector<int>&dp)
    {
        if(idx>=pairs.size()) return 0;
        if(dp[idx]!=-1)return dp[idx];
        
    
        int take=0,nottake=0;
        
        nottake=solve(pairs,v,idx+1,dp);
        
        int val=pairs[idx][1];
        
        auto it=upper_bound(v.begin(),v.end(),val)-v.begin();
        
       
            
            take= 1+solve(pairs,v,it,dp);
        
        
        return dp[idx]=max(take,nottake);
      
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        
        sort(pairs.begin(),pairs.end());
        
        vector<int>dp(pairs.size(),-1);
        
        vector<int>v;
        
        for(int i=0;i<pairs.size();i++)
        {
            v.push_back(pairs[i][0]);
        }
        sort(v.begin(),v.end());
        
        return solve(pairs,v,0,dp);
    }
};