class Solution {
public:
    
    vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
    
 int solve(int i, int j, vector<vector<int>> &grid, int n, int m, vector<vector<bool>> &vis) {
     
        int maxi = 0;
     
        vis[i][j] = true;   
    
    for (auto &it : directions) {
        
            int x = it[0] + i;
        
            int y = it[1] + j;

            if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != 0 && !vis[x][y]) {
                
                int ans = grid[x][y] + solve(x, y, grid, n, m, vis);
                
                maxi = max(ans, maxi);
            }
        }

        vis[i][j] = false; 
    
        return maxi;
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        
        int n=grid.size(),m=grid[0].size();
        
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        
        int maxi=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                {
                    
                    maxi=max(maxi,grid[i][j]+solve(i,j,grid, n,m,vis));
                }
            }
        }
        
       return maxi;
    }
};