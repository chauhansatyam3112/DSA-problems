class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        
        int ans=0;
        
        int n=grid.size(),m=grid[0].size();
        
        ans+=(1<<(m-1))*n;
        
        for(int j=1;j<m;j++)
        {
            int cnt=0;
            
            for(int i=0;i<n;i++)
            {
                if(grid[i][0]==0)
                {
                    cnt+=(grid[i][j]^1);
                }
                else{
                    cnt+=(grid[i][j]);
                }
            }
            
            int p=(n-cnt);
            
            if(p>cnt)
            {
                ans+= (1<<(m-1-j))*p;
            }
            
            else{
                ans+=(1<<(m-1-j))*cnt;
            }
        }
        
        return ans;
    }
};