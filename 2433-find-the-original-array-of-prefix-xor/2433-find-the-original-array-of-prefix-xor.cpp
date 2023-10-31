class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        
        int xorr=pref[0];
        
        vector<int>ans;
        
        ans.push_back(pref[0]);
        
        int res=pref[0];
        
        for(int i=1;i<pref.size();i++)
        {
            xorr=res^pref[i]; 
            
            ans.push_back(xorr);
            
            res^=ans.back();
        }
        return ans;
    }
};