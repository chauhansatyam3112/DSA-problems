class Solution {
public:
   vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void solve(int i, int j, vector<vector<int>>& newGrid) {
    if (i < 0 || j < 0 || i >= newGrid.size() || j >= newGrid[0].size() || newGrid[i][j] == 0) {
        return;
    }
    
    newGrid[i][j] = 0;  
    
    for (auto &it : dir) {
        int x = it[0] + i;
        int y = it[1] + j;
        
        if (x >= 0 && y >= 0 && x < newGrid.size() && y < newGrid[0].size() && newGrid[x][y] == 1) {
            solve(x, y, newGrid);
        }
    }
}

int regionsBySlashes(vector<string>& grid) {
    
    int n = grid.size();
    
    vector<vector<int>> newGrid(n * 3, vector<int>(n * 3, 1));
    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            
            if (grid[i][j] == '/') {
                
                newGrid[3 * i][3 * j + 2] = newGrid[3 * i + 1][3 * j + 1] = newGrid[3 * i + 2][3 * j] = 0;
                
            } else if (grid[i][j] == '\\') {
                
                newGrid[3 * i][3 * j] = newGrid[3 * i + 1][3 * j + 1] = newGrid[3 * i + 2][3 * j + 2] = 0;
            }
        }
    }
    
    int ans = 0;
    
    for (int i = 0; i < 3 * n; i++) {
        
        for (int j = 0; j < 3 * n; j++) {
            
            if (newGrid[i][j] == 1) {
                
                ans++;
                
                solve(i, j, newGrid);
            }
        }
    }
    
    return ans;
}

};