class Solution {
public:
    vector<int> countOfPairs(int n, int x, int y) {
        
        
        vector<vector<int>>grid(n+1,vector<int>(n+1,100000));
        
        vector<int>ans(n);
        
        for(int i=1;i<n;i++)
        {
            grid[i][i+1]=1;
            grid[i+1][i]=1;
        }
        grid[x][y]=1;
        grid[y][x]=1;
        
        for(int k=1;k<=n;k++)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(i==j)
                    {
                       grid[i][j]=0;
                    }
                    else
                    
                    grid[i][j]=min(grid[i][j],grid[i][k]+grid[k][j]);
                    
                   
                }
            }
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==j)continue;
                
                int res=grid[i][j];
                
                ans[res-1]++;
                
                
            }
        }
        
        return ans;
        
        
       
    }
};