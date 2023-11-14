class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
        
   
      int s = values.size(), i= values[0].size();
        
        vector<long long> tmp;
        
        for(int j=0; j<s; j++){
            
            for(int k=0; k<i; k++){
                
                tmp.push_back(values[j][k]);
            }
        }
        
        sort(tmp.begin(), tmp.end());
        
        long long ans=0;
        
        long long d=1;
        
        for(int j=0; j<tmp.size(); j++){
            
            ans += d*tmp[j]; 
            
            d++;
        }
        return ans;
    }
        
    
};