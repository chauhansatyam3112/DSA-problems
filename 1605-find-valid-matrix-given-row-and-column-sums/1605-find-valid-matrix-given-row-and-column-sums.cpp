class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        
        vector<vector<int>>v(rowSum.size(),vector<int>(colSum.size(),0));
        
       for(int i=0;i<v.size();i++)
       {
           for(int j=0;j<v[0].size();j++)
           {
               v[i][j]=min(rowSum[i],colSum[j]);
               
               rowSum[i]-=v[i][j];
               colSum[j]-=v[i][j];
               
           }
       }
        
        return v;
        
    }
    
};