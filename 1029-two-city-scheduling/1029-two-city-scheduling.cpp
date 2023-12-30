class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        
        int n = costs.size();
        
        int sum = 0;
        
        vector<pair<int,int>> v;
        
        for(int i =0;i<n;i++){
            
            v.push_back({costs[i][0]-costs[i][1] , i});
        }
        
        sort(v.begin(),v.end());
        
        for(int i = 0;i<n;i++){
            
            if(i<n/2)
                
              sum += costs[v[i].second][0];
            
            else
                
              sum += costs[v[i].second][1];
        }
        return sum;
    }
};