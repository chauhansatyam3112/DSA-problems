class Solution {
public:
    vector<vector<int>>zero,extra;
    int res;
    
    void solve(int idx,int cnt)
    {
        
        
        if(idx>=zero.size())
        {
            res=min(cnt,res);
            return;
        }
        
        
        
        
        for(int i=0;i<extra.size();i++)
        {
            if(extra[i][2]==0)continue;
            
            extra[i][2]--;
            
            solve(idx+1,abs(extra[i][0]-zero[idx][0])+abs(extra[i][1]-zero[idx][1])+cnt);
            
            extra[i][2]++;
        }
    }
    int minimumMoves(vector<vector<int>>& grid) {
        
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(grid[i][j]==0)
                {
                    zero.push_back({i,j});
                }
               else if(grid[i][j]>1)
                {
                    extra.push_back({i,j,grid[i][j]-1});
                }
            }
        }
        res=INT_MAX;
        
        solve(0,0);
        return res;
        
        
        
    }
};