class Solution {
public:
    
    int mod=1e9+7;
    
    int countHomogenous(string s) {
        
        int i=0,j=0;
        
       int  ans=0;
        
        while(i<=j && j<s.length())
        {
            while(s[i]==s[j])
            {
                j++;
            }
            
            int  len=(j-i);
            
            if (len & 1) {
                
        ans = (ans + 1LL * len * (len - len / 2)) % mod;
                
    } else {
        ans = (ans + 1LL * len * (len / 2) + len / 2) % mod;
    }
            i=j;
            
        }
        
        
        cout<<ans;
        
        return (ans)%mod;
    }
};