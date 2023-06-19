class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n=gain.size();
        
        vector<int>ans(n+1,0);
        
        
        for(int i=0;i<gain.size();i++)
        {
            ans[i+1]=ans[i]+gain[i];
        }
        
        int res=*max_element(ans.begin(),ans.end());
        return res; 
    }
};