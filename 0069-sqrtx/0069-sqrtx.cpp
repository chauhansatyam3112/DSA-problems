class Solution {
public:
    int mySqrt(int x) {
        
        
        int  left=0,right=x;
        
        if(x==0)right=1;
        if(x==1)right=2;
        
        while(left<right)
        {
            long long mid=left+(right-left)/2;
            
            if((1LL*mid*mid)>x)
            {
                right=mid;
                
            }else{
                left=mid+1;
            }
        }
        return left-1;
    }
};