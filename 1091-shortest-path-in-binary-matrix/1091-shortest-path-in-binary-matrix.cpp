class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
    int n = grid.size();
        
    int m = grid[0].size();
    
    
    if (grid[0][0] == 1 || grid[n-1][m-1] == 1) return -1;

    queue<pair<int, pair<int, int>>> q;
        
    q.push({1, {0, 0}}); 
    
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        
    dist[0][0] = 1;
    
    vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    
    while (!q.empty()) {
        
        int d = q.front().first;
        int x = q.front().second.first;
        int y = q.front().second.second;
        q.pop();
        
      
        if (x == n - 1 && y == m - 1) return d;
        
        for (auto dir : directions) {
            int r = x + dir[0];
            int c = y + dir[1];
            
            if (r >= 0 && r < n && c >= 0 && c < m && grid[r][c] == 0 && d + 1 < dist[r][c]) {
                dist[r][c] = d + 1;
                q.push({d + 1, {r, c}});
            }
        }
    }
    return -1;
    }
};