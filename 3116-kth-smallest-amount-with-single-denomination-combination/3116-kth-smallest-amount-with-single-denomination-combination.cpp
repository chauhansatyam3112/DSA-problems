class Solution {
public:
    #define ll long long
    
    ll solve(vector<int>&coins,ll x)
    {
        ll m=coins.size();
        
        ll cnt=0;
        
        ll n=(1<<m)-1;
        
        for(int mask=1; mask<=n; mask++)
        {
            ll lcmm=1;
         
            for(int j=0;j<m;j++)
            {
                if(mask & (1<<j))
                {
                    lcmm=lcm(lcmm,coins[j]);
                }
            }
            
            int bits=(__builtin_popcount(mask));
            
            if(bits&1)
            {
                cnt+=(x)/lcmm;
                
            }
            
            else{
                cnt-=(x)/lcmm;
            }
            
        }
        
        return cnt;
    }
    
    
    long long findKthSmallest(vector<int>& coins, int k) {
        
        ll left=1, right=1e11;
        
        ll ans=0;
        
        while(left<=right)
        {
            ll mid=(left+right)/2;
            
            if(solve(coins,mid)<k)
            {
                left=mid+1;
            }
            
            else{
                
                right=mid-1;
                
                ans=mid;
            }
        }
        
        return ans;
        
    }
};