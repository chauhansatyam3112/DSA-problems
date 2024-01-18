 

class Solution {
   
public:
    
   #define ll long long
    
    ll dp[53];
    
 
    
    
void solve(ll n) {
    
    if (n == 0) {
        
        return;
    }

    if (n == 1) {
        
        
        dp[0]++;
        return;
        
    }

    if (n == 2) {
        
        dp[0]++;
        
        dp[1]++;
        
        return;
    }

    ll msb = log2(n);

    ll p = (1ll << msb);

    ll diff = (n - p + 1);

    dp[msb] += diff;

    for (int i = 0; i < msb; i++) {
        
        dp[i] += (p) / 2;
    }

    n = n - p;

    solve(n);
}

long long findMaximumNumber(long long k, int x) {
    
    ll left = 0, right = 1e15;

    ll res = 0;

    while (left <= right) {
        
        ll mid = left + (right - left) / 2;

         memset(dp,0,sizeof(dp));
        
        // dp.clear();
        

        solve(mid);

        ll ans = 0;

        for (int i = 0; i < 53; i++) {
            
            if ((i + 1) % x == 0)
                
                ans += dp[i];
        }

        if (ans <=k) {
            
            res = mid;
            
            left = mid + 1;
            
        } else {
            
            right = mid - 1;
        }
    }

    return res;
}
    
};