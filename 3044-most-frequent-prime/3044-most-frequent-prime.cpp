class Solution {
public:
    
  unordered_map<int, int> mp;

vector<int> dx = {0, 0, 1, -1, 1, -1, 1, -1};
    
vector<int> dy = {1, -1, 0, 0, 1, -1, -1, 1};

bool isPrime(int n) {
    
    if (n <= 1)
        
        return false;
    
    if (n <= 3)
        
        return true;

    
    if (n % 2 == 0 || n % 3 == 0)
        
        return false;

    int root = sqrt(n) + 1;
    
    for (int i = 5; i <= root; i += 6) {
        
        if (n % i == 0 || n % (i + 2) == 0)
            
            return false;
    }

    return true;
}

void solve(int i, int j, int k, int num, int n, int m, vector<vector<int>>& mat) {
    
    if (i >= n || j >= m || i < 0 || j < 0)
        
        return;

    num = 1LL * num * 10 + mat[i][j];

    if (num > 10 && isPrime(num)) {
        
        mp[num]++;
    }

    solve(i + dx[k], j + dy[k], k, num, n, m, mat);
}

int mostFrequentPrime(vector<vector<int>>& mat) {
    
    int n = mat.size();
    int m = mat[0].size();

    mp.clear(); 

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < m; j++) {
            
            for (int k = 0; k < 8; k++) {
                
                int num = 0;
                
                solve(i, j, k, num, n, m, mat);
            }
        }
    }

    int maxi = 0;
    int ans = 0;

    for (auto it : mp) {
        maxi = max(maxi, it.second);
    }

    if (maxi == 0)
        return -1;

    for (auto it : mp) {
        if (it.second == maxi) {
            ans = max(ans, it.first);
        }
    }

    return ans;

        
    }
};