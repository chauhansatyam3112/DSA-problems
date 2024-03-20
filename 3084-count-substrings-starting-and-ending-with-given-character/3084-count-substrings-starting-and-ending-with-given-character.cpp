class Solution {
public:
    #define ll long long 

    long long countSubstrings(string s, char c) {
        
       ll cnt=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)
            {
                cnt++;
                
            }
        }
        
        ll ans=(cnt*(cnt-1)/2)+cnt;
        
        return ans;
        
        
    }
};