class Solution {
public:
    
    int mod=1e9+7;
    
    int numberOfWays(string str) {
        
        vector<int>v;
        
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='S')v.push_back(i);
        }
        
        if(v.size()%2!=0 || v.size()==0)return 0;
        
        long long ans=1;
        
        int prev=v[1];
        
        for(int i=2;i<v.size();i+=2)
        {
            int diff=v[i]-prev;
            
            ans=(ans*diff)%mod;
            
            prev=(v[i+1]);
        }
        
        
        return int(ans);
        
        
        
    }
    
};