class Solution {
public:
    
    bool solve(int i, int j, vector<vector<int>>& grid) {
        
        
         for(int row = i ; row <= i+2 ;row++)
        {
            for(int col = j ; col <= j+2 ;col++)
            {
                if(grid[row][col] < 1 || grid[row][col] > 9)
                {
                    return false;
                }
            }
        }

     
        vector<bool>distinct(9,false);
        
        for(int row = i ; row <= i+2 ;row++)
        {
            for(int col = j ; col <= j+2 ;col++)
            {
                int num=grid[row][col];
                if(distinct[num - 1])
                {
                    return false;
                }
                distinct[num - 1] = true;
            }
        }
        
        
    int n = grid.size(), m = grid[0].size();
    int prev = 0, sum = 0;
    
    
    if (n - i >= 3 && m - j >= 3) {
        
   
        for (int k = i; k < i + 3; k++) {
            sum = 0;
            for (int l = j; l < j + 3; l++) {
                sum += grid[k][l];
            }
            if (k != i && sum != prev) {
                return false;
            }
            prev = sum;
        }
        
       
        for (int l = j; l < j + 3; l++) {
            sum = 0;
            for (int k = i; k < i + 3; k++) {
                sum += grid[k][l];
            }
            if (sum != prev) {
                return false;
            }
        }
        
        
        sum = 0;
        for (int k = 0; k < 3; k++) {
            sum += grid[i + k][j + k];
        }
        if (sum != prev) {
            return false;
        }
        
 
        sum = 0;
        for (int k = 0; k < 3; k++) {
            sum += grid[i + k][j + 2 - k];
        }
        if (sum != prev) {
            return false;
        }
        
        return true;
    }
    
    return false;
}

int numMagicSquaresInside(vector<vector<int>>& grid) {
    int cnt = 0;
    
    if(grid.size()<3)
    {
        return 0;
    }
    for (int i = 0; i <= grid.size() - 3; i++) {
        for (int j = 0; j <= grid[0].size() - 3; j++) {
            if (solve(i, j, grid)) {
                cnt++;
            }
        }
    }
    
    return cnt;
}
};