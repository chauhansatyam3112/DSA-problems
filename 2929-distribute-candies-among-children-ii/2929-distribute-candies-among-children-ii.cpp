class Solution {
public:
    long long distributeCandies(int n, int limit) {
        
        long long ans=0;
        
        int amin=max(0,n-2*limit),amax=min(n,limit);
        
        for(int i=amin;i<=amax;i++)
        {
           int  bmin=max(0,n-i-limit), bmax=min(limit,n-i);
            
            int range=bmax-bmin+1;
            
            ans+=range;
        }
        return ans;
    }
};