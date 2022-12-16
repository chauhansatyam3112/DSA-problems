class Solution {
public:
    int countGoodNumbers(long long n) {
        long result =n%2==0? 1:5;
int MOD=1e9+7;
long x=20;

    for(long i=n/2;i>0;i=i/2)
    {
        if(i%2!=0) result=result*x%MOD;
        x=x*x%MOD;
    }
    
    return result;
    }
};