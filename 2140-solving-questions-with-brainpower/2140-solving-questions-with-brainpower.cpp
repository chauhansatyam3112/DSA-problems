class Solution {
public:
    #define ll long long
    
    int maxi=INT_MIN;
    ll solve(vector<vector<int>>&ques,int i,int n,vector<ll>&dp)
    {
        
        if(i>=n)return 0;
        
        if(dp[i]!=-1)return dp[i];
        
        
       ll x1= ques[i][0]+solve(ques,i+ques[i][1]+1,n,dp);
        
        ll x2= solve(ques,i+1,n,dp);
        
        return  dp[i]= max(x1,x2);
        
       
    }
    long long mostPoints(vector<vector<int>>& questions) {
        
        int i=0;
        int n=questions.size();
        vector<ll>dp(n,-1);
       
        
      return  solve(questions,i,n,dp);
    }
};