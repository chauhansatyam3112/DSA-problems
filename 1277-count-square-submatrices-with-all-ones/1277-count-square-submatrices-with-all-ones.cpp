class Solution {
public:
    int solve(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&dp)
    {
        if(i>=matrix.size()|| j>=matrix[0].size())
        {
            return 0;
        }
        
        if(matrix[i][j]==0)return 0;
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        } 
        
        
     
        
        int right=solve(i,j+1,matrix,dp);
        int down=solve(i+1,j,matrix,dp);
        int dig=solve(i+1,j+1,matrix,dp);
        
        
       return dp[i][j]=1+min({right,down,dig});
        
    }
    int countSquares(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        int ans=0;
            
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==1)
                {
                    ans+=solve(i,j,matrix,dp);
                }
            }
        }
        
        return ans;
        
    }
};