class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        // 0 1
        // 1 1   
        
        int n=matrix.size(),m=matrix[0].size();
        
        unordered_map<string,int>mp;
        
        for(auto & row:matrix)
        {
            string s="";
            int temp=row[0];
            
            for(int col=0;col<m;col++)
            {
                s+=(row[col]==temp)?"S":"C";
                
            }
            mp[s]++;
        }
        int maxi=0;
        for(auto &it:mp){
            maxi=max(maxi,it.second);
        }
        return maxi;
    }
};