class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        map<int,int>rowzero,rowone,colzero,colone;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                {
                    rowzero[i]++;
                }
                
                else if(grid[i][j]==1)
                {
                    rowone[i]++;
                }
                
            }
            
        }
        for(int j=0;j<grid[0].size();j++)
        {
            for(int i=0;i<grid.size();i++)
            {
                if(grid[i][j]==1)
                {
                    colone[j]++;
                }
                else if(grid[i][j]==0)
                {
                    colzero[j]++;
                }
                
            }
            
        }
        // for(auto it:rowzero)cout<<it.first<<" "<<it.second<<" ";
        // for(auto it:rowone)cout<<it.first<<" "<<it.second<<" ";
        
    for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid[0].size(); j++) {
        grid[i][j] = rowone[i]+colone[j] - (rowzero[i]+colzero[j]);
    }
}

        return grid;
        
    }
};