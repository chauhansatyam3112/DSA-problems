class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        
       int m = matrix.size();
        
        int n = matrix[0].size();

        for (int i= 0; i < m; i++) {
            
            for (int j = 1; j< n; j++) {
                matrix[i][j] += matrix[i][j - 1];
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            
            for (int j = i; j < n; j++) {
                
                
                unordered_map<int, int> mp;
                
                int sum = 0;
               
                mp.insert({0,1});
                
                

                for (int k = 0; k < m; k++) {
                    
                    if(i<=0)
                    
                    sum += matrix[k][j] ;
                    
                        
                    else{
                        
                          sum += matrix[k][j]-matrix[k][i - 1] ;
                        
                    }    
                    
                    ans+= mp[sum - target];
                    
                    mp[sum]++;
                }
            }
        }

        return ans;
    
    }
};