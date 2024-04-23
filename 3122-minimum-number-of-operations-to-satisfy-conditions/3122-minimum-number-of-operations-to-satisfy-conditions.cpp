class Solution {
public:
     int solve(int idx,int prev,vector<vector<int>>&grid,map<pair<int, int>, int>& mp,vector<vector<int>>&dp)
    {
       
        if(idx >= grid[0].size()) return 0;

        
        if(dp[idx][prev] != -1) return dp[idx][prev];

        int mini = INT_MAX;

      
        for(int i = 0 ; i <= 9 ; i++ ){
            
            if(i != prev){
                
                
                int ans = (int)(grid.size() - mp[{idx, i}]) + solve(idx+1,i,grid,mp,dp);
                
                mini = min(mini,ans);
            }
        }

       
        return dp[idx][prev] = mini;    
         
         
     }
    
    int minimumOperations(vector<vector<int>>& grid) {
        
        int n=grid.size(),m=grid[0].size();
        
        map<pair<int,int>,int>mp;
        
        vector<vector<int>> dp(m+1 , vector<int>(11 , -1));
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mp[{i,grid[j][i]}]++;
            }
        }
        
      return   solve(0,10,grid,mp,dp);
    }

    
};