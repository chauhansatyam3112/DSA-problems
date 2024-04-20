class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n=grid.size(),m=grid[0].size();
        
        int cnt=0;
        
        queue<pair<int,int>>q;
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++ )
            {
                
                if((i==0 or j==0 or i==n-1 or j==m-1) && grid[i][j]==1)
                {
                    
                    q.push({i,j});
                    
                    vis[i][j]=1;
                    
                }
            }
        }
        
        vector<vector<int>>dir{{1,0},{-1,0},{0,1},{0,-1}};
        
        while(!q.empty())
        {
            auto x=q.front().first;
            
            auto y=q.front().second;
            
            q.pop();
            
            for(auto &it :dir)
            {
                int xx=it[0]+x;
                int yy=it[1]+y;
                
                if(xx>=0 && xx<n && yy>=0 && yy<m && !vis[xx][yy] && grid[xx][yy]==1)
                {
                    q.push({xx,yy});
                    
                    vis[xx][yy]=1;
                }
            }
            
            
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]==1)
                   cnt++; 
            }
        }
        
        return cnt;
    }
};