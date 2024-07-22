class Solution {
public:
  
#define ll long 
    
 ll solve(vector<ll>& dp, map<int, int>&mp, vector<int>&v, int index) {
     
        if (index == v.size()) return 0;
     
        if (dp[index] != -1) return dp[index];
     
        
        ll skip = solve(dp,mp, v, index + 1);
     
        
        ll take = 0;
     
     
        int nextIndex = index + 1;
     
        while (nextIndex < v.size() && v[nextIndex] - v[index] <= 2) {
            nextIndex++;
        }
     
        take = ((1ll)*mp[v[index]] *v[index]) +solve(dp, mp,v, nextIndex);
     
        return dp[index] = max(take, skip);
    }



long long maximumTotalDamage(vector<int>& power) {
    
      map<int, int>mp;
    
        vector<int>v;
        
        for (auto p : power) {
            mp[p]++;
        }
        for (auto it :mp) {
            
            v.push_back(it.first);
        }
        
        vector<ll> dp(v.size(), -1);
      
        return solve(dp, mp,v, 0);
}

};