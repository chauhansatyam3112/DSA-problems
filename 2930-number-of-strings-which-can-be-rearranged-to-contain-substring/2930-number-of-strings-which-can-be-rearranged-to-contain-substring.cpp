class Solution {
public:
   int mod = 1e9 + 7;
    
   long  long pow(long a, long b, long mod ) {
        
        long long  ans = 1, p = a % mod;
        
        while (b) {
            if (b& 1) {
                ans = (ans * p*1LL) % mod;
            }
            p = (p * p) % mod;
            b >>= 1;
        }
        return ans;
    }
    int stringCount(int n) {
 
        return (( + pow(26, n, mod)- (n + 75) * pow(25, n - 1, mod) + (2 * n + 72) * pow(24, n - 1, mod) - (n + 23) * pow(23, n - 1, mod) ) % mod + mod) % mod;
    }
};