class Solution {
public:
    int getSum(int a, int b) {
        if((a==-1 && b==1) || (a==1 && b==-1))
        {
            return 0;
        }
         int c; 
      while(b !=0 ) {
        c = (a&b);
        a = a ^ b;
        b = (unsigned int)(c)<<1;
      }
      return a;
        
    }
};