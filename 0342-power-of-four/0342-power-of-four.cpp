class Solution {
public:
    bool isPowerOfFour(int n) {
        
         
        if(n<0)return false;
        if(n==1)
        {
            return true;
        }
         if(n%4!=0)return false;
        
        
        if(n==0)return false;
        
        // if(n<0) n=(1LL*-1*n);
        
       
        
       return isPowerOfFour(n/4);
        
        
        return 0;
    }
};