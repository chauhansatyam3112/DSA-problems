class Solution {
public:
    long long minEnd(int n, int x) {
        
        vector<int>v1(64,0);
        
        vector<int>v2(64,0);
        
        n--;
        
        
        for(int i=0;i<32;i++)
        {
            v1[i]=(x>>i)&1;
            
            v2[i]=(n>>i)&1;
            
        }
        
        int i=0,j=0;
        
        while(i<64)
        {
            if(v1[i]==1)
            {
                i++;
                continue;
            }
            
            v1[i]=v2[j];
            
            j++;
            i++;
        }
        
        long long ans=0;
        
        for(int i=0;i<64;i++)
        {
            ans+=(1LL<<i)*v1[i];
        }
        
        return ans;
    }
       
    
};
        