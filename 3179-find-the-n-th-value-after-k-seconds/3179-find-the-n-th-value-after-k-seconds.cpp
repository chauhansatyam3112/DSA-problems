class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        
        int mod=1e9+7;
        
        vector<int>v(n,1);
        
        for(int i=0;i<k;i++)
        {
            for(int i=1;i<n;i++)
            {
                v[i]=(v[i-1]%mod+v[i]%mod)%mod;
                
            }
        }
        
        return v[n-1];
    }
};