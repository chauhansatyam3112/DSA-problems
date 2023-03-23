class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
      long dvd = abs(dividend), dvs =labs(divisor), ans = 0;
//         int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
//         while (dvd >= dvs) {
//             long temp = dvs, m = 1;
//             while (temp << 1 <= dvd) {
//                 temp <<= 1;
//                 m <<= 1;
//             }
//             dvd -= temp;
//             ans += m;
//         }
//         return sign * ans;
        long res=0;
        while(dvs<=dvd)
        {
             long cnt=1;long sum=dvs;
            while(sum<=dvd-sum)
            {
                sum+=sum;
                cnt+=cnt;
            }
            dvd-=sum;
            res+=cnt;
        }
        if(dividend<0 && divisor>0 || dividend>0 &&divisor<0) return -res;
        return res;
        
        
    }
};