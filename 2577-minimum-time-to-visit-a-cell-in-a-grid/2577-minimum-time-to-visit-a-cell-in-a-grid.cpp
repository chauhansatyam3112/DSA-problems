class Solution {
public:
    vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};       
    
    int minimumTime(vector<vector<int>>& grid) {
        
        
        
        
        int n=grid.size(),m=grid[0].size();
        
        
        if(grid[0][1]>1 and grid[1][0]>1)return -1;
        
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        
        priority_queue<vector<int>,vector<vector<int>>,greater<>>pq;
        
        pq.push({0,0,0});
        
        // vis[0][0]=true;
        
        
        while(!pq.empty())
        {
            auto time=pq.top()[0]; auto x=pq.top()[1];auto y=pq.top()[2];
            
            pq.pop();
            
            if(x==n-1 && y==m-1)return time;
            
            if(vis[x][y])continue;
            
            vis[x][y]=true;
            
            
            for(const auto &it:directions)
            {
              int  xx=x+it[0];
                
               int  yy=y+it[1];
                
                
                
                
              if (xx < 0 || xx >=n || yy < 0 || yy >= m || vis[xx][yy]) {
                    continue;
                }
                
                bool wait = (grid[xx][yy] - time) % 2 == 0;
                
                int p = max(grid[xx][yy] + wait, time + 1);
                
                pq.push({p, xx, yy});
            
                
                
            }
            
            
        }
        
        return -1;
        
      
        
    }
};