class Solution {
public:
    
    int maxixx=-1,maxiyy=-1;
    
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<int>>&land)
    {
        vis[i][j]=1;
        
          int n=land.size();
        
        int m=land[0].size();
        
        
        
        vector<vector<int>>dir{{1,0},{-1,0},{0,1},{0,-1}};
        
        for(auto &it: dir)
        {
            int xx=i+it[0];
            
            int yy=j+it[1];
            
            if(xx>=0 && xx<n && yy>=0 && yy<m && !vis[xx][yy] && land[xx][yy]==1)
            {
                maxixx= max(maxixx,xx);
                
                maxiyy= max(maxiyy,yy);
                
                
                dfs(xx,yy,vis,land);
                
            }
        }
        
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
     
        int n=land.size();
        
        int m=land[0].size();
        
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && land[i][j]==1)
                {
                    vis[i][j]=1;
                    
                   
                    dfs(i,j,vis,land);
                    
                    if(maxixx==-1 && maxiyy==-1)
                    {
                        ans.push_back({i,j,i,j});
                    }
                     
                    else ans.push_back({i,j,maxixx,maxiyy});
                    
                    maxixx=-1,maxiyy=-1;
                }
            }
        }
        
        return ans;
        
    }
};