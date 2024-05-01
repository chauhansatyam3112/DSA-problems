class Solution {
    
    #define ll long long
    
    int mod=1000000007;
    
  public:
    
   vector<vector<vector<vector<int>>>> dp;

   ll solve(ll zero, ll one, ll conele, ll cnt, ll limit)
       
 {
    if (zero == 0 && one == 0) return 1;

    if (dp[zero][one][conele][cnt] != -1) return dp[zero][one][conele][cnt];

    ll ans = 0;

    if (zero > 0)
    {
        if (conele == 0 && cnt < limit)
        {
            ans = (ans + solve(zero - 1, one, 0, cnt + 1, limit)) % mod;

        }

        else if (conele == 1 || conele == 2)
        {
            ans = (ans + solve(zero - 1, one, 0, 1, limit)) % mod;
        }
    }

    if(one>0){

        if (conele == 1 && cnt < limit)
        {
            ans = (ans + solve(zero, one - 1, 1, cnt + 1, limit)) % mod;

        }

        else if (conele == 0 || conele == 2)
        {
            ans = (ans + solve(zero, one - 1, 1, 1, limit)) % mod;
        }
}
       
       
    
    
    return dp[zero][one][conele][cnt]=ans%mod;


      
    
}


 
    
    
    int numberOfStableArrays(int zero, int one, int limit) {
        
     dp = vector<vector<vector<vector<int>>>>(zero + 1, vector<vector<vector<int>>>(one + 1,
                                                                                  
     vector<vector<int>>(3, vector<int>(limit + 1, -1))));

      ll ans = solve(zero, one, 2, 0, limit);

      return int(ans) % mod;

        
    }
};