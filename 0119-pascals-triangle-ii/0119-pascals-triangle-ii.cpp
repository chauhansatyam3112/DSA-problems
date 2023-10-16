class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>>v;
        
        v.push_back({1});
        v.push_back({1,1});
        
      
        
        for(int i=2;i<rowIndex+1;i++)
        {
            vector<int>temp(i+1,1);
            
            int n=i+1;
            
            for(int j=1;j<n-1;j++)
            {
                temp[j]=v[i-1][j-1]+v[i-1][j];
            }
            v.push_back(temp);
       
        }
        vector<int>ans=v[rowIndex];
        return ans;
    }
};