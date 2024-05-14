class Solution {
public:
    vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int dfs(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& visited) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0 || visited[i][j]) {
            return 0;
        }
        
        visited[i][j] = true;
        int maxGold = 0;
        
        for (auto& dir : directions) {
            int x = i + dir[0];
            int y = j + dir[1];
            maxGold = max(maxGold, grid[i][j] + dfs(x, y, grid, visited));
        }
        
        visited[i][j] = false; // Backtrack
        
        return maxGold;
    }

public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int maxGold = 0;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] > 0) {
                    maxGold = max(maxGold, dfs(i, j, grid, visited));
                }
            }
        }
        
        return maxGold;
    }
};