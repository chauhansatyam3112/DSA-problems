class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int cnt=0;
        
       unordered_map<int,vector<int>>mp1,mp2;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                mp1[i].push_back(grid[i][j]);
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                mp2[i].push_back(grid[j][i]);
            }
        }
        for(int i=0;i<mp1.size();i++)
        {
            for(int j=0;j<mp2.size();j++)
            {
                vector<int>v1=mp1[i];
                vector<int>v2=mp2[j];
                if(v1==v2)
                {
                    cnt++;
                }
        
            }
        }
        return cnt;
    }
};