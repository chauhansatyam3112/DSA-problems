class Solution {
public:
    int mod=1e9+7;
    
    #define ll long long
    
    int solve(int m,int n,int i,int j,int maxi, vector<vector<vector<ll>>>&dp)
    {
        
        if((i>=m || j>=n) || (i<0 || j<0))
        {
            return 1;
        }
        
        if(maxi<=0)
        {
            return 0;
        }
        
        if(dp[i][j][maxi]!=-1) return dp[i][j][maxi];
        
        
        
        
        
        ll left=solve(m,n,i,j-1,maxi-1,dp);
        
       ll right= solve(m,n,i,j+1,maxi-1,dp);
        
        ll up= solve(m,n,i-1,j,maxi-1,dp);
        
       ll down= solve(m,n,i+1,j,maxi-1,dp);
        
         return dp[i][j][maxi]= (left%mod+right%mod+up%mod+down%mod)%mod;
        
        
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
      vector<vector<vector<ll>>> dp(m, vector<vector<ll>>(n, vector<ll>(maxMove+1, -1)));

        
        
        return solve(m,n,startRow,startColumn,maxMove,dp)%mod;
    }
};