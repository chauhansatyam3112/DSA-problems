class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i , int j, vector<vector<int>>& vis)
    {
        int dr[4] = {-1,0,1,0};
        int dc[4] = {0,1,0,-1};
        int a = 0;
        for(int k=0;k<4;k++){
            int nr = dr[k] + i;
            int nc = dc[k] + j;
            if(nr>=0&&nr<grid.size() && nc>=0&&nc<grid[0].size() && grid[nr][nc] && !vis[nr][nc]){
                vis[nr][nc] = 1;
                int aa = grid[nr][nc] + dfs(grid, nr, nc, vis);
                a = max(a,aa);
                vis[nr][nc] = 0;
            }
        }
        return a;
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m));
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    vis[i][j]=1;
                    int aa = grid[i][j] + dfs(grid, i, j, vis);
                    ans = max(aa,ans);
                    vis[i][j]=0;
                }
            }
        }
        return ans;
    }
};